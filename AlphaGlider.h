#ifndef __AlphaGlider_H
#define __AlphaGlider_H

#define STRICT

#include "orbitersdk.h"

class AlphaGlider: public VESSEL2 {
public:
	AlphaGlider (OBJHANDLE hObj, int fmodel);
	~AlphaGlider ();
	void clbkLoadStateEx (FILEHANDLE scn, void *vs);
	private: double myparam; }; void MyVessel::clbkLoadStateEx (FILEHANDLE scn, void *status)
	{ char *line;
	while (oapiReadScenario_nextline (scn, line)) if (!strnicmp (line, "MYPARAM", 7)) { sscanf (line+7, "%lf", &myparam); } else { ParseScenarioLineEx (line, status); } } }
	{
	void clbkSaveState (FILEHANDLE scn);
	int  clbkConsumeBufferedKey (DWORD key, bool down, char *kstate);
	void clbkSetClassCaps (FILEHANDLE cfg);
	void clbkPreStep (double simt, double simdt, double mjd);
	void clbkPostStep (double simt, double simdt, double mjd);
	
};


#endif

