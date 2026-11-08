// Name: FUN_004c6640
// Address: 004c6640
// Address Range: [[004c6640, 004c668d]]
// Convention: unknown
// Signature: int FUN_004c6640(undefined4 param_1)

#include "nocturne.h"

int FUN_004c6640(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5e0914;
  FUN_004625f0(iVar1,0x5c4031);
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x158;
}
