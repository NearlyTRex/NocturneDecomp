// Name: FUN_00418630
// Address: 00418630
// Address Range: [[00418630, 004187f8]]
// Convention: unknown
// Signature: int FUN_00418630(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00418630(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  float10 fVar8;
  float local_20 [3];
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  iVar3 = __arrinit(iVar3 + 0xbda4,0x14,&DAT_0059aa00);
  *(byte ***)(iVar3 + -0xbc58) = &PTR_core_boneguy_cpp_CBoneGuy_setup_FUN_00418800_0059a8b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar3 + -0xbc54,"boneguy.dfm");
  *(uint *)(iVar3 + -0x8fd0) = 0x3f19999a;
  *(uint *)(iVar3 + -0x8fcc) = 0x3f666666;
  pcVar5 = "boneguydie";
  *(uint *)(iVar3 + -0xbca8) = 1;
  pcVar6 = (char *)(iVar3 + -0x6c);
  *(uint *)(iVar3 + 0x5a0) = 0;
  uVar4 = _DAT_0059a8a0;
  *(uint *)(iVar3 + -0x979c) = 2;
  uVar2 = _DAT_0059a8a4;
  *(uint *)(iVar3 + -8) = 0x41200000;
  *(uint *)(iVar3 + -0x8fc8) = uVar4;
  *(uint *)(iVar3 + -0x8fc4) = uVar2;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + -4) = 0;
  memset(iVar3,0,0x5a0);
  uVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xff);
  *(uint *)(iVar3 + -0x7c) = 0;
  *(uint *)(iVar3 + -0x78) = 0;
  *(uint *)(iVar3 + -0x74) = 0;
  *(uint *)(iVar3 + -0x8c) = 0x40c00000;
  *(uint *)(iVar3 + -0x80) = uVar4;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x437f0000);
  local_8 = local_14;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x42200000);
  local_8 = local_10;
  local_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x42d40000,0x43800000);
  local_8 = local_c;
  core_boneguy_cpp_hsvToRgb_FUN_00418480(local_20,&local_14);
  fVar7 = (float10)ram0x0057919e;
  fVar8 = (float10)round((float10)local_20[0] * fVar7);
  *(int *)(iVar3 + -0xbc9c) = (int)ROUND(fVar8);
  fVar8 = (float10)round((float10)local_20[0] * fVar7);
  *(int *)(iVar3 + -0xbc98) = (int)ROUND(fVar8);
  fVar7 = (float10)round(fVar7 * (float10)local_20[0]);
  *(int *)(iVar3 + -0xbc94) = (int)ROUND(fVar7);
  return iVar3 + -0xbda4;
}
