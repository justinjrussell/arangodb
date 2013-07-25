////////////////////////////////////////////////////////////////////////////////
/// @brief import request handler
///
/// @file
///
/// DISCLAIMER
///
/// Copyright 2004-2013 triAGENS GmbH, Cologne, Germany
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///     http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/// Copyright holder is triAGENS GmbH, Cologne, Germany
///
/// @author Dr. Frank Celler
/// @author Copyright 2010-2013, triAGENS GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

#ifndef TRIAGENS_REST_HANDLER_REST_IMPORT_HANDLER_H
#define TRIAGENS_REST_HANDLER_REST_IMPORT_HANDLER_H 1

#include "RestHandler/RestVocbaseBaseHandler.h"

// -----------------------------------------------------------------------------
// --SECTION--                                                   private defines
// -----------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup ArangoDB
/// @{
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
/// @brief import transaction shortcut
////////////////////////////////////////////////////////////////////////////////

#define ImportTransactionType SingleCollectionWriteTransaction<StandaloneTransaction<RestTransactionContext>, UINT64_MAX>

////////////////////////////////////////////////////////////////////////////////
/// @}
////////////////////////////////////////////////////////////////////////////////

// -----------------------------------------------------------------------------
// --SECTION--                                                 RestImportHandler
// -----------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup ArangoDB
/// @{
////////////////////////////////////////////////////////////////////////////////

namespace triagens {
  namespace arango {

////////////////////////////////////////////////////////////////////////////////
/// @brief import request handler
////////////////////////////////////////////////////////////////////////////////

    class RestImportHandler : public RestVocbaseBaseHandler {

////////////////////////////////////////////////////////////////////////////////
/// @}
////////////////////////////////////////////////////////////////////////////////

// -----------------------------------------------------------------------------
// --SECTION--                                      constructors and destructors
// -----------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup ArangoDB
/// @{
////////////////////////////////////////////////////////////////////////////////

      public:

////////////////////////////////////////////////////////////////////////////////
/// @brief constructor
////////////////////////////////////////////////////////////////////////////////

        RestImportHandler (rest::HttpRequest* request, struct TRI_vocbase_s* vocbase);

////////////////////////////////////////////////////////////////////////////////
/// @}
////////////////////////////////////////////////////////////////////////////////

// -----------------------------------------------------------------------------
// --SECTION--                                                   Handler methods
// -----------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup ArangoDB
/// @{
////////////////////////////////////////////////////////////////////////////////

      public:

////////////////////////////////////////////////////////////////////////////////
/// {@inheritDoc}
////////////////////////////////////////////////////////////////////////////////

        bool isDirect ();

////////////////////////////////////////////////////////////////////////////////
/// {@inheritDoc}
////////////////////////////////////////////////////////////////////////////////

        string const& queue () const;

////////////////////////////////////////////////////////////////////////////////
/// {@inheritDoc}
////////////////////////////////////////////////////////////////////////////////

        status_e execute ();

////////////////////////////////////////////////////////////////////////////////
/// @}
////////////////////////////////////////////////////////////////////////////////

// -----------------------------------------------------------------------------
// --SECTION--                                                 protected methods
// -----------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup ArangoDB
/// @{
////////////////////////////////////////////////////////////////////////////////

    protected:

////////////////////////////////////////////////////////////////////////////////
/// @brief log an error document
////////////////////////////////////////////////////////////////////////////////

      void logDocument (TRI_json_t const*) const;

////////////////////////////////////////////////////////////////////////////////
/// @brief process a single JSON document
////////////////////////////////////////////////////////////////////////////////

      bool handleSingleDocument (ImportTransactionType&,
                                 TRI_json_t const*,
                                 const bool,
                                 const bool,
                                 const size_t);

////////////////////////////////////////////////////////////////////////////////
/// @brief creates documents by JSON objects
/// each line of the input stream contains an individual JSON object
////////////////////////////////////////////////////////////////////////////////

      bool createFromJson (const string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief creates documents by JSON objects
/// the input stream is one big JSON array containing all documents
////////////////////////////////////////////////////////////////////////////////

      bool createByDocumentsList ();

////////////////////////////////////////////////////////////////////////////////
/// @brief creates a documents from key/value lists
////////////////////////////////////////////////////////////////////////////////

      bool createFromKeyValueList ();

////////////////////////////////////////////////////////////////////////////////
/// @brief creates the result
////////////////////////////////////////////////////////////////////////////////

      void generateDocumentsCreated (size_t, size_t, size_t);

////////////////////////////////////////////////////////////////////////////////
/// @brief parses a string
////////////////////////////////////////////////////////////////////////////////

      TRI_json_t* parseJsonLine (const string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief builds a TRI_json_t object from a key and value list
////////////////////////////////////////////////////////////////////////////////

      TRI_json_t* createJsonObject (const TRI_json_t*,
                                    const TRI_json_t*,
                                    const string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief checks the keys, returns true if all values in the list are strings.
////////////////////////////////////////////////////////////////////////////////

      bool checkKeys (TRI_json_t*);

    };
  }
}

////////////////////////////////////////////////////////////////////////////////
/// @}
////////////////////////////////////////////////////////////////////////////////

#endif

// Local Variables:
// mode: outline-minor
// outline-regexp: "/// @brief\\|/// {@inheritDoc}\\|/// @addtogroup\\|/// @page\\|// --SECTION--\\|/// @\\}"
// End:
