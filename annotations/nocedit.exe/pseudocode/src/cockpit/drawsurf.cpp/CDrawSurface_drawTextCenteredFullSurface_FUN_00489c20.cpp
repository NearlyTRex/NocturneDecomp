// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
// Address: 00489c20
// Address Range: [[00489c20, 00489c3f]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20(CDrawSurface * this_ptr, char * text)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
          (CDrawSurface *this_ptr,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
            (this_ptr,(int)text,0,this_ptr->width + -1,0,(char *)(this_ptr->height + -1));
  return;
}
