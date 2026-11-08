// Name: FUN_004e7a50
// Address: 004e7a50
// Address Range: [[004e7a50, 004e7a6b]]
// Convention: unknown
// Signature: void FUN_004e7a50(int param_1,int param_2)

#include "nocturne.h"

void FUN_004e7a50(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x430)) {
    return;
  }
  *(uint *)(param_1 + 0x430) = 0;
  return;
}
