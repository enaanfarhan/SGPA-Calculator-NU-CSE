#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int main()
{
    float q,w,e,r,t,y,u,i,o,z;
    int x, m;
    printf("\t\t\t\tSGPA Calculator - CSE, NU\n");
    printf("Grade Points:\n");
    printf("\ta+ = 4.00\n\ta  = 3.75\n\ta- = 3.50\n\tb+ = 3.25\n\tb  = 3.00\n\tb- = 2.75\n\tc+ = 2.50\n\tc  = 2.25\n\td  = 2.00\n\tf  = 0.00\n");
    printf("\nEnter The Semester Number: ");
    scanf("%d", &x);

    if(x<=8 && x!=0)
        {
    printf("Input Numerical Point only\n\n");
        if(x==1){
                printf("Introduction  to Computer System            - 111: ");
                    scanf("%f", &q);
                printf("Programming Language                        - 112: ");
                    scanf("%f", &w);
                printf("Programming Language Practical              - 113: ");
                    scanf("%f", &e);    //Practical
                printf("Physics (Electricity Magnetism)             - 114: ");
                    scanf("%f", &r);
                printf("Differential Calculus & Coordinate Geometry - 115: ");
                    scanf("%f", &t);
                printf("English                                     - 116: ");
                    scanf("%f", &y);
                z = ((((q+w+r+t+y)*3)+(e*1.5))/16.5);
        }

        else if(x==2){
                printf("Data Structure                            - 121: ");
                    scanf("%f", &q);
                printf("Data Structure Pr                         - 122: ");    //Practical
                    scanf("%f", &w);
                printf("Introduction to Electrical Engineering    - 123: ");
                    scanf("%f", &e);
                printf("Introduction to Electrical Engineering Pr - 124: ");    //Practical
                    scanf("%f", &r);
                printf("Integral Calculus & Differential Equation - 125: ");
                    scanf("%f", &t);
                printf("Statistics and Probability                - 126: ");
                    scanf("%f", &y);
                printf("Discrete Mathematics                      - 127: ");
                    scanf("%f", &u);
                z = (((q+e+t+y+u)*3+((w+r)*1.5))/18);
        }

        else if(x==3){
                    printf("Object Oriented Programming             - 211: ");
                     scanf("%f", &q);
                    printf("Object Oriented Programming Language Pr - 212: "); //Practical
                     scanf("%f", &w);
                    printf("Operating System                        - 213: ");
                     scanf("%f", &e);
                    printf("Digital Logic Design                    - 214: ");
                     scanf("%f", &r);
                    printf("Digital Logic Design Pr                 - 215: "); //Practical
                     scanf("%f", &t);
                    printf("Mathematics for CSE                     - 216: ");
                     scanf("%f", &y);
                    printf("Electronic Device and Circuits          - 217: ");
                     scanf("%f", &u);
                    printf("Electronic Device and Circuits Pr       - 218: "); //Practical
                     scanf("%f", &i);
                    printf("Basic Accounting                        - 219: ");
                     scanf("%f", &o);
                    z = ((((q+e+r+y+u+o)*3)+((w+t+i)*1.5))/22.5);
        }
        else if(x==4){
                printf("Algorithm Design                       - 221: ");
                    scanf("%f", &q);
                printf("Algorithm Design Pr                    - 222: ");    //Practical
                    scanf("%f", &w);
                printf("Database Management System             - 223: ");
                    scanf("%f", &e);
                printf("Database Management System Pr          - 224: ");    //Practical
                    scanf("%f", &r);
                printf("Computer Organization and Architecture - 225: ");
                    scanf("%f", &t);
                printf("Data Communications                    - 226: ");
                    scanf("%f", &y);
                printf("Economics                              - 227: ");
                    scanf("%f", &u);
                z = ((((q+e+t+y+u)*3)+((w+r)*1.5))/18);
        }
        else if(x==5){
                printf("Theory of Computation                - 311: ");
                    scanf("%f", &q);
                printf("Microprocessor and Assembly Language - 312: ");
                    scanf("%f", &w);
                printf("Assembly Language Practical          - 313: ");
                    scanf("%f", &e);//Practical
                printf("Engineering Mathematics              - 314: ");
                    scanf("%f", &r);
                printf("Sociology                            - 315: ");
                    scanf("%f", &t);
                printf("Technical Writing & Communications   - 316: ");
                    scanf("%f", &y);
                z = ((((q+w+r+t+y)*3)+(e*1.5))/16.5);
        }
        else if(x==6){
             printf("Software Engineering              - 321: ");
                    scanf("%f", &q);
             printf("Software Engineering Pr           - 322: ");
                    scanf("%f", &w);//Practical
             printf("Numerical Analysis                - 323: ");
                    scanf("%f", &e);
             printf("Computer Graphics & Multimedia    - 324: ");
                    scanf("%f", &r);
             printf("Computer Graphics & Multimedia Pr - 325: ");
                    scanf("%f", &t);//Practical
             printf("Compiler Design                   - 326: ");
                    scanf("%f", &y);
             printf("Compiler Design Pr                - 327: ");
                    scanf("%f", &u);//Practical
             printf("System Analysis and Design        - 328: ");
                    scanf("%f", &i);
            z = ((((q+e+r+y+i)*3)+((w+t+u)*1.5))/19.5);

        }
        else if(x==7){
                printf("Computer Networking                      - 411: ");
                    scanf("%f", &q);
                printf("Computer Networking Pr                   - 412: ");
                    scanf("%f", &w);//Practical
                printf("Artificial Intelligence & Neural Network - 413: ");
                    scanf("%f", &e);
                printf("Parallel & Distributed Processing        - 414: ");
                    scanf("%f", &r);
                printf("Peripheral & Interfacing                 - 415: ");
                    scanf("%f", &t);
                printf("Peripheral & Interfacing Pr              - 416: ");
                    scanf("%f", &y);//Practical
                printf("Digital Signal Processing                - 417: ");
                    scanf("%f", &u);

                z = ((((q+e+r+t+u)*3)+(w*1.5+y))/17.5);
        }
        else if(x==8){
                printf("Web Engineering             - 421: ");
                    scanf("%f", &q);
                printf("Web Engineering Pr          - 422: ");
                    scanf("%f", &w);//Practical
                printf("Computer & Network Security - 423: ");
                    scanf("%f", &e);
                printf("Elective Course             - 424: ");
                    scanf("%f", &r);
                printf("Project 9                   - 429: ");
                    scanf("%f", &t);
                z=(((q+e+r)*3+(w*1.5)+t*6)/16.5);

        }
              //IF GPA is bigger then 4. Which is not possible
                {
                if (z>4){
                    printf("\nSomething is wrong\n");
                }
                else{
                    printf("\nYour SPGA of %d Semester is = %.2f\n\n", x, z);
                }
                }
    }
    else{
        printf("\nError\n\n");
    }
    printf("==================================================================\nDeveloped by: Enaan Farhan | Department of CSE, DIIT [15th Batch]\n==================================================================\n\n");
    printf("Press any key to exit\n");
    getch();
    return 0;
}