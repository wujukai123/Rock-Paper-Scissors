#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int ppss, cpss, win, i = 1, pcnt = 0, ccnt = 0;
	char temp1, temp2 = 'a';
	string name;
	cout << "欢迎来到石头剪刀布！\n\n请注意：在后续游戏中输入完毕后请按回车键表示输入完毕，\n并且请严格按照要求输入，\n否则将会自动结束并退出游戏。\n\n请输入尊姓大名：" ; 
	cin >> name;
	while (temp2 == 'a')
	{
		i = 1; pcnt = 0; ccnt = 0;
		cout << "你想比的游戏制式：\na.三局两胜\tb.五局三胜\tc.自定义\n";
		cin >> temp1;
		switch (temp1)
		{
			case 'a':win = 2; break;
			case 'b':win = 3; break;
			case 'c':cout << "请输入胜利需要赢得回合数:"; cin >> win; break;
			default:return 0;;
		}
		if (temp1 != 'a' && temp1 != 'b' && temp1 != 'c') break;
		cout << "当前制式：" << win * 2 - 1 << "局" << win << "胜\n\n";
		srand(time(NULL));
		while (pcnt != win && ccnt != win)
		{
			cout << "第" << i << "回合" << "\n请输入你想出什么：\n1.石头\t2.剪刀\t3.布\n"; 
			cin >> ppss;
			if (ppss != 1 && ppss != 2 && ppss != 3) return 0;
			cpss = rand() % 3 + 1;
			cout << "电脑出的是："; 
			if (cpss == 1) cout << "石头\n";
				else if (cpss == 2) cout << "剪刀\n";
					else if (cpss == 3) cout << "布\n"; 
			if (ppss == 1 && cpss == 2){cout<<"胜\n\n"; pcnt++;}
				else if (ppss == 2 && cpss == 3){cout << "胜\n\n"; pcnt++;}
					else if (ppss == 3 && cpss == 1){cout << "胜\n\n"; pcnt++;}
						else if (cpss == 1 && ppss == 2){cout << "负\n\n"; ccnt++;}
							else if (cpss == 2 && ppss == 3){cout << "负\n\n"; ccnt++;}
								else if (cpss == 3 && ppss == 1){cout << "负\n\n"; ccnt++;}
									else if (cpss == ppss) cout << "平\n\n"; 
			i++;
		}
		if (ppss != 1 && ppss != 2 && ppss != 3) break;
		cout << "最终的赢家是：";
		if (pcnt == win) cout << name << "\n\n";
			else cout << "电脑\n\n"; 
		cout << "是否还想再来一局？\na.是\tb.否\n（如果选择“否”则会自动退出）\n";
		cin >> temp2;
		switch (temp2)
		{
			case 'a':break;
			case 'b':break;
			default:return 0;
		}
		if (temp1 != 'a' && temp1 != 'b' && temp1 != 'c') break;
		if (ppss != 1 && ppss != 2 && ppss != 3) break;
	}
	return 0; 
}