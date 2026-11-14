// Name: core_prye.cpp_FUN_005262f0
// Address: 005262f0
// Address Range: [[005262f0, 0052636b]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_005262f0(int param_1)

#include "nocturne.h"

uint core_prye_cpp_FUN_005262f0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x2628);
  if (((iVar2 == 0) ||
      (uVar3 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x74))(iVar2), (uVar3 & 4) == 0)) &&
     ((iVar2 = *(int *)(param_1 + 0x20c24), iVar2 == 0 ||
      ((*(int *)(iVar2 + 0x2e0) != 3 ||
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xe8))(iVar2), iVar2 == 0)))))) {
    return 0;
  }
  uVar1 = 0x41200000;
  *(uint *)(param_1 + 0x20b64) = 3;
  *(uint *)(param_1 + 0x20bdc) = uVar1;
  return 1;
}
