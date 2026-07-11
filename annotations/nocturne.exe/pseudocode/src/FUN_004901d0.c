// Name: FUN_004901d0
// Address: 004901d0
// Address Range: [[004901d0, 0049020a]]
// Convention: unknown
// Signature: void FUN_004901d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_004901d0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  FUN_00490420(param_1);
  *(uint *)(param_1 + 0x3188) = param_7;
  FUN_0048ff70(param_1,param_2,param_3,param_4,param_5);
  return;
}
