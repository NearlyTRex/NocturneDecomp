// Name: FUN_004e2a20
// Address: 004e2a20
// Address Range: [[004e2a20, 004e2adf]]
// Convention: unknown
// Signature: int FUN_004e2a20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e2a20(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_005899d0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f95f4;
  FUN_0044fd70(iVar3 + 0x2b4,0x5dbffc);
  *(uint *)(iVar3 + 0x6d8) = 0;
  *(uint *)(iVar3 + 0x6d4) = 0;
  *(uint *)(iVar3 + 0x434) = 0;
  *(uint *)(iVar3 + 0x438) = 0;
  *(uint *)(iVar3 + 0x43c) = 0xb;
  *(uint *)(iVar3 + 0x440) = 0;
  *(uint *)(iVar3 + 0x444) = 0x42000000;
  *(uint *)(iVar3 + 0x448) = 1;
  *(uint *)(iVar3 + 0x6e8) = 1;
  uVar1 = _DAT_005f95cc;
  *(uint *)(iVar3 + 0x44c) = 0;
  uVar2 = _DAT_005f95d0;
  *(uint *)(iVar3 + 0x6e4) = 0;
  *(uint *)(iVar3 + 0x6e0) = 0x3f800000;
  *(uint *)(iVar3 + 0x6c0) = uVar1;
  *(uint *)(iVar3 + 0x6dc) = uVar2;
  return iVar3;
}
