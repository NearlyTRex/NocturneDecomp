// Name: FUN_00546820
// Address: 00546820
// Address Range: [[00546820, 0054686d]]
// Convention: unknown
// Signature: int FUN_00546820(undefined4 param_1)

#include "nocturne.h"

int FUN_00546820(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005a3424;
  FUN_00454580(iVar1,"beartrap.kfm");
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x150;
}
