// Name: FUN_004f8810
// Address: 004f8810
// Address Range: [[004f8810, 004f883b]]
// Convention: unknown
// Signature: undefined4 * FUN_004f8810(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_004f8810(uint *param_1)

{
  uint *puVar1;
  
  *param_1 = 0;
  param_1[0x65] = &PTR_FUN_005a1484;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (puVar1 != param_1 + 100);
  return param_1;
}
