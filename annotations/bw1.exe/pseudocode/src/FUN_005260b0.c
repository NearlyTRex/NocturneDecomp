// Name: FUN_005260b0
// Address: 005260b0
// Address Range: [[005260b0, 005260df]]
// Convention: unknown
// Signature: void FUN_005260b0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005260b0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1314) = *(int *)(param_1 + 0x1314) + param_2 * -8;
  *(int *)(param_1 + 0x1318) = *(int *)(param_1 + 0x1318) - param_2;
  return;
}
