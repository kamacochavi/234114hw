// פונקציות משיעורים - פונקציה שמקבלת שני מספרים ומחזירה את ההפרש ביניהם בערך מוחלט - נקרא לה float delta 

float delta(float a, floatb){
המשתנה המקומי "נשכח" לאחר סיום פעולת הפונקציה//float result = a-b;
if(result < 0){
result = -result;
}
return result;
}

מימוש הפונקציה :
int main ()
{
float x= 3.4,y= 5.7;//לשים לב שהפרמטרים המועברים לפונקיצה יהיו מהטיפוס המתאים 
float d= delta(x,y);


פונקציה אשר מקבלת שני מספרים שלמים ומחזירה את המקסימום שלהם:
int max2(intx, inty){
if(x>y){
return x;
}else{
return y;
}
}

פונקציה שמקבלת 3 מספרים שלמים ומחזירה  את ההמקסימות בינהם:
int max3(int x,int y, int z)
{
if(x>y){
if(x>z){
returne x;
}else{
return z;
}
}
esle {
if(y>z){ 
   return y;
   }else {
return z;
}
}
}


טיפ מהתרגול - מומלץ להשתמש בפונקציות קיימות על מנת לכתוב קוד חדש. 

איזה פונקציות ידועות קיימות בספריה שלנו ? נחפש בגוגל לעניין 

פונקציה בשם isprime 
מקבלת פרמטר ומחזירה אמת אם הוא ראשוני ושקר אחרת 

bool is_prime(int num)
{
if (num % 2 == 0){
return num == 2; //למה שזה יחזיר את זה ? זה לא אמור להחזיררק אמת או שקר ?
}
int i =3;
while (i*i <= num){
  if(num % i == 0){
return false;
}
i++
}
return true;
}


פונקציה שמקבלת מספר כלשהו ומחזירה האם המספר ראשוני או זוגי או אי זוגי לא ראשוני

void print_property(int num){
if (is_prime(num)){
printf("number is prime\n");
}
else if(num % 2 == 0) {
printf("number is even\n");
}else{
printf("number is odd\n");
}return;//לא הכרחי
}


? תרגיל 5 : מה לא בסדר במימושים האלו : 
1)
int min(int a, int b){
if (a>b){
return b;
}
}
פתרון : 
 אני חושבת שזה כי לא כתוב מאיזה טיפוס להחזיר שזה צריך להיות return int b לא יודעת אבדוק את התשובה של התרגול בהמשך 

2)
void print_value(int m){
prntf("value =%d\n",m);
return m;
}
פתרון:
בגלל שבתחילת הפונקציה כתבנו void 
.
להצהרת פונקציות בעיות ותיקוני0 : 
להגדיר פונקציות לפני המימוש 

פונקציה GCD:
1. חישוב חיתוך בין שני הראשוניים 
2. חישוב חיתוך בין תוצאות מסעיף קודם לאיבר השלישי 

#include <stdio.h>
int gcd(int m , int n){
    if(m < 0) m= -m;
    if(n < 0) n = -n;
    while (n != 0) {
        int tmp = n;
        n = m % n;
        m = tmp;
    }
    return m;
    }

שלא זכרתי דרכי אירגון של קובץ עם הרבה פונקציות: 
#include <"name if f.h">

עוד מימוש לפונקציה is prime



bool isPrime (int n){
    if(n<0){
        n=-n;
    }
    if(n == 2){
        return true;
    }
    if (n%2 == 0 || n<2){
        return false;
    }
int  sqrt_n = round2whole(sqrt(n));
    for(int i = 3; i <= sqrt_n; i+=2)
    {
        if(n% i == 0)
        {
            return false;
        }
        returne true;
    }
לא הבנתי את החלק האחרון עם הsqrt


אלגוריתם לדוגמא- המשולש הגדול ביותר : 
נרצה לכתוב תוכנית שמקבלת קואורדינטות של משולשים , מדפיסה את שטח כל משלולש ולבסוף את השטח הגדול ביותר שנצפה עד כה . 
נוסחת הירון : 
area =p(p-a)(p-b)(p-c)מה שעכשיו אניכותבת מתחת לשורש 
 p= סכום a,b,c 
חלקי 2 

מימוש הפונקציה : 
#include <stdio.h>
#include <math.h>
double distance ( double X1, double y1 , double x2 , double y2){
return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
double heron (double a, double b, double c){
double p = (a+b+c)/2;
return sqrt(p*(p-a)*(p-b)*(p-c));
}
double tri_area (double x1, double y1, double x2 ,double y2, double x3, double y3){
double d12,d13,d23;
d12 = distance(x1,y1,x2,y2);
d13 = distance(x1,y1,x3,y3);
d23 = distance(x2,y2,x3,y3);

return heron(d12,d23,d13);
}


מערכים חד מימדיים עם פונקציות : 
כתבו תוכנית : קלט - סדרת ציונים ופלט - ממוצע איברי הסדרה ומספר הציונים שמעליו 

#include <stdio.h>
#define NUM 10
//לכתוב תוכנית שקולטת סדרת ציונים ומחזירה את ממוצע איברי הסדרה ומספר הציונים שמעליו 

void arrayRead(double a[],int len);
double ArraySum(double a[], int n);
int ArrayCountAbove(double a[], int n , double val);

int main() {
   double grades[NUM];
   arrayRead(grades, NUM);
   double avrg = ArraySum(grades,NUM) / NUM;
   int above_avg = ArrayCountAbove(grades, NUM, avrg);
   printf("the avg is : %f\n", avrg);
   printf("%d salaries are above the average\n",above_avrg);
    return 0;
}
void arrayRead(double a[],int len)
{
    for(int i=0; i<len; ++i){
        if(scanf("%if",&a[i])<1)
        {
            exit(1);?
        }
    }return;
}
double ArraySum(double a[], int n){
    double sum = 0.0;
    for (int i = 0 ; i<n ; ++i){
        sum +=a[i];
    }
    return sum;
}
int ArrayCountAbove(double a[], int n , double val){
    int above = 0;
    for (int i = 0; i < n; ++i){
        above += (a[i]> val);
    }
    return above;
}
 ומערכים רב מימדיים נושא הבא : חיפוש בינארי


איזה אלגוריתמים הולכים לפגוש בהרצאה ? : binary.c , blur_improved , global , static_example .

מערכים רב מימדיים :
אתחול מערך רב מימדי : 
double matrix[2][3]={{0}};

אלגוריתם 1: 
טשטוש תמונה -תמונה מיוצגת במחשב ע"י מערך דו מימדי שכל איבר בו הוא ייצוג פיקסל - כלומר נקודה בתמונה  התוכן המציין את הגוון של הנקודה 0 עבור שחור 255 עבור לבן וכל ערך בין לבין ברמת כהות בהירות מתאימה 
טשטוש תמונה = להחליף כל פיקסל בערך הממוצע של פיקסלים מסביבו 

חמימוש :


#include <stdio.h>

#difine N 10
#define M 10
#define FALSE 0
#define TRUE 1

int inBound(int i ,int j);
int meanAroundPixel(int picture[N][M],int i,int j);
void copy2dArray(int to[N][M],int from[N][M]);
void blurPicture(int picture[N][M]);

int main() {
    int i,j;
    int picture[N][M] = {...};
    printf("before bluring:\n**************\n");
    for(i=0 ; i<N;++i) {
        for (j = 0; j < M; ++j);
        {
            printf("%4d", picture[i][j]);
            prinf("\n");
        }
        system("pause");
    }
    
    return 0;
}
int inBound(int i, int j){
    if(i<0 || i>=N || j>=M)
    {
        return FALSE;
    }
    return TRUE;
}
void copy2dArray(int to[N][M],int from[N][M]){
    int i,j;
    for(i = 0; i < N; ++i)
    {
        for(j=0; j <M ; ++j)
        {
            to[i][j] = from[i][j];
        }
    }
    return;
}
void blurPicture(int picture[][M]){
    int ii, jj , blurred[N][M];
    for(ii=0;ii<N; ++ii)
    {
        {
            for(jj=0;jj<m;++jj)
            {
                blurred[ii][jj]=meanAroundPixel(picture,ii,jj);
            }
        }
    }
}


לא עקבתי בכלל זה נראה מגניב רצח לנסות לממש את זה אבל מה שקורה פה למעלה אין לי מושג זה היה כל כך ארוך ומבולגן והמוחח שלי לא מספיק חכם כדי לבנות את הדברים אחד על השני 



עכשיו היה הסבר על סוגי משתנים 
ד2 דוגמאות למימוש של קוד עם משתנה סטטי 

בקרת תאורה מתוכנית מחשב-
void tL(vid){
static int l_s = OFF;
if ( l_s == OFF){
t_l(ON);
l_s= = ON;
}
else {
t_l(OFF);
l_s = OFF;
}
}

דוגמה 2 - 
משתנה סטטי בשימוש נוסף שמאפשר ספירה של מספר הפעמים בהם פונקציה מסויימת נקראת במהלך התוכנית .
?


חיפוש בינארי הוא החיפוש עם הסיבוכיות הטובה ביותר 
מימוש האלגוריתם :

#include <stdio.h>

#define N 12
#define NOT_FOUND -1

int binary_search(int a[],int n, int x);
int main(void) {
    int a[N] = {3,5,5,7,8,10,13,24,29,29,30,33};
    int i, x ,index;
    printf("please enter a number to search for:");
    scanf("%d",&x);
    index = binary_search(a,N,x);
    if(index !=NOT_FOUND) {
        printf("\nindex of num is %d \n", index);
    }
    else {
        printf("\nNot found\n");
    }
    
    return 0;
    }
    
    int binary_search(int a[],int n , int x){
    int low, mid, high;
    low = 0; high = n-1; 
    while(low <= high){
        printf("[Low=%d,High=%d]\n",low,high);
        mid = (low + high) / 2; 
        if(x < a[mid]){
            high = mid -1;
        } else if (x>a[mid]){
            low = mid +1;
        } else {
            return mid;
        }
    }
    printf("[Low=%d,High=%d]\n",low,high);
    return NOT_FOUND;
}

אני מבינה את הרעיון ממש טוב את המימוש יהיה לי קשה לזכור לחזור עליו שוב  ולנסות לכתוב לבד כמה פעמים כי זה מה שמפחיד אותך לעשות


תרגול בנושא פונקציות העברת פרמטרים :


שינוי ערך פרמטר בפונקציה :
 void setToTen(intx){
x=10;
}
int main(void){
int x =2;
setToTen(x);
printf("%d",x);
return 0;
}
במקרה זה יודפס 2 


#include <stdio.h>
/*כתבו פונקציה שחתימתה היא
 * int cmp_dates(int d1,int m1, int y1, int d2, int m2, int y2);
 * הפונקציה מקבלת שני תאריכים
 * d1,d2 day 1 and day 2 , m1,m2 are month1,2 and y1,y2 hear1,2..
 *הפונקציה תחזיר 0 אם התאריכים זהים ו1 1אם הראשון מאוחר מהשני ו-1 אם השני מאוחר מהראשון
 */

int cmp_dates(int d1,int m1, int y1, int d2, int m2, int y2)
{
   if(y1 == y2){
       
       if(m1 == m2){
           if(d1 == d2){
               return 0;
           }
           return d1 > d2 ? 1 : -1;
       }
       return m1 > m2 ? 1 : -1;
   }
    return y1 > y2 ? 1 : -1;
}

int main(){
int d1,d2,m1,m2,y1,y2;
if(scanf(%d%d%d%d%d%d, &d1, &d2,&m1,&m2, &y ,&y2) !=6){
return 1; }// את התנאי הזה אני לא מבינה למה הוא מה הצורך בו ..
printf("%d\n", cmp_dates(d1,m1,y1,d2,m2,y2));
return 0;
}


תרגיל 2: 
ממשו את הפונקציה שחתימתה 
int sum_digits(double num);
הפונקציה מקבלת מספר ממשי שלו עד 3 ספרות לאחר הנקודה. הפונקציה תחזיר סכום הספרות של המספר 

לדוגמה : 
קלט : 
431.123
פלט :
14 (4+3+1+1+2+3)

מימוש: 

#include <stdio.h>
int sum_digits(double num){
    int temp = num * 1000;// טריק כדי לבדוק מספר ספרות אחרי נקודה? 
    int sum = 0;
    while (temp){
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}


