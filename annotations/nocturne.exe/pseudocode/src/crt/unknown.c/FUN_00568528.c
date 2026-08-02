// Name: crt_unknown.c_FUN_00568528
// Address: 00568528
// Address Range: [[00568528, 00568551]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00568528(int param_1)

#include "nocturne.h"

uint FUN_00568528(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + -1;
  if ((iVar1 != 0) &&
     (uVar2 = FUN_00567540(param_1), (*(byte *)(param_1 + 0x10) & 2) == 0)) {
    return uVar2;
  }
  return 0xffffffff;
}
