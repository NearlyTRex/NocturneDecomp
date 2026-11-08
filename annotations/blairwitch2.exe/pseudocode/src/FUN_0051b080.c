// Name: FUN_0051b080
// Address: 0051b080
// Address Range: [[0051b080, 0051b0ab]]
// Convention: unknown
// Signature: undefined4 * FUN_0051b080(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_0051b080(uint *param_1)

{
  uint *puVar1;
  
  *param_1 = 0;
  param_1[0x65] = &PTR_FUN_005fad64;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (puVar1 != param_1 + 100);
  return param_1;
}
