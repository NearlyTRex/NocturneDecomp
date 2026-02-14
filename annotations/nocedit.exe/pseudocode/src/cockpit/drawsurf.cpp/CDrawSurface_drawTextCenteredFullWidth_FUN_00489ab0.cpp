// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
// Address: 00489ab0
// Address Range: [[00489ab0, 00489acf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0(CDrawSurface *this_ptr,char *text,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0(CDrawSurface *this_ptr,char *text,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
            (this_ptr,text,0,this_ptr->width + -1,y);
  return;
}
