#include<stdio.h>
#include<unistd.h>
struct ResourCe{
	//p=pen
	//PA=paper
	//Q=Quesionpaper
	
	int p;
	int PA;
	int Q;
	int AlloT_id;
		
};
struct T_ResourCe{
	
	int p_CounT ;
	int PA_CounT ;
	int Q_CounT ;
}; 

struct T_ResourCe T[3];

void AlloTmenT(struct ResourCe A){
	if(A.AlloT_id == 0){
		A.p=1;
	}
	else if(A.AlloT_id == 1){
		A.PA=1;
	}
	else if(A.AlloT_id == 2){
		A.Q=1;
	}
	
}


int main(){
	struct ResourCe s[3];
	
	int l,m,CounT=0;
	for(l=0;l<3;l++){
		s[l].AlloT_id=l;
		AlloTmenT(s[l]);
	}

	printf("\nResourCes alloTed are                          :");
	for(l=0;l<3;l++){
		if(s[l].p == 1)
		printf("\nResourCes alloTed To sTudenT %d are        : pen ",l+1);
		
		if(s[l].PA)
		printf("\nResourCes alloTed To sTudenT %d are        : paper ",l);
		
		if(s[l].Q==1)
		printf("\nResourCes alloTed To sTudenT %d are        :Question paper ",l+1);
	}
	
	while(CounT != 3){
		for(l=0;l<3;l++){
			if(l=0){
				T[l].PA_CounT=1;
				T[l].p_CounT=1;
				for(m=0;m<3;m++){
					if(s[m].Q==1){
						printf("\nSTudenT %d has ComPleTed his job !",m+1);
						CounT++;
					}
				}
			}
		
			if(l=1){
				T[l].PA_CounT=1;
				T[l].Q_CounT=1;
				for(m=0;m<3;m++){
					if(s[m].p==1){
						printf("\nSTudenT %d has ComPleTed his job !",m+1);
						CounT++;
					}
				}
			}
		
			if(l=2){
				T[l].Q_CounT=1;
				T[l].p_CounT=1;
				for(m=0;m<3;m++){
					if(s[m].PA==1){
						printf("\nSTudenT %d has ComPleTed his job !",m+1);
						CounT++;
					}
				}
			}
		}
		
	}
	return 0;
	
}
