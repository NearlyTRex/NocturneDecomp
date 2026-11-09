// Name: crt_unknown.c_FUN_005c03f0
// Address: 005c03f0
// Address Range: [[005c03f0, 005c040f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c03f0(int param_1)

#include "nocturne.h"

int FUN_005c03f0(int param_1)

{
  int iVar1;
  
  iVar1 = _fgetc(*(uint *)(param_1 + 8));
  if (iVar1 == -1) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  return iVar1;
}
