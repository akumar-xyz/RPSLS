#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>

using namespace std;



void play(int a, int b, int &p, int &c){
	cout<<"You chose ";
	if(a==1) cout<<"ROCK ";
	else if (a==2) cout<<"PAPER ";
	else if (a==3) cout<<"SCISSORS";
	else if (a==4) cout<<"LIZARD";
	else if (a==5) cout<<"SPOCK";
	
	cout<<"...\nCalvin put ";
	if(b==1) cout<<"ROCK ";
	else if (b==2) cout<<"PAPER ";
	else if (b==3) cout<<"SCISSORS";
	else if (b==4) cout<<"LIZARD";
	else if (b==5) cout<<"SPOCK";
	
	cout<<"\n\n";
	if(a==b)
		cout<<"its a draw... :/";
		
	else{
		if(a==1&&b==2||a==2&&b==1) cout<<"Paper covers Rock";
		if(a==1&&b==3||a==3&&b==1) cout<<"as it has always been, Rock crushes Scissors...";
		if(a==1&&b==4||a==4&&b==1) cout<<"Rock crushes Lizard";
		if(a==1&&b==5||a==5&&b==1) cout<<"Spock vaporizes Rock";
		
		if(a==2&&b==3||a==3&&b==2) cout<<"Scissor cuts Paper";		
		if(a==2&&b==4||a==4&&b==2) cout<<"Lizard eats Paper";
		if(a==2&&b==5||a==5&&b==2) cout<<"Paper disproves Spock";
		
		if(a==3&&b==4||a==4&&b==3) cout<<"Scissor decapitates lizard";
		if(a==3&&b==5||a==5&&b==3) cout<<"Spock smashes Scissors";
		
		if(a==4&&b==5||a==5&&b==4) cout<<"Lizard poisons Spock";
	}
	if(a==1){
		if (b==4||b==3){ cout<<"\nYou win"; p++;}
			else if(b!=a) { cout<<"\nCalvin wins"; c++;}
			}
	if(a==2){
		if (b==5||b==1){ cout<<"\nYou win"; p++;}
			else if(b!=a) { cout<<"\nCalvin wins"; c++;}
			}
	if(a==3){
		if (b==2||b==4){ cout<<"\nYou win"; p++;}
			else if(b!=a) { cout<<"\nCalvin wins"; c++;}
			}
	if(a==4){
		if (b==5||b==2){ cout<<"\nYou win"; p++;}
			else if(b!=a) { cout<<"\nCalvin wins"; c++;}
			}
	if(a==5){
		if (b==1||b==3){ cout<<"\nYou win"; p++;}
			else if(b!=a) { cout<<"\nCalvin wins"; c++;}
			}
getchar();
}	

void clear_screen()
{
#ifdef WINDOWS
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}

int main() {
	clear_screen();
    cout<<"       , /,";
    cout<<"\n    , /;/ |.-";
    cout<<"\n   /|/ /.'/.-',_";
    cout<<"\n_,/  ._-    =-==.";
    cout<<"\n=\ =:       - |-.";
    cout<<"\n`\_-; 0  _0   |";
    cout<<"\n(        _)   |)";
    cout<<"\n ` \ _______  /";
    cout<<"\n    \\     //'";
    cout<<"\n     \\'--//";
    cout<<"\n    /`-`\"`'\ ";
    cout<<"\n   |_|======|";
    cout<<"\n   |_|======|";
    cout<<"\n   ((/======|";
    cout<<"\n     #######_";
    cout<<"\n   .''-----\" `'.";
    cout<<"\n   `-----------`";
    cout<<"ROCK PAPER SCISSORS LIZARD SPOCK - With CALVIN!";
    getchar();
    clear_screen();
    cout<<"\tScissors cut paper\n\n\tPaper covers rock\n\n\tRock crushes lizard\n\n\tLizard poisons Spock\n\n\tSpock smashes scissors\n\n\tScissors decapitate lizard\n\n\tLizard eats paper\n\n\tPaper disproves Spock\n\n\tSpock vaporizes rock\n\n\tAnd as it has always been, Rock crushes scissors...";
    cout<<"\n\nGO..?";
    getchar();
    int cchoice,cscore,pchoice,pscore;
    pscore=0;
    cscore=0;    
    char choice;
    clear_screen();
    cout<<"Race till ? : ";
    int ng;
    cin>>ng;
    clear_screen();
    do{
        cout<<"\t\t\t\tYour Score: "<<pscore<<"\t\tCalvin : "<<cscore<<"\n\n\n\n\n\n";
        cchoice = rand() % 5 + 1;
        cout<<"\n\n\nFor (1) Rock (2) Paper (3) Scissors (4) Lizard (5) Spock";
        cout<<"\n\nInput your choice : ";
        cin>>pchoice;
        while(pchoice<=0||pchoice>5){
			cout<<"\nBatman, Wizard and Glock will be added in the next version.\n\nPlease enter a number from 1-5 : ";
			cin>>pchoice;
		}
        play(pchoice, cchoice, pscore, cscore);                
        getchar();
        clear_screen();
        if(pscore==ng||cscore==ng){
			clear_screen();
			cout<<"\n\n";
			if(pscore==ng) cout<<"You";
			else cout<<"Calvin";
			cout<<" WON!\n\n";
			cout<<"Do you want to play for another 5 points ? (Y/N) : ";
			cin>>choice;
			if(toupper(choice)=='Y') ng=ng+5;
			else { clear_screen(); cout<<"\nScore -->\t You :"<<pscore<<"\tCalvin :"<<cscore<<"\n\n GAME OVER!!\n\n"; }
		}       
    }while(pscore<ng&&cscore<ng);
    
    cout<<"Press ENTER to exit...";
    getchar();
    return 0;
}

