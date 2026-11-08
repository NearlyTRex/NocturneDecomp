// Name: FUN_00425360
// Address: 00425360
// Address Range: [[00425360, 004253c7]]
// Convention: unknown
// Signature: undefined4 FUN_00425360(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00425360(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0057af80(param_1);
  if (*(int *)(param_1 + 0x2d4) != 2) {
    iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x304),_DAT_01c5bc48);
    if (iVar2 == 0) {
      return uVar1;
    }
  }
  iVar2 = param_1 + 0x5a8;
  do {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x14))(iVar2);
    iVar2 = iVar2 + 0x2a4;
  } while (iVar2 != param_1 + 0x1ac8);
  return uVar1;
}
