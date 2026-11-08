// Name: FUN_00504ee0
// Address: 00504ee0
// Address Range: [[00504ee0, 00504f0f]]
// Convention: unknown
// Signature: void FUN_00504ee0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00504ee0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1314) = *(int *)(param_1 + 0x1314) + param_2 * -8;
  *(int *)(param_1 + 0x1318) = *(int *)(param_1 + 0x1318) - param_2;
  return;
}
