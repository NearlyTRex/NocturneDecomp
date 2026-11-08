// Name: FUN_004de830
// Address: 004de830
// Address Range: [[004de830, 004de887]]
// Convention: unknown
// Signature: int FUN_004de830(undefined4 param_1)

#include "nocturne.h"

int FUN_004de830(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5e2154;
  FUN_004625f0(iVar1,0x5c669f);
  *(uint *)(iVar1 + 0x17c) = 1;
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x158;
}
