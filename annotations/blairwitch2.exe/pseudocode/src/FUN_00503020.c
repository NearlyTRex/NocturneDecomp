// Name: FUN_00503020
// Address: 00503020
// Address Range: [[00503020, 00503042]]
// Convention: unknown
// Signature: undefined4 * FUN_00503020(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_00503020(uint *param_1)

{
  param_1[0x14] = &PTR_FUN_005fa5e4;
  *(byte *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  FUN_005035f0(param_1);
  return param_1;
}
