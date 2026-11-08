// Name: FUN_004a0d10
// Address: 004a0d10
// Address Range: [[004a0d10, 004a0dad]]
// Convention: unknown
// Signature: int FUN_004a0d10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a0d10(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005899d0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f6b64;
  FUN_0044fd70(iVar2 + 0x2b4,"flamegun.kfm");
  *(uint *)(iVar2 + 0x6d8) = 0;
  *(uint *)(iVar2 + 0x6d4) = 0;
  *(uint *)(iVar2 + 0x434) = 0;
  *(uint *)(iVar2 + 0x438) = 0;
  *(uint *)(iVar2 + 0x43c) = 2;
  *(uint *)(iVar2 + 0x440) = 0;
  *(uint *)(iVar2 + 0x444) = 0x41700000;
  *(uint *)(iVar2 + 0x448) = 1;
  uVar1 = _DAT_005f6b4c;
  *(uint *)(iVar2 + 0x6e0) = 0;
  *(uint *)(iVar2 + 0x6dc) = 0;
  *(uint *)(iVar2 + 0x6c0) = uVar1;
  return iVar2;
}
