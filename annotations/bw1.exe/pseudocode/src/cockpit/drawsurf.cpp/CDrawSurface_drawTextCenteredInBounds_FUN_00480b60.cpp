// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60
// Address: 00480b60
// Address Range: [[00480b60, 00480b8b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60(CDrawSurface *this_ptr,char *text,int x,int width,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60(CDrawSurface *this_ptr,char *text,int x,int width,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
            (this_ptr,text,x,width,y,0,TEXT_ALIGN_CENTER_IN_BOUNDS);
  return;
}
