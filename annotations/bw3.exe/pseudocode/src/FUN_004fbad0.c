// Name: FUN_004fbad0
// Address: 004fbad0
// Address Range: [[004fbad0, 004fbaf2]]
// Convention: unknown
// Signature: undefined4 * FUN_004fbad0(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_004fbad0(uint *param_1)

{
  param_1[0x14] = &PTR_FUN_005e2c84;
  *(byte *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  FUN_004fc090(param_1);
  return param_1;
}
