// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
// Address: 00489800
// Address Range: [[00489800, 0048982b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800 (CDrawSurface *this_ptr,char *text,int x,int width,int y)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
          (CDrawSurface *this_ptr,char *text,int x,int width,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,text,x,width,y,0,TEXT_ALIGN_CENTER_IN_BOUNDS);
  return;
}
