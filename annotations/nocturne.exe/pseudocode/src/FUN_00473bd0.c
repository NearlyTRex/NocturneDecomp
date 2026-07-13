// Name: FUN_00473bd0
// Address: 00473bd0
// Address Range: [[00473bd0, 00473bfa]]
// Convention: unknown
// Signature: undefined4 * FUN_00473bd0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_00473bd0(uint *param_1,uint param_2)

{
  param_1[3] = &PTR_FUN_0059ca74;
  *param_1 = 0;
  param_1[2] = 0;
  FUN_00473c00(param_1,param_2);
  return param_1;
}
