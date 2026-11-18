// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10
// Address: 00480e10
// Address Range: [[00480e10, 00480e2f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10(CDrawSurface *this_ptr,char *text,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10(CDrawSurface *this_ptr,char *text,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60
            (this_ptr,text,0,this_ptr->width + -1,y);
  return;
}
