// Name: FUN_004df650
// Address: 004df650
// Address Range: [[004df650, 004df6f5]]
// Convention: unknown
// Signature: int FUN_004df650(undefined4 param_1)

#include "nocturne.h"

int FUN_004df650(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5e2284;
  FUN_004625f0(iVar1,0x5c6845);
  *(uint *)(iVar1 + 0x17c) = 0x40000000;
  *(uint *)(iVar1 + 0x180) = 0x41200000;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x194) = 0;
  *(uint *)(iVar1 + 400) = *(uint *)(iVar1 + 0x194);
  *(uint *)(iVar1 + 0x18c) = *(uint *)(iVar1 + 400);
  *(uint *)(iVar1 + 0x1a0) = 0;
  *(uint *)(iVar1 + 0x19c) = *(uint *)(iVar1 + 0x1a0);
  *(uint *)(iVar1 + 0x198) = *(uint *)(iVar1 + 0x19c);
  *(uint *)(iVar1 + 0x1a4) = 0;
  return iVar1 + -0x158;
}
