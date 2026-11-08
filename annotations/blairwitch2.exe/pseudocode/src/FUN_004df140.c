// Name: FUN_004df140
// Address: 004df140
// Address Range: [[004df140, 004df197]]
// Convention: unknown
// Signature: int FUN_004df140(undefined4 param_1)

#include "nocturne.h"

int FUN_004df140(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5f9054;
  FUN_0044fd70(iVar1,0x5dbbb0);
  *(uint *)(iVar1 + 0x17c) = 1;
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x2b4;
}
