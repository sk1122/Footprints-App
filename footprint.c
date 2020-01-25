#include <stdio.h>
#include <conio.h>

void footprints(float home, float vehicle, int public_transport){
    int footprint = 0;

    if(0 <= home <= 5)
        footprint++;
    else if(6 <= home <= 10)
        footprint += 2;
    else if(11 <= home <=15)
        footprint += 4;
    else if(16 <= home <=20)
        footprint += 8;
    else if(21 <= home <=24)
        footprint += 10;
    else
        printf("Enter a correct value!!");


    if(0 <= vehicle <= 15)
        footprint++;
    else if(16 <= vehicle <= 50)
        footprint += 2;
    else if(51 <= vehicle <=100)
        footprint += 3;
    else if(101 <= vehicle <=150)
        footprint += 11;
    else if(150 <= vehicle <=200)
        footprint += 15;
    else if(vehicle >= 201)
        footprint += 21;
    else
        printf("Enter a correct value!!");


    if(public_transport == 1){
        footprint -= 5;
    } else if (public_transport == 0){
        footprint += 20;
    } else {
        printf("Wrong Value");
    }

    if(footprint <= 5){
        printf("\n\n\t\t\tYou have Platinum Footprint");
    } else if(6 <= footprint <= 10){
        printf("\n\n\t\t\tYou have Golden Footprint with embedded Diamonds");
     else if (11<=footprint<=20){
        printf("\n\n\t\t\tYou have Golden Footprint");
    } else if (21<=footprint<=30){
        printf("\n\n\t\t\tYou have Silver Footprint");
    } else if (31<=footprint<=50){
        printf("\n\n\t\t\tYou have Bronze Footprint");
    } else {
        printf("\n\n\t\t\tYour footprint is dirtier than sceptic tank!!");
    }
}

void help(){
    printf("HELP");
}

int main(){

    printf("\n\n\t\t\t   Welcome To Footprints App");
    printf("\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");

    int pub_trans,choice;
    float elec,pri_veh;

    printf("\n\n\t\t\t\t1. Start Now");
    printf("\n\t\t\t\t2. Help");

    printf("\n\n\t\t\tEnter your choice? (1/2): ");
    scanf("%d", &choice);

    if(choice==1){

        printf("\n\n\t\t\tHow many hours do you use electricity a day? ");
        scanf("%f", &elec);

        printf("\n\n\t\t\tHow many hours do you use private vehicle a day? ");
        scanf("%f", &pri_veh);

        printf("\n\n\t\t\tDo you use public transport?(1-yes / 0-no) ");
        scanf("%d", &pub_trans);
        footprints(elec, pri_veh, pub_trans);
    } else if(choice == 2){
        help();
    } else {
        printf("\n\n\t\tPlease Enter it again");
    }


    return 0;
}
