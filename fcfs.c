#include<stdio.h>
void main(){
     int i,n,bt[10],wt[10],tat[10];
     float tatavg,wtavg;
     printf("enter number of process");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
         printf("\nEnter Burst Time for Process %d -- ", i);
         scanf("%d",&bt[i]);
     }
     wt[0]=wtavg=0;
     tat[0]=tatavg=bt[0];
     for(i=1;i<=n;i++){
          wt[i]=wt[i-1]+bt[i-1];
          tat[i]=tat[i-1]+bt[i];
          wtavg=wtavg+wt[i];
          tatavg=tatavg+tat[i];
     }
     printf("\n PROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND TIME");
     for(i=1;i<=n;i++)
             printf("\n\t P%d \t %d \t %d \t %d", i, bt[i], wt[i], tat[i]);
     printf("\nAverage Waiting Time %f", wtavg/n);
     printf("\nAverage Turnaround Time  %f", tatavg/n);
           
}

