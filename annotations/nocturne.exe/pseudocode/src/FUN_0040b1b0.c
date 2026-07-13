// Name: FUN_0040b1b0
// Address: 0040b1b0
// Address Range: [[0040b1b0, 0040b1ef]]
// Convention: unknown
// Signature: undefined4 * FUN_0040b1b0(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_0040b1b0(uint param_1,uint *param_2)

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
