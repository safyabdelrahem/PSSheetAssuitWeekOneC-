#include <iostream>
#include <algorithm>

using namespace std;
#include <cmath>
#include <string>
//void calculateAge(int days) {
//    int years = days / 365;
//    int months = (days % 365) / 30;
//    int remainingDays = (days % 365) % 30;
//
//    cout << years << " years, " << months << " months, " << remainingDays << " days" ;
//}

int main()
{
//     problem1
//         string name;
//         cin >> name;
//         cout << "Hello, " << name << endl;



//           problem2
//                 int a;
//                 long long b;
//                   char c;
//                   float d;
//                  double e;
//                   cin >> a >> b >> c >> d >> e;
//                  cout << "the values are " << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;

//                    problem3
//                          int a, b;
//                           cin >> a >> b;
//
//                             int summation = a + b;
//                                  int multiplication = a * b;
//                                int subtraction = a - b;
//
//                              cout << a << " + " << b << " = " << summation << endl;
//                             cout << a << " * " << b << " = " << multiplication << endl;
//                                   cout << a << " - " << b << " = " << subtraction << endl;


//                                   problem4
//                                     int a ,b ,c ,d;
//                                     cin >> a >> b >> c >> d ;
//                                     int x = (a*b)-(c*d);
//                                     cout << "Difference is " << x;

//                                         problem5

//                                           int R ;
//                                           cin >> R ;
//                                           float Area = 3.141592653 * (R*R);
//                                           cout << Area;

//                                                problem6

//                                                 int M,N;
//                                                 cin >> M >> N;
//                                                 int nLastDigit = N %10;
//                                                 int mLastDigit = M%10;
//                                                 int summation =nLastDigit+ mLastDigit;
//                                                 cout << "summation  is " << summation ;

//                                                    problem7
//                                                      int N;
//                                                      cin >> N;
//                                                      int  summation =0;
//                                                      for (int i=1;i<=N;++i){
//                                                         summation +=i;
//                                                      }
//                                            cout << "Summation of numbers from 1 to " << N << " is: " << summation ;


//                                                   problem8
//                                                      int A,B;
//                                                      cin >> A >> B;
//                                                      double result = A/B;
//      double floorValue = std::floor(result);
//    double ceilValue = std::ceil(result);
//    double roundValue = std::round(result);
//
//    cout << "Floor: " << floorValue;
//    cout << "Ceil: " << ceilValue ;
//    cout << "Round: " << roundValue;

//                                                    problem9

//                                                      int A,B;
//                                                      cin >> A >> B;
//                                                      if (A>=B){
//                                                        cout << "Yes";
//
//                                                      }else {
//                                                          cout << "No";
//                                                      }



//                                                        problem10
//                                                           int A,B;
//                                                           cin >> A >> B;
//                                                           if (A%B==0||B/A==0){
//                                                            cout << "Multiples" ;
//                                                           }else {
//                                                               cout << "No Multiples";
//                                                           }

//                                                             problem11

//                                                                 int A,B,C;
//                                                                 cin >> A >> B >> C;
//                                                                 int manimum =A;
//                                                                 int maximam =A;
//                                                                 if (B<manimum){
//                                                                    manimum=B;
//                                                                 }else if (B > maximam){
//                                                                     maximam=B;
//                                                                 }
//                                                                 if (C<manimum){
//                                                                    manimum=C;
//                                                                 }else if (C>maximam){
//                                                                     maximam=C;
//                                                                 }
//                                                                 cout << manimum << " " << maximam;

//                                                                   problem12
//                                                                     string f1,s1,f2,s2;
//                                                                     cin >> f1 >> s1 >> f2 >> s2;
//                                                                     if (s1==s2){
//                                                                        cout << "ARE Brothers" ;
//                                                                     }else {
//                                                                         cout << "NOT";
//                                                                     }

//                                                                        problem13
//                                                                         char X;
//                                                                         cin >> X;
//                                                                             if (X >= '0' && X <= '9') {
//        cout << "IS DIGIT" << endl;
//    } else if ((X >= 'A' && X <= 'Z') || (X >= 'a' && X <= 'z')) {
//        cout << "ALPHA" << endl;
//        if (X >= 'A' && X <= 'Z') {
//            cout << "IS CAPITAL" << endl;
//        } else {
//        cout << "IS SMALL" <<endl;
//        }
//    }

//                                                                    problem14

//                                                             char X;
//                                                             cin >> X;
//                                                             if (X >= 'a'&& X <='z'){
//                                                                 char uppercase = X - 32;
//                                                                 cout << uppercase;
//                                                             }else if ( X >='A'&&X<='Z'){
//                                                                 char lowercase = X + 32;
//                                                                 cout << lowercase;
//                                                             }



//                                                       problem15
//
//                                                          int A , B;
//
//                                                          char Sign;
//                                                          cin >> A >> B >> Sign;
//                                                          switch(Sign){
//                                                          case'+':
//                                                            cout << A + B ;
//                                                            break;
//                                                          case '-':
//                                                            cout << A - B;
//                                                            break;
//                                                          case '*':
//                                                            cout << A * B;
//                                                            break;
//                                                             case '/':
//            if (B != 0) {
//                cout << A / B << endl;
//            } else {
//                cout << "Error: Division by zero." << endl;
//            }
//            break;
//        default:
//            cout << "Invalid operator." << endl;
//            break;}


//                                      problem16

//                                        int X;
//                                        cin >> X;
//                                        int firstInteger = X /1000;
//                                        if (firstInteger %2==0){
//                                            cout << "EVEN";
//                                        }else{
//                                            cout << "ODD";
//                                        }

//                                         problem17

//                                            int X , Y;
//                                            cin >> X >> Y ;
//                                            if (X==0 && Y==0){
//                                            cout << "Origem";
//                                            }  else if (X == 0) {
//        cout << "Eixo Y";
//    }
//
//    else if (Y == 0) {
//        cout << "Eixo X";
//    }
//
//    else {
//        if (X > 0 && Y > 0) {
//            cout << "Q1" ;
//        } else if (X < 0 && Y > 0) {
//            cout << "Q2" ;
//        } else if (X < 0 && Y < 0) {
//            cout << "Q3" ;
//        } else {
//            cout << "Q4";
//        }
//    }

//                                            problem18


//                                               int N;
//    cin >> N;
//
//    calculateAge(N);


//problem19
//   int X;
//    cout << "Enter a number: ";
//    cin >> X;
//
//    if (X >= 0 && X <= 25) {
//        cout << "Interval [0,25]" << endl;
//    } else if (X > 25 && X <= 50) {
//        cout << "Interval (25,50]" << endl;
//    } else if (X > 50 && X <= 75) {
//        cout << "Interval (50,75]" << endl;
//    } else if (X > 75 && X <= 100) {
//        cout << "Interval (75,100]" << endl;
//    } else {
//        cout << "Out of Intervals" << endl;
//    }


//problem20
// int A, B, C;
//    cout << "Enter three numbers : ";
//    cin >> A >> B >> C;
//
//
//    int arr[] = {A, B, C};
//    sort(arr, arr + 3);
//
//
//    cout << "Sorted numbers in ascending order: ";
//    for (int i = 0; i < 3; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl << endl;
//
//
//    cout << "Original sequence: " << A << " " << B << " " << C << endl;

//problem21
//    double N;
//    cout << "Enter a number: ";
//    cin >> N;
//
//    if (N == int(N)) {
//        cout << "int " << int(N) << endl;
//    } else {
//        cout << "float " << int(N) << " " << N - int(N) << endl;
//    }
//problem22
//  int A, B;
//    char S;
//    cout << "Enter two numbers A and B, and the comparison symbol S: ";
//    cin >> A >> S >> B;
//
//    bool isRight = false;
//
//    if (S == '<') {
//        isRight = (A < B);
//    } else if (S == '>') {
//        isRight = (A > B);
//    } else if (S == '=') {
//        isRight = (A == B);
//    }
//
//    if (isRight) {
//        cout << "Right" << endl;
//    } else {
//        cout << "Wrong" << endl;
//    }


//problem23
//   int A, B, C;
//    char S, Q;
//    cin >> A >> S >> B >> Q >> C;
//    if (Q == '=') {
//        if (S == '+') {
//            if (A + B == C) {
//                cout << "Yes";
//            } else {
//                cout << (A + B);
//            }
//        } else if (S == '-') {
//            if (A - B == C) {
//                cout << "Yes";
//            } else {
//                cout << (A - B);
//            }
//        } else if (S == '*') {
//            if (A * B == C) {
//                cout << "Yes";
//            } else {
//                cout << (A * B);
//            }
//        }
//    }


//problem24
//   int l1, r1, l2, r2;
//    cin >> l1 >> r1 >> l2 >> r2;
//    if (r1 >= l2 && r2 >= l1) {
//        int intersection_start = max(l1, l2);
//        int intersection_end = min(r1, r2);
//        cout << "[" << intersection_start << "," << intersection_end << "]";
//    } else {
//        cout << -1;
//    }

//problem25

//       int A, B, C, D;
//    cin >> A >> B >> C >> D;
//    long long multiplication = ((long long)A * B * C * D) % 100;
//    cout << multiplication;

//problem26
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    if (A * B > C * D) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}
