// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0
// Address: 0045dca0
// Address Range: [[0045dca0, 0045dcc6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0(CDrawSurface *this_ptr,char *text,int x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0(CDrawSurface *this_ptr,char *text,int x,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
            (this_ptr,text,x,0,y,0,TEXT_ALIGN_LEFT_VCENTER);
  return;
}
