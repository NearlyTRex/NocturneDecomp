// Name: FUN_004a8680
// Address: 004a8680
// Address Range: [[004a8680, 004a8700]]
// Convention: unknown
// Signature: int FUN_004a8680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

int FUN_004a8680(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte local_108 [256];
  
  iVar1 = FUN_004a8370(param_1);
  iVar1 = FUN_0040d2e0(iVar1 + 0x18);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005e02a4;
  FUN_00465e50(param_2,0,0,local_108,0);
  FUN_0040d460(iVar1,local_108,param_3,param_4);
  *(uint *)(iVar1 + -0x10) = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + -0xc) = *(uint *)(iVar1 + 0x10);
  return iVar1 + -0x18;
}
