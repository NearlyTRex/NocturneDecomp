// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
// Address: 00489660
// Address Range: [[00489660, 00489686]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660(CDrawSurface *this_ptr,char *text,int x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660(CDrawSurface *this_ptr,char *text,int x,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,text,x,0,y,0,TEXT_ALIGN_LEFT_VCENTER);
  return;
}
