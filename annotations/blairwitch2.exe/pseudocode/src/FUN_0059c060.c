// Name: FUN_0059c060
// Address: 0059c060
// Address Range: [[0059c060, 0059c0ad]]
// Convention: unknown
// Signature: int FUN_0059c060(undefined4 param_1)

#include "nocturne.h"

int FUN_0059c060(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5fe634;
  FUN_0044fd70(iVar1,"doc-goggles.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x2b4;
}
