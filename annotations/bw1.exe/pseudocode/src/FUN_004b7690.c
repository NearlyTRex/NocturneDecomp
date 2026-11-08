// Name: FUN_004b7690
// Address: 004b7690
// Address Range: [[004b7690, 004b76be]]
// Convention: unknown
// Signature: int FUN_004b7690(undefined4 param_1)

#include "nocturne.h"

int FUN_004b7690(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532130(param_1);
  iVar1 = FUN_005c0357(iVar1 + 0x80,3,&DAT_005fb430);
  *(byte ***)(iVar1 + -0x44) = &PTR_FUN_00600024;
  return iVar1 + -0x80;
}
