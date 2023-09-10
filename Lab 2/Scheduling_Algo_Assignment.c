// Scheduling Algorithms Assignment OS LAB 2
/*
Name--Shashwat Tripathi
SAP ID--500106990
ROLL NUMBER--R2142220640
BATCH 3
*/ 

// The two ALgorithms assigned to me are FCFS(First Come First Serve) and PPS(Priority Preemptive Scheduling)


// FCFS

#include<stdio.h>
#include<conio.h>
int completion_time(){
    int arrtime,bttime;
    printf("Enter the arrival time");
    scanf("%d",&arrtime);
    printf("Enter the burst time");
    scanf("%d",&bttime);
    int complete_time= arrtime + bttime;
    printf("The completion time for FCFS is:");
    printf("%d",complete_time);


};
    int turnaround(){
    int arrtime,bttime;
    printf("Enter the arrival time");
    scanf("%d",&arrtime);
    printf("Enter the burst time");
    scanf("%d",&bttime);
    int complete_time= arrtime + bttime;
    int turntime= complete_time - arrtime;
    printf("The turn-around time is:");
    printf("%d",turntime);
}



int main(){
    // int number_of_process,PID,arr_time,burst_time,priority;
    // printf("Enter the number of processes you want to check the scheduling algorithm for:");
    // scanf("%d",&number_of_process);
    // int arr[number_of_process][4];
    // // printf("%d",number_of_process);
    // for(int i=0;i<number_of_process;i++){
    //     printf("Enter the values of PID,Arrival time,Burst time and Priority: ");
    //     for(int j=0;j<4;j++)
    //     {
    //         printf("%d %d\n",i,j);
    //         scanf("%d ",&arr[i][j]);
    //     }
        
    // }
    // for(int i=0;i<number_of_process;i++){
    //     for(int j=0;j<4;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    completion_time();
    turnaround();
    
}

