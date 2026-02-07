// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
// Address: 004898e0
// Address Range: [[004898e0, 0048990b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0 (CDrawSurface *this_ptr,char *text,int x,int y,int height)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
          (CDrawSurface *this_ptr,char *text,int x,int y,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,text,x,0,y,height,TEXT_ALIGN_LEFT_IN_AREA);
  return;
}
