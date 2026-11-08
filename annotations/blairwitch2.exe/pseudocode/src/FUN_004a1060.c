// Name: FUN_004a1060
// Address: 004a1060
// Address Range: [[004a1060, 004a10df]]
// Convention: unknown
// Signature: int FUN_004a1060(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a1060(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005899d0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f6cb4;
  FUN_0044fd70(iVar2 + 0x2b4,"flashlit.kfm");
  *(uint *)(iVar2 + 0x434) = 0;
  *(uint *)(iVar2 + 0x438) = 0;
  *(uint *)(iVar2 + 0x43c) = 5;
  *(uint *)(iVar2 + 0x440) = 0;
  *(uint *)(iVar2 + 0x444) = 0;
  uVar1 = _DAT_005f6cac;
  *(uint *)(iVar2 + 0x448) = 0;
  *(uint *)(iVar2 + 0x6c4) = 0;
  *(uint *)(iVar2 + 0x6c0) = uVar1;
  return iVar2;
}
