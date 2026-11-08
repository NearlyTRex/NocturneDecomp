// Name: FUN_005adda0
// Address: 005adda0
// Address Range: [[005adda0, 005addf7]]
// Convention: unknown
// Signature: int FUN_005adda0(undefined4 param_1)

#include "nocturne.h"

int FUN_005adda0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044dc10(param_1);
  iVar1 = FUN_005b7f5f(iVar1 + 0x398,800,&DAT_006011e0);
  iVar1 = FUN_005b7f5f(iVar1 + 0x377b8,0x32,&DAT_00601200);
  *(uint *)(iVar1 + 0x2fac) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  return iVar1 + -0x37b50;
}
