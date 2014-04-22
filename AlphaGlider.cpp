#define ORBITER_MODULE

#include "Template.h"

void VLiftCoeff (double aoa, double M, double Re, double *cl, double *cm, double *cd)
{
  SetEmptyMass (1000.0);
  SetSize (10.0);
  AddMesh (oapiLoadMeshGlobal) ("DeltaGlider.msh")
  PROPELLANT_HANDLE ph_main
}

void HLiftCoeff (double beta, double M, double Re, double *cl, double *cm, double *cd)
{
}

Template::Template (OBJHANDLE hObj, int fmodel)
: VESSEL2 (hObj, fmodel)
{
}


Template::~Template ()
{
}

void Template::clbkSetClassCaps (FILEHANDLE cfg)
{
}

void Template::clbkLoadStateEx (FILEHANDLE scn, void *vs)
{
}

void Template::clbkSaveState (FILEHANDLE scn)
{
}


void Template::clbkPreStep (double simt, double simdt, double mjd)
{
}

void Template::clbkPostStep (double simt, double simdt, double mjd)
{
}


int Template::clbkConsumeBufferedKey (DWORD key, bool down, char *kstate)
{
}


DLLCLBK void InitModule (HINSTANCE hModule)
{
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
