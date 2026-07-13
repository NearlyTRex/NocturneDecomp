// Name: FUN_004ee500
// Address: 004ee500
// Address Range: [[004ee500, 004ee557]]
// Convention: unknown
// Signature: int FUN_004ee500(undefined4 param_1)

#include "nocturne.h"

int FUN_004ee500(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005644a7(param_1,8,&DAT_0059df00);
  iVar1 = FUN_005644a7(iVar1 + 0xa0,7,&DAT_0059df00);
  iVar1 = FUN_005644a7(iVar1 + 0x8c,0xf,&DAT_0059df00);
  *(uint *)(iVar1 + 300) = 0;
  *(uint *)(iVar1 + 0x130) = 0;
  return iVar1 + -300;
}
