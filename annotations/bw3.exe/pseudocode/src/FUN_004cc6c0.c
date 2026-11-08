// Name: FUN_004cc6c0
// Address: 004cc6c0
// Address Range: [[004cc6c0, 004cc70d]]
// Convention: unknown
// Signature: int FUN_004cc6c0(undefined4 param_1)

#include "nocturne.h"

int FUN_004cc6c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5e0d04;
  FUN_004625f0(iVar1,"doc-goggles.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x158;
}
