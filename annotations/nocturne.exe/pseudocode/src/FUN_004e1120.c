// Name: FUN_004e1120
// Address: 004e1120
// Address Range: [[004e1120, 004e1142]]
// Convention: unknown
// Signature: undefined4 * FUN_004e1120(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_004e1120(uint *param_1)

{
  param_1[0x14] = &PTR_FUN_005a0d24;
  *(byte *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  FUN_004e1680(param_1);
  return param_1;
}
