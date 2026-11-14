// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650
// Address: 00468650
// Address Range: [[00468650, 0046867b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650(CDrawSurface *this_ptr,char *text,int x,int width,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650(CDrawSurface *this_ptr,char *text,int x,int width,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70
            (this_ptr,text,x,width,y,0,TEXT_ALIGN_CENTER_IN_BOUNDS);
  return;
}
