// Name: FUN_004774f0
// Address: 004774f0
// Address Range: [[004774f0, 00477528]]
// Convention: unknown
// Signature: void FUN_004774f0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004774f0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2e0) = param_2;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x9ac) = 0;
  }
  if (*(int *)(param_1 + 0x2e0) == 2) {
    *(uint *)(param_1 + 0x9ac) = *(uint *)(param_1 + 0x9b0);
  }
  FUN_00477540(param_1);
  return;
}
