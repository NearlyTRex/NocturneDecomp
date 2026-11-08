// Name: FUN_00591410
// Address: 00591410
// Address Range: [[00591410, 00591470]]
// Convention: unknown
// Signature: undefined4 FUN_00591410(int param_1)

#include "nocturne.h"

uint FUN_00591410(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x2628);
  if (((iVar1 == 0) ||
      (uVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x74))(iVar1), (uVar3 & 4) == 0)) &&
     ((*(int *)(param_1 + 0x20004) == 0 || (*(int *)(*(int *)(param_1 + 0x20004) + 0x2e0) != 3)))) {
    return 0;
  }
  uVar2 = 0x41200000;
  *(uint *)(param_1 + 0x1ff5c) = 3;
  *(uint *)(param_1 + 0x1ffbc) = uVar2;
  return 1;
}
