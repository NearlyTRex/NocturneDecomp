// Name: engine_2d.c_drawLine_FUN_004011b0
// Address: 004011b0
// Address Range: [[004011b0, 00401283]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawLine_FUN_004011b0(int x1,int y1,int x2,int y2)

{
  int unaff_EBP;
  int iVar1;
  int x;
  int iVar2;
  int local_20;
  int local_18;
  int local_14;
  
  local_20 = 1;
  x = x1;
  local_14 = y2;
  if (y2 < y1) {
    x = x2;
    x2 = x1;
    local_14 = y1;
    y1 = y2;
  }
  local_14 = local_14 - y1;
  iVar1 = x2 - x;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
    local_20 = -1;
  }
  if (local_14 < iVar1) {
    iVar2 = local_14 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        engine_2d_c_plotPixel_FUN_00401140(x,y1);
        if (0 < iVar2) {
          y1 = y1 + 1;
          iVar2 = iVar2 - iVar1;
        }
        local_14 = local_14 + 1;
        x = x + local_20;
        iVar2 = iVar2 + unaff_EBP;
      } while (local_14 <= iVar1);
    }
  }
  else {
    iVar2 = iVar1 * 2 - local_14;
    if (-1 < local_14) {
      do {
        engine_2d_c_plotPixel_FUN_00401140(x,y1);
        if (0 < iVar2) {
          iVar2 = iVar2 - unaff_EBP;
          x = x + local_20;
        }
        y1 = y1 + 1;
        local_18 = local_18 + 1;
        iVar2 = iVar2 + iVar1;
      } while (local_18 <= unaff_EBP);
    }
  }
  return;
}
