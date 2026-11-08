// Name: FUN_00408ae0
// Address: 00408ae0
// Address Range: [[00408ae0, 00408b3e]]
// Convention: unknown
// Signature: void FUN_00408ae0(int param_1)

#include "nocturne.h"

void FUN_00408ae0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040d0c0(*(uint *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_0040d0c0(*(uint *)(param_1 + 0x38));
  *(uint *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_0040d0c0(*(uint *)(param_1 + 0x34));
  *(uint *)(param_1 + 0x34) = uVar1;
  FUN_00449280(param_1 + 0x3c,param_1 + 0x30);
  return;
}
