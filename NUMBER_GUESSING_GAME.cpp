#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	
	int randomnumber=rand() % 100+1;
	int userguess;
	cout<<"guess the number between 1 and 100:";
	
	do{
		cin>>userguess;
		if(userguess>randomnumber){
			cout<<"too high! try again";
		}
		else if(userguess<randomnumber){
			cout<<"too low try again";
		}
		else{
			cout<<"congratulations ! you guessed correct number:"<<randomnumber<<endl;
			
		}
	}
	while(userguess!=randomnumber);
	return 0;
}
