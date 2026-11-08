// Name: FUN_0053b280
// Address: 0053b280
// Address Range: [[0053b280, 0053b2b6]]
// Convention: unknown
// Signature: void FUN_0053b280(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0053b280(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + 0x14c + param_2 * 0x1a4) = param_3;
  if (param_2 != *(int *)(param_1 + 0x15aeb8)) {
    return;
  }
  FUN_0044f680(0x2038f4c,param_3);
  return;
}
