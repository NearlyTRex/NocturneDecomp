// Name: FUN_004b5b00
// Address: 004b5b00
// Address Range: [[004b5b00, 004b5b6e]]
// Convention: unknown
// Signature: undefined4 FUN_004b5b00(int param_1)

#include "nocturne.h"

uint FUN_004b5b00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1f8d4) == 0) {
    return 0;
  }
  iVar1 = FUN_0040d7e0(*(int *)(param_1 + 0x1f8d4),"N@CHealthItem" + 2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x140))(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_004b5950(param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  uVar2 = FUN_004c1580(param_1 + 0x1f5a0,*(uint *)(param_1 + 0x1f8d4));
  return uVar2;
}
