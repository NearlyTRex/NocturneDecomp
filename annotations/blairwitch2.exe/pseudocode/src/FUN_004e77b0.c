// Name: FUN_004e77b0
// Address: 004e77b0
// Address Range: [[004e77b0, 004e77fd]]
// Convention: unknown
// Signature: int FUN_004e77b0(undefined4 param_1)

#include "nocturne.h"

int FUN_004e77b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5f99c4;
  FUN_0044fd70(iVar1,"mirrhack.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x2b4;
}
