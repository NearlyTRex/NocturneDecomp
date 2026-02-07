// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
// Address: 004899c0
// Address Range: [[004899c0, 004899f0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0 (CDrawSurface *this_ptr,char *text,int x,int width,int y,int height)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
          (CDrawSurface *this_ptr,char *text,int x,int width,int y,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,text,x,width,y,height,TEXT_ALIGN_CENTER_IN_AREA);
  return;
}
