// Name: cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090
// Address: 00489090
// Address Range: [[00489090, 004890d3]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090(CDrawSurface * this_ptr, int point_count, CVector2i * points)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawClosedPolyline_FUN_00489090
          (CDrawSurface *this_ptr,int point_count,CVector2i *points)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CVector2i *pCVar4;
  
  iVar1 = point_count + -1;
  iVar2 = 0;
  pCVar4 = points;
  if (0 < point_count) {
    do {
      cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990
                (this_ptr,points[iVar1].x,points[iVar1].y,pCVar4->x,pCVar4->y);
      iVar3 = iVar2 + 1;
      iVar1 = iVar2;
      iVar2 = iVar3;
      pCVar4 = pCVar4 + 1;
    } while (iVar3 < point_count);
  }
  return;
}
