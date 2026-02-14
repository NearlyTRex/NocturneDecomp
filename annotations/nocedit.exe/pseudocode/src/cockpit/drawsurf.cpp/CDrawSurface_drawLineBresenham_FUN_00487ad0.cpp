// Name: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
// Address: 00487ad0
// Address Range: [[00487ad0, 00487bbe]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int y;
  int iVar2;
  int iVar3;
  int iVar4;
  int x;
  int local_20;
  int local_1c;
  int local_18;
  
  local_20 = 1;
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
    local_20 = -1;
  }
  if (iVar4 < iVar3) {
    local_1c = 0;
    iVar1 = iVar4 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x,y);
        if (0 < iVar1) {
          y = y + 1;
          iVar1 = iVar1 - iVar3;
        }
        local_1c = local_1c + 1;
        x = x + local_20;
        iVar1 = iVar1 + iVar4;
      } while (local_1c <= iVar3);
    }
  }
  else {
    local_18 = 0;
    iVar1 = iVar3 * 2 - iVar4;
    if (-1 < iVar4) {
      do {
        cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x,y);
        if (0 < iVar1) {
          iVar1 = iVar1 - iVar4;
          x = x + local_20;
        }
        y = y + 1;
        local_18 = local_18 + 1;
        iVar1 = iVar1 + iVar3;
      } while (local_18 <= iVar4);
    }
  }
  return;
}
