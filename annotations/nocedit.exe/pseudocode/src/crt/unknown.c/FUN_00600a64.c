// Name: crt_unknown.c_FUN_00600a64
// Address: 00600a64
// Address Range: [[00600a64, 00600acf]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_00600a64(byte *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00600ac1) */

uint FUN_00600a64(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  INT_03f9b1f0 = (int)param_1;
  if ((*param_1 & 1) != 0) {
    return 3;
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 4);
  if ((param_1 == *(byte **)(iVar1 + 4)) && (*(byte **)(iVar1 + 4) == *(byte **)(uVar2 + 8))) {
    if ((iVar1 == *(int *)(*(int *)(iVar1 + 8) + 4)) &&
       (uVar3 = *(uint *)(*(int *)(uVar2 + 4) + 8), uVar2 == uVar3)) {
      return uVar2 ^ uVar3;
    }
    return 3;
  }
  return 3;
}
