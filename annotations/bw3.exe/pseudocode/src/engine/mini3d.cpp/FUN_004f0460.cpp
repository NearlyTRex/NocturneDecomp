// Name: FUN_004f0460
// Address: 004f0460
// Address Range: [[004f0460, 004f04bf]]
// Convention: unknown
// Signature: void FUN_004f0460(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0460(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005a3650(param_1 * 0x20 + 0x20);
  if (iVar1 != 0) {
    uVar2 = iVar1 + 0x20U & 0xffffffe0;
    *(char *)(uVar2 - 1) = (char)uVar2 - (char)iVar1;
    return;
  }
  _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
  _DAT_01d71de4 = 0xddf;
  FUN_004e4330("CMini3D::allocVertexBuffer - Allocation of %d vertex failed",param_1);
  uRam0000001f = 0x20;
  return;
}
