#ifndef __AlphaGlider_H
#define __AlphaGlider_H

#define STRICT

#include "orbitersdk.h"

class AlphaGlider: public VESSEL2 {
public:
	AlphaGlider (OBJHANDLE hObj, int fmodel);
	~AlphaGlider ();
	void clbkLoadStateEx (FILEHANDLE scn, void *vs);
	void clbkSaveState (FILEHANDLE scn);
	int  clbkConsumeBufferedKey (DWORD key, bool down, char *kstate);
	void clbkSetClassCaps (FILEHANDLE cfg);
	void clbkPreStep (double simt, double simdt, double mjd);
	void clbkPostStep (double simt, double simdt, double mjd);
	
};


#endif
