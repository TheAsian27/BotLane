#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

/*
Support:
0 - poke
1 - sustain
2 - all-in

ADC:
0 - poke
1 - short trade
2 - long trade
*

public bool isAllIn(string s) {
	string champs[] = {"Blitzcrank", "Leona", "Nautilus", "Alistar", "Brahm", "Shen", "Pyke"};
	for (string str : champs) {
		if (str == s) {
			return true;
		}
	}
	return false;
}
public bool isPokeSus(string s) {
	string champs[] = {"Yumi", "Nami", "Sona", "Janna", "Bard", "Karma", "Lulu"};
	for (string str : champs) {
		if (str == s) {
			return true;
		}
	}
	return false;
}
}

class Champion {
public:
	int stat [3];
	boolean role;
	Champion (string s) {
		}
		else if (s == "Jhin" || s == "Sivir") {
			stat[0] = 1;
			stat[1] = 4;
			stat[2] = 0;
			role == true;
		}
		else if (s == "Twitch" || s == "Tristana") {
			stat[0] = 0;
			stat[1] = 0;
			stat[2] = 5;
			role == true;
		}
		else if (s == "Jinx") {
			stat[0] = 1;
			stat[1] = 0;
			stat[2] = 4;
			role == true;
		}
		else if (s == "Caitlyn") {
			stat[0] = 3;
			stat[1] = 2;
			stat[2] = 0;
			role == true;
		}
		else if (s == "Xayah") {
			stat[0] = 0;
			stat[1] = 2;
			stat[2] = 3;
			role == true;
		}
		else if (s == "Lucian") {
			stat[0] = 0;
			stat[1] = 5;
			stat[2] = 0;
			role == true;
		}
		else if (s == "Ashe" || s == "Miss Fortune") {
			stat[0] = 5;
			stat[1] = 0;
			stat[2] = 0;
			role == true;
		}
		else if (s == "Kai' Sa") {
			stat[0] = 0;
			stat[1] = 2;
			stat[2] = 3;
			role == true;
		}
		else if (s == "Vayne") {
			stat[0] = 0;
			stat[1] = 2;
			stat[2] = 3;
			role == true;
		}
		else if (s == "Ezreal") {
			stat[0] = 4;
			stat[1] = 1;
			stat[2] = 0;
			role == true;
		}
		else if (s == "Draven" || s == "Yasuo") {
			stat[0] = 0;
			stat[1] = 0;
			stat[2] = 69;
			role == true;
		}
		else if (s == "Thresh") {
			stat[0] = 0;
			stat[1] = 0;
			stat[2] = 5;
			role == false;
		}

		else if (isAllIn(s)) {
			stat[0] = 0;
			stat[1] = 0;
			stat[2] = 5;
			role == false;
		}
		else if (isPokeSus(s)) {
			stat[0] = 3;
			stat[1] = 2;
			stat[2] = 0;
			role == false;
		}
		else if ((s == "Xerath" || s == "Vel' Koz") || (s == "Brand" || s == "Zyra")) {
			stat[0] = 5;
			stat[1] = 0;
			stat[2] = 0;
			role == false;
		}
		else if (s == "Zilean" || s == "Fiddlesticks") {
			stat[0] = 3;
			stat[1] = 0;
			stat[2] = 2;
			role == false;
		}
		else if (s == "Soraka") {
			stat[0] = 1;
			stat[1] = 4;
			stat[2] = 0;
			role == false;
		}
		else if (s == "Taric" || s == "Rakan") {
			stat[0] = 0;
			stat[1] = 2;
			stat[2] = 3;
			role == false;
		}
		else if (s == "Lux" || s == "Morgana") {
			stat[0] = 4;
			stat[1] = 1;
			stat[2] = 0;
			role == false;
		}
		else if (s == "Maokai" || s == "Tahm Kench") {
			stat[0] = 1;
			stat[1] = 0;
			stat[2] = 4;
			role == false;
		}


	}
	public int getStat(int i) {return stat[i];}
	public bool getRole() {return role;}
}

public int getTeamScore(Champion a, Champion b, int i) {
	if (a.getRole() == b.getRole() {
		return (2*(a.getStat(i)+b.getStat(i));
	} 
	else if (a.getRole()) {
		return (a.getStat(i) + (3*(b.getStat(i)));
	}
	else if (b.getRole()) {
		return (b.getStat(i) + (3*(a.getStat(i)));
	}
	else {
		return 0;
	}
}

int main () {
public:
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
	int scores[3];
	for (int i = 0; i < 3; i++) {
		scores[i] = getTeamScore(a1,a2,i) - getTeamScore(e1,e2,i);
	}
	cout << "catch:" << scores[0] << " poke:" << scores[1] << " trade:" << scores[2] << " all-in:" << scores [3] << endl;
	return 0;
}
