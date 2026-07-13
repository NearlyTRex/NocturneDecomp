// Name: FUN_004bb760
// Address: 004bb760
// Address Range: [[004bb760, 004bb7c5]]
// Convention: unknown
// Signature: int FUN_004bb760(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004bb760(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_0059f584;
  FUN_0051e0c0(iVar3 + 0x150,"imp.dfm");
  uVar1 = _DAT_0059f570;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  uVar2 = _DAT_0059f574;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f000000;
  *(uint *)(iVar3 + 0x261c) = 0;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
