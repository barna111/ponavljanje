//Napiši program koji æe ispisati prvih 50 brojeva pomoæu dvije znamenke na naèin da izmeðu njih bude crtica (-),
 //a svaki dvoznamenkasti broj ispisuje u novom redu.

#include <iostream>
using namespace std;
	int main (){
		int i;
		
		for(i=1;i<=20;i++){
			cout<<i;
			  
			  if(i==20){
			  	cout<<".";
			  }else{
			  	cout<<",";
			  }
			 
			 	}
			 	
			 	system("PAUSE");
			 	return 0;
	}
	
