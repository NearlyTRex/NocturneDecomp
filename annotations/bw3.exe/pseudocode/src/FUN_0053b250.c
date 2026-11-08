// Name: FUN_0053b250
// Address: 0053b250
// Address Range: [[0053b250, 0053b27f]]
// Convention: unknown
// Signature: void FUN_0053b250(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0053b250(int param_1,uint param_2)

{
  if (*(int *)(DAT_005f2afc + 0x18) != 0) {
    FUN_004f53b0(*(uint *)(param_1 + 0x161668),param_2);
    return;
  }
  FUN_0046b580(DAT_005f2afc,param_2);
  return;
}
