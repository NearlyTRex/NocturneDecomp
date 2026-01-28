// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
// Address: 00489b60
// Address Range: [[00489b60, 00489b80]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60 (CDrawSurface *this_ptr,int x,int y,char *text)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
          (CDrawSurface *this_ptr,int x,int y,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
            (this_ptr,x,y,0,(char *)(this_ptr->height + -1));
  return;
}
