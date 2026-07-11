// Name: FUN_004a8a10
// Address: 004a8a10
// Address Range: [[004a8a10, 004a8a5d]]
// Convention: unknown
// Signature: int FUN_004a8a10(undefined4 param_1)

#include "nocturne.h"

int FUN_004a8a10(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_LAB_0059e0e4;
  FUN_00454580(iVar1,"gasmask.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x150;
}
