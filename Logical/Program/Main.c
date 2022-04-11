
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed = 0;
	real_speed=0;
}

void _CYCLIC ProgramCyclic(void)
{
	EVRID.ENABLE=ON_OFF;
	
	if(ON_OFF==0){
		speed=0;
	}
	
	led[0]=led1[0];
	led[1]=led1[1];
	led[2]=led1[2];
	led[3]=led1[3];
	
	DRIVE(&EVRID);
}

void _EXIT ProgramExit(void)
{

}

