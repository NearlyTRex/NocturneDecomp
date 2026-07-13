// Name: FUN_0048cb00
// Address: 0048cb00
// Address Range: [[0048cb00, 0048cb2a]]
// Convention: unknown
// Signature: int FUN_0048cb00(undefined4 param_1)

#include "nocturne.h"

int FUN_0048cb00(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ef010(param_1);
  iVar1 = FUN_005644a7(iVar1 + 0x78,3,&DAT_005993b0);
  *(byte ***)(iVar1 + -0x44) = &PTR_FUN_0059d284;
  return iVar1 + -0x78;
}
