// Name: FUN_0053c5c0
// Address: 0053c5c0
// Address Range: [[0053c5c0, 0053c5eb]]
// Convention: unknown
// Signature: undefined4 * FUN_0053c5c0(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_0053c5c0(uint *param_1)

{
  uint *puVar1;
  
  *param_1 = 0;
  param_1[0x65] = &PTR_FUN_00604a34;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (puVar1 != param_1 + 100);
  return param_1;
}
