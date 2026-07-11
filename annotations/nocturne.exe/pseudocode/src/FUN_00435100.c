// Name: FUN_00435100
// Address: 00435100
// Address Range: [[00435100, 00435157]]
// Convention: unknown
// Signature: int FUN_00435100(undefined4 param_1)

#include "nocturne.h"

int FUN_00435100(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00452590(param_1);
  iVar1 = FUN_005644a7(iVar1 + 0x398,800,&DAT_0059b3a0);
  iVar1 = FUN_005644a7(iVar1 + 0x377b8,0x32,&DAT_0059b3c0);
  *(uint *)(iVar1 + 0x2fac) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  return iVar1 + -0x37b50;
}
