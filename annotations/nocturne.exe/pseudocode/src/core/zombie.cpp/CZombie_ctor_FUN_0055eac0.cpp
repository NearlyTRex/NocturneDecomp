// Name: core_zombie.cpp_CZombie_ctor_FUN_0055eac0
// Address: 0055eac0
// Address Range: [[0055eac0, 0055ec17]]
// Convention: unknown
// Signature: int core_zombie_cpp_CZombie_ctor_FUN_0055eac0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_zombie_cpp_CZombie_ctor_FUN_0055eac0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  pcVar6 = &DAT_005983f2;
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_zombie_cpp_CZombie_setup_FUN_0055ec20_005a4554;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3 + 0x150,"zombie1.dfm")
  ;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f000000;
  pcVar7 = (char *)(iVar3 + 0xbd44);
  *(uint *)(iVar3 + 0x2dd8) = 0x3f800000;
  uVar4 = _DAT_005a453c;
  *(uint *)(iVar3 + 0xbd34) = 0;
  uVar2 = _DAT_005a4540;
  *(uint *)(iVar3 + 0xbd30) = 0;
  *(uint *)(iVar3 + 0x2ddc) = uVar4;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3e99999a,0x3f800000);
  *(uint *)(iVar3 + 0xbd3c) = 0;
  *(uint *)(iVar3 + 0xbd24) = uVar4;
  uVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xff);
  *(uint *)(iVar3 + 0xbd2c) = 0;
  *(uint *)(iVar3 + 0xbd40) = 0;
  *(uint *)(iVar3 + 0xbd28) = uVar4;
  iVar5 = 0x01E57284 + 0x14cd08;
  *(uint *)(iVar3 + 0xbda8) = 0;
  *(uint *)(iVar3 + 0xbdfc) = 0;
  iVar5 = _stricmp(iVar5,"mine.geo");
  *(uint *)(iVar3 + 0xbdac) = 0;
  *(uint *)(iVar3 + 0xbe0c) = 0;
  *(uint *)(iVar3 + 0xbe10) = 0;
  *(uint *)(iVar3 + 0xbd20) = 0;
  *(uint *)(iVar3 + 0xbda8) = (uint)(iVar5 == 0);
  return iVar3;
}
