// Name: FUN_004c1340
// Address: 004c1340
// Address Range: [[004c1340, 004c138d]]
// Convention: unknown
// Signature: int FUN_004c1340(undefined4 param_1)

#include "nocturne.h"

int FUN_004c1340(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  *(uint *)(iVar1 + -4) = 0x5f7794;
  FUN_0044fd70(iVar1,0x5d8e6b);
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x2b4;
}
