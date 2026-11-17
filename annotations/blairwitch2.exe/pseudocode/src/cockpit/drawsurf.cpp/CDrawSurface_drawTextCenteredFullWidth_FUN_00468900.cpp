// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900
// Address: 00468900
// Address Range: [[00468900, 0046891f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900(CDrawSurface *this_ptr,char *text,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900(CDrawSurface *this_ptr,char *text,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650
            (this_ptr,text,0,this_ptr->width + -1,y);
  return;
}
