// Name: FUN_005241d0
// Address: 005241d0
// Address Range: [[005241d0, 005241f2]]
// Convention: unknown
// Signature: undefined4 * FUN_005241d0(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_005241d0(uint *param_1)

{
  param_1[0x14] = &PTR_FUN_006042e4;
  *(byte *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  FUN_00524790(param_1);
  return param_1;
}
