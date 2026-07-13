// Name: FUN_00546c90
// Address: 00546c90
// Address Range: [[00546c90, 00546cd3]]
// Convention: unknown
// Signature: int FUN_00546c90(undefined4 param_1)

#include "nocturne.h"

int FUN_00546c90(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005a3544;
  FUN_00454580(iVar1,"question.kfm");
  return iVar1 + -0x150;
}
