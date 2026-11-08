// Name: FUN_00416b60
// Address: 00416b60
// Address Range: [[00416b60, 00416b79]]
// Convention: unknown
// Signature: undefined4 FUN_00416b60(int param_1)

#include "nocturne.h"

uint FUN_00416b60(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x158) != 0) {
    return 0;
  }
  uVar1 = FUN_00409db0(param_1);
  return uVar1;
}
