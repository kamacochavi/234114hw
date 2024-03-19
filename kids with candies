#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 *אני מקבלת מערך ועוד ערך נקרא לו ערךרמקור
 * אני רוצה לפתוח בהקצאה דינמית מערך חדש שמקבל אליו את כל הערכים של מערך מספר 1 אבל לכל ערך הוא מוסיף את ערך המקור ואז נוצר לי מבעצם מערך חדש*
 * עכשיו אני רוצה לקחת כל פעם ערך 1 ממערך החדש ולבדוק האם הוא הערך המקסימלי מבין כל הערכים במערך הראשון - אם כן אז אני אחזיר ערך אמת אם לא אז אני אחזיר שקר**
*/


bool *arrMax(int candies[],int candiesSize, int extraCandies)
{
    int Max = true;
    int idxKidsNum ; //אינדקס שמייצג ילד כל אינדקס בתוך לולאה ייצג לי ילד אחר
    bool* arrMaxCandies = (int*)malloc(candiesSize * sizeof (bool));
    int* plusExtraCandieArr = (int*)malloc(candiesSize * sizeof(int)); //הקצאה דינמית של מקום למערך שאשתמש בו כדי לשים איברים חדשים
    for(idxKidsNum = 0; idxKidsNum < candiesSize; idxKidsNum ++)//לולאה ראשונה כדי לשמור על המערך הראשון אני רוצה להגדיר לי מערך חדש שמקבל את ערכי המערך הראשון ועוד הערך המוסף
    {
        for(int idxNewKidsNum = 0; idxNewKidsNum < candiesSize; idxNewKidsNum ++)
        {
            plusExtraCandieArr[idxNewKidsNum] += extraCandies;
        }
    }

    for(int idxNewKidsNum = 0; idxNewKidsNum < candiesSize; idxNewKidsNum ++)
    {
        for(idxKidsNum = 0; idxKidsNum < candiesSize; idxKidsNum ++)
        {
            if (candies[idxKidsNum] < plusExtraCandieArr[idxNewKidsNum])
            {
                Max = true;
            }
            else
            {
                Max = false;
            }
        }
        //אם בסוף האיטרציה הזו אני ארצה לקרוא לעוד הקצאה דינמית של המערך הבוליאני שבקשו להחזיר ואני ארצה שעבור כל אינדקס שמיצג ילד מסויים אני אחזיר לו בהתאמה את הערך ששמרתי בו האם הילד יכול לקבל מקסימום או לא
        for(int idxBool = 0; idxBool < candiesSize; idxBool++)
        {
            arrMaxCandies[idxBool] = (bool)Max;
        }
    }

    return  (*bool)arrToreturn;//איך אני מחזירה מערך בוליאני ?
}

int main() {
    int candies[] = {2,3,5,1,3};;
    printf (arrMax((int *) candies, 5, 3));
    free(arrMax);
    //free(plusExtraCandieArr);//
    //free(arrMaxCandies);//
    return 0;
}
