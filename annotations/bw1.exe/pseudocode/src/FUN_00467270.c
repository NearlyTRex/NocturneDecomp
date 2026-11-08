// Name: FUN_00467270
// Address: 00467270
// Address Range: [[00467270, 004672ae]]
// Convention: unknown
// Signature: void FUN_00467270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00467270(int param_1,uint param_2,uint param_3,uint param_4)

{
  if (*(int *)(param_1 + 0x110) < 1) {
    return;
  }
  FUN_004672f0(param_1,param_2,param_3);
  FUN_004673a0(param_1,param_3,param_4);
  return;
}
