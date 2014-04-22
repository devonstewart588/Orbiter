#ifndef __TEMPLATE_H
#define __TEMPLATE_H

#define STRICT

#include "orbitersdk.h"

class Template: public VESSEL2 {
public:
	Template (OBJHANDLE hObj, int fmodel);
	~Template ();
	void clbkLoadStateEx (FILEHANDLE scn, void *vs);
	void clbkSaveState (FILEHANDLE scn);
	int  clbkConsumeBufferedKey (DWORD key, bool down, char *kstate);
	void clbkSetClassCaps (FILEHANDLE cfg);
	void clbkPreStep (double simt, double simdt, double mjd);
	void clbkPostStep (double simt, double simdt, double mjd);
	
};


#endif
