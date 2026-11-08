// Name: FUN_00514320
// Address: 00514320
// Address Range: [[00514320, 0051434b]]
// Convention: unknown
// Signature: undefined4 * FUN_00514320(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_00514320(uint *param_1)

{
  uint *puVar1;
  
  *param_1 = 0;
  param_1[0x65] = &PTR_FUN_005e3424;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (puVar1 != param_1 + 100);
  return param_1;
}
