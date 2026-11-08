// Name: FUN_004859a0
// Address: 004859a0
// Address Range: [[004859a0, 00485a29]]
// Convention: unknown
// Signature: int FUN_004859a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004859a0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005899d0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f5df4;
  FUN_0044fd70(iVar2 + 0x2b4,"elephantgun.kfm");
  *(uint *)(iVar2 + 0x6d4) = 0x41200000;
  *(uint *)(iVar2 + 0x434) = 1;
  *(uint *)(iVar2 + 0x438) = 2;
  *(uint *)(iVar2 + 0x43c) = 1;
  *(uint *)(iVar2 + 0x440) = 1;
  *(uint *)(iVar2 + 0x444) = 0x41700000;
  uVar1 = _DAT_005f5dec;
  *(uint *)(iVar2 + 0x448) = 0;
  *(uint *)(iVar2 + 0x6d8) = 0;
  *(uint *)(iVar2 + 0x6c0) = uVar1;
  return iVar2;
}
