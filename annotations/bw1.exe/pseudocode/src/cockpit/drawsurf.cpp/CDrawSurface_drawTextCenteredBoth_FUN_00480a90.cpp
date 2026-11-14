// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90
// Address: 00480a90
// Address Range: [[00480a90, 00480ab6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90(CDrawSurface *this_ptr,char *text,int x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90(CDrawSurface *this_ptr,char *text,int x,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
            (this_ptr,text,x,0,y,0,TEXT_ALIGN_CENTER_BOTH);
  return;
}
