// Name: FUN_00429e60
// Address: 00429e60
// Address Range: [[00429e60, 00429e80]]
// Convention: unknown
// Signature: void FUN_00429e60(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00429e60(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x3564) != 0) {
    return;
  }
  FUN_00409db0(param_1,param_2,param_3);
  return;
}
