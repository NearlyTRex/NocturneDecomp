// Name: FUN_0040ef20
// Address: 0040ef20
// Address Range: [[0040ef20, 0040ef60]]
// Convention: unknown
// Signature: undefined8 FUN_0040ef20(int param_1)

#include "nocturne.h"

ulonglong FUN_0040ef20(int param_1)

{
  uint uVar1;
  
  FUN_004688e0(param_1 + 0x15c);
  FUN_00408850(param_1);
  uVar1 = (uint)(*(int *)(param_1 + 0x2d8) == 0);
  *(uint *)(param_1 + 0x100) = uVar1;
  return CONCAT44(*(int *)(param_1 + 0x2d8),uVar1);
}
