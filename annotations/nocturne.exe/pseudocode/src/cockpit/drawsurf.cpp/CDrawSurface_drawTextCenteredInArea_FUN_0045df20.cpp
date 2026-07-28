// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20
// Address: 0045df20
// Address Range: [[0045df20, 0045df4b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20(CDrawSurface *this_ptr,char *text,int x,int y,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20(CDrawSurface *this_ptr,char *text,int x,int y,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
            (this_ptr,text,x,0,y,height,TEXT_ALIGN_LEFT_IN_AREA);
  return;
}
