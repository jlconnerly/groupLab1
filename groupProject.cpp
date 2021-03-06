//3 teams w/ 3 players
//raction time score 0 to 100
//responsiveness score 0 to 100
// awareness score 0 to 100
//9 lines in each file
//file reads name / reaction score / responsiveness score / reactiontime / teamcolor
// 

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


int main() {

	//+-+-+-+-+-+-this block asks user if they want to pull info from different file Part of Objective 6 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	//+-+-+-+-+-+- Our working file in our code is database.txt.  Enter database.txt when promted +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	string fileName;
	char userFileChoice;
	cout << endl;
	cout << "Do you want to add your own scenario file for scenario 1?" << endl;
	cout << "(Press 'Y' to add own files. press 'N' to use default files.)" << endl;
	cin >> userFileChoice;

	if (userFileChoice == 'Y' || userFileChoice == 'y') {
		cout << "Enter in file name you want to reference for Scenario 1. example = scenario1.txt or database.txt" << endl;
		cin >> fileName;
	}
	else if (userFileChoice == 'N' || userFileChoice == 'n') {
		fileName = "database.txt";
	}


	//cout << "Enter in file name you want to reference for Scenario 1. example = fileName.txt or database.txt" << endl;

	ifstream officerData;
	officerData.open(string(fileName));


	string officerName1, officerName2, officerName3, officerName4, officerName5, officerName6, officerName7, officerName8, officerName9;
	int reactionScore1, reactionScore2, reactionScore3, reactionScore4, reactionScore5, reactionScore6, reactionScore7, reactionScore8, reactionScore9;
	int responseScore1, responseScore2, responseScore3, responseScore4, responseScore5, responseScore6, responseScore7, responseScore8, responseScore9;
	float reactTime1, reactTime2, reactTime3, reactTime4, reactTime5, reactTime6, reactTime7, reactTime8, reactTime9;
	string teamColor1, teamColor2, teamColor3, teamColor4, teamColor5, teamColor6, teamColor7, teamColor8, teamColor9;
	string scenario1, scenario2;
	int teamColor = 0;
	int numberOfOfficers;

	getline(officerData, scenario1);



	officerData >> officerName1 >> reactionScore1 >> responseScore1 >> reactTime1 >> teamColor1;
	officerData >> officerName2 >> reactionScore2 >> responseScore2 >> reactTime2 >> teamColor2;
	officerData >> officerName3 >> reactionScore3 >> responseScore3 >> reactTime3 >> teamColor3;
	officerData >> officerName4 >> reactionScore4 >> responseScore4 >> reactTime4 >> teamColor4;
	officerData >> officerName5 >> reactionScore5 >> responseScore5 >> reactTime5 >> teamColor5;
	officerData >> officerName6 >> reactionScore6 >> responseScore6 >> reactTime6 >> teamColor6;
	officerData >> officerName7 >> reactionScore7 >> responseScore7 >> reactTime7 >> teamColor7;
	officerData >> officerName8 >> reactionScore8 >> responseScore8 >> reactTime8 >> teamColor8;
	officerData >> officerName9 >> reactionScore9 >> responseScore9 >> reactTime9 >> teamColor9;

	string officerNameArray[] = { officerName1, officerName2, officerName3, officerName4, officerName5, officerName6, officerName7, officerName8, officerName9 };
	string teamColorArray[] = { teamColor1, teamColor2, teamColor3, teamColor4, teamColor5, teamColor6, teamColor7, teamColor8, teamColor9 };
	int reactionScoreArray[] = { reactionScore1, reactionScore2, reactionScore3, reactionScore4, reactionScore5, reactionScore6, reactionScore7, reactionScore8, reactionScore9 };
	int responseScoreArray[] = { responseScore1, responseScore2, responseScore3, responseScore4, responseScore5, responseScore6, responseScore7, responseScore8, responseScore9 };
	float reactTimeArray[] = { reactTime1, reactTime2, reactTime3, reactTime4, reactTime5, reactTime6, reactTime7, reactTime8, reactTime9 };



	string fileName2;
	char userFileChoice2;
	cout << endl;
	cout << "Do you want to add your own scenario file for scenario2?" << endl;
	cout << "(Press 'Y' to add own files. press 'N' to use default files.)" << endl;
	cin >> userFileChoice2;

	if (userFileChoice2 == 'Y' || userFileChoice2 == 'y') {
		cout << "Enter in file name you want to reference for Scenario 2. example = scenario2.txt or database.txt" << endl;
		cin >> fileName2;
	}
	else if (userFileChoice2 == 'N' || userFileChoice2 == 'n') {
		fileName2 = "database2.txt";
	}


	ifstream officerData_2;
	officerData_2.open(string(fileName2));

	getline(officerData_2, scenario2);
	if (scenario2.empty())
		getline(officerData_2, scenario2);

	cout << "Test" << scenario2 << endl;
	string officerName1_2, officerName2_2, officerName3_2, officerName4_2, officerName5_2, officerName6_2, officerName7_2, officerName8_2, officerName9_2;
	int reactionScore1_2, reactionScore2_2, reactionScore3_2, reactionScore4_2, reactionScore5_2, reactionScore6_2, reactionScore7_2, reactionScore8_2, reactionScore9_2;
	int responseScore1_2, responseScore2_2, responseScore3_2, responseScore4_2, responseScore5_2, responseScore6_2, responseScore7_2, responseScore8_2, responseScore9_2;
	float reactTime1_2, reactTime2_2, reactTime3_2, reactTime4_2, reactTime5_2, reactTime6_2, reactTime7_2, reactTime8_2, reactTime9_2;
	string teamColor1_2, teamColor2_2, teamColor3_2, teamColor4_2, teamColor5_2, teamColor6_2, teamColor7_2, teamColor8_2, teamColor9_2;

	officerData_2 >> officerName1_2 >> reactionScore1_2 >> responseScore1_2 >> reactTime1_2 >> teamColor1_2;
	officerData_2 >> officerName2_2 >> reactionScore2_2 >> responseScore2_2 >> reactTime2_2 >> teamColor2_2;
	officerData_2 >> officerName3_2 >> reactionScore3_2 >> responseScore3_2 >> reactTime3_2 >> teamColor3_2;
	officerData_2 >> officerName4_2 >> reactionScore4_2 >> responseScore4_2 >> reactTime4_2 >> teamColor4_2;
	officerData_2 >> officerName5_2 >> reactionScore5_2 >> responseScore5_2 >> reactTime5_2 >> teamColor5_2;
	officerData_2 >> officerName6_2 >> reactionScore6_2 >> responseScore6_2 >> reactTime6_2 >> teamColor6_2;
	officerData_2 >> officerName7_2 >> reactionScore7_2 >> responseScore7_2 >> reactTime7_2 >> teamColor7_2;
	officerData_2 >> officerName8_2 >> reactionScore8_2 >> responseScore8_2 >> reactTime8_2 >> teamColor8_2;
	officerData_2 >> officerName9_2 >> reactionScore9_2 >> responseScore9_2 >> reactTime9_2 >> teamColor9_2;

	string officerNameArray_2[] = { officerName1_2, officerName2_2, officerName3_2, officerName4_2, officerName5_2, officerName6_2, officerName7_2, officerName8_2, officerName9_2 };
	string teamColorArray_2[] = { teamColor1_2, teamColor2_2, teamColor3_2, teamColor4_2, teamColor5_2, teamColor6_2, teamColor7_2, teamColor8_2, teamColor9_2 };
	int reactionScoreArray_2[] = { reactionScore1_2, reactionScore2_2, reactionScore3_2, reactionScore4_2, reactionScore5_2, reactionScore6_2, reactionScore7_2, reactionScore8_2, reactionScore9_2 };
	int responseScoreArray_2[] = { responseScore1_2, responseScore2_2, responseScore3_2, responseScore4_2, responseScore5_2, responseScore6_2, responseScore7_2, responseScore8_2, responseScore9_2 };
	float reactTimeArray_2[] = { reactTime1_2, reactTime2_2, reactTime3_2, reactTime4_2, reactTime5_2, reactTime6_2, reactTime7_2, reactTime8_2, reactTime9_2 };






	//Objective 1:
	//Read in and unjumble the teams to present the information in their 3 teams.Add up and average the scores for each team for whichever scenario is asked for :


	//Objective 2:
	//Compare the two scenarios and evaluate the individual performance for each officer :
	int DifReact1 = reactionScore1_2 - reactionScore1;
	int DifReact2 = reactionScore2_2 - reactionScore2;
	int DifReact3 = reactionScore3_2 - reactionScore3;
	int DifReact4 = reactionScore4_2 - reactionScore4;
	int DifReact5 = reactionScore5_2 - reactionScore5;
	int DifReact6 = reactionScore6_2 - reactionScore6;
	int DifReact7 = reactionScore7_2 - reactionScore7;
	int DifReact8 = reactionScore8_2 - reactionScore8;
	int DifReact9 = reactionScore9_2 - reactionScore9;
	int DifResp1 = responseScore1_2 - responseScore1;
	int DifResp2 = responseScore2_2 - responseScore2;
	int DifResp3 = responseScore3_2 - responseScore3;
	int DifResp4 = responseScore4_2 - responseScore4;
	int DifResp5 = responseScore5_2 - responseScore5;
	int DifResp6 = responseScore6_2 - responseScore6;
	int DifResp7 = responseScore7_2 - responseScore7;
	int DifResp8 = responseScore8_2 - responseScore8;
	int DifResp9 = responseScore9_2 - responseScore9;
	float DifTime1 = reactTime1_2 - reactTime1;
	float DifTime2 = reactTime2_2 - reactTime2;
	float DifTime3 = reactTime3_2 - reactTime3;
	float DifTime4 = reactTime4_2 - reactTime4;
	float DifTime5 = reactTime5_2 - reactTime5;
	float DifTime6 = reactTime6_2 - reactTime6;
	float DifTime7 = reactTime7_2 - reactTime7;
	float DifTime8 = reactTime8_2 - reactTime8;
	float DifTime9 = reactTime9_2 - reactTime9;

	cout << "       Scenerio 1        Scenerio 2          Difference" << endl;
	cout << officerName1 << "  " << reactionScore1 << " " << responseScore1 << " " << reactTime1 << "        " << reactionScore1_2 << " " << responseScore1_2 << " " << reactTime1_2 <<
		"          " << DifReact1 << " " << DifResp1 << " " << DifTime1 << endl;
	cout << officerName2 << "  " << reactionScore2 << " " << responseScore2 << " " << reactTime2 << "        " << reactionScore2_2 << " " << responseScore2_2 << " " << reactTime2_2 <<
		"          " << DifReact2 << " " << DifResp2 << " " << DifTime2 << endl;
	cout << officerName3 << "  " << reactionScore3 << " " << responseScore3 << " " << reactTime3 << "        " << reactionScore3_2 << " " << responseScore3_2 << " " << reactTime3_2 <<
		"          " << DifReact3 << " " << DifResp3 << " " << DifTime3 << endl;
	cout << officerName4 << "  " << reactionScore4 << " " << responseScore4 << " " << reactTime4 << "        " << reactionScore4_2 << " " << responseScore4_2 << " " << reactTime4_2 <<
		"          " << DifReact4 << " " << DifResp4 << " " << DifTime4 << endl;
	cout << officerName5 << "  " << reactionScore5 << " " << responseScore5 << " " << reactTime5 << "        " << reactionScore5_2 << " " << responseScore5_2 << " " << reactTime5_2 <<
		"          " << DifReact5 << " " << DifResp5 << " " << DifTime5 << endl;
	cout << officerName6 << "  " << reactionScore6 << " " << responseScore6 << " " << reactTime6 << "        " << reactionScore6_2 << " " << responseScore6_2 << " " << reactTime6_2 <<
		"          " << DifReact6 << " " << DifResp6 << " " << DifTime6 << endl;
	cout << officerName7 << "  " << reactionScore7 << " " << responseScore7 << " " << reactTime7 << "        " << reactionScore7_2 << " " << responseScore7_2 << " " << reactTime7_2 <<
		"          " << DifReact7 << " " << DifResp7 << " " << DifTime7 << endl;
	cout << officerName8 << "  " << reactionScore8 << " " << responseScore8 << " " << reactTime8 << "        " << reactionScore8_2 << " " << responseScore8_2 << " " << reactTime8_2 <<
		"          " << DifReact8 << " " << DifResp8 << " " << DifTime8 << endl;
	cout << officerName9 << "  " << reactionScore9 << " " << responseScore9 << " " << reactTime9 << "        " << reactionScore9_2 << " " << responseScore9_2 << " " << reactTime9_2 <<
		"          " << DifReact9 << " " << DifResp9 << " " << DifTime9 << endl;
	cout << endl;
	//Objective 3:
	//Speed test. We want to know what the overall team times were(average of the individual times for each team).
	float redReactTimeTotal = 0.00;
	float blueReactTimeTotal = 0.00;
	float yellowReactTimeTotal = 0.00;
	float redReactTimeTotal_2 = 0.00;
	float blueReactTimeTotal_2 = 0.00;
	float yellowReactTimeTotal_2 = 0.00;
	int x = 0;


	cout << "Objective 3: " << endl;
	cout << endl;

	while (x != 9) {

		if (teamColorArray[x] == "Red") {
			redReactTimeTotal += reactTimeArray[x];
		}
		else if (teamColorArray[x] == "Blue") {
			blueReactTimeTotal += reactTimeArray[x];
		}
		else if (teamColorArray[x] == "Yellow") {
			yellowReactTimeTotal += reactTimeArray[x];
		}

		if (teamColorArray_2[x] == "Red") {
			redReactTimeTotal_2 += reactTimeArray_2[x];
		}
		else if (teamColorArray_2[x] == "Blue") {
			blueReactTimeTotal_2 += reactTimeArray_2[x];
		}
		else if (teamColorArray_2[x] == "Yellow") {
			yellowReactTimeTotal_2 += reactTimeArray_2[x];
		}

		x++;
	}

	cout << "       " << right << scenario1 << "      " << setw(12) << scenario2 << endl;
	cout << "Red    " << fixed << setprecision(2) << redReactTimeTotal / 3.00 << setw(15) << redReactTimeTotal_2 / 3.00 << endl;
	cout << "Blue   " << blueReactTimeTotal / 3.00 << setw(15) << blueReactTimeTotal_2 / 3.00 << endl;
	cout << "Yellow " << yellowReactTimeTotal / 3.00 << setw(15) << yellowReactTimeTotal_2 / 3.00 << endl;

	//Objective 4:
	//Output the most valuable officer of each team.The most valuable officer is calculated by adding the reaction and response times up and subtracted 1 points for every 5 seconds of time they took.Output the MVP score with the name of the officer

	//Objective 5:
	//Output the main results by outputting the winning team in each scenario as well as the most reactive, most responsive, and 
	//fastest officers.The winning team is simply the response and reaction added together(without time being a factor) for each officer in the team :
	cout << "Objective 5" << endl;


	x = 0;
	int redReactionScoreTotal = 0;
	int blueReactionScoreTotal = 0;
	int yellowReactionScoreTotal = 0;
	int redReactionScoreTotal_2 = 0;
	int blueReactionScoreTotal_2 = 0;
	int yellowReactionScoreTotal_2 = 0;
	int redResponseScoreTotal = 0;
	int blueResponseScoreTotal = 0;
	int yellowResponseScoreTotal = 0;
	int redResponseScoreTotal_2 = 0;
	int blueResponseScoreTotal_2 = 0;
	int yellowResponseScoreTotal_2 = 0;

	while (x != 9) {

		if (teamColorArray[x] == "Red") {
			redReactionScoreTotal += reactionScoreArray[x];
			redResponseScoreTotal += responseScoreArray[x];

		}
		else if (teamColorArray[x] == "Blue") {
			blueReactionScoreTotal += reactionScoreArray[x];
			blueResponseScoreTotal += responseScoreArray[x];
		}
		else if (teamColorArray[x] == "Yellow") {
			yellowReactionScoreTotal += reactionScoreArray[x];
			yellowResponseScoreTotal += responseScoreArray[x];
		}

		if (teamColorArray_2[x] == "Red") {
			redReactionScoreTotal_2 += reactionScoreArray_2[x];
			redResponseScoreTotal_2 += responseScoreArray_2[x];
		}
		else if (teamColorArray_2[x] == "Blue") {
			blueReactionScoreTotal_2 += reactionScoreArray_2[x];
			blueResponseScoreTotal_2 += responseScoreArray_2[x];
		}
		else if (teamColorArray_2[x] == "Yellow") {
			yellowReactionScoreTotal_2 += reactionScoreArray_2[x];
			yellowResponseScoreTotal_2 += responseScoreArray_2[x];
		}

		x++;
	}

	float redTeamAverage = (redReactionScoreTotal / 3) + (redResponseScoreTotal / 3) / 2;
	float blueTeamAverage = (blueReactionScoreTotal / 3) + (blueResponseScoreTotal / 3) / 2;
	float yellowTeamAverage = (yellowReactionScoreTotal / 3) + (yellowResponseScoreTotal / 3) / 2;


	if (blueTeamAverage > redTeamAverage && blueTeamAverage > yellowTeamAverage)
		cout << "blue Team     " << blueTeamAverage << endl;

	if (redTeamAverage > blueTeamAverage && redTeamAverage > yellowTeamAverage)
		cout << "Red Team     " << redTeamAverage << endl;

	if (yellowTeamAverage > redTeamAverage && yellowTeamAverage > blueTeamAverage)
		cout << "Yellow Team     " << yellowTeamAverage << endl;

	if (blueTeamAverage > redTeamAverage && blueTeamAverage < yellowTeamAverage)
		cout << "Blue Team     " << blueTeamAverage << endl;

	if (redTeamAverage > blueTeamAverage && redTeamAverage < yellowTeamAverage)
		cout << "Red Team     " << redTeamAverage << endl;

	if (yellowTeamAverage > redTeamAverage && yellowTeamAverage < blueTeamAverage)
		cout << "Yellow Team     " << yellowTeamAverage << endl;

	if (blueTeamAverage < redTeamAverage && blueTeamAverage < yellowTeamAverage)
		cout << "blue Team     " << blueTeamAverage << endl;

	if (redTeamAverage < blueTeamAverage && redTeamAverage < yellowTeamAverage)
		cout << "Red Team     " << redTeamAverage << endl;

	if (yellowTeamAverage < redTeamAverage && yellowTeamAverage < blueTeamAverage)
		cout << "Yellow Team     " << yellowTeamAverage << endl;

	cout << "Top 3 Reaction Scores: " << endl;

	double firstReact = reactionScoreArray[0]; 

	double secondReact =reactionScoreArray[1]; 

	double thirdReact; 

	for (int i = 1; i < 5; i++) {
		if (reactionScoreArray[i] > firstReact) {
			firstReact = reactionScoreArray[i];
		}
	}; 
	cout << firstReact << endl;

	cout << "Top 3 Response Scores: " << endl;

	double firstResponse = responseScoreArray[0];

	double secondResponse = responseScoreArray[1];

	double thirdResponse;

	for (int i = 1; i < 5; i++) {
		if (responseScoreArray[i] > firstResponse) {
			firstResponse = responseScoreArray[i];
		}
	};
	cout << firstResponse << endl;

	cout << "Top 3 React Times: " << endl;

	double firstTime = reactTimeArray[0];

	double secondTime = reactTimeArray[1];

	double thirdTime;

	for (int i = 1; i < 5; i++) {
		if (reactTimeArray[i] > firstTime) {
			firstTime = reactTimeArray[i];
		}
	};
	cout << firstTime << endl;

	cout << "Scenerio 2" << "     Average" << endl;

	float redTeamAverage_2 = (redReactionScoreTotal_2 / 3) + (redResponseScoreTotal_2 / 3) / 2;
	float blueTeamAverage_2 = (blueReactionScoreTotal_2 / 3) + (blueResponseScoreTotal_2 / 3) / 2;
	float yellowTeamAverage_2 = (yellowReactionScoreTotal_2 / 3) + (yellowResponseScoreTotal_2 / 3) / 2;


	if (blueTeamAverage_2 > redTeamAverage_2 && blueTeamAverage_2 > yellowTeamAverage_2)
		cout << "blue Team     " << blueTeamAverage_2 << endl;

	if (redTeamAverage_2 > blueTeamAverage_2 && redTeamAverage_2 > yellowTeamAverage_2)
		cout << "Red Team     " << redTeamAverage_2 << endl;

	if (yellowTeamAverage_2 > redTeamAverage_2 && yellowTeamAverage_2 > blueTeamAverage_2)
		cout << "Yellow Team     " << yellowTeamAverage_2 << endl;

	if (blueTeamAverage_2 > redTeamAverage_2 && blueTeamAverage_2 < yellowTeamAverage_2)
		cout << "Blue Team     " << blueTeamAverage_2 << endl;

	if (redTeamAverage_2 > blueTeamAverage_2 && redTeamAverage_2 < yellowTeamAverage_2)
		cout << "Red Team     " << redTeamAverage_2 << endl;

	if (yellowTeamAverage_2 > redTeamAverage_2 && yellowTeamAverage_2 < blueTeamAverage_2)
		cout << "Yellow Team     " << yellowTeamAverage_2 << endl;

	if (blueTeamAverage_2 < redTeamAverage_2 && blueTeamAverage_2 < yellowTeamAverage_2)
		cout << "blue Team     " << blueTeamAverage_2 << endl;

	if (redTeamAverage_2 < blueTeamAverage_2 && redTeamAverage_2 < yellowTeamAverage_2)
		cout << "Red Team     " << redTeamAverage_2 << endl;

	if (yellowTeamAverage_2 < redTeamAverage_2 && yellowTeamAverage_2 < blueTeamAverage_2)
		cout << "Yellow Team     " << yellowTeamAverage_2 << endl;

	cout << "Top 3 Reaction Scores: " << endl;

	double firstReact_2 = reactionScoreArray_2[0];

	double secondReact_2 = reactionScoreArray_2[1];

	double thirdReact_2;

	for (int i = 1; i < 7; i++) {
		if (reactionScoreArray_2[i] > firstReact_2) {
			firstReact_2 = reactionScoreArray_2[i];
		}
	};
	cout << firstReact_2 << endl;

	cout << "Top 3 Response Scores: " << endl;

	double firstResponse_2 = responseScoreArray_2[0];

	double secondResponse_2 = responseScoreArray_2[1];

	double thirdResponse_2;

	for (int i = 1; i < 5; i++) {
		if (responseScoreArray_2[i] > firstResponse_2) {
			firstResponse_2 = responseScoreArray_2[i];
		}
	};
	cout << firstResponse_2 << endl;

	cout << "Top 3 React Times: " << endl;

	double firstTime_2 = reactTimeArray_2[0];

	double secondTime_2 = reactTimeArray_2[1];

	double thirdTime_2;

	for (int i = 1; i < 5; i++) {
		if (reactTimeArray_2[i] > firstTime_2) {
			firstTime_2 = reactTimeArray_2[i];
		}
	};
	cout << firstTime_2 << endl;









	//Bonus Objective 6:
	//Allow the input files to be specified by the user and changed from within the program.Additionally, adding a menu in the program to specify which output or function they want.

		//set inpt files    //reaction score, response score, reaction time
		//Output results according to team
		//Individual Performance Summery
		//Output Speed Results
		//Most Valuable Officer
		//Overall Summery

	cout << "____________________________________________________" << endl;
	cout << endl;



	//////////////////////////  -START-   Objective six outputting results by team   -START-   ///////////////////////////////////////////


	cout << "              (Averages)" << setw(18) << scenario1 << setw(15) << scenario2 << endl;
	cout << "   Red Team: Reaction Score" << setfill('.') << setw(11) << redReactionScoreTotal / 3 << setw(15) << redReactionScoreTotal_2 / 3 << endl;
	cout << "             Response Score" << setw(11) << redResponseScoreTotal / 3 << setw(15) << redResponseScoreTotal_2 / 3 << endl;
	cout << "             Reaction Time" << setw(14) << redReactTimeTotal / 3 << setw(15) << redReactTimeTotal_2 / 3 << endl;
	cout << "  Blue Team: Reaction Score" << setw(11) << blueReactionScoreTotal / 3 << setw(15) << blueReactionScoreTotal_2 / 3 << endl;
	cout << "             Response Score" << setw(11) << blueResponseScoreTotal / 3 << setw(15) << blueResponseScoreTotal_2 / 3 << endl;
	cout << "             Reaction Time" << setw(14) << blueReactTimeTotal / 3 << setw(15) << blueReactTimeTotal_2 / 3 << endl;
	cout << "Yellow Team: Reaction Score" << setw(11) << yellowReactionScoreTotal / 3 << setw(15) << yellowReactionScoreTotal_2 / 3 << endl;
	cout << "             Response Score" << setw(11) << yellowResponseScoreTotal / 3 << setw(15) << yellowResponseScoreTotal_2 / 3 << endl;
	cout << "             Reaction Time" << setw(14) << yellowReactTimeTotal / 3 << setw(15) << yellowReactTimeTotal_2 / 3 << endl;
	cout << endl;


	//////////////////////////    -END- Objective six outputting results by team -END-    ///////////////////////////////////////////



	//////////////////////////   -START-  Individual Performance Summery   -START-     ///////////////////////////////////////////
	string officerName;
	string userScenarioRequest;
	cout << "Please enter in the Officers Name." << endl;
	cout << endl;
	cin >> officerName;
	int z = 0;
	int lcv = 1;
	int lcv2 = 1;
	int reactionScore;
	int responseScore;
	float reactionTime;

	do
	{

		if (officerName == officerNameArray[z]) {

			reactionScore = reactionScoreArray[z];
			responseScore = responseScoreArray[z];
			reactionTime = reactTimeArray[z];
			lcv = 0;
			officerName = officerNameArray[z];

		}

		else if (officerName != officerNameArray[z])
		{
			z++;

		}

	} while (lcv);


	int n = 0;

	do {

		if (officerName == officerNameArray_2[n]) {

			reactionScore += reactionScoreArray_2[n];
			responseScore += responseScoreArray_2[n];
			reactionTime += reactTimeArray_2[n];
			cout << endl;
			cout << "Officer " + officerName + ": Reaction Score Average: " << reactionScore / 2 << endl;
			cout << "            " << setw(10) << ": Response Score Average: " << responseScore / 2 << endl;
			cout << "            " << setw(10) << ": Reaction Time Average: " << reactionTime / 2.00 << endl;
			cout << endl;
			lcv2 = 0;
		}

		else
		{
			n++;

		}


	} while (lcv2);


	//////////////////////////     -END-     Individual Performance Summery     -END-    ///////////////////////////////////////////




	system("Pause");
	return 0;

}