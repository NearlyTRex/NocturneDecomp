// Name: FUN_00531100
// Address: 00531100
// Address Range: [[00531100, 00531165]]
// Convention: unknown
// Signature: int FUN_00531100(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00531100(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e3a24;
  FUN_0054eae0(iVar3 + 0x158,"sentinel.dfm");
  uVar1 = _DAT_005e3a0c;
  *(uint *)(iVar3 + 0x326c) = 0x3f19999a;
  uVar2 = _DAT_005e3a10;
  *(uint *)(iVar3 + 0x3270) = 0x40000000;
  *(uint *)(iVar3 + 0xd058) = 0;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
