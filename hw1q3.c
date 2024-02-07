
#include <stdio.h >
int main()
{
    int window5num0 = 0;
    int window5num1 = 0;
    int window5num2 = 0;
    int window5num3 = 0;
    int newNum;
    int window3num0;
    int window3num1;
    int index = 0;
    double avg3 = 0.0;
    double avg5 = 0.0;
    while(scanf("%d" , &newNum) != EOF){
        if (index < 2){
            avg3 = newNum;
        }else{
            avg3 = (newNum + window3num0 + window3num1) / 3.0;
            avg5 = (newNum + window5num0 + window5num1 + window5num2 + window5num3) / 5.0;
        }
        if (index >= 4 && newNum % 5 == 0){
            printf(" %.2f," , avg5);
        }else{
            printf(" %.2f," , avg3);
        }
        
        //print condition
        
        
        printf("the evg is : %.2f , " , avg5);






        if(index % 4 == 0){
            window5num0 = newNum;
        }else if(index % 4 == 1){
            window5num1 = newNum;
        }else if(index % 4 == 2){
            window5num2 = newNum;
        }else if(index % 4 == 3){
            window5num3 = newNum;
        }
        
        if(index % 2 == 0){
            window3num0 = newNum;
        }else if(index % 2 == 1){
            window3num1 = newNum;
        }

        index++;
    }





    return 0;
}
