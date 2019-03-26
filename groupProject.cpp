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


//string teamColorArray[];
//float reactTimeArray[];
//int x = 0;
//float redReactTimeTotal;
//
//
//
//void teamIdRed() {
//	while (x != 9) {
//		
//		if (teamColorArray[x] == "Red") {
//			redReactTimeTotal += reactTimeArray[x];
//		}
//
//		x++;
//	}
//		
//}

int main() {

	ifstream officerData;
	officerData.open("database.txt");

	string officerName1, officerName2, officerName3, officerName4, officerName5, officerName6, officerName7, officerName8, officerName9;
	int reactionScore1, reactionScore2, reactionScore3, reactionScore4, reactionScore5, reactionScore6, reactionScore7, reactionScore8, reactionScore9;
	int responseScore1, responseScore2, responseScore3, responseScore4, responseScore5, responseScore6, responseScore7, responseScore8, responseScore9;
	float reactTime1, reactTime2, reactTime3, reactTime4, reactTime5, reactTime6, reactTime7, reactTime8, reactTime9;
	string teamColor1, teamColor2, teamColor3, teamColor4, teamColor5, teamColor6, teamColor7, teamColor8, teamColor9;
	string scenario1, scenario2;
	int teamColor = 0;
	int numberOfOfficers;

	getline(officerData, scenario1);

	

	cout << scenario1 << endl;



	officerData >> officerName1 >> reactionScore1 >> responseScore1 >> reactTime1 >> teamColor1;
	officerData >> officerName2 >> reactionScore2 >> responseScore2 >> reactTime2 >> teamColor2;
	officerData >> officerName3 >> reactionScore3 >> responseScore3 >> reactTime3 >> teamColor3;
	officerData >> officerName4 >> reactionScore4 >> responseScore4 >> reactTime4 >> teamColor4;
	officerData >> officerName5 >> reactionScore5 >> responseScore5 >> reactTime5 >> teamColor5;
	officerData >> officerName6 >> reactionScore6 >> responseScore6 >> reactTime6 >> teamColor6;
	officerData >> officerName7 >> reactionScore7 >> responseScore7 >> reactTime7 >> teamColor7;
	officerData >> officerName8 >> reactionScore8 >> responseScore8 >> reactTime8 >> teamColor8;
	officerData >> officerName9 >> reactionScore9 >> responseScore9 >> reactTime9 >> teamColor9;
	
	string officerNameArray[] = {officerName1, officerName2, officerName3, officerName4, officerName5, officerName6, officerName7, officerName8, officerName9};
	string teamColorArray[] = { teamColor1, teamColor2, teamColor3, teamColor4, teamColor5, teamColor6, teamColor7, teamColor8, teamColor9 };
	int reactionScoreArray[] = {reactionScore1, reactionScore2, reactionScore3, reactionScore4, reactionScore5, reactionScore6, reactionScore7, reactionScore8, reactionScore9};
	int responseScoreArray[] = { responseScore1, responseScore2, responseScore3, responseScore4, responseScore5, responseScore6, responseScore7, responseScore8, responseScore9 };
	float reactTimeArray[] = { reactTime1, reactTime2, reactTime3, reactTime4, reactTime5, reactTime6, reactTime7, reactTime8, reactTime9};

	getline(officerData, scenario2);
	if (scenario2.empty())
		getline(officerData, scenario2);

	string officerName1_2, officerName2_2, officerName3_2, officerName4_2, officerName5_2, officerName6_2, officerName7_2, officerName8_2, officerName9_2;
	int reactionScore1_2, reactionScore2_2, reactionScore3_2, reactionScore4_2, reactionScore5_2, reactionScore6_2, reactionScore7_2, reactionScore8_2, reactionScore9_2;
	int responseScore1_2, responseScore2_2, responseScore3_2, responseScore4_2, responseScore5_2, responseScore6_2, responseScore7_2, responseScore8_2, responseScore9_2;
	float reactTime1_2, reactTime2_2, reactTime3_2, reactTime4_2, reactTime5_2, reactTime6_2, reactTime7_2, reactTime8_2, reactTime9_2;
	string teamColor1_2, teamColor2_2, teamColor3_2, teamColor4_2, teamColor5_2, teamColor6_2, teamColor7_2, teamColor8_2, teamColor9_2;
	
	officerData >> officerName1_2 >> reactionScore1_2 >> responseScore1_2 >> reactTime1_2 >> teamColor1_2;
	officerData >> officerName2_2 >> reactionScore2_2 >> responseScore2_2 >> reactTime2_2 >> teamColor2_2;
	officerData >> officerName3_2 >> reactionScore3_2 >> responseScore3_2 >> reactTime3_2 >> teamColor3_2;
	officerData >> officerName4_2 >> reactionScore4_2 >> responseScore4_2 >> reactTime4_2 >> teamColor4_2;
	officerData >> officerName5_2 >> reactionScore5_2 >> responseScore5_2 >> reactTime5_2 >> teamColor5_2;
	officerData >> officerName6_2 >> reactionScore6_2 >> responseScore6_2 >> reactTime6_2 >> teamColor6_2;
	officerData >> officerName7_2 >> reactionScore7_2 >> responseScore7_2 >> reactTime7_2 >> teamColor7_2;
	officerData >> officerName8_2 >> reactionScore8_2 >> responseScore8_2 >> reactTime8_2 >> teamColor8_2;
	officerData >> officerName9_2 >> reactionScore9_2 >> responseScore9_2 >> reactTime9_2 >> teamColor9_2;

	string officerNameArray_2[] = { officerName1_2, officerName2_2, officerName3_2, officerName4_2, officerName5_2, officerName6_2, officerName7_2, officerName8_2, officerName9_2 };
	string teamColorArray_2[] = { teamColor1_2, teamColor2_2, teamColor3_2, teamColor4_2, teamColor5_2, teamColor6_2, teamColor7_2, teamColor8_2, teamColor9_2 };
	int reactionScoreArray_2[] = { reactionScore1_2, reactionScore2_2, reactionScore3_2, reactionScore4_2, reactionScore5_2, reactionScore6_2, reactionScore7_2, reactionScore8_2, reactionScore9_2 };
	int responseScoreArray_2[] = { responseScore1_2, responseScore2_2, responseScore3_2, responseScore4_2, responseScore5_2, responseScore6_2, responseScore7_2, responseScore8_2, responseScore9_2};
	float reactTimeArray_2[] = { reactTime1_2, reactTime2_2, reactTime3_2, reactTime4_2, reactTime5_2, reactTime6_2, reactTime7_2, reactTime8_2, reactTime9_2 };






	//Objective 1:
	//Read in and unjumble the teams to present the information in their 3 teams.Add up and average the scores for each team for whichever scenario is asked for :



	
	//cout << teamColor1 << " " << teamColor2 << " " << teamColor3 << " " << teamColor4 << " " << teamColor5 << " " << teamColor6 << " " << teamColor7 << " " << teamColor8 << " " << teamColor9 << endl;


	//Objective 2:
	//Compare the two scenarios and evaluate the individual performance for each officer :

	//Objective 3:
	//Speed test. We want to know what the overall team times were(average of the individual times for each team).
	float redReactTimeTotal = 0.00;
	float blueReactTimeTotal = 0.00;
	float yellowReactTimeTotal = 0.00;
	float redReactTimeTotal_2 = 0.00;
	float blueReactTimeTotal_2 = 0.00;
	float yellowReactTimeTotal_2 = 0.00;
	int x = 0;


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
	cout << "Red    " << redReactTimeTotal / 3.00 << setw(15) << redReactTimeTotal_2 / 3.00 << endl;
	cout << "Blue   " << blueReactTimeTotal / 3.00 << setw(15) << blueReactTimeTotal_2 / 3.00 << endl;
	cout << "Yellow " << yellowReactTimeTotal / 3.00 << setw(15) << yellowReactTimeTotal_2 / 3.00 << endl;

	//Objective 4:
	//Output the most valuable officer of each team.The most valuable officer is calculated by adding the reaction and response times up and subtracted 1 points for every 5 seconds of time they took.Output the MVP score with the name of the officer

	//Objective 5:
	//Output the main results by outputting the winning team in each scenario as well as the most reactive, most responsive, and fastest officers.The winning team is simply the response and reaction added together(without time being a factor) for each officer in the team :

	//Bonus Objective 6:
	//Allow the input files to be specified by the user and changed from within the program.Additionally, adding a menu in the program to specify which output or function they want.



	system("Pause");
	return 0;

}