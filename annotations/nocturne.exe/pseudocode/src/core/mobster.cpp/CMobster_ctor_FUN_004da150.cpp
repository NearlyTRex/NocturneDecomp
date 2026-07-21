// Name: core_mobster.cpp_CMobster_ctor_FUN_004da150
// Address: 004da150
// Address Range: [[004da150, 004da287]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_ctor_FUN_004da150(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mobster_cpp_CMobster_ctor_FUN_004da150(uint param_1)

{
  char cVar1;
  uint uVar2;
  byte uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar4 + 0x14c) = &PTR_core_mobster_cpp_CMobster_setup_FUN_004da290_005a0934;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar4 + 0x150,"?mobster1.dfm" + 1);
  uVar5 = _DAT_005a0920;
  *(uint *)(iVar4 + 0x2dd4) = 0x3f19999a;
  uVar2 = _DAT_005a0924;
  *(uint *)(iVar4 + 0x2dd8) = 0x3f666666;
  *(uint *)(iVar4 + 0x2ddc) = uVar5;
  *(uint *)(iVar4 + 0x2de0) = uVar2;
  uVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xff);
  *(uint *)(iVar4 + 0xbd28) = 0;
  *(uint *)(iVar4 + 0xbd2c) = 0;
  *(uint *)(iVar4 + 0xbd30) = 0;
  *(uint *)(iVar4 + 0xbdf4) = 0;
  *(uint *)(iVar4 + 0xbdf8) = 0;
  *(uint *)(iVar4 + 0xbd18) = 0x42200000;
  *(uint *)(iVar4 + 0xbd24) = uVar5;
  uVar3 = core_actor_cpp_getRandomInt_FUN_0040de00(0x62,0x65);
  *(uint *)(iVar4 + 0xbd3c) = 0;
  *(uint *)(iVar4 + 0xbd34) = 0;
  *(uint *)(iVar4 + 0xbd40) = 0;
  *(uint *)(iVar4 + 0xbd44) = 0;
  *(uint *)(iVar4 + 0xbd48) = 0;
  pcVar6 = &DAT_0058a18e;
  *(uint *)(iVar4 + 0xbd4c) = 0;
  *(uint *)(iVar4 + 0xbd50) = 0;
  pcVar7 = (char *)(iVar4 + 0xbd54);
  *(byte *)(iVar4 + 0xbd38) = uVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xbd20) = 0;
  return iVar4;
}
