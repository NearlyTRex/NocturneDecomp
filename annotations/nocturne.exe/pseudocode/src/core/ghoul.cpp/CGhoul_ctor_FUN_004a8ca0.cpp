// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004a8ca0
// Address: 004a8ca0
// Address Range: [[004a8ca0, 004a8dc3]]
// Convention: unknown
// Signature: int core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0(undefined4 param_1)

#include "nocturne.h"

int core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0(uint param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_ghoul_cpp_CGhoul_setup_FUN_004a8dd0_0059e224;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar2 + 0x150,"guul.dfm");
  fVar3 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41a00000,0x420c0000);
  uVar7 = 0x41200000;
  uVar6 = 0x40800000;
  uVar5 = 0x4a8cfc;
  fVar4 = (float10)round((float10)fVar3 * (float10)65536);
  *(int *)(iVar2 + 0xbd28) = (int)ROUND(fVar4);
  fVar3 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(uVar5,uVar6,uVar7);
  *(uint *)(iVar2 + 0xbd30) = 0xa0000;
  *(uint *)(iVar2 + 0xbd34) = 0xffffffff;
  fVar4 = (float10)65536;
  *(uint *)(iVar2 + 0xbd38) = 0;
  *(uint *)(iVar2 + 0xbd44) = 2;
  uVar6 = 3;
  uVar5 = 0x4a8d47;
  fVar4 = (float10)round((float10)fVar3 * fVar4);
  *(int *)(iVar2 + 0xbd2c) = (int)ROUND(fVar4);
  uVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(1,uVar5,uVar6);
  *(uint *)(iVar2 + 0x2dd4) = 0x3f400000;
  *(uint *)(iVar2 + 0x2dd8) = 0x3fc00000;
  *(uint *)(iVar2 + 0xbd80) = 0;
  *(uint *)(iVar2 + 0xbd84) = 0;
  *(uint *)(iVar2 + 0xbd88) = 0;
  *(uint *)(iVar2 + 0xbd8c) = 0;
  fVar3 = 50.0f;
  *(uint *)(iVar2 + 0xbd90) = 0;
  fVar1 = 100.0f;
  *(uint *)(iVar2 + 0xbd40) = uVar5;
  *(float *)(iVar2 + 0x2ddc) = fVar3;
  *(float *)(iVar2 + 0x2de0) = fVar1;
  return iVar2;
}
