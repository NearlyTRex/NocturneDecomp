// Name: FUN_00441310
// Address: 00441310
// Address Range: [[00441310, 00441340]]
// Convention: unknown
// Signature: void FUN_00441310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00441310(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00440800(param_1);
  iVar1 = FUN_00440bd0(iVar1 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005dd494;
  *(uint *)(iVar1 + 0x1c) = param_2;
  *(uint *)(iVar1 + 0x20) = param_3;
  return;
}
