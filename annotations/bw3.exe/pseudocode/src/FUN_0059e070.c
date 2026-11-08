// Name: FUN_0059e070
// Address: 0059e070
// Address Range: [[0059e070, 0059e127]]
// Convention: unknown
// Signature: int FUN_0059e070(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0059e070(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  iVar3 = FUN_004fa8a0(iVar3 + 0xd064);
  *(byte ***)(iVar3 + -0xcf10) = &PTR_FUN_005e84f4;
  FUN_0054eae0(iVar3 + -0xcf0c,"bwp3_stylerdemon.dfm");
  *(uint *)(iVar3 + -0x9df8) = 0x3f19999a;
  *(uint *)(iVar3 + -0x9df4) = 0x3f666666;
  *(uint *)(iVar3 + -0x204) = 0x41c80000;
  *(uint *)(iVar3 + 0xc2c) = 0;
  *(uint *)(iVar3 + 0xc30) = 0;
  *(uint *)(iVar3 + 0xc38) = 0;
  uVar1 = _DAT_005e84e0;
  *(uint *)(iVar3 + -4) = 0;
  uVar2 = _DAT_005e84e4;
  *(uint *)(iVar3 + -8) = 0;
  *(uint *)(iVar3 + 0xc3c) = 0;
  *(uint *)(iVar3 + -0x9df0) = uVar1;
  *(uint *)(iVar3 + -0x9dec) = uVar2;
  return iVar3 + -0xd064;
}
