// Name: core_mobster.cpp_CMobster_ctor_FUN_004da150
// Address: 004da150
// Address Range: [[004da150, 004da287]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_CMobster_ctor_FUN_004da150(undefined4 param_1)

#include "nocturne.h"

int __cdecl core_mobster_cpp_CMobster_ctor_FUN_004da150(uint param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  byte uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar5 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar5 + 0x14c) = &PTR_core_mobster_cpp_CMobster_setup_FUN_004da290_005a0934;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar5 + 0x150,"mobster1.dfm");
  fVar2 = 50.0f;
  *(uint *)(iVar5 + 0x2dd4) = 0x3f19999a;
  fVar3 = 100.0f;
  *(uint *)(iVar5 + 0x2dd8) = 0x3f666666;
  *(float *)(iVar5 + 0x2ddc) = fVar2;
  *(float *)(iVar5 + 0x2de0) = fVar3;
  uVar6 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xff);
  *(uint *)(iVar5 + 0xbd28) = 0;
  *(uint *)(iVar5 + 0xbd2c) = 0;
  *(uint *)(iVar5 + 0xbd30) = 0;
  *(uint *)(iVar5 + 0xbdf4) = 0;
  *(uint *)(iVar5 + 0xbdf8) = 0;
  *(uint *)(iVar5 + 0xbd18) = 0x42200000;
  *(uint *)(iVar5 + 0xbd24) = uVar6;
  uVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0x62,0x65);
  *(uint *)(iVar5 + 0xbd3c) = 0;
  *(uint *)(iVar5 + 0xbd34) = 0;
  *(uint *)(iVar5 + 0xbd40) = 0;
  *(uint *)(iVar5 + 0xbd44) = 0;
  *(uint *)(iVar5 + 0xbd48) = 0;
  pcVar7 = "none";
  *(uint *)(iVar5 + 0xbd4c) = 0;
  *(uint *)(iVar5 + 0xbd50) = 0;
  pcVar8 = (char *)(iVar5 + 0xbd54);
  *(byte *)(iVar5 + 0xbd38) = uVar4;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar5 + 0xbd20) = 0;
  return iVar5;
}
