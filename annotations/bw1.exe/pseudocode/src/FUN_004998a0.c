// Name: FUN_004998a0
// Address: 004998a0
// Address Range: [[004998a0, 004998ae]]
// Convention: unknown
// Signature: undefined4 FUN_004998a0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004998a0(int param_1,int param_2)

{
  return *(uint *)(*(int *)(param_1 + 8) + param_2 * 4);
}
