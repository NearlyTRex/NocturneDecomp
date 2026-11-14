// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40
// Address: 00480c40
// Address Range: [[00480c40, 00480c6b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40(CDrawSurface *this_ptr,char *text,int x,int y,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40(CDrawSurface *this_ptr,char *text,int x,int y,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
            (this_ptr,text,x,0,y,height,TEXT_ALIGN_LEFT_IN_AREA);
  return;
}
