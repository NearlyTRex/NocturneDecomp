// Name: FUN_00409ed0
// Address: 00409ed0
// Address Range: [[00409ed0, 00409f10]]
// Convention: unknown
// Signature: undefined4 * FUN_00409ed0(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_00409ed0(uint param_1,uint *param_2)

{
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[2] = 0xc0000000;
  param_2[3] = 0x40800000;
  *param_2 = 0;
  return param_2;
}
