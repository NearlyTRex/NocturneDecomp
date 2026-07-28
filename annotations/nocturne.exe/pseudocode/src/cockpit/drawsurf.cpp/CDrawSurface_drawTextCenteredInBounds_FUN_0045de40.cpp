// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40
// Address: 0045de40
// Address Range: [[0045de40, 0045de6b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40(CDrawSurface *this_ptr,char *text,int x,int width,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40(CDrawSurface *this_ptr,char *text,int x,int width,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
            (this_ptr,text,x,width,y,0,TEXT_ALIGN_CENTER_IN_BOUNDS);
  return;
}
