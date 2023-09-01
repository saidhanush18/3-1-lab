#include<stdio.h>
void main(){
     int i,n,k,bt[10],wt[10],tat[10],temp,p[20];
     float tatavg,wtavg;
     printf("enter number of process");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
         printf("\nEnter Burst Time for Process %d -- ", i);
         scanf("%d",&bt[i]);
     }
     for(i=0;i<n;i++)
	for(k=i+1;k<n;k++)
	   if(bt[i]>bt[k])
	   {
		temp=bt[i];
		bt[i]=bt[k];
		bt[k]=temp;
		temp=p[i];
		p[i]=p[k];
                p[k]=temp;
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
             printf("\n\t P%d \t %d \t %d \t %d", p[i], bt[i], wt[i], tat[i]);
     printf("\nAverage Waiting Time %f", wtavg/n);
     printf("\nAverage Turnaround Time  %f", tatavg/n);
}     
