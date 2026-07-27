// Name: core_boneguy.cpp_FUN_00418630
// Address: 00418630
// Address Range: [[00418630, 004187f8]]
// Convention: unknown
// Signature: int core_boneguy_cpp_FUN_00418630(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_boneguy_cpp_FUN_00418630(uint param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  float10 fVar9;
  float local_20 [3];
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  iVar4 = __arrinit(iVar4 + 0xbda4,0x14,&g_SBoneGuyBoxTypeInfo_0059aa00);
  *(byte ***)(iVar4 + -0xbc58) = &PTR_core_boneguy_cpp_CBoneGuy_setup_FUN_00418800_0059a8b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar4 + -0xbc54,"boneguy.dfm");
  *(uint *)(iVar4 + -0x8fd0) = 0x3f19999a;
  *(uint *)(iVar4 + -0x8fcc) = 0x3f666666;
  pcVar6 = "boneguydie";
  *(uint *)(iVar4 + -0xbca8) = 1;
  pcVar7 = (char *)(iVar4 + -0x6c);
  *(uint *)(iVar4 + 0x5a0) = 0;
  fVar2 = 50.0f;
  *(uint *)(iVar4 + -0x979c) = 2;
  fVar3 = 100.0f;
  *(uint *)(iVar4 + -8) = 0x41200000;
  *(float *)(iVar4 + -0x8fc8) = fVar2;
  *(float *)(iVar4 + -0x8fc4) = fVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + -4) = 0;
  memset(iVar4,0,0x5a0);
  uVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xff);
  *(uint *)(iVar4 + -0x7c) = 0;
  *(uint *)(iVar4 + -0x78) = 0;
  *(uint *)(iVar4 + -0x74) = 0;
  *(uint *)(iVar4 + -0x8c) = 0x40c00000;
  *(uint *)(iVar4 + -0x80) = uVar5;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x437f0000);
  local_8 = local_14;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x42200000);
  local_8 = local_10;
  local_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x42d40000,0x43800000);
  local_8 = local_c;
  core_boneguy_cpp_hsvToRgb_FUN_00418480(local_20,&local_14);
  fVar8 = (float10)_DAT_0057919e;
  fVar9 = (float10)round((float10)local_20[0] * fVar8);
  *(int *)(iVar4 + -0xbc9c) = (int)ROUND(fVar9);
  fVar9 = (float10)round((float10)local_20[0] * fVar8);
  *(int *)(iVar4 + -0xbc98) = (int)ROUND(fVar9);
  fVar8 = (float10)round(fVar8 * (float10)local_20[0]);
  *(int *)(iVar4 + -0xbc94) = (int)ROUND(fVar8);
  return iVar4 + -0xbda4;
}
