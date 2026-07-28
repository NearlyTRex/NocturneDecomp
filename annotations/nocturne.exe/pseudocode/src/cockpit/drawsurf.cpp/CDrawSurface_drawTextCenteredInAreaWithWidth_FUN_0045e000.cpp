// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
// Address: 0045e000
// Address Range: [[0045e000, 0045e030]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
            (this_ptr,text,x,width,y,height,TEXT_ALIGN_CENTER_IN_AREA);
  return;
}
