// Name: FUN_00460a50
// Address: 00460a50
// Address Range: [[00460a50, 00460a9c]]
// Convention: unknown
// Signature: void FUN_00460a50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00460a50(uint param_1,uint *param_2,uint *param_3)

{
  if (param_3 == (uint *)0x0) {
    FUN_004cd380(*param_2,param_2[1],param_2[2],0,0,0);
    return;
  }
  FUN_004cd380(*param_2,param_2[1],param_2[2],*param_3,param_3[1],param_3[2]);
  return;
}
