#include<stdio.h>
#include<stdlib.h>
main()
{
	long  int damage_cost=0;
	int time[10],system,km,cost=0,contact_number,issues,damage,mileage,car,type_4,type_6;
	char passenger_name[20],destination_point[20],location[20],problem[500],performance[300];
	printf("\n\t\t\t                     *------------------*\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                     TO                    =");
    printf("\n\t\t\t        =                 CAR TAXI                  =");
    printf("\n\t\t\t        =          BOOKING AND BIKE RENT SYSTEM     =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t                    *------------------*\n");
    printf("enter the system which u need...... enter 1 for booking and 2 to rent a bike\n");
    scanf("%d",&system);
    switch(system)
    {
     case 1:
     	{
     		printf("\t  ************please give the below details sir************** \t\n");
     		printf("enter you name:\n");
     		scanf("%s",&passenger_name);
     		printf("enter your contact number\n");
     		scanf("%d",&contact_number);
     		printf("enter your location\n");
     		scanf("%s",location);
     		printf("enter your destination point\n");
     		scanf("%s",destination_point);
     		printf("enter the time which we need to pick you  up\n");
     		scanf("%d",&time);
     		printf("enter no of kilometeres u travelled\n");
     		scanf("%d",&km);
     		printf("enter vehicle type  1.four seater \n 2.six seater\n");
     		scanf("%d",&car);
     		switch(car)
     		{
     		case 1: 
			 {
		           printf("you have selected four seater\n");
     		       printf("enter 1.AC \n 2. NON-AC\n");
     		       printf("enter your type\n");
     		       scanf("%d",&type_4);
     		      switch(type_4)
     		      {
     		      case 1:printf("you choosed four seater AC vehicle\n");
				        cost =km*15;
						break;
				  case 2:printf("you choosed four seater NON-AC vehicle\n");
				        cost=km*10;
						break;	
				   }
				   break;
			}
			case 2: 
			{
			printf("you have selected six seater\n");
     		       printf("enter 1.AC \n 2. NON-AC\n");
     		       printf("enter your type\n");
     		       scanf("%d",&type_6);
     		      switch(type_6)
     		      {
     		      case 1:printf("you choosed six seater AC vehicle\n");
				        cost =km*17;
						break;
				  case 2:printf("you choosed six seater NON-AC vehicle\n");
				        cost=km*12;
						break;	
				   }
				   break;
			 }
		}
			 printf("\t*****   thank u for booking.......taxi will arrive in time  ***** \t\n");
     		printf("\n\t**   ThIS IS YOUR RECEIPT  **\n\t");
     		printf("\t  Name              : %s\n",passenger_name );
     		printf("\t  contact number    : %d\n",contact_number);
     		printf("\t  boarding point    : %s\n",location);
     		printf("\t  destination point : %s\n",destination_point);
     		printf("\t  time              : %d\n",time);
     		printf("\t  Total cost        : %d\n",cost);
     		printf("\n\t***    THANK YOU    ***\n\t");
     	break;
		 }
    case 2:
    	{
    		
    		int bike ,cost_perbike,km,aadhar_num,selection;
    		char reference_num,customer[20];
    		printf("\t\t\t************TERMS AND CONDITIONS ***********\n");
    		printf("1.The rider needs to be 20 yrs of age or older to rent a bike.The documents mentioned below need to be verified ,in original,for each other\t\n");
    		printf("2.Rider needs to present a valid driving icense at time of picking up the vehicle original ID prrof (voter ID :aadhar card or passport)\t\n");
    		printf("3.The driver/drivers must hold a valid friving license during the tenure of the rental\t\n");
    		printf("4.The bikes have to be ridden within permissible limit\t\n");
    		printf("5.The vehicle rider should bewearing a helmet and carry a valid driving license issued by Govt of India during the tenure of the bike rental tenure\t\n");
    		printf("6.You must return the bike at the assigned time in fully serviceable condition\t\n");
    		printf("7.Ther user shall make the payment of the entire rental charge (as per the duration of the booking)in advance,before using the vehicle\t\n");
    		printf("8.Rental charges are based on kilometres increment\n\t");
    		printf("\n\t****************************************************************************************\n");
			printf("\nif you are accepting the above details then enter 1 to rent a bike and 2 to exit.....\n\t");
    		printf("enter your selection\n");
    		scanf("%d",&selection);
    	switch(selection)
    	{
    	case 1:	{
    	    printf("enter your name:\n");
    	    scanf("%s",&customer);
    		printf("enter your aadar number\n");
    		scanf("%d",&aadhar_num);
    		printf("enter your reference number from your driving license\n");
    		scanf("%s",&reference_num);
    		printf("*******************you need to pay an advance payment of 2000/-********************\n");
    		printf("\tenter 1.Ducati Panigale V4\n\t2.Kawasaki Ninja H2\n\t3.Ducati Panigale V4 SP\n\t4.Suzuki Hayabusa\n\t5.Kawasaki Ninja ZX-10R\n\t6.Ducati Streetfighter V2\n\t7.KTM 890 Duke\n\t8.KTM 1290 Super Duke\n\t9.Yamaha YZF R1\n\t10.Royal Enfield Bullet 350\n\t\n\n");
    		printf("enter your bike\n");
    		scanf("%d",&bike);
    		printf("\n\t  please select your bike ....\n\t");
    		switch(bike)
    		{
    		    case 1:
				     {
				 	  printf("\n\tselcted bike is .....DUCATI PANIGALE V4\n ");  
					   printf("\tEngine cc (Displacement)  : 937 cc\n");
                       printf("\tMaximum Power	           : 110 HP @ 9,000 rpm\n");
                       printf("\tMaximum Torque	           : 93 NM @ 6,500 rpm\n");
                       printf("\tNumber of Gears           : 6 Speed\n");
                       printf("\tSeat Height	           : 810 mm\n");
                       printf("\tFuel Tank Capacity	       : 16 litres\n");                                                                                                                                                                                                                         				 	 				 	  
				 	  printf("enter the no.of km that you need to take the bike\n");
				 	  scanf("%d",&km);
				 	  cost_perbike=km*45;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\n\tdo you have any other issues ......please check below details\n");
				 	printf("\nenter the issues that u need.....\n1. DAMAGE ISSUES\n2.FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:
						 {
						       printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :
									{
									printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=200000;
				 		       	        printf("\tdamage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2: 
									{
									printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=3000;
				 		       	        printf("\tdamage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3:
									{
									  printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("\tdamage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:
									{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	       damage_cost=1500;
				 		       	       printf("\tdamage_cost =%d\n",damage_cost);
										   break;	
									}
									break;
								}
							break;
						}
						case 2: 
						{
						        printf("\n\t**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",&performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3:
						{
						       exit(0);   
					        	break;     
					 }
					 
				}
				printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name    : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\t\n*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				case 2 :
					{
					printf("\n\tselcted bike is ....KAWASAKI NINJA H2\n");	
					printf("\n\tDisplacement         : 998   ");
					printf("\n\tEngine Type          : Liquid Cooled, Inline 4 Cylinder with Supercharger");
					printf("\n\tNo. of Cylinders     : 4");
					printf("\n\tMax Power            : 231 PS @ 11500 rpm");
					printf("\n\tMax Torque           : 141.7 Nm @ 11000 rpm");
					printf("\n\tFuel Capacity        : 17 L\n");
				 	printf("enter the no.of km that you need to take the bike\n");
				 	scanf("%d",&km);
				 	cost_perbike=km*40;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("enter the issues that u need.....\n1.DAMAGE ISSUES\n2.FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:{
						       printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :
									{
									printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=5000000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2:
									{
									  printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=30000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3:
									{
									  printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:
									{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	        damage_cost=10000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
										   break;
									}
									break;
								}
								break;
							}
						case 2: {
							printf("\t\n**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3: {
						exit(0);   
						break;     
					 }
				}
				printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name    : %s\n",customer );
     	    printf("\taadhar number     : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				case 3:
					{
					printf("\n\t selcted bike is .... DUCATI PANIGALE V4 SP\n");
				 	 printf("\n\tDisplacement               : 1103cc");
				 	 printf("\n\tType                       : Desmosedici Stradale Engine 90° V4, counter-rotating crankshaft, 4 Desmodromic timing, 4 valves per cylinder, liquid-cooled");
				 	 printf("\n\tNo. of Cylinders           : 4");
				 	 printf("\n\tMax Power                  : 214 PS @ 13000 rpm");
				 	 printf("\n\tMax Torque                 : 124 Nm @ 9500 rpm");
				 	 printf("\n\tFuel Capacity              : 16L\n");
					   printf("enter the no.of kilometeres that you need to take the bike\n");
				 	  scanf("%d",&km);	
				 	  cost_perbike=km*50;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("\tenter the issues that u need.....\n1.DAMAGE ISSUES\n2.FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:
						 {
						 printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :
									{
									printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=2000000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2: 
									{
									printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=30000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3: 
									{
									printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:
									{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	       damage_cost=10000;
				 		       	       printf("damage_cost =%d\n",damage_cost);
										   break;
									}
									break;
								}
								break;
							}
						case 2:{
						 printf("\t\n**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3:{
							 exit(0);   
						break; 
					}
					 }
					 printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name    : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				case 4:
					{
					printf("\n\t selected bike is .... SUZUKI HAYABUSA\n");
				 	printf("\n\tDisplacement      : 1340 cc");
				 	printf("\n\tEngine            : Type4-Stroke, Liquid-cooled, DOHC,in-line four");
				 	printf("\n\tNo. of Cylinders  : 4");
				 	printf("\n\tMax Power         : 190 PS @ 9700 rpm");
				 	printf("\n\tMax Torque        : 150 Nm @ 7000 rpm\n");
					 printf("enter the no.of kilometres that you need to take the bike\n");
				 	scanf("%d",&km);
				 	cost_perbike=km*60;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("enter the issues that u need.....\n1.DAMAGE ISSUES\n2.for FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:
						 {
						 printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :{
										printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=1000000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2: {
										printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=20000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3: {
										printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	       damage_cost=15000;
				 		       	       printf("damage_cost =%d\n",damage_cost);
										   break;
									}
									break;
									}
									break;
								}
						case 2: {
						printf("\t\n**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s\n",performance[100]);
						        printf("mileage : ");
						        scanf("%d\n",&mileage);
						        break;
						    }
						case 3:{
						 exit(0);   
						break; 
                          }
					 }
					 printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name   : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				case 5:
					{
						int cost_perbike;
						printf("\n\t selected bike is.....KAWASAKI NINJA ZX-10R\n ");
				 	  printf("\n\tDisplacement          : 998 cc");
				 	  printf("\n\tEngine                : TypeLiquid-cooled, 4-stroke In-Line Four");
				 	  printf("\n\tNo. of Cylinders      : 4");
				 	  printf("\n\tMax Power             : 203 PS @ 13200 rpm");
				 	  printf("\n\tMax Torque            : 114.9 Nm @ 11400 rpm");
				 	  printf("\n\tFuel Capacity         : 17 L\n");
					   printf("enter the no.of km that you need to take the bike\n");
				 	  scanf("%d",&km);
				 	cost_perbike=km*40;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("enter the issues that u need.....\n1.DAMAGE ISSUES\n2.FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:{
						printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :{
									printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=3000000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2: {
									printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=30000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3: {
									printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	       damage_cost=15000;
				 		       	       printf("damage_cost =%d\n",damage_cost);
										   break;	
									}
									break;
								}
								break;
							}
						case 2: {
						printf("\t\n**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3: {
							exit(0);   
						break;  
					}
					 }
					 printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name     : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\t\n*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\t\n*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				case 6:
					{
						int cost_perbike;
					printf("\n\tselected bike is.....DUCATI STREETFIGHTER V2\n");
				 	printf("\n\tDisplacement    : 955 cc");
				 	printf("\n\tEngine          : TypeDesmodromic 4 Valves per cylinder, liquid cooled");
				 	printf("\n\tMax Power       : 152.6 PS @ 10750 rpm");
				 	printf("\n\tMax Torque      : 101.4 Nm @ 7000 rpmFront BrakeDisc");
				 	printf("\n\tFuel Capacity   : 17 L\n");
					 printf("enter the no.of kilometers that you need to take the bike\n");
				 	scanf("%d",&km);
				 	cost_perbike=km*20;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("enter the issues that u need.....\n1.DAMAGE ISSUES\n2.FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:
						 {
						 printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :{
									printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=1500000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2: {
									printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=30000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3:{
									 printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	       damage_cost=10000;
				 		       	       printf("damage_cost =%d\n",damage_cost);
										   break;
									}
									break;
								}
								break;
							}
						case 2:{
						 printf("\t\n**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3:{
						 exit(0);   
						break;
					}
					 }
					 printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name    : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				case 7:
					{
						int cost_perbike;
					printf("\n\t selected bike is....KTM 890 Duke\n");
				 	printf("\n\tDisplacement   : 889 cc");
				 	printf("\n\tEngine         : Type2 cylinder, 4 stroke, DOHC Parallel twin");
				 	printf("\n\tNo.of Cylinders: 2");
				 	printf("\n\tMax Power      : 115.5 PS @ 9000 rpm");
				 	printf("\n\tMax Torque     : 92 Nm @ 8000 rpm");
				 	printf("\n\tFuel Capacity  : 14 L\n");
					 printf("enter the no.of kilometers that you need to take the bike\n");
				 	scanf("%d",&km);
				 	cost_perbike=km*20;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("enter the issues that u need.....\n1.DAMAGE ISSUES\n2.FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:{
						printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :{
										printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=500000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2: {
									printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=7000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3: {
									printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	       damage_cost=5000;
				 		       	       printf("damage_cost =%d\n",damage_cost);
										   break;
									}break;
								}
								break;
							}
						case 2:{
						 printf("\t\n**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3:{
							 exit(0);   
						break;
					}
					 }
					 printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name    : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				 case 8:
					{
						int cost_perbike;
					printf("\n\tselected bike is ..... KTM 1290 Super Duke\n");
				 	printf("\n\tDisplacement     : 1301 cc");
				 	printf("\n\tEngine           : TypeLiquid cooled, 2-cylinder, 4-stroke, engine");
				 	printf("\n\tMax Power        : 179.4 PS");
				 	printf("\n\tMax Torque       : 140 Nm");
				 	printf("\n\tFuel Capacity    : 16 L\n");
					 printf("enter the no.of kilometers that you need to take the bike\n");
				 	scanf("%d",&km);
				 	cost_perbike=km*20;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("enter the issues that u need.....\n1.DAMAGE ISSUES\n2.FEEDBACK\n3.DFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:{
							printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :{
									printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=800000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2: {
									printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3: {
									printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	       damage_cost=3000;
				 		       	       printf("damage_cost =%d\n",damage_cost);
										   break;
									}break;
								}
								break;
							}
						case 2: 
						{
						printf("\n\t**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3: 
						{
						exit(0);   
						break;  
					}
					 }
					 printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name       : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				 case 9:
					{
						int cost_perbike;
					printf("\n\tselected bike is....Yamaha YZF R1\n");
				 	printf("\n\tDisplacement      : 998 cc");
				 	printf("\n\tEngine            : Type4-stroke, liquid-cooled, forward-inclined parallel 4-cylinder, 4-valves, DOHC Engine");
				 	printf("\n\tNo. of Cylinders  : 4");
				 	printf("\n\tMax Power         : 200 PS @ 13500 rpm");
				 	printf("\n\tMax Torque        : 112.4 Nm @ 11500 rpm");
				 	printf("\n\tFuel Capacity     : 17 L\n");
					 printf("enter the no.of kilometers that you need to take the bike\n");
				 	scanf("%d",&km);
				 	cost_perbike=km*20;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("enter the issues that u need.....\n1.DAMAGE ISSUES\n2.FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:
						 {
						 printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :
									{
									printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=200000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2: 
									{
									printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3: 
									{
									printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:
									{
									printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	       damage_cost=1500;
				 		       	       printf("damage_cost =%d\n",damage_cost);
										   break;
									}break;
								}
								break;}
						case 2:
						{
						 printf("**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3:
						{
						 exit(0);   
						break;  
					}
					 }
					 printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer Name       : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }	
				case 10:
					{
						int cost_perbike;
					printf("\n\tselected bike is.....ROYAL ENFIELD BULLET 350\n");
				 	printf("\n\tDisplacement      : 346 cc");
				 	printf("\n\tengine            : TypeSingle cylinder 4 stroke, Engine air cooled fuel injection");
				 	printf("\n\tNo. of Cylinders  : 1");
				 	printf("\n\tMax Power         : 19.36 PS @ 5250 rpm");
				 	printf("\n\tMax Torque        : 28 Nm @ 4000 rpm");
				 	printf("\n\tFuel Capacity     : 13.5 L\n");
					 printf("enter the no.of kilometers that you need to take the bike\n");
				 	scanf("%d",&km);
				 	cost_perbike=km*20;
				 	printf("the bike u have selected cost :%d\n",cost_perbike);
				 	printf("\tdo you have any other issues ......please check below details\n");
				 	printf("enter the issues that u need.....\n1.DAMAGE ISSUES\n2.FEEDBACK\n3.DEFAULT\n" );
				 	scanf("%d",&issues);
				 	switch(issues)
				 	{
				 		case 1:
						 {
						 printf("\t***these are the damage issues that we have ***\n");
				 		       printf("enter 1.Chassis damage \n 2.headlights damage\n 3.crashguards damage\n 4.minor scratches\n" );
				 		       scanf("%d",&damage);
				 		       switch(damage)
				 		       {
				 		       	case 1 :
									{
									printf("\tyour damage is ......CHASSIS DAMAGE\n");
				 		       	        printf("enter your chassis damage issue\n");
				 		       	        scanf("%s",&problem);
				 		       	        damage_cost=250000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 2:{
									 printf("\tyour damage is .....HEADLIGHTS DAMAGE\n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 3: 
									{
									printf("\tyour damage is .....CRASHGUARDS \n");
				 		       	        damage_cost=3000;
				 		       	        printf("damage_cost =%d\n",damage_cost);
				 		       	        break;
				 		       	    }
				 		       	case 4:
									{
									  printf("\tyour damage is ......MINOR SCRATCHES\n");
				 		       	        damage_cost=1500;
				 		       	        printf("damage_cost =%d\n",damage_cost);
										   break;
									}
								break;				 	       
								}
								break;
							}
						case 2:{
						 printf("\n\t**** submit your feedback****");
						        printf("bike performance : ");
						        scanf("%s",performance[100]);
						        printf("mileage : ");
						        scanf("%d",&mileage);
						        break;
						    }
						case 3:{
			           exit(0);   
						break;     
					 }
				}
				printf("\n\t ****  THIS IS YOUR RECEIPT  ***\n\t");
     		printf("\tCustomer name      : %s\n",customer );
     	    printf("\taadhar number      : %d\n",aadhar_num);
     		printf("\tcost per bike     : %d\n",cost_perbike);
     		printf("\tdamage issue      : %s\n",problem);
     		printf("\tDamage cost       : %d\n",damage_cost);
     		printf("\ttotal cost         :%d\n",cost_perbike+damage_cost);
     		printf("\n\t  *** THANK YOU   ***  \n\t"); 
					 if(km>=500)
					 {
					 	printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 1000/-  CODE :A2D5G8");
					 }
					 else if(km>=1000)
					 {
					    printf("\n\t*****CONGRATULATIONS !!!!!!!! you won the coupon amount of 2000/-  CODE :K11W23");
					 }
					 break;
					 }
				 }	
				 break;	
			}
		 case 2:
		 {
		 exit(0);
		 break;	
	}
}
}
}
}


		
				 		
		
		


