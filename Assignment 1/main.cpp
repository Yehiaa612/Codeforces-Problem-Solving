
#include <iostream>
using namespace std;

int main() {
    
    //  1. Write a program that takes an integer from user then print it
    //    int x ;
    //    cout << "enter integer number : ";
    //    cin >> x ;
    //    cout << "\n number is : "<< x << endl;
    
    //___________________________________________________________________
    
    //    2. write a program that ask the user to insert 3 numbers then print the sum Input
    //
    //    int x,y,z , sum ;
    //    cout << " please enter 3 numbers = ";
    //    cin >> x >> y >> z ;
    //    sum = x+y+z;
    //    cout << "sum of 3 numbers = " << sum << endl ;
    
    //___________________________________________________________________
    
    //    3. write a program that ask the user to insert 3 integers then print the average as decimal number
    
    //    int x , y , z  ;
    //    double average;
    //    cout << "Please enter first number: ";
    //    cin  >> x ;
    //    cout << "Please enter second number: ";
    //    cin  >> y ;
    //    cout << "Please enter third number: ";
    //    cin  >> z ;
    //    average = (x+y+z)/3.0;
    //    cout << "The average = " << average  << endl ;
    //___________________________________________________________________
    
    //4. Write a program to compute the perimeter and area of a rectangle.Your codeshould ask the user to insert the width and the height
    
    //    int width, height ;
    //    double perimeter , area ;
    //    cout << " enter the Width : ";
    //    cin >> width ;
    //    cout << " enter the Height : ";
    //    cin >> height ;
    //    perimeter=2*width+2*height;
    //    area = width * height ;
    //    cout << " The perimeter = " << perimeter << endl ;
    //    cout << " The area = " << area << endl ;
    //___________________________________________________________________
    
    //5. Write a program to calculate the sum of the digits of a 3-digit number.
    //    int x ;
    //    int a,b,c ;
    //    int sum ;
    //    cout << " enter number of a 3-digit : " ;
    //    cin >> x ;
    //    a=x/100;
    //    b=x/10;
    //    b=b%10;
    //    c=x%10;
    //    sum=a+b+c;
    //    cout << " answer = " << sum << endl ;
    //__________________________________________________________________
    
    //    6. Write a program to convert a given integer (in seconds) to hours,minutes and seconds.
    
    //    int x ;
    //    int a,b,c,d;
    //    cout << "enter time in seconds : " ;
    //    cin >> x ;
    //    a=x/3600;
    //    b=x%3600;
    //    c=b/60;
    //    d=b%60;
    //    cout<< "H:M:S - "<<a<<":"<<c<<":"<<d << endl;
    //__________________________________________________________________
    
    //  7. Write a program that allows the user to insert an integer then print negative if it is a negative number otherwise print positive.
    
    //    int x ;
    //    cout << " enter a number : ";
    //    cin >> x ;
    //    if (x>0) {
    //        cout << "\n number is positive "<<endl;
    //    }
    //    else if (x<0){
    //        cout << "\n number is negative "<<endl;
    //    }
    //    else{
    //        cout << "\n number is Zero " <<endl ;
    //    }
    //__________________________________________________________________
    
    //    8. Write a program to read any digit from 1 to 5, display it as a word
    //    int x ;
    //    cout <<  " enter number from 1:5 = ";
    //    cin >> x ;
    //    if (x==1) {
    //        cout << "number is one \n" ;
    //    }
    //    else if (x==2){
    //        cout << "number is two \n" ;
    //    }
    //    else if (x==3){
    //        cout << "number is three \n" ;
    //    }
    //    else if (x==4){
    //        cout << "number is four \n" ;
    //    }
    //    else if (x==5){
    //        cout << "number is five \n" ;
    //    }
    //    else{
    //        cout << "invalid number \n" ;
    //    }
    //__________________________________________________________________
    
    //    9. Write a program that reads 5 numbers and sum of all odd values between them.
    //    int x = 0 ;
    //    int a , b ,c ,d ,e ;
    //    cout << "enter five numbers = ";
    //    cin >> a >> b >> c >> d >> e;
    //    if (a%2==1) {
    //        x=x+a;
    //    }
    //    if (b%2==1) {
    //        x=x+b;
    //    }
    //    if (c%2==1) {
    //        x=x+c;
    //    }
    //    if (d%2==1) {
    //        x=x+d;
    //    }
    //    if (e%2==1) {
    //        x=x+e;
    //    }
    //    cout <<" sum of odd numbers = "<< x << endl ;
    //__________________________________________________________________
    
    //    10.Write a program that reads a year then check if a year is a leap year or not: a
    //    leap year is divisible by 400 or 4 only
    
    //    int x ;
    //    cout << " enter year: ";
    //    cin >> x ;
    //    if (x%400==0) {
    //        cout << " year is a leap year " << endl ;
    //    }
    //    else if (x % 100 == 0 && x % 400 != 0 ){
    //
    //        cout << " year is not leap year " << endl ;
    //    }
    //    else if (x%4==0 ){
    //        cout << " year is a leap year " << endl ;
    //    }
    //
    //    else{
    //        cout << " year is a not leap year " << endl ;
    //    }
    //__________________________________________________________________
    
    //    11. take the birth year and check if he is above 18 or not
    //
    //    int BirthYear;
    //    int CurrentYear=2024 ;
    //    int age ;
    //    cout << "enter a year of your B-date :  ";
    //    cin >> BirthYear;
    //    age= CurrentYear - BirthYear;
    //    if (age>=18) {
    //        cout << " Above 18 . "<< endl ;
    //    }
    //    else{
    //        cout << "not above 18 . "<< endl;
    //    }
    //__________________________________________________________________
    
    //    12.A school has following rules for grading system:
    
    //    int x ;
    //    cout << " enter your marks to print the corresponding grade :  ";
    //    cin >> x ;
    //    if (x>=80) {
    //        cout << " the corresponding grade is A "<< endl ;
    //    }
    //    else if (x<80 && x>=60 ){
    //        cout << " the corresponding grade is B "<< endl ;
    //    }
    //    else if (x<60 && x>=50 ){
    //        cout << " the corresponding grade is C "<< endl ;
    //    }
    //    else if (x<50 && x>=45 ){
    //        cout << " the corresponding grade is D "<< endl ;
    //    }
    //    else if (x<45 && x>=25 ){
    //        cout << " the corresponding grade is E "<< endl ;
    //    }
    //    else{
    //        cout << " the corresponding grade is F "<< endl ;
    //
    //    }
    //__________________________________________________________________
    
    //    13.Search for Switch Case and use it to write a program that reads an
    //    integer between 1 and 12 and print the month of the year in English.
    //
    //    int x ;
    //    cout << " enter number of month : " ;
    //    cin >> x ;
    //    if (x==1) {
    //        cout << " January "<< endl ;
    //    }
    //    else if (x==2){
    //        cout << " February "<< endl ;
    //    }
    //    else if (x==3){
    //        cout << " March "<< endl ;
    //    }
    //    else if (x==4){
    //        cout << " April "<< endl ;
    //    }
    //    else if (x==5){
    //        cout << " May "<< endl ;
    //    }
    //    else if (x==6){
    //        cout << " June "<< endl ;
    //    }
    //    else if (x==7){
    //        cout << " July "<< endl ;
    //    }
    //    else if (x==8){
    //        cout << " August "<< endl ;
    //    }
    //    else if (x==9){
    //        cout << " September "<< endl ;
    //    }
    //    else if (x==10){
    //        cout << " October "<< endl ;
    //    }
    //    else if (x==11){
    //        cout << " November "<< endl ;
    //    }
    //    else if (x==12){
    //        cout << " December "<< endl ;
    //    }
    //    else{
    //        cout << " invalid number "<< endl ;
    //    }
    //__________________________________________________________________
    
    //    14.Search for ternary operator and use it to write a program that allows the
    //    user to insert integer number then Even or Odd
    //    int x;
    //    cout << " enter number : ";
    //    cin >>x;
    //    if (x%2==0) {
    //        cout << " unmber is even = " << x << endl;
    //    }
    //    else{
    //        cout << " unmber is odd = " << x << endl;
    //    }
    //__________________________________________________________________
    
    //    15.Write a program that take character from user then if it is vowel chars (a,e,I,o,u)
    //    then print vowel otherwise print consonant
    //
    //    char x;
    //    cout << " enter character : ";
    //    cin >> x;
    //    if (x=='a'|| x=='A'||x=='e'||x=='E'||x=='i'||x=='I'|| x=='o'||x=='O'||x=='u'||x=='U') {
    //        cout << " vowel " << endl;
    //    }
    //    else{
    //        cout << " consonant " << endl;
    //    }
    
//__________________________________________________________________
    
//    16.Write a program that take 3 integer from user then print the max element and
//    the min element.
  
//    int x,y,z;
//    cout << " enter 3 numbers : ";
//    cin >> x >> y >> z ;
//    //    1 >> 2 >> 3
//    int max = x;
//    if (y > max) {
//        max = y;
//    }
//     if (z > max){
//        max = z ;
//     }
//    cout << "max =" << max << endl;
//    //    5 >> 2 >> 1
//    int min = x ;
//    if (y < min) {
//        min = y ;
//    }
//    if (z < min) {
//        min = z;
//    }
//    cout << "min =" << min << endl;
//__________________________________________________________________


    return 0;
}
