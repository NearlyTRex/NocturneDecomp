// Name: engine_2d.c_drawLine3D_FUN_00401320
// Address: 00401320
// Address Range: [[00401320, 00401456]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawLine3D_FUN_00401320(int x1, int y1, uint z1, int x2, int y2, uint z2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawLine3D_FUN_00401320(int x1,int y1,uint z1,int x2,int y2,uint z2)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = 1;
  uVar1 = z2;
  local_14 = x2;
  local_18 = y2;
  if (y2 < y1) {
    uVar1 = z1;
    local_14 = x1;
    local_18 = y1;
    z1 = z2;
    y1 = y2;
    x1 = x2;
  }
  local_14 = local_14 - x1;
  local_18 = local_18 - y1;
  if (local_14 < 0) {
    local_14 = -local_14;
    local_24 = -1;
  }
  iVar2 = uVar1 - z1;
  if (local_18 < local_14) {
    iVar3 = local_18 * 2 - local_14;
    if (-1 < local_14) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401290(x1,y1,z1);
        if (0 < iVar3) {
          y1 = y1 + 1;
          iVar3 = iVar3 - unaff_EBP;
        }
        x1 = x1 + local_20;
        iVar3 = iVar3 + local_14;
        z1 = z1 + iVar2 / (local_14 + 1);
        local_18 = local_18 + 1;
      } while (local_18 <= unaff_EBP);
    }
  }
  else {
    iVar2 = local_14 * 2 - local_18;
    if (-1 < local_18) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401290(x1,y1,z1);
        if (0 < iVar2) {
          iVar2 = iVar2 - local_14;
        }
        y1 = y1 + 1;
        local_1c = local_1c + 1;
        iVar2 = iVar2 + unaff_EBP;
        z1 = z1 + local_24;
      } while (local_1c <= local_14);
    }
  }
  return;
}
