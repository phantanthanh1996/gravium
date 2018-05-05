
/*
	CATEGORY MAPPING

	* means the category has an associated class
	
	CGraviumNetwork: GRAVIUM NETWORK (ROOT)
	has:
		vector<CNetworkVariable> vecNetworkVariables;
		vector<CGraviumProject> vecProjects;
		vector<CGovernanceObject> vecProposals;
		vector<CBudgetContract> vecContracts;
		vector<CBudgetUsers> vecUsers;

	CGraviumProject:
	has:
		name
		employees

*/

	// GRAVIUM NETWORK (ROOT)
	// 	-> NETWORK VARIABLE
	// 		-> switch, setting
	// 	-> CATEGORIES
	// 		-> LEVEL
	// 			-> I, II, III, IV, V, VI, VII, VIII, IX, X, XI
	// 		-> VALUEOVERRIDE
	// 			-> NETWORK, OWNER 
	// 		-> PROJECT*
	// 			-> TYPES
	// 				-> SOFTWARE
	// 					-> CORE, NONCORE
	// 				-> HARDWARE
	// 				-> PR
	// 			-> PROJECT REPORT*
	// 				-> UPDATE
	// 			-> PROJECT MILESTONE*
	// 				-> START, ONGOING, COMPLETE, FAILURE
	// 			-> PROPOSAL*
	// 				-> FUNDING, GOVERNANCE, AMEND, GENERIC
	// 			-> CONTRACT*
	// 				-> TYPE
	// 					-> INTERNAL, EXTERNAL
	// 				-> STATUS
	// 					-> OK
	// 	-> GROUPS
	// 		-> GROUP1
	// 			-> USER1 (only users are allowed here in this scope)
	// 			-> USER2
	// 		-> GROUP2 (EVO)
	// 			-> VALUEOVERRIDE (STORE=GRAVIUMDRIVE)
	// 			-> USER1

	// 	-> COMPANIES
	// 		-> COMPANY1
	// 		-> DAO1

