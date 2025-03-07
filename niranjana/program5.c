#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,disc,root1,root2,realpart,imaginarypart;
printf("enter coefficients a,b and c:");
scanf("%f%f%f",&a,&b,&c);
disc+b*b-4*a*c;
if(disc>0)
{
root1=(-b+sqrt(disc))/(2*a);
root2=(-b-sqrt(disc))/(2*a);
printf("Roots are real and different.\n");
printf("Root1=%.2f\n",root1);
printf("Root2=%.2f\n",root2);
}
else if(disc==0)
{
root1=-b/(2*a);
printf("Roots are real and the same.\n");
printf("Root1=Root2=%.2f\n",root1);
}
else
{
realpart=-b/(2*a);
imaginarypart=sqrt(-disc)/(2*a);
printf("Roots are complex and differnt.\n");
printf("Root1=%.2f+%.2fi\n",realpart,imaginarypart);
printf("Root2=%.2f-%.2fi\n",realpart,imaginarypart);
}
return 0;
}
