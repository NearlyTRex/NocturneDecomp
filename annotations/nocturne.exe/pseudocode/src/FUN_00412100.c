// Name: FUN_00412100
// Address: 00412100
// Address Range: [[00412100, 0041215b]]
// Convention: unknown
// Signature: int FUN_00412100(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00412100(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_batcreat_cpp_CBatCreature_setup_FUN_00412160_00599fc4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar3 + 0x150,"batcreat.dfm");
  uVar2 = _DAT_00599fb4;
  uVar1 = _DAT_00599fb0;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2dd8) = 0x3fc00000;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
