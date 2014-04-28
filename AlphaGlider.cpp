#define ORBITER_MODULE

#include "AlphaGlider.h"

AlphaGlider::AlphaGlider (OBJHANDLE hObj, int fmodel)
: VESSEL2 (hObj, fmodel)
{
  
}


AlphaGlider::~AlphaGlider ()
{
}


void AlphaGlider::clbkSetClassCaps (FILEHANDLE cfg)
{
  const double MAX_MAIN_THRUST = 3e12;
  const double MAX_RETRRO_THRUST = 3e12
  th_main = CreateThruster (v(0,0,-8) _v(0,0,1), MAX_MAIN_THRUST,
}

void AlphaGlider::clbkLoadStateEx (FILEHANDLE scn, void *vs)
{
}

void AlphaGlider::clbkSaveState (FILEHANDLE scn)
{
}


void AlphaGlider::clbkPreStep (double simt, double simdt, double mjd)
{
}

void AlphaGlider::clbkPostStep (double simt, double simdt, double mjd)
{
}


int AlphaGlider::clbkConsumeBufferedKey (DWORD key, bool down, char *kstate)
{
}


DLLCLBK void InitModule (HINSTANCE hModule)
{
  G_hDLL;
}


DLLCLBK void ExitModule (HINSTANCE hModule)
{
}

DLLCLBK VESSEL *ovcInit (OBJHANDLE hvessel, int flightmodel)
{	
}

DLLCLBK void ovcExit (VESSEL *vessel)
{
}
