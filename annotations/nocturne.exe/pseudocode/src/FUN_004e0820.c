// Name: FUN_004e0820
// Address: 004e0820
// Address Range: [[004e0820, 004e0887]]
// Convention: unknown
// Signature: void FUN_004e0820(int param_1,float param_2)

#include "nocturne.h"

void FUN_004e0820(int param_1,float param_2)

{
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  FUN_004dfc70(param_1,1.0 - param_2,*(uint *)(param_1 + 0x660));
  FUN_004dfc70(param_1 + 0x608,param_2,*(uint *)(param_1 + 0x58));
  return;
}
