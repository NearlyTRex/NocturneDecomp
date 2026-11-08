// Name: FUN_0046cee0
// Address: 0046cee0
// Address Range: [[0046cee0, 0046cf2c]]
// Convention: unknown
// Signature: void FUN_0046cee0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_0046cee0(uint param_1,uint *param_2,uint *param_3)

{
  if (param_3 == (uint *)0x0) {
    FUN_004e56b0(*param_2,param_2[1],param_2[2],0,0,0);
    return;
  }
  FUN_004e56b0(*param_2,param_2[1],param_2[2],*param_3,param_3[1],param_3[2]);
  return;
}
