// Name: FUN_004fd9c0
// Address: 004fd9c0
// Address Range: [[004fd9c0, 004fd9ef]]
// Convention: unknown
// Signature: void FUN_004fd9c0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004fd9c0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1314) = *(int *)(param_1 + 0x1314) + param_2 * -8;
  *(int *)(param_1 + 0x1318) = *(int *)(param_1 + 0x1318) - param_2;
  return;
}
