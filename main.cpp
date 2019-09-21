#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

/*
0 - catch
1 - poke
2 - trade
3 - all-in
*/
public enum;


public class Champion {
	int stat [4];
	boolean role;
	Champion (string s) {
		if (s == "Blitzcrank") {
			stat[0] = 5;
			stat[1] = 0;
			stat[2] = 0;
			stat[3] = 0;
			role == false;
		} 
		else if (s == "Jhin") {
			stat[0] = 1;
			stat[1] = 3;
			stat[2] = 1;
			stat[3] = 0;
			role == true;
		}
		else if (s == "Twitch") {
			stat[0] = 0;
			stat[1] = 0;
			stat[2] = 2;
			stat[3] = 3;
			role == true;
		}
	}
	public int getStat(int i) {return stat[i];}
	public bool getRole() {return role;}
}

public int main () {
	string champions[4];
	cout << "input ADC";
	cin >> champions[0];
	cout << "input Supp";
	cin >> champions[1];
	cout << "input enemy ADC";
	cin >> champions[2];
	cout << "input enemy Supp";
	cin >> champions[3];
	
	Champion a1 = new Champion(champions[0]);
	Champion a2 = new Champion(champions[1]);
	Champion e1 = new Champion(champions[2]);
	Champion e2 = new Champion(champions[3]);
	bool allyDoubleSupp = !a1.getRole() && !a2.getRole;
	bool enemyDoubleSupp = !e1.getRole() && !e2.getRole;
	int scores[4];
	if (!allyDoubleSupp && !enemyDoubleSupp) {
		for (int i = 0; i < 4; i++) {
			scores[i] = (a1.getStat(i)+(3*a2.getStat(i))) - (e1.getStat(i)+(3*e2.getStat(i));
		}
	}
	else if (allyDoubleSupp && enemyDoubleSupp){
		for (int i = 0; i < 4; i++) {
			scores[i] = (2*(a1.getStat(i)+a2.getStat(i))) - (2*(e1.getStat(i)+e2.getStat(i)));
		}
	}
	else if (allyDoubleSupp == true && enemyDoubleSupp == false) {
		for (int i = 0; i < 4; i++) {
			scores[i] = (2*(a1.getStat(i)+a2.getStat(i))) -  (e1.getStat(i)+(3*e2.getStat(i));
		}
	}
	else {
		for (int i = 0; i < 4; i++) {
			scores[i] = (2*(a1[i]+a2[i])) - (e1[i]+(3*e2[i]));
		}
	}
	cout << "catch:" << scores[0] << " poke:" << scores[1] << " trade:" << scores[2] << " all-in:" << scores [3] << endl;
	return 0;
}
