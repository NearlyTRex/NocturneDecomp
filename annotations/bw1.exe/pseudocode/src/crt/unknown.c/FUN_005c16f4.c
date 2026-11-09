// Name: crt_unknown.c_FUN_005c16f4
// Address: 005c16f4
// Address Range: [[005c16f4, 005c170b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c16f4(undefined4 *param_1)

#include "nocturne.h"

void FUN_005c16f4(uint *param_1)

{
  uint uVar1;
  
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef;
  uVar1 = *(uint *)(param_1[2] + 8);
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}
