// Name: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0
// Address: 0045c0f0
// Address Range: [[0045c0f0, 0045c1de]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int y;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  int unaff_EDI;
  int x;
  int iStack_20;
  
  iStack_20 = 1;
  x = x1 - this_ptr->x;
  iVar1 = y1 - this_ptr->y;
  iVar4 = y2 - this_ptr->y;
  iVar2 = x2 - this_ptr->x;
  y = iVar1;
  iVar3 = iVar2;
  if (iVar4 < iVar1) {
    y = iVar4;
    iVar3 = x;
    iVar4 = iVar1;
    x = iVar2;
  }
  iVar4 = iVar4 - y;
  iVar3 = iVar3 - x;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    iStack_20 = -1;
  }
  if (iVar4 < iVar3) {
    iVar4 = iVar4 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(this_ptr,x,y);
        if (0 < iVar4) {
          y = y + 1;
          iVar4 = iVar4 - iVar3;
        }
        unaff_EBP = unaff_EBP + 1;
        x = x + iStack_20;
        iVar4 = iVar4 + unaff_ESI;
      } while (unaff_EBP <= iVar3);
    }
  }
  else {
    iVar1 = iVar3 * 2 - iVar4;
    if (-1 < iVar4) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(this_ptr,x,y);
        if (0 < iVar1) {
          iVar1 = iVar1 - unaff_ESI;
          x = x + iStack_20;
        }
        y = y + 1;
        unaff_EDI = unaff_EDI + 1;
        iVar1 = iVar1 + iVar3;
      } while (unaff_EDI <= unaff_ESI);
    }
  }
  return;
}
