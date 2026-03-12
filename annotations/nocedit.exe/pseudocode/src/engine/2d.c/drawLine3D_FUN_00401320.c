// Name: engine_2d.c_drawLine3D_FUN_00401320
// Address: 00401320
// Address Range: [[00401320, 00401456]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawLine3D_FUN_00401320(int x1,int y1,uint z1,int x2,int y2,uint z2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawLine3D_FUN_00401320(int x1,int y1,uint z1,int x2,int y2,uint z2)

{
  uint uVar1;
  int iVar2;
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  local_24 = 1;
  uVar1 = z2;
  iVar5 = x2;
  iVar1 = y2;
  if (y2 < y1) {
    uVar1 = z1;
    iVar5 = x1;
    iVar1 = y1;
    z1 = z2;
    y1 = y2;
    x1 = x2;
  }
  local_14 = iVar5 - x1;
  iVar3 = iVar1 - y1;
  if (local_14 < 0) {
    local_14 = -local_14;
    local_24 = -1;
  }
  iVar2 = uVar1 - z1;
  if (iVar3 < local_14) {
    iVar4 = iVar3 * 2 - local_14;
    local_1c = 0;
    if (-1 < local_14) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401290(x1,y1,z1);
        if (0 < iVar4) {
          y1 = y1 + 1;
          iVar4 = iVar4 - local_14;
        }
        x1 = x1 + local_24;
        iVar4 = iVar4 + iVar3;
        z1 = z1 + iVar2 / (local_14 + 1);
        local_1c = local_1c + 1;
      } while (local_1c <= local_14);
    }
  }
  else {
    iVar5 = local_14 * 2 - iVar3;
    local_20 = 0;
    if (-1 < iVar3) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401290(x1,y1,z1);
        if (0 < iVar5) {
          iVar5 = iVar5 - iVar3;
          x1 = x1 + local_24;
        }
        y1 = y1 + 1;
        local_20 = local_20 + 1;
        iVar5 = iVar5 + local_14;
        z1 = z1 + iVar2 / (iVar3 + 1);
      } while (local_20 <= iVar3);
    }
  }
  return;
}
