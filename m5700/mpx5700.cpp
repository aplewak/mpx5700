#include "Arduino.h"
#include "mpx5700.h"


int minPsi = 0;
int minVac = 0;
int setPsi = 0;

//The map values in the functions are described as inputing the sensor value and mapping 
//it to the voltage threshholds and then mapping the 
//values or units you would like to use

int mpx5700::getPsi(int pin){
	int Pinval = pin;
	int val = analogRead(Pinval);
	int psi = val;
	psi = map(psi,41,940,0,100);
	return psi;
}
int mpx5700::getVac(int pin){		
    	int Pinval = pin;
	int val = analogRead(Pinval);
	int vac = val;
    	vac = map(vac,30,5,0,30);
    	return vac;		
}


int mpx5700::maxPsi(int pin){
	int Pinval = pin;
	int val = analogRead(Pinval);
	int psi = val;
	psi = map(psi,41,940,0,100);
	if(minPsi < psi){
		minPsi == psi;
	}
	return minPsi;
}
int mpx5700::maxVac(int pin){
	int Pinval = pin;
	int val = analogRead(Pinval);
	int vac = val;
	vac = map(vac,41,940,0,100);
	if(minVac < vac){
		minVac == vac;
	}
	return minVac;	
}
int mpx5700::setWarnPsi(int Pin){
	return 10;
}
