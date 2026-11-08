// Name: FUN_004993f0
// Address: 004993f0
// Address Range: [[004993f0, 0049941a]]
// Convention: unknown
// Signature: undefined4 * FUN_004993f0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_004993f0(uint *param_1,uint param_2)

{
  param_1[3] = &PTR_FUN_005ff814;
  *param_1 = 0;
  param_1[2] = 0;
  FUN_00499420(param_1,param_2);
  return param_1;
}
