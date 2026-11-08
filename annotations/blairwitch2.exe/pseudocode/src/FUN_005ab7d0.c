// Name: FUN_005ab7d0
// Address: 005ab7d0
// Address Range: [[005ab7d0, 005ab8c7]]
// Convention: unknown
// Signature: void FUN_005ab7d0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ab7d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(float *)(param_1 + 0x11430) <= 0.0) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005f0c96;
  }
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (0.0 < fVar1) {
    FUN_00488890(param_1,param_2);
    if (*(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x10a78)) {
      *(uint *)(param_1 + 0x10a7c) = *(uint *)(param_1 + 0x11378);
    }
    *(uint *)(param_1 + 0x11404) = 0;
    if (*(char *)(param_1 + 0x11444) != '\0') {
      iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x1184c));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x11444);
        *(uint *)(param_1 + 0x1184c) = uVar3;
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x11543) != '\0') {
      FUN_0055ae50(0x0264B290,param_1,param_1 + 0x11543,param_1 + 0x20);
    }
    *(uint *)(param_1 + 0x25a8) = 0;
    FUN_0059d8e0(param_1 + 0x10af8,"@Death" + 1);
  }
  return;
}
