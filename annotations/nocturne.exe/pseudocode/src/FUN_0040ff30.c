// Name: FUN_0040ff30
// Address: 0040ff30
// Address Range: [[0040ff30, 0040ff6f]]
// Convention: unknown
// Signature: undefined8 FUN_0040ff30(int param_1)

#include "nocturne.h"

ulonglong FUN_0040ff30(int param_1)

{
  uint uVar1;
  
  FUN_00454510(param_1 + 0x150);
  FUN_00409fc0(param_1);
  uVar1 = (uint)(*(int *)(param_1 + 0x2cc) == 0);
  *(uint *)(param_1 + 0x100) = uVar1;
  return CONCAT44(*(int *)(param_1 + 0x2cc),uVar1);
}
