// Name: FUN_00481fd0
// Address: 00481fd0
// Address Range: [[00481fd0, 0048200c]]
// Convention: unknown
// Signature: void FUN_00481fd0(int param_1)

#include "nocturne.h"

void FUN_00481fd0(int param_1)

{
  FUN_0044b810(param_1);
  FUN_00454510(param_1 + 0x1ec);
  *(uint *)(param_1 + 0xf8) = 1;
  *(uint *)(param_1 + 0x3d0) = 0;
  *(uint *)(param_1 + 0x3d4) = 0;
  return;
}
