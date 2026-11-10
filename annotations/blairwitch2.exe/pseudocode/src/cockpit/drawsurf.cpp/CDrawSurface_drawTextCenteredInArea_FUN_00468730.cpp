// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730
// Address: 00468730
// Address Range: [[00468730, 0046875b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730(CDrawSurface *this_ptr,char *text,int x,int y,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730(CDrawSurface *this_ptr,char *text,int x,int y,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70
            (this_ptr,text,x,0,y,height,TEXT_ALIGN_LEFT_IN_AREA);
  return;
}
