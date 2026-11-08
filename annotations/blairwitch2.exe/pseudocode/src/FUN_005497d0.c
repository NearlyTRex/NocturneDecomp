// Name: FUN_005497d0
// Address: 005497d0
// Address Range: [[005497d0, 00549867]]
// Convention: unknown
// Signature: int FUN_005497d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005497d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5fba74;
  FUN_005478b0(iVar3 + 0x2b4,0x5e765d);
  *(uint *)(iVar3 + 0x10af8) = 0;
  *(uint *)(iVar3 + 0x10afc) = 0x42c80000;
  *(uint *)(iVar3 + 0x3430) = 0x3f19999a;
  *(uint *)(iVar3 + 0x3434) = 0x3f666666;
  *(uint *)(iVar3 + 0x10b2c) = 0;
  uVar1 = _DAT_005fba5c;
  *(uint *)(iVar3 + 0x10b30) = 0;
  uVar2 = _DAT_005fba60;
  *(uint *)(iVar3 + 0x10b34) = 0;
  *(uint *)(iVar3 + 0x10b38) = 1;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
