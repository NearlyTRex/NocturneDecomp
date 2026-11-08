// Name: FUN_00502760
// Address: 00502760
// Address Range: [[00502760, 0050278e]]
// Convention: unknown
// Signature: undefined4 * FUN_00502760(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_00502760(uint *param_1)

{
  *param_1 = 0;
  param_1[0x709] = 0;
  FUN_005b77c0(param_1 + 0x70a,0,0x1b580);
  return param_1;
}
