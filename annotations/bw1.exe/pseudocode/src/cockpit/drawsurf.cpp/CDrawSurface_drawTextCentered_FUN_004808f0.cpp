// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0
// Address: 004808f0
// Address Range: [[004808f0, 00480916]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_004808f0(CDrawSurface *this_ptr,char *text,int x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_004808f0(CDrawSurface *this_ptr,char *text,int x,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
            (this_ptr,text,x,0,y,0,TEXT_ALIGN_CENTER);
  return;
}
