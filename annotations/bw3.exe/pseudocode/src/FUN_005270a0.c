// Name: FUN_005270a0
// Address: 005270a0
// Address Range: [[005270a0, 0052710e]]
// Convention: unknown
// Signature: void FUN_005270a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005270a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004db9e0(param_1 + 0x206e8,"CGoggles",_DAT_01d22e40);
  iVar2 = FUN_0040c840(uVar1);
  if (iVar2 == 0) {
    if (*(int *)(0x01D2130C + 0x264) == 0) {
      return;
    }
  }
  else {
    *(uint *)(iVar2 + 0x2d4) = (uint)(*(int *)(iVar2 + 0x2d4) == 0);
    if (*(int *)(0x01D2130C + 0x264) == 0) {
      return;
    }
  }
  (*(code *)**(uint **)(0x01D2130C + 0xb8c))(0x01D2130C,0);
  return;
}
