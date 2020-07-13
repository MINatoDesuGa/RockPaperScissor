//Rock paper scissor with Bot opponent :)

#include <iostream>
#include <cstdlib>
using namespace std;

string AI[] = {"Rock", "Paper", "Scissor"};
string p[] = {"Rock", "Paper", "Scissor"};

int check(int player, int ai) {
	int res = 0;
	
	if(player != ai) {
		if(player == 1 && ai != 2) res = 1;
		else res = 0;
		
		if(player == 2 && ai != 3) res = 1;
		else res = 0;

		if(player == 3 && ai != 1) res = 1;
		else res = 0;
	} else res = 2;
	
	return res;
}

void show_result(int player, int ai) {
	cout << "\n<You> -> " << p[player-1] << "\n";
	cout << "<Computer> -> " << AI[ai-1] << "\n";
}

int main() {
	int score = 0;
	bool gameOver = false;

	cout << "------------Welcome!.. I dont know why are u even here in this dumb game---------\n";

	while(!gameOver) {
		cout << "\nChoose one by entering its respective number\n";
		cout << "1. Rock\n2. Paper\n3. Scissor\n";
		cout << "-> ";
		int choice;
		cin >> choice;
			
		int ai_choice = rand() % 3 + 1;

		//cout << ai_choice << endl;
		
		int res = check(choice, ai_choice);

		show_result(choice, ai_choice);

		if(res == 1) {
			score++;
			cout << "You won this round!\n";
		} 
		else if(res != 2) gameOver = true;
		else cout << "------------------Draw!!!-------------\n";
	}
	cout << "----------GAME OVER----------------\n";
	cout << "Your score -> " << score << "\n";
}
