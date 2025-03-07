#include<stdio.h>
union cricketTeam
{
char playerName[50];
int jerseyNumber;
float battingavg;
};
int main()
{
union cricketTeam team;
printf("Enter player name:");
scanf("%[^\n]",team.playerName);
printf("player name:%s\n",team.playerName);
printf("Enter jersey number:");
scanf("%d",&team.jerseyNumber);
printf("Jersey number:%d\n",team.jerseyNumber);
printf("Enter batting average:");
scanf("%f",&team.battingavg);
printf("Batting average:%2f\n",team.battingavg);
return 0;
}



