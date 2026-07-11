// Name: FUN_0053ff50
// Address: 0053ff50
// Address Range: [[0053ff50, 0053ffb0]]
// Convention: unknown
// Signature: undefined4 FUN_0053ff50(int param_1)

#include "nocturne.h"

uint FUN_0053ff50(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x24f0);
  if (((iVar1 == 0) ||
      (uVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x6c))(iVar1), (uVar3 & 4) == 0)) &&
     ((*(int *)(param_1 + 0x1fa94) == 0 || (*(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8) != 3)))) {
    return 0;
  }
  uVar2 = 0x41200000;
  *(uint *)(param_1 + 0x1faa0) = 3;
  *(uint *)(param_1 + 0x1fa4c) = uVar2;
  return 1;
}
