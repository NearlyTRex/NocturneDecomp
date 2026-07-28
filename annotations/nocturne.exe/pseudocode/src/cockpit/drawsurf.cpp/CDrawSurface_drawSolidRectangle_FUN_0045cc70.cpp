// Name: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70
// Address: 0045cc70
// Address Range: [[0045cc70, 0045ccdc]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
  uVar2 = DAT_005ae6f8;
  iVar1 = DAT_005ae6f4;
  DAT_005ae6f4 = 1;
  DAT_005ae6f8 = 0;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0(this_ptr,x1,y1,x2,y2);
  dVar3 = round((double)iVar1);
  DAT_005ae6f4 = (int)ROUND(dVar3);
  DAT_005ae6f8 = uVar2;
  return;
}
