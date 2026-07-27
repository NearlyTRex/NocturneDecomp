// Name: core_zombie.cpp_CZombie_ctor_FUN_0055eac0
// Address: 0055eac0
// Address Range: [[0055eac0, 0055ec17]]
// Convention: unknown
// Signature: int core_zombie_cpp_CZombie_ctor_FUN_0055eac0(undefined4 param_1)

#include "nocturne.h"

int core_zombie_cpp_CZombie_ctor_FUN_0055eac0(uint param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  pcVar7 = "true";
  *(byte ***)(iVar4 + 0x14c) = &PTR_core_zombie_cpp_CZombie_setup_FUN_0055ec20_005a4554;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar4 + 0x150,"zombie1.dfm")
  ;
  *(uint *)(iVar4 + 0x2dd4) = 0x3f000000;
  pcVar8 = (char *)(iVar4 + 0xbd44);
  *(uint *)(iVar4 + 0x2dd8) = 0x3f800000;
  fVar2 = 50.0f;
  *(uint *)(iVar4 + 0xbd34) = 0;
  fVar3 = 100.0f;
  *(uint *)(iVar4 + 0xbd30) = 0;
  *(float *)(iVar4 + 0x2ddc) = fVar2;
  *(float *)(iVar4 + 0x2de0) = fVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  uVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3e99999a,0x3f800000);
  *(uint *)(iVar4 + 0xbd3c) = 0;
  *(uint *)(iVar4 + 0xbd24) = uVar5;
  uVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xff);
  *(uint *)(iVar4 + 0xbd2c) = 0;
  *(uint *)(iVar4 + 0xbd40) = 0;
  *(uint *)(iVar4 + 0xbd28) = uVar5;
  iVar6 = 0x01E57284 + 0x14cd08;
  *(uint *)(iVar4 + 0xbda8) = 0;
  *(uint *)(iVar4 + 0xbdfc) = 0;
  iVar6 = _stricmp(iVar6,"mine.geo");
  *(uint *)(iVar4 + 0xbdac) = 0;
  *(uint *)(iVar4 + 0xbe0c) = 0;
  *(uint *)(iVar4 + 0xbe10) = 0;
  *(uint *)(iVar4 + 0xbd20) = 0;
  *(uint *)(iVar4 + 0xbda8) = (uint)(iVar6 == 0);
  return iVar4;
}
