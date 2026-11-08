// Name: FUN_005237e0
// Address: 005237e0
// Address Range: [[005237e0, 00523847]]
// Convention: unknown
// Signature: void FUN_005237e0(int param_1,float param_2)

#include "nocturne.h"

void FUN_005237e0(int param_1,float param_2)

{
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  FUN_00522b50(param_1,1.0 - param_2,*(uint *)(param_1 + 0x660));
  FUN_00522b50(param_1 + 0x608,param_2,*(uint *)(param_1 + 0x58));
  return;
}
