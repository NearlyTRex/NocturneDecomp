// Name: FUN_004ec020
// Address: 004ec020
// Address Range: [[004ec020, 004ec08e]]
// Convention: unknown
// Signature: undefined4 FUN_004ec020(int param_1)

#include "nocturne.h"

uint FUN_004ec020(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1fe24) == 0) {
    return 0;
  }
  iVar1 = FUN_0040c550(*(int *)(param_1 + 0x1fe24),"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_004ebeb0(param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  uVar2 = FUN_004f9bd0(param_1 + 0x1fae8,*(uint *)(param_1 + 0x1fe24));
  return uVar2;
}
