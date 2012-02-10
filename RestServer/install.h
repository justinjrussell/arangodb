////////////////////////////////////////////////////////////////////////////////
/// @brief installation guide
///
/// @file
///
/// DISCLAIMER
///
/// Copyright 2004-2012 triagens GmbH, Cologne, Germany
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
/// @author Copyright 2012, triAGENS GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
/// @page CompilingTOC
///
/// <ol>
///  <li>@ref CompilingAIO
///   <ol>
///    <li>@ref CompilingAIOPrerequisites
///    </li>
///    <li>@ref DownloadSourceAIO
///    </li>
///    <li>@ref CompilingAIOConfigure
///    </li>
///    <li>@ref CompilingAIOCompile
///    </li>
///    <li>@ref CompilingAIOTest
///    </li>
///    <li>@ref CompilingAIOInstall
///    </li>
///   </ol>
///  </li>
///  <li>@ref CompilingMaster
///   <ol>
///    <li>@ref CompilingMasterPrerequisites
///    </li>
///    <li>@ref DownloadSourceMaster
///    </li>
///    <li>@ref CompilingMasterSetup
///    </li>
///    <li>@ref CompilingMasterConfigure
///    </li>
///    <li>@ref CompilingMasterCompile
///    </li>
///    <li>@ref CompilingMasterTest
///    </li>
///    <li>@ref CompilingMasterInstall
///    </li>
///   </ol>
///  </li>
/// </ol>
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
/// @page Compiling Compiling the AvocadoDB
///
/// The following sections describe how to compile and build the AvocadoDB from
/// scratch. The AvocadoDB will compile on most Linux and Mac OS X systems. It
/// assumes that you use the GNU C++ compiler to compile the source. The
/// AvocadoDB has been tested with the GNU C++ compiler, but should compile with
/// any Posix compliant compiler. Please let us know, whether you successfully
/// compiled it with another C++ compiler.
///
/// There are two branches:
///
/// - all-in-one: this branch contains the source code of the AvocadoDB, all
///                generated files from the autotools, FLEX, and BISON as well
///                as a version of V8, libev and boost
///
/// - master: this branch contains the development version of the AvocadoDB, use
///           this branch, if you want to make changes to AvocadoDB source
///
/// The master branch requires a complete development environment, while the
/// all-in-one branch allows you to compile the AvocadoDB without installing
/// all the prerequisites.
///
/// <hr>
/// @copydoc CompilingTOC
/// <hr>
///
/// @section CompilingAIO All In One Branch
///////////////////////////////////////////
///
/// @subsection CompilingAIOPrerequisites Basic System Requirements
///////////////////////////////////////////////////////////////////
///
/// Verify that your system contains:
///
/// - the GNU C++ compiler "g++" and standard C++ libraries
/// - the GNU make
///
/// In addition you will need the following libraries:
///
/// - the GNU readline library
/// - the GNU ncurses library in version 5 or 6
///
/// Under Mac OS X you need to install:
///
/// - Xcode
/// - scons
///
/// @subsection DownloadSourceAIO Download the Source
/////////////////////////////////////////////////////
///
/// Download the latest source using GIT:
///
/// @LIT{git clone -b all-in-one git://github.com/triAGENS/AvocadoDB.git}
///
/// Note that you must use the @LIT{-b} option to check out the branch
/// @LIT{all-in-one}.
///
/// @subsection CompilingAIOConfigure Configure
///////////////////////////////////////////////
///
/// Switch into the AvocadoDB directory
///
/// @LIT{cd AvocadoDB}
///
/// In order to configure the build environment execute
///
/// @LIT{./configure}
///
/// to setup the makefiles. This will check for the various system
/// characteristics and installed libraries.
///
/// @subsection CompilingAIOCompile Compile
///////////////////////////////////////////
///
/// Compile the program by executing
///
/// @LIT{make}
///
/// This will compile the AvocadoDB and create a binary of the server in
///
/// @LIT{./avocadodb}
///
/// @subsection CompilingAIOTest Test
/////////////////////////////////////
///
/// Check the binary by starting it using the command line.
///
/// @LIT{./avocado --server.http-port 12345 /tmp/vocbase}
///
/// This will start up the AvocadoDB and listen for HTTP requests on port 12345
/// bound to any address. You should see the startup messages
///
/// @verbinclude startup1
///
/// Use your favorite browser to access the URL
///
/// @LIT{http://localhost:12345/version}
///
/// This should produce a JSON object like
///
/// @LIT{\{"server":"avocado"\,"version":"0.0.8 [exported]"\}}
///
/// as result.
///
/// @subsection CompilingAIOInstall Install
///////////////////////////////////////////
///
/// Install everything by executing
///
/// @LIT{make install}
///
/// You must be root to do this or at least have write permission to the
/// corresponding directories.
///
/// @section CompilingMaster Master Branch
//////////////////////////////////////////
///
/// @subsection CompilingMasterPrerequisites Basic System Requirements
//////////////////////////////////////////////////////////////////////
///
/// Verify that your system contains
///
/// - the GNU C++ compiler "g++" and standard C++ libraries
/// - the GNU autotools (autoconf, automake)
/// - the GNU make
/// - the GNU scanner generator FLEX
/// - the GNU parser generator BISON
///
/// In addition you will need the following libraries
///
/// - libev in version 3 or 4
/// - Google's V8 engine
/// - the GNU readline library
/// - the GNU ncurses library in version 5 or 6
/// - boost header files, at least version 1.33
///
/// Some distributions, for example Centos 5, provide only very out-dated
/// versions of FLEX, BISON, and the V8 engine. In that case you need to compile
/// newer versions of the programs and/or libraries.
///
/// Install or download the prerequisites
///
/// - boost development package (see www.boost.org), at least version 1.33
/// - Google's V8 engine (see code.google.com/p/v8)
/// - libev (see software.schmorp.de/pkg/libev.html) 
///
/// if neccessary.  Most linux systems already supply RPM or DEP for
/// there packages. Please note that you have to install the
/// development packages.
///
/// @subsection DownloadSourceMaster Download the Source
////////////////////////////////////////////////////////
///
/// Download the latest source using GIT:
///
/// @LIT{git clone git://github.com/triAGENS/AvocadoDB.git}
///
/// @subsection CompilingMasterSetup Setup
//////////////////////////////////////////
///
/// Switch into the AvocadoDB directory
///
/// @LIT{cd AvocadoDB}
///
/// The source tarball contains a pre-generated "configure" script. You can
/// regenerate this script by using the GNU auto tools. In order to do so,
/// execute
///
/// @LIT{make setup}
///
/// This will call aclocal, autoheader, automake, and autoconf in the correct
/// order.
///
/// @subsection CompilingMasterConfigure Configure
//////////////////////////////////////////////////
///
/// In order to configure the build environment execute
///
/// @LIT{./configure}
///
/// to setup the makefiles. This will check for the various system
/// characteristics and installed libraries. If the configure scripts fail to
/// find the boost library, check that C++ is installed and working and that the
/// boost-devel package was successfully installed.
///
/// @subsection CompilingMasterCompile Compile
//////////////////////////////////////////////
///
/// Compile the program by executing
///
/// @LIT{make}
///
/// This will compile the AvocadoDB and create a binary of the server in
///
/// @LIT{./avocadodb}
///
/// @subsection CompilingMasterTest Test
////////////////////////////////////////
///
/// Check the binary by starting it using the command line.
///
/// @LIT{./avocado --server.http-port 12345 /tmp/vocbase}
///
/// This will start up the AvocadoDB and listen for HTTP requests on port 12345
/// bound to any address. You should see the startup messages
///
/// @verbinclude startup1
///
/// Use your favorite browser to access the URL
///
/// @LIT{http://localhost:12345/version}
///
/// This should produce a JSON object like
///
/// @LIT{\{"server":"avocado"\,"version":"0.0.8 [exported]"\}}
///
/// as result.
///
/// @subsection CompilingMasterInstall Install
//////////////////////////////////////////////
///
/// Install everything by executing
///
/// @LIT{make install}
///
/// You must be root to do this or at least have write permission to the
/// corresponding directories.
////////////////////////////////////////////////////////////////////////////////

// Local Variables:
// mode: outline-minor
// outline-regexp: "^\\(/// @brief\\|/// {@inheritDoc}\\|/// @addtogroup\\|// --SECTION--\\|/// @\\}\\)"
// End:
