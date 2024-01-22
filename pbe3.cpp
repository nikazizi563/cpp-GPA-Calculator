#include <iostream>
// pbe3 gpa calculator - nik azizi
using namespace std;

string grade, status;
double nilaimata;

//tiap kali nak check grade, program akan code yang ni
string checkforgrade(int markah){ 
    if(markah>=80 && markah<=100){
        grade = "A";
        status = "EXCELLENT";}
    else if(markah>=75 && markah<=79){
        grade = "A-";
        status = "HONORS";}
    else if(markah>=70 && markah<=74){
        grade = "B+";
        status = "HONORS";}
    else if(markah>=65 && markah<=69){
        grade = "B";
        status = "HONORS";}
    else if(markah>=60 && markah<=64){
        grade = "B-";
        status = "PASS";}
    else if(markah>=55 && markah<=59){
        grade = "C+";
        status = "PASS";}
    else if(markah>=50 && markah<=54){
        grade = "C";
        status = "PASS";}
    else if(markah>=47 && markah<=49){
        grade = "D";
        status = "FAIL";}
    else if(markah>=44 && markah<=46){
        grade = "D-";
        status = "FAIL";}
    else if(markah>=40 && markah<=43){
        grade = "E+";
        status = "FAIL";}
    else if(markah>=30 && markah<=39){
        grade = "E";
        status = "FAIL";}
    else if(markah>=20 && markah<=29){
        grade = "E-";
        status = "FAIL";}
    else if(markah>=0 && markah<=19){
        grade = "F";
        status = "FAIL";}
    else{
        grade = "--Mark is Invalid--";
    }
    return grade;
    }

//tiap kali nak check nilaimata, program akan code yang ni
double checkfornilaimata(int markah){ 
    if(markah>=80 && markah<=100){
        nilaimata = 4.00;}
    else if(markah>=75 && markah<=79){
        nilaimata = 3.67;}
    else if(markah>=70 && markah<=74){
        nilaimata = 3.33;}
    else if(markah>=65 && markah<=69){
        nilaimata = 3.00;}
    else if(markah>=60 && markah<=64){
        nilaimata = 2.67;}
    else if(markah>=55 && markah<=59){
        nilaimata = 2.33;}
    else if(markah>=50 && markah<=54){
        nilaimata = 2.00;}
    else if(markah>=47 && markah<=49){
        nilaimata = 1.67;}
    else if(markah>=44 && markah<=46){
        nilaimata = 1.33;}
    else if(markah>=40 && markah<=43){
        nilaimata = 1.00;}
    else if(markah>=30 && markah<=39){
        nilaimata = 0.67;}
    else if(markah>=20 && markah<=29){
        nilaimata = 0.33;}
    else if(markah>=0 && markah<=19){
        nilaimata = 0.00;}
    return nilaimata;
    }

int main()
{
    struct subject{
    int markah;
    string grade, status;
    double nilaimata, credithour, matakredit;
    }; subject math, ics, pspd, csa, os, eng, sukan;

    cout<<"\nEnter Mark for Each Subject Down Below : \n";
    cout<<"\tDBM10063 - MATHEMATICAL COMPUTING : \t\t"; cin >> math.markah;
    cout<<"\tDFC10033 - INTRODUCTION TO COMPUTER SYSTEM : \t"; cin >> ics.markah;
    cout<<"\tDFC10042 - PROBLEM SOLVING AND PROGRAM DESIGN : "; cin >> pspd.markah;
    cout<<"\tDFC10093 - COMPUTER SYSTEM ARCHITECTURE : \t"; cin >> csa.markah;
    cout<<"\tDFC10103 - OPERATING SYSTEM : \t\t\t"; cin >> os.markah;
    cout<<"\tMPU22053 - ENGLISH FOR DEGITAL TECHNOLOGY : \t"; cin >> eng.markah;
    cout<<"\tMPU24011 - SUKAN : \t\t\t\t"; cin >> sukan.markah;

    math.matakredit = 3.0 * checkfornilaimata(math.markah);
    ics.matakredit = 3.0 * checkfornilaimata(ics.markah);
    pspd.matakredit = 2.0 * checkfornilaimata(pspd.markah);
    csa.matakredit = 3.0 * checkfornilaimata(csa.markah);
    os.matakredit = 3.0 * checkfornilaimata(os.markah);
    eng.matakredit = 3.0 * checkfornilaimata(eng.markah);
    sukan.matakredit = 1.0 * checkfornilaimata(sukan.markah);

    cout<<"\nThe Result : \t\t\t\t\t      Grade\tGradePoint";
    cout<<"\n\tDBM10063 - MATHEMATICAL COMPUTING : \t\t" << checkforgrade(math.markah) << "\t   " << checkfornilaimata(math.markah);
    cout<<"\n\tDFC10033 - INTRODUCTION TO COMPUTER SYSTEM : \t" << checkforgrade(ics.markah) << "\t   " << checkfornilaimata(ics.markah);
    cout<<"\n\tDFC10042 - PROBLEM SOLVING AND PROGRAM DESIGN : " << checkforgrade(pspd.markah) << "\t   " << checkfornilaimata(pspd.markah);
    cout<<"\n\tDFC10093 - COMPUTER SYSTEM ARCHITECTURE : \t" << checkforgrade(csa.markah) << "\t   " << checkfornilaimata(csa.markah);
    cout<<"\n\tDFC10103 - OPERATING SYSTEM : \t\t\t" << checkforgrade(os.markah) << "\t   " << checkfornilaimata(os.markah);
    cout<<"\n\tMPU22053 - ENGLISH FOR DIGITAL TECHNOLOGY : \t" << checkforgrade(eng.markah) << "\t   " << checkfornilaimata(eng.markah);
    cout<<"\n\tMPU24011 - SUKAN : \t\t\t\t" << checkforgrade(sukan.markah) << "\t   " << checkfornilaimata(sukan.markah)  << endl;

    double totalmatakredit = math.matakredit+ics.matakredit+pspd.matakredit+csa.matakredit+os.matakredit+eng.matakredit+sukan.matakredit;
    double GPA = totalmatakredit/18;

    if (GPA >= 3.50){
        cout<<"\nCongratulation, You got The Head Department Award" << endl;
    }
    if (GPA <= 1.00){
        cout<<"\nSorry, Position Fail and Terminated" << endl;
    }
    cout<<"\nThe result for GPA : " << GPA << endl;
    cout<<"Your result status is " << status << "\n" << endl;

    return 0;
}