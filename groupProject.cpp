//3 teams w/ 3 players
//raction time score 0 to 100
//responsiveness score 0 to 100
// awareness score 0 to 100
//9 lines in each file
//file reads name / reaction score / responsiveness score / reactiontime
// 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream officerData;
	officerData.open("database.txt");

	string officerName;
	int reactionScore;
	int responScore;
	float reactTime;
	string teamColor;
	string senario;

	getline(officerData, senario);

	cout << senario << endl;


	//Objective 1:
	//Read in and unjumble the teams to present the information in their 3 teams.Add up and average the scores for each team for whichever scenario is asked for :

	//Objective 2:
	//Compare the two scenarios and evaluate the individual performance for each officer :

	//Objective 3:
	//Speed test.We want to know what the overall team times were(average of the individual times for each team).

	//Objective 4:
	//Output the most valuable officer of each team.The most valuable officer is calculated by adding the reaction and response times up and subtracted 1 points for every 5 seconds of time they took.Output the MVP score with the name of the officer

	//Objective 5:
	//Output the main results by outputting the winning team in each scenario as well as the most reactive, most responsive, and fastest officers.The winning team is simply the response and reaction added together(without time being a factor) for each officer in the team :

	//Bonus Objective 6:
	//Allow the input files to be specified by the user and changed from within the program.Additionally, adding a menu in the program to specify which output or function they want.



	system("Pause");
	return 0;

}