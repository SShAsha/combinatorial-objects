// Author: Mikhail Ivanov (ivanovmihail99@gmail.com)
#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

unordered_map<string, int> short_dictionary =
{
	{ "������ �������", 0 },
	{ "������� �������", 1 },
	{ "������ �������", 2 },
	{ "����� ���������", 3 },
	{ "������ ������", 4 },
	{ "������� ��������", 5 },
	{ "������ ������", 6 },
	{ "��������� �������", 7 },
	{ "������� ��������", 8 },
	{ "����� ������", 9 },
	{ "���� �����������", 10 },
	{ "������ �����������", 11 },
	{ "������ ������", 12 },
	{ "����� ���������", 13 },
	{ "������� �����������", 14 },
	{ "������ �����", 15 },
	{ "������ ������", 16 },
	{ "���������� ��������", 17 },
	{ "������ ���������", 18 },
	{ "���� ��������", 19 },
	{ "��� ���", 20 },
	{ "������� ���������", 21 },
	{ "���� ������", 22 },
	{ "����� ���������", 23 },
	{ "������ ������", 24 },
	{ "������� ������", 25 },
	{ "������ �������", 26 },
	{ "����� �����������", 27 },
	{ "������� ������", 28 },
	{ "������ ������������", 29 },
	{ "������ �������", 30 },
	{ "������ ���������", 31 },
	{ "��������� ���", 32 },
	{ "������� ��������", 33 },
	{ "ϸ�� ��������", 34 },
	{ "������ �������", 35 },
	{ "����� ��������", 36 },
	{ "����� ��������", 37 },
	{ "��������� ������", 38 },
	{ "�������� ��������", 39 },
	{ "�� ���", 40 },
	{ "����� ���������", 41 },
	{ "��������� ��������", 42 },
	{ "���� �������", 43 },
	{ "������ �����", 44 },
	{ "���� �������", 45 },
	{ "������ �����", 46 },
	{ "���������� ��������", 47 },
	{ "���� ��������", 48 },
	{ "������� �����", 49 },
	{ "��������� ��������", 50 },
	{ "������ �����", 51 },
	{ "������� �������", 52 },
	{ "��������� �������", 53 },
	{ "���� �������", 54 },
	{ "������ ������", 55 },
	{ "������ �����", 56 },
	{ "������� ���������", 57 }
};
vector<string> teams =
{
	"������� ������ ����������",
	"������� ������� ���������",
	"������� ������ ����������",
	"��������� ����� �������������",
	"������ ������ ��������������",
	"�������� ������� ����������",
	"������ ������ ����������",
	"������� ��������� �������������",
	"�������� ������� ����������",
	"������ ����� ����������",
	"����������� ���� ��������",
	"����������� ������ ��������",
	"������ ������ ����������",
	"��������� ����� �����������",
	"����������� ������� �������",
	"����� ������ ����������",
	"������ ������ ��������",
	"�������� ���������� ���������",
	"��������� ������ ����������",
	"�������� ���� ����������",
	"��� ��� ����������",
	"��������� ������� �������������",
	"������ ���� ����������",
	"��������� ����� ����������",
	"������ ������ ����������",
	"������ ������� �����������",
	"������� ������ ����������",
	"����������� ����� ���������",
	"������ ������� ����������",
	"������������ ������ ���������",
	"������� ������ ��������",
	"��������� ������ ����������",
	"��� ��������� ����������",
	"�������� ������� ���������",
	"�������� ϸ�� ���������",
	"������� ������ ���������",
	"�������� ����� ����������",
	"�������� ����� ���������",
	"������ ��������� �������������",
	"�������� �������� ����������",
	"��� ��",
	"��������� ����� ���������",
	"�������� ��������� ���������",
	"������� ���� �������������",
	"����� ������ �����",
	"������� ���� �����������",
	"����� ������ �������",
	"�������� ���������� ������������",
	"�������� ���� ����������",
	"����� ������� �������������",
	"�������� ��������� ����������",
	"����� ������ �������������",
	"������� ������� ���������",
	"������� ��������� ����������",
	"������� ���� ����������",
	"������ ������ ��������",
	"����� ������ ���������",
	"��������� ������� ����������"
};
vector<string> logins =
{
	"b17_01",
	"b17_02",
	"b17_03",
	"b17_04",
	"b17_05",
	"b17_06",
	"b17_07",
	"b17_08",
	"b17_09",
	"b17_10",
	"b17_11",
	"b17_12",
	"b17_13",
	"b17_14",
	"b17_15",
	"b17_16",
	"b17_17",
	"b17_18",
	"b17_19",
	"b17_20",
	"b17_21",
	"b17_22",
	"b17_23",
	"b17_24",
	"b17_25",
	"b17_26",
	"b17_27",
	"b17_28",
	"b17_29",
	"b17_30",
	"b17_31",
	"b17_32",
	"b17_33",
	"b17_34",
	"b17_35",
	"b17_36",
	"b17_37",
	"b17_38",
	"b17_39",
	"b17_40",
	"b17_41",
	"b17_42",
	"b17_43",
	"b17_44",
	"b17_45",
	"b17_46",
	"b17_47",
	"b17_48",
	"b17_49",
	"b17_50",
	"b17_51",
	"b17_52",
	"b17_53",
	"b17_54",
	"b17_55",
	"b17_56",
	"b17_57",
	"b17_58"
};
vector<string> groups =
{
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�01-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��",
	"17.�02-��"
};

const int GREEN_PLUS_OBSESSION = 16;
const int TIME_1 = 40317;
const int TIME_2 = 40318;
const int FROZEN_TIME = 40319;
const int FINISH_TIME = 40320;

const string PROBLEM_NAME_1 = "Combinatorics";
const string PROBLEM_NAME_2 = "Combinatorics";
const string PROBLEM_NAME_3 = "Combinatorics";

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	freopen("total_score.txt", "r", stdin);
	//ifstream fin("total_score.txt");
	string s;
	vector<pair<int, int>> achievements;
	while (getline(cin, s))
	{
		cerr << s << '\n';
		int points = 0, power_of_ten = 1;
		while (s.size() && (s.back() != ' '))
		{
			points += power_of_ten * (s.back() - '0');
			power_of_ten *= 10;
			s.pop_back();
		}
		if (s.size())
			s.pop_back();
		auto it = short_dictionary.find(s);
		if (it != short_dictionary.end())
			achievements.emplace_back(it->second, points);
	}
	ofstream fout("looog.log");
	fout << "--- testsys monitor file m180509_b17.dat ---"; fout << '\n';
	fout << "Text monitors are not supported in contests with IOI-Mode problems"; fout << '\n';
	fout << '\n';
	fout << "@contest \"�������� �� ����������������: ������� �����������, �����, 9 ��� 2018 ���� (4 ������)\""; fout << '\n';
	fout << "@startat 09.05.2018 00:00:00"; fout << '\n';
	fout << "@contlen " << FINISH_TIME; fout << '\n';
	fout << "@now 0"; fout << '\n';
	fout << "@state RUNNING"; fout << '\n';
	fout << "@freeze " << FROZEN_TIME; fout << '\n';
	fout << "@problems 1"; fout << '\n';
	fout << "@teams " << teams.size(); fout << '\n';
	fout << "@submissions " << achievements.size(); fout << '\n';
	fout << "@comment @pragma IgnoreCE"; fout << '\n';
	fout << "@comment @pragma IgnoreSubmTime"; fout << '\n';
	fout << "@comment @pragma HideUnfrozenCount"; fout << '\n';
	fout << "@p " << PROBLEM_NAME_1 << ",����������-" << PROBLEM_NAME_2 << ",0,0"; fout << '\n';
	for (int i = 0; i < ((int)(teams.size())); ++i)
		fout << "@t " << logins[i] << ",0,1,\"" << teams[i] << " (" << groups[i] << ")\"\n";
	for (int i = 0; i < ((int)(achievements.size())); ++i)
		fout << "@s " << logins[achievements[i].first] << "," << PROBLEM_NAME_3 << ",1," << ((achievements[i].first == GREEN_PLUS_OBSESSION ? TIME_1 : TIME_2)) << "," << achievements[i].second << "\n";
	return 0;
}
