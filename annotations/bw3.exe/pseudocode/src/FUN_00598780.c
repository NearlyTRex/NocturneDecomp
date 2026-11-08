// Name: FUN_00598780
// Address: 00598780
// Address Range: [[00598780, 005987fb]]
// Convention: unknown
// Signature: int FUN_00598780(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00598780(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  iVar3 = FUN_004fa8a0(iVar3 + 0xd064);
  *(byte ***)(iVar3 + -0xcf10) = &PTR_FUN_005e7a04;
  FUN_0054eae0(iVar3 + -0xcf0c,0x5d97f7);
  uVar1 = _DAT_005e79f8;
  *(uint *)(iVar3 + -0x9df8) = 0x3f400000;
  uVar2 = _DAT_005e79fc;
  *(uint *)(iVar3 + -0x9df4) = 0x3fc00000;
  *(uint *)(iVar3 + -8) = 0;
  *(uint *)(iVar3 + -0x9df0) = uVar1;
  *(uint *)(iVar3 + -0x9dec) = uVar2;
  return iVar3 + -0xd064;
}
