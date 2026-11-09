// Name: crt_unknown.c_FUN_005b8250
// Address: 005b8250
// Address Range: [[005b8250, 005b827e]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005b8250(undefined4 *param_1)

#include "nocturne.h"

uint FUN_005b8250(uint *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = FUN_005b8280(param_1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  pbVar1 = (byte *)*param_1;
  param_1[1] = param_1[1] + -1;
  *param_1 = pbVar1 + 1;
  return (uint)*pbVar1;
}
