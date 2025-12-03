#include <stdio.h>
#include <stdlib.h>

float avg (float row1,float row2);

float dif(float row1,float row2);

float percantage(float avg_val);


int main()
{
   float row1,row2;
   float average_result,diff_result,per;
   float max = 4095;
   float min = 0;

    printf("Please enter a number row1 (0-4095): ");
    scanf("%f",&row1);

    while(row1<min || row1>max){
        printf("Wrong Number\n");
        printf("Please enter a new number: ");
        scanf ("%f",&row1);
    }

    printf("Please enter a row2 (0-4095): ");
    scanf("%f",&row2);

    while(row2<min || row2>max){
        printf("wrong Number\n");
        printf("Please enter a new number: ");
        scanf ("%f",&row2);

    }

    if (row1>4095 || row2>4095){
        printf("High Number");
        return -1;
    }
    if (row1<0 || row2<0){
        printf("Negative Number");
        return -1;
    }
    average_result=avg(row1,row2);
    diff_result=dif(row1,row2);
    per=percantage(average_result);

    if (diff_result>300){
    printf("ERROR %.2f\n",diff_result);

    return -1;
    }
    else if (average_result<200){
    printf("The pilot is not stepping on the pedal.\n Result: %%0\n");
    }
    else if (average_result>3800){
    printf("The pilot wants full power.\n Result: %%100\n");
    }
    else{
        printf("Result%%: %.2f",per);
    }

    return 0;
}

float avg (float row1,float row2)
{
    float avgValuable;
    avgValuable=(row1+row2) / (2.0);
    return avgValuable;
}
float dif(float row1,float row2){

    float dif;
    float fark=row1-row2;

    if (fark<0){
    return -fark;
    }else{
   return fark;
    }
}
    float percantage(float avg_val){

    float per;
    per=(avg_val-200.0)*100.0/3600.0;
    return per;
}

