// Name: FUN_00408850
// Address: 00408850
// Address Range: [[00408850, 0040888f] [00408891, 004088a1]]
// Convention: unknown
// Signature: undefined4 FUN_00408850(int param_1)

#include "nocturne.h"

uint FUN_00408850(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0x114) = 0;
  *(uint *)(param_1 + 0x11c) = 0;
  FUN_004088b0(param_1);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0xc4))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_005334f0(iVar1,param_1 + 0x20,1);
  return uVar2;
}
