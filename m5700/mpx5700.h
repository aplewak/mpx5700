#ifndef mpx5700_h
#define mpx5700_h

#include "Arduino.h"

class mpx5700
{
  public:


	int pin,vac,psi;

	int getPsi(int Pin);
	int getVac(int pin);
        int maxPsi(int Pin);
	int maxVac(int Pinin);
	int setWarnPsi(int Pin);
	int input;
	
	
  private:
    int _pin;
};

#endif