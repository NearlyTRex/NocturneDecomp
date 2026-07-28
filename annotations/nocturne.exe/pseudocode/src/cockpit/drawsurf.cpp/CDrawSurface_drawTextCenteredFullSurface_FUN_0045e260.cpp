// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260
// Address: 0045e260
// Address Range: [[0045e260, 0045e27f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260(CDrawSurface *this_ptr,char *text)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260(CDrawSurface *this_ptr,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
            (this_ptr,text,0,this_ptr->width + -1,0,this_ptr->height + -1);
  return;
}
