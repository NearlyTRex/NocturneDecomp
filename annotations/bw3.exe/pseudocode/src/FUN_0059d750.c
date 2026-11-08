// Name: FUN_0059d750
// Address: 0059d750
// Address Range: [[0059d750, 0059d7ed]]
// Convention: unknown
// Signature: int FUN_0059d750(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0059d750(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00488fd0(param_1);
  iVar3 = FUN_0043c220(iVar3 + 0xd054);
  iVar3 = FUN_004fa8a0(iVar3 + 0x3ab44);
  *(byte ***)(iVar3 + -0x47a44) = &PTR_FUN_005e8354;
  FUN_0054eae0(iVar3 + -0x47a40,"bwp_stylersub.dfm");
  *(uint *)(iVar3 + -0x4492c) = 0x3f400000;
  *(uint *)(iVar3 + -0x44928) = 0x3fc00000;
  uVar1 = _DAT_005e8348;
  *(uint *)(iVar3 + -0xc) = 0;
  uVar2 = _DAT_005e834c;
  *(uint *)(iVar3 + -4) = 0;
  *(uint *)(iVar3 + -8) = 0;
  *(uint *)(iVar3 + -0x44924) = uVar1;
  *(uint *)(iVar3 + -0x44920) = uVar2;
  return iVar3 + -0x47b98;
}
