// Name: FUN_00409fc0
// Address: 00409fc0
// Address Range: [[00409fc0, 00409ffe]]
// Convention: unknown
// Signature: void FUN_00409fc0(int param_1)

#include "nocturne.h"

void FUN_00409fc0(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x114) = 0;
  FUN_0040a000(param_1);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xbc))(param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_004f0360(iVar1,param_1 + 0x20,1);
  return;
}
