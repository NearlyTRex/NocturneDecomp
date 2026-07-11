// Name: FUN_00474e70
// Address: 00474e70
// Address Range: [[00474e70, 00474e9c]]
// Convention: unknown
// Signature: void FUN_00474e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00474e70(int param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_00475470(param_1,param_2,param_4);
  *(uint *)(param_1 + 0x118) = param_3;
  FUN_00475db0(param_1);
  return;
}
