// Name: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
// Address: 00487ad0
// Address Range: [[00487ad0, 00487bbe]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int y;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  int x;
  int local_20;
  int local_18;
  int local_14;
  
  local_20 = 1;
  x = x1 - this_ptr->x;
  iVar1 = y1 - this_ptr->y;
  local_14 = y2 - this_ptr->y;
  iVar2 = x2 - this_ptr->x;
  y = iVar1;
  iVar3 = iVar2;
  if (local_14 < iVar1) {
    y = local_14;
    iVar3 = x;
    local_14 = iVar1;
    x = iVar2;
  }
  local_14 = local_14 - y;
  iVar3 = iVar3 - x;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    local_20 = -1;
  }
  if (local_14 < iVar3) {
    iVar1 = local_14 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x,y);
        if (0 < iVar1) {
          y = y + 1;
          iVar1 = iVar1 - iVar3;
        }
        local_18 = local_18 + 1;
        x = x + local_20;
        iVar1 = iVar1 + unaff_EBP;
      } while (local_18 <= iVar3);
    }
  }
  else {
    iVar1 = iVar3 * 2 - local_14;
    if (-1 < local_14) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x,y);
        if (0 < iVar1) {
          iVar1 = iVar1 - unaff_EBP;
          x = x + local_20;
        }
        y = y + 1;
        local_14 = local_14 + 1;
        iVar1 = iVar1 + iVar3;
      } while (local_14 <= unaff_EBP);
    }
  }
  return;
}
