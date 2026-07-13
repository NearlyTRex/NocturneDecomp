// Name: FUN_004c3460
// Address: 004c3460
// Address Range: [[004c3460, 004c34b7]]
// Convention: unknown
// Signature: int FUN_004c3460(undefined4 param_1)

#include "nocturne.h"

int FUN_004c3460(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_0059f824;
  FUN_00454580(iVar1,"key1.kfm");
  *(uint *)(iVar1 + 0x17c) = 1;
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x150;
}
