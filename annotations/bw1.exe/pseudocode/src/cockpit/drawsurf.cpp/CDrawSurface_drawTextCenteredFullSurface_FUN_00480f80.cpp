// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80
// Address: 00480f80
// Address Range: [[00480f80, 00480f9f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80(CDrawSurface *this_ptr,char *text)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80(CDrawSurface *this_ptr,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20
            (this_ptr,text,0,this_ptr->width + -1,0,this_ptr->height + -1);
  return;
}
