// Name: FUN_00483800
// Address: 00483800
// Address Range: [[00483800, 0048384c]]
// Convention: unknown
// Signature: void FUN_00483800(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00483800(uint param_1,uint *param_2,uint *param_3)

{
  if (param_3 == (uint *)0x0) {
    FUN_00507c70(*param_2,param_2[1],param_2[2],0,0,0);
    return;
  }
  FUN_00507c70(*param_2,param_2[1],param_2[2],*param_3,param_3[1],param_3[2]);
  return;
}
