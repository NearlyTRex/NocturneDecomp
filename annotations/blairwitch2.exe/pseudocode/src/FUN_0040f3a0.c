// Name: FUN_0040f3a0
// Address: 0040f3a0
// Address Range: [[0040f3a0, 0040f3e0]]
// Convention: unknown
// Signature: undefined8 FUN_0040f3a0(int param_1)

#include "nocturne.h"

ulonglong FUN_0040f3a0(int param_1)

{
  uint uVar1;
  
  FUN_0044fd00(param_1 + 0x2b8);
  FUN_00408a80(param_1);
  uVar1 = (uint)(*(int *)(param_1 + 0x434) == 0);
  *(uint *)(param_1 + 0x100) = uVar1;
  return CONCAT44(*(int *)(param_1 + 0x434),uVar1);
}
