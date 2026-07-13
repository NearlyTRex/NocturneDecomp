// Name: FUN_00411ae0
// Address: 00411ae0
// Address Range: [[00411ae0, 00411b4f]]
// Convention: unknown
// Signature: void FUN_00411ae0(int param_1)

#include "nocturne.h"

void FUN_00411ae0(int param_1)

{
  uint uVar1;
  
  FUN_00454510(param_1 + 0x180);
  FUN_0043b690(param_1 + 0x170,param_1 + 0x150);
  FUN_00409fc0(param_1);
  FUN_00411f20(param_1);
  *(uint *)(param_1 + 0x378) = 0;
  uVar1 = FUN_0040dda0(*(uint *)(param_1 + 0x370),*(uint *)(param_1 + 0x374));
  *(uint *)(param_1 + 0x37c) = uVar1;
  return;
}
