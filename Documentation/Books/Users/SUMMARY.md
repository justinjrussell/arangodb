# Summary
<!-- 1 -->
* [Installing](Installing/README.md)
  * [Linux](Installing/Linux.md)
  * [Mac OS X](Installing/MacOSX.md)
  * [Windows](Installing/Windows.md)
  * [Compiling](Installing/Compiling.md)
<!-- 2 -->
* [First Steps](FirstSteps/README.md)
  * [Getting Familiar](FirstSteps/GettingFamiliar.md)
  * [The ArangoDB Server](FirstSteps/Arangod.md)
  * [The ArangoDB Shell](FirstSteps/README.md)
    * [Shell Output](Arangosh/Output.md)
    * [Configuration](Arangosh/Configuration.md)
    * [Details](FirstSteps/Arangosh.md)
  * [Collections](FirstSteps/CollectionsAndDocuments.md)
<!-- 3 -->
* [ArangoDB Web Interface](WebInterface/README.md)
	* [Some Features](WebInterface/Features.md)
<!-- 4 -->
* [Handling Databases](Databases/README.md)
	* [Working with Databases](Databases/WorkingWith.md)
	* [Notes about Databases](Databases/Notes.md)	
<!-- 5 -->
* [Handling Collections](Collections/README.md)
	* [Collection Methods](Collections/CollectionMethods.md)
	* [Database Methods](Collections/DatabaseMethods.md)
<!-- 6 -->
* [Handling Documents](Documents/README.md)
	* [Address and ETag](Documents/DocumentAddress.md)
	* [Collection Methods](Documents/DocumentMethods.md)
	* [Database Methods](Documents/DatabaseMethods.md)
<!-- 7 -->
* [Handling Edges](Edges/README.md)
<!-- 8 -->
* [Simple Queries](SimpleQueries/README.md)
	* [Queries](SimpleQueries/Queries.md)
	* [Geo Queries](SimpleQueries/GeoQueries.md)
	* [Fulltext Queries](SimpleQueries/FulltextQueries.md)
	* [Pagination](SimpleQueries/Pagination.md)
	* [Sequential Access](SimpleQueries/Access.md)
	* [Modification Queries](SimpleQueries/ModificationQueries.md)
<!-- 9 -->
* [Transactions](Transactions/README.md)
	* [Transaction invocation](Transactions/TransactionInvocation.md)
	* [Passing parameters](Transactions/Passing.md)
	* [Locking and isolation](Transactions/LockingAndIsolation.md)
	* [Durability](Transactions/Durability.md)
	* [Limitations](Transactions/Limitations.md)
<!-- 10 -->
* [AQL](Aql/README.md)
  * [How to invoke AQL](Aql/Invoke.md)
  * [Query Results](Aql/QueryResults.md)
  * [Language Basics](Aql/Basics.md)
  * [Operators](Aql/Operators.md)
  * [High level Operations](Aql/Operations.md)
  * [Advanced Features](Aql/Advanced.md)
<!-- 11 -->
* [Extending AQL](AqlExtending/README.md)
	* [Conventions](AqlExtending/Conventions.md)
	* [Registering Functions](AqlExtending/Functions.md)
<!-- 12 -->
* [AQL](AqlExamples/README.md)
	* [AqlExamples](AqlExamples/Examples.md)
	* [Collection based queries](AqlExamples/CollectionQueries.md)
	* [Projections and filters](AqlExamples/ProjectionsAndFilters.md)
	* [Joins](AqlExamples/Join.md)
	* [Grouping](AqlExamples/Grouping.md)
<!-- 13 -->
* [Graphs](Blueprint-Graphs/README.md)
	* [Graph Constructor](Blueprint-Graphs/GraphConstructor.md)
	* [Vertex Methods](Blueprint-Graphs/VertexMethods.md)
	* [Edge Methods](Blueprint-Graphs/EdgeMethods.md)  
<!-- 15 -->
* [Traversals](Traversals/README.md)
	* [Starting from Scratch](Traversals/StartingFromScratch.md)	
	* [Using Traversal Objects](Traversals/UsingTraversalObjects.md)
	* [Example Data](Traversals/ExampleData.md)
<!-- 17 -->
* [Foxx](Foxx/README.md)
	* [Handling Request](Foxx/HandlingRequest.md)
	* [FoxxController](Foxx/FoxxController.md)
	* [FoxxModel](Foxx/FoxxModel.md)
	* [FoxxRepository](Foxx/FoxxRepository.md)
	* [Developing Applications](Foxx/DevelopingAnApplication.md)
	* [Deploying Applications](Foxx/DeployingAnApplication.md)
<!-- 18 -->
* [Foxx Manager](FoxxManager/README.md)
	* [First Steps](FoxxManager/FirstSteps.md)
	* [Behind the scenes](FoxxManager/BehindTheScenes.md)
	* [Multiple Databases](FoxxManager/MultipleDatabases.md)
	* [Foxx Applications](FoxxManager/ApplicationsAndReplications.md)
	* [Manager Commands](FoxxManager/ManagerCommands.md)
	* [Frequently Used Options](FoxxManager/FrequentlyUsedOptions.md)
<!-- 19 -->
* [ArangoDB's Actions](ArangoActions/README.md)
<!-- 20 -->
* [Replication](Replication/README.md)
  * [Components](Replication/Components.md)
  * [Example Setup](Replication/ExampleSetup.md)
  * [Replication Limitations](Replication/Limitations.md)
  * [Replication Overhead](Replication/Overhead.md)
  * [Replication Events](Replication/Events.md)
<!-- 21 -->
* [Sharding](Sharding/README.md)
	* [How to try it out](Sharding/HowTo.md)
	* [Implementation](Sharding/StatusOfImplementation.md)
	* [Authentication](Sharding/Authentication.md)
	* [Firewall setup](Sharding/FirewallSetup.md)
<!-- 22 -->
* [Configure ArangoDB](ConfigureArango/README.md)
  * [General options](ConfigureArango/GeneralOptions.md)
  * [Arangod options](ConfigureArango/Arangod.md)
  * [Endpoints options](ConfigureArango/Endpoint.md)  
  * [Development options](ConfigureArango/Development.md)
  * [Cluster options](ConfigureArango/Cluster.md)
  * [Logging options](ConfigureArango/Logging.md)
  * [Communication options](ConfigureArango/Communication.md)
  * [Random numbers](ConfigureArango/RandomNumbers.md)
  * [Authentication](ConfigureArango/Authentication.md)
  * [Emergency Console](ConfigureArango/EmergencyConsole.md)
<!-- 23 -->
* [Arangoimp](Arangoimp/README.md)
<!-- 24 -->
* [Arangodump](Arangodump/README.md)
<!-- 25 -->
* [Arangorestore](Arangorestore/README.md)	
<!-- 26 -->
* [HTTP API](HttpApi/README.md)
  * [Databases](HttpDatabase/README.md)
    * [To-Endpoint](HttpDatabase/DatabaseEndpoint.md)
    * [Management](HttpDatabase/DatabaseManagement.md)
    * [Managing (http)](HttpDatabase/ManagingDatabasesUsingHttp.md)
    * [Note on Databases](HttpDatabase/NotesOnDatabases.md)			
  * [Documents](HttpDocuments/README.md)
    * [Address and ETag](HttpDocuments/AddressAndEtag.md)
    * [Working with](HttpDocuments/WorkingWithDocuments.md)
  * [Edges](HttpEdges/README.md)
    * [Address and ETag](HttpEdges/AddressAndEtag.md)
    * [Working with Edges](HttpEdges/WorkingWithEdges.md)
  * [AQL Query Cursors](HttpAqlQueryCursor/README.md)
    * [Query Results](HttpAqlQueryCursor/QueryResults.md)
    * [Accessing Cursors](HttpAqlQueryCursor/AccessingCursors.md)
  * [AQL Queries](HttpAqlQueries/README.md)
  * [AQL User Functions Management](HttpAqlUserFunctions/README.md)
  * [Simple Queries](HttpSimpleQueries/README.md)
  * [Collections](HttpCollections/README.md)
    * [Address](HttpCollections/Address.md)
    * [Creating](HttpCollections/Creating.md)
    * [Getting Information](HttpCollections/Getting.md)
    * [Modifying](HttpCollections/Modifying.md)
  * [Indexes](HttpIndexes/README.md)
  * [Address of an Index](HttpIndexes/Address.md)
  * [Working with Indexes](HttpIndexes/WorkingWith.md)
  * [Index Type](HttpIndexes/SpecializedIndex.md)
  * [Transactions](HttpTransactions/README.md)
  * [Graphs](HttpGraphs/README.md)
    * [Vertex](HttpGraphs/Vertex.md)
    * [Edges](HttpGraphs/Edge.md)
  * [Traversals](HttpTraversal/README.md)
  * [Replication](HttpReplications/README.md)
    * [Replication Dump](HttpReplications/ReplicationDump.md)
    * [Replication Logger](HttpReplications/ReplicationLogger.md)
    * [Replication Applier](HttpReplications/ReplicationApplier.md)
    * [Other Replications](HttpReplications/OtherReplication.md)
  * [Bulk Imports](HttpBulkImports/README.md)
    * [JSON Documents](HttpBulkImports/ImportingSelfContained.md)
    * [Headers and Values](HttpBulkImports/ImportingHeadersAndValues.md)
    * [Edge Collections](HttpBulkImports/ImportingIntoEdges.md)
  * [Batch Requests](HttpBatchRequest/README.md)
  * [Monitoring](HttpAdministrationAndMonitoring/README.md)
  * [User Management](HttpUserManagement/README.md)
  * [Async Result](HttpAsyncResultsManagement/README.md)
    * [Management](HttpAsyncResultsManagement/ManagingAsyncResults.md)
  * [Endpoints](HttpEndpoints/README.md)
  * [Sharding](HttpSharding/README.md)
  * [Miscellaneous functions](HttpMiscellaneousFunctions/README.md)
  * [General Handling](GeneralHttp/README.md)
<!-- 27 -->
* [Javascript Modules](ModuleJavaScript/README.md)
  * [Common JSModules](ModuleJavaScript/JSModules.md)
    * [Path](ModuleJavaScript/ModulesPath.md)
  * ["console"](ModuleConsole/README.md)
  * ["fs"](ModuleFs/README.md)
  * ["graph"](ModuleGraph/README.md)
    * [Graph Constructors](ModuleGraph/GraphConstructor.md)
    * [Vertex Methods](ModuleGraph/VertexMethods.md)
    * [Edge Methods](ModuleGraph/EdgeMethods.md)
  * ["actions"](ModuleActions/README.md)
  * ["planner"](ModulePlanner/README.md)
  * [Using jsUnity](UsingJsUnity/README.md)
<!-- 28 -->
* [Administrating ArangoDB](AdministratingArango/README.md)
<!-- 29 -->
* [Handling Indexes](IndexHandling/README.md)
  * [Cap Constraint](IndexHandling/Cap.md)
  * [Geo Indexes](IndexHandling/Geo.md)
  * [Fulltext Indexes](IndexHandling/Fulltext.md)
  * [Hash Indexes](IndexHandling/Hash.md)
  * [Skip-Lists](IndexHandling/Skiplist.md)
  * [BitArray Indexes](IndexHandling/BitArray.md)
<!-- 30 -->
* [Datafile Debugger](DatafileDebugger/README.md)
<!-- 31 -->
* [Naming Conventions](NamingConventions/README.md)
	* [Database Names](NamingConventions/DatabaseNames.md)
	* [Collection Names](NamingConventions/CollectionNames.md)
	* [Document Keys](NamingConventions/DocumentKeys.md)
	* [Attribute Names](NamingConventions/AttributeNames.md)
<!-- 32 -->
* [Error codes and meanings](ErrorCodes/README.md)