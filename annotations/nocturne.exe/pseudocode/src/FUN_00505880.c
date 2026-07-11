// Name: FUN_00505880
// Address: 00505880
// Address Range: [[00505880, 005058a5]]
// Convention: unknown
// Signature: undefined4 * FUN_00505880(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint * FUN_00505880(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_0040e160(param_1);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = param_4;
  return param_1;
}
