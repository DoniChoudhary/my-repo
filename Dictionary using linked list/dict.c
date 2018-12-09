#include <stdio.h>
#include "linking/word_index1.c"
int main(int argc, char const *argv[])
{
	int number;
	char ans;
	printf("DICTIONARY CONTENT:\n");
	//Dictonary elements are:
	printf("1.Able 2.Attach\n"); 
	printf("3.Back 4.Baggage\n" );
	printf("5.city 6.clean\n" );
	printf("7.Dentist 8.Dark\n" );
	printf("9.Enemy 10.Earlyn" );
	printf("11.Fire 12.Free\n" );
	printf("13.Good 14.God\n" );
	printf("15.Happy 16.Hunger\n" );
	printf("17.Ink 18.Illusion\n" );
	printf("19.Join 20.Jump\n" );
	printf("21.keen 22.Knowledge\n" );
	printf("23.Long 24.Last\n" );
	printf("25.Mango 26.Move\n" );
	printf("27.Nest 28.Nike\n" );
	printf("29.Orange 30.Opera\n" );
	printf("31.Peacock 32.Peace\n" );
	printf("33.Queen 34.Quilt\n" );
	printf("35.Ram 36.Rom\n" );
	printf("37.Search 38.Server\n" );
	printf("39.Tank 40.Time\n" );
	printf("41.Umbrella 42.User\n" );
	printf("43.Varaible 44.Vodoo\n" );
	printf("45.Watch 46.Wish\n" );
	printf("47.X-mas 48.X-ray\n" );
	printf("49.Yellow 50.Yatch\n" );
	printf("51.Zebra 52.Zero\n" );
	
do{
	printf("ENTER THE NUMBER YOU WANT TO KNOW THE MEANING OF: \n");
	scanf("%d",&number);
	{
    word_index1(number);
    }

printf("\nDo you want to continue[Y/N]");
scanf("%s",&ans);
printf("\n");
}

while(ans=='Y'||ans=='y');
printf("The End == Thank you");
printf("\n\n\n");


	return 0;}

