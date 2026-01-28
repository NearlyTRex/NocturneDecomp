// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
// Address: 00489ab0
// Address Range: [[00489ab0, 00489acf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0 (CDrawSurface *this_ptr,int y,int height,char *text)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
          (CDrawSurface *this_ptr,int y,int height,char *text)

{
  char *unaff_EBX;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
            (this_ptr,y,0,this_ptr->width + -1,height,unaff_EBX);
  return;
}
