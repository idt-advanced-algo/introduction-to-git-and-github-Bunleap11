#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
struct student {
    int id;
    string name;
    vector<double>score;
}stu;
double calculateavg(struct student stu){
    double sum=0;
    for(int i=0;i<stu.score.size();i++){
        sum+=stu.score[i];
    }
    return sum/stu.score.size();
}
double CalculateGpa(double calculateavg){
    if(calculateavg>=90){
        return 4.0;
    }
    else if(calculateavg>=80){
        return 3.0;
    }
    else if(calculateavg>=70){
        return 2.0;
    }
    else if(calculateavg>=60){
        return 1.0;
    }
    else{
        return 0.0;
    }

}
string CalculateGrade(double CalculateGpa){
    if(CalculateGpa==4.0){
        return "A";
    }
    else if(CalculateGpa==3.0){
        return"B";
    }
    else if(CalculateGpa==2.0){
        return "C";
    }
    else if(CalculateGpa==1.0){
        return "D";
    }
    if(CalculateGpa==0.0){
        return "E";
    }
}
int main(){
    vector<student> students={{1,"Alice",{23,45,34,55}},
                 {2,"Bob",{44,65,78,54}},
                 {3,"Chalie",{23,33,42,65}},
                 {4,"David",{43,52,66,34}},
                 {5,"Eve",{22,74,27,73}}};  
    cout << "----------------------------------------------------\n";
    cout << "| Student ID | Name     | Avg Score | GPA  | Grade |\n";
    cout << "----------------------------------------------------\n";                        
    for(int i=0;i<students.size();i++){
       cout << "| " << setw(5) << students[i].id << " | "
             << setw(8) << students[i].name << " | "
             << setw(10) << fixed << setprecision(2) << calculateavg(students[i]) << " | "
             << setw(4) << fixed << setprecision(2) << CalculateGpa(calculateavg(students[i])) << " | "
             << setw(5) << CalculateGrade(CalculateGpa(calculateavg(students[i]))) << " |\n";
    }
}