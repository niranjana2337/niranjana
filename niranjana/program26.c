#include<stdio.h>
#include<string.h>
struct Hotel
{
char name[50];
char address[100];
int grade;
float avg_rent;
int num_rooms;
};
void list(struct Hotel h[],int size,int grade)
{
printf("\nHotels with grade%d:\n",grade);
for(int i=0;i<size;i++)
{
if(h[i].grade==grade)
{
printf("Name:%s,Address:%s,Avg Rent:%.2f,Rooms:%d\n",h[i].name,h[i].address,h[i].avg_rent,h[i].num_rooms);
}
}
} 
int main()
{
int n,grade;
printf("Enter the number of hotels:");
scanf("%d",&n);
struct Hotel h[n];
for(int i=0;i<n;i++)
{
printf("\nEnter details for hotel %d\n",i+1);
printf("Name:");
scanf("%s",h[i].name);
printf("Address:");
scanf("%s",h[i].address);
printf("Grade(1-5):");
scanf("%d",&h[i].grade);
printf("Average room rent:");
scanf("%f",&h[i].avg_rent);
printf("Number of rooms:");
scanf("%d",&h[i].num_rooms);
}
printf("\nEnter grade to search hotels:");
scanf("%d",&grade);
list(h,n,grade);
return 0;
}
