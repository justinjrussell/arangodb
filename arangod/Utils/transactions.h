////////////////////////////////////////////////////////////////////////////////
/// @brief transctions helper file
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
/// @author Jan Steemann
/// @author Copyright 2011-2013, triAGENS GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

#ifndef TRIAGENS_UTILS_TRANSACTIONS_H
#define TRIAGENS_UTILS_TRANSACTIONS_H 1

#include "Basics/Common.h"
#include "Utils/CollectionNameResolver.h"
#include "Utils/EmbeddableTransaction.h"
#include "Utils/ExplicitTransaction.h"
#include "Utils/RestTransactionContext.h"
#include "Utils/SingleCollectionReadOnlyTransaction.h"
#include "Utils/SingleCollectionWriteTransaction.h"
#include "Utils/StandaloneTransaction.h"
#include "Utils/V8TransactionContext.h"

////////////////////////////////////////////////////////////////////////////////
/// @brief shortcut for read-only transaction class type
////////////////////////////////////////////////////////////////////////////////

#define V8ReadTransaction SingleCollectionReadOnlyTransaction<EmbeddableTransaction<V8TransactionContext> >

#endif

// Local Variables:
// mode: outline-minor
// outline-regexp: "/// @brief\\|/// {@inheritDoc}\\|/// @addtogroup\\|/// @page\\|// --SECTION--\\|/// @\\}"
// End:
