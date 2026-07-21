// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90
// Address: 00555a90
// Address Range: [[00555a90, 00555b3d]]
// Convention: unknown
// Signature: int core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar4 + 0x14c) = &PTR_core_werewolf_cpp_CWerewolf_setup_FUN_00555b40_005a4314;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar4 + 0x150,"wolfbrn.dfm")
  ;
  *(uint *)(iVar4 + 0x2dd4) = 0x3f800000;
  *(uint *)(iVar4 + 0x2dd8) = 0x40000000;
  *(uint *)(iVar4 + 0xbd24) = 0;
  *(uint *)(iVar4 + 0xbd3c) = 1;
  *(uint *)(iVar4 + 0xbd50) = 0;
  uVar1 = _DAT_005a42f0;
  *(uint *)(iVar4 + 0xbd54) = 0x40a00000;
  uVar2 = _DAT_005a42f4;
  *(uint *)(iVar4 + 0xbd58) = 0;
  uVar3 = 0x41200000;
  *(uint *)(iVar4 + 0xbd5c) = 0;
  *(uint *)(iVar4 + 0xbd60) = 0;
  *(uint *)(iVar4 + 0x2ddc) = uVar1;
  *(uint *)(iVar4 + 0x2de0) = uVar2;
  *(uint *)(iVar4 + 0xbd64) = uVar3;
  return iVar4;
}
