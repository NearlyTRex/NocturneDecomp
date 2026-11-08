// Name: FUN_00520da0
// Address: 00520da0
// Address Range: [[00520da0, 00520de5]]
// Convention: unknown
// Signature: void FUN_00520da0(int param_1)

#include "nocturne.h"

void FUN_00520da0(int param_1)

{
  if (*(int *)(param_1 + 0x20c24) == *(int *)(param_1 + 0x2628)) {
    *(uint *)(param_1 + 0x20c24) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  FUN_004fc0d0(param_1 + 0x158,0,1);
  return;
}
