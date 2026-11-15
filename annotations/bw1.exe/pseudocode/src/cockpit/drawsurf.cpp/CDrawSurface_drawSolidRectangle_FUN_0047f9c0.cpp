// Name: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0047f9c0
// Address: 0047f9c0
// Address Range: [[0047f9c0, 0047fa1f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_0047f9c0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_0047f9c0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  uint uVar1;
  uint unaff_retaddr;
  
  uVar1 = _DAT_00612550;
  _DAT_00612550 = 1;
  _DAT_00612554 = 0;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0047fb20(this_ptr,x1,y1,x2,y2);
  _DAT_00612550 = uVar1;
  _DAT_00612554 = unaff_retaddr;
  return;
}
