// Name: FUN_00454510
// Address: 00454510
// Address Range: [[00454510, 0045452a]]
// Convention: unknown
// Signature: void FUN_00454510(int param_1)

#include "nocturne.h"

void FUN_00454510(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004543b0(param_1 + 0x78);
  *(uint *)(param_1 + 0x178) = uVar1;
  return;
}
