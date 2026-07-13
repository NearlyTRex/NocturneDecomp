// Name: FUN_0042a120
// Address: 0042a120
// Address Range: [[0042a120, 0042a140]]
// Convention: unknown
// Signature: void FUN_0042a120(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0042a120(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x2f08) != 0) {
    return;
  }
  FUN_0040b090(param_1,param_2,param_3);
  return;
}
