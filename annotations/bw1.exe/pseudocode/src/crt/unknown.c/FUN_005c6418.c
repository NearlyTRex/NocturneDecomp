// Name: crt_unknown.c_FUN_005c6418
// Address: 005c6418
// Address Range: [[005c6418, 005c6441]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c6418(int param_1)

#include "nocturne.h"

uint FUN_005c6418(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + -1;
  if ((iVar1 != 0) &&
     (uVar2 = FUN_005c5430(param_1), (*(byte *)(param_1 + 0x10) & 2) == 0)) {
    return uVar2;
  }
  return 0xffffffff;
}
