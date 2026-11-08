// Name: FUN_0044e6a0
// Address: 0044e6a0
// Address Range: [[0044e6a0, 0044e6de]]
// Convention: unknown
// Signature: void FUN_0044e6a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0044e6a0(int param_1,uint param_2,uint param_3,uint param_4)

{
  if (*(int *)(param_1 + 0x110) < 1) {
    return;
  }
  FUN_0044e720(param_1,param_2,param_3);
  FUN_0044e7d0(param_1,param_3,param_4);
  return;
}
