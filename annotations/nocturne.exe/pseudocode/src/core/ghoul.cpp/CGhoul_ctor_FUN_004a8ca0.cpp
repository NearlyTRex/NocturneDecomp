// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004a8ca0
// Address: 004a8ca0
// Address Range: [[004a8ca0, 004a8dc3]]
// Convention: unknown
// Signature: int core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0(uint param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_ghoul_cpp_CGhoul_setup_FUN_004a8dd0_0059e224;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar1 + 0x150,"guul.dfm");
  fVar2 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41a00000,0x420c0000);
  uVar6 = 0x41200000;
  uVar5 = 0x40800000;
  uVar4 = 0x4a8cfc;
  fVar3 = (float10)round((float10)fVar2 * (float10)65536);
  *(int *)(iVar1 + 0xbd28) = (int)ROUND(fVar3);
  fVar2 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(uVar4,uVar5,uVar6);
  *(uint *)(iVar1 + 0xbd30) = 0xa0000;
  *(uint *)(iVar1 + 0xbd34) = 0xffffffff;
  fVar3 = (float10)65536;
  *(uint *)(iVar1 + 0xbd38) = 0;
  *(uint *)(iVar1 + 0xbd44) = 2;
  uVar5 = 3;
  uVar4 = 0x4a8d47;
  fVar3 = (float10)round((float10)fVar2 * fVar3);
  *(int *)(iVar1 + 0xbd2c) = (int)ROUND(fVar3);
  uVar6 = core_actor_cpp_getRandomInt_FUN_0040de00(1,uVar4,uVar5);
  *(uint *)(iVar1 + 0x2dd4) = 0x3f400000;
  *(uint *)(iVar1 + 0x2dd8) = 0x3fc00000;
  *(uint *)(iVar1 + 0xbd80) = 0;
  *(uint *)(iVar1 + 0xbd84) = 0;
  *(uint *)(iVar1 + 0xbd88) = 0;
  *(uint *)(iVar1 + 0xbd8c) = 0;
  uVar4 = _DAT_0059e210;
  *(uint *)(iVar1 + 0xbd90) = 0;
  uVar5 = _DAT_0059e214;
  *(uint *)(iVar1 + 0xbd40) = uVar6;
  *(uint *)(iVar1 + 0x2ddc) = uVar4;
  *(uint *)(iVar1 + 0x2de0) = uVar5;
  return iVar1;
}
