// Name: engine_2d.c_drawLine_FUN_004011b0
// Address: 004011b0
// Address Range: [[004011b0, 00401283]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawLine_FUN_004011b0(int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawLine_FUN_004011b0(int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int x;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  
  local_20 = 1;
  x = x1;
  iVar2 = y2;
  if (y2 < y1) {
    x = x2;
    x2 = x1;
    iVar2 = y1;
    y1 = y2;
  }
  iVar2 = iVar2 - y1;
  iVar1 = x2 - x;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
    local_20 = -1;
  }
  if (iVar2 < iVar1) {
    local_18 = 0;
    iVar3 = iVar2 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        engine_2d_c_plotPixel_FUN_00401140(x,y1);
        if (0 < iVar3) {
          y1 = y1 + 1;
          iVar3 = iVar3 - iVar1;
        }
        local_18 = local_18 + 1;
        x = x + local_20;
        iVar3 = iVar3 + iVar2;
      } while (local_18 <= iVar1);
    }
  }
  else {
    local_1c = 0;
    iVar4 = iVar1 * 2 - iVar2;
    if (-1 < iVar2) {
      do {
        engine_2d_c_plotPixel_FUN_00401140(x,y1);
        if (0 < iVar4) {
          iVar4 = iVar4 - iVar2;
          x = x + local_20;
        }
        y1 = y1 + 1;
        local_1c = local_1c + 1;
        iVar4 = iVar4 + iVar1;
      } while (local_1c <= iVar2);
    }
  }
  return;
}
