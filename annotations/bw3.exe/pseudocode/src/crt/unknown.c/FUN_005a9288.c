// Name: crt_unknown.c_FUN_005a9288
// Address: 005a9288
// Address Range: [[005a9288, 005a92b1]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a9288(int param_1)

#include "nocturne.h"

uint FUN_005a9288(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + -1;
  if ((iVar1 != 0) &&
     (uVar2 = FUN_005a82a0(param_1), (*(byte *)(param_1 + 0x10) & 2) == 0)) {
    return uVar2;
  }
  return 0xffffffff;
}
