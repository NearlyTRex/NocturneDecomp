// Name: core_fire.cpp_FUN_004a2090
// Address: 004a2090
// Address Range: [[004a2090, 004a21c7] [004a21d0, 004a23b4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a2090(CFireEffect *param_1,CVector3f *param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a2090(CFireEffect *param_1,CVector3f *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  CBulletHole *pCVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  float afStackY_1024 [998];
  char local_70 [52];
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float *local_14;
  
  bVar6 = 0;
  local_18 = 1;
  local_14 = (float *)&DAT_01c8aea8;
  if ((param_5 == 0) ||
     (iVar1 = (**(code **)(*(int *)(param_5 + 0x154) + 0x4c))(param_5), iVar1 != 0)) {
    if ((local_18 != 0) && ((param_6 == 0 && (iVar1 = 0, 0 < _DAT_01c8aea0)))) {
      do {
        local_3c = param_2->x - *local_14;
        local_38[0] = param_2->y - local_14[1];
        local_38[1] = param_2->z - local_14[2];
        local_38[2] = local_3c;
        local_38[(uint)bVar6 * -2 + 3] = local_38[(uint)bVar6 * -2];
        local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (local_38 + 5 != local_38 + 2) {
          local_24 = local_38[2];
          local_20 = local_38[3];
          local_1c = local_28;
        }
        if (local_1c * local_1c + local_24 * local_24 + local_20 * local_20 < (float)_DAT_005c09b8)
        goto LAB_004a215d;
        iVar1 = iVar1 + 1;
        local_14 = local_14 + 0x10;
      } while (iVar1 < _DAT_01c8aea0);
    }
    if (local_18 != 0) {
      pCVar3 = core_fire_cpp_allocateBulletHole_FUN_004a1420();
      core_fire_cpp_FUN_00497290(pCVar3,param_2,param_3,param_5,param_6);
    }
  }
LAB_004a215d:
  iVar1 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_0044f4d0
                    (&g_CDemonCameraInstance,param_2,0.5);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = _DAT_01c74e9c * 0x2c;
      _DAT_01c74e9c = _DAT_01c74e9c + 1;
      if (0x7ff < _DAT_01c74e9c) {
        _DAT_01c74e9c = 0;
      }
      iVar1 = iVar1 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_00496d60
                ((CSmokeParticle *)(&DAT_01c74ea0 + iVar2),param_2,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar1 < 8);
    switch(param_4) {
    case 2:
    case 5:
    case 8:
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                  (param_1,param_2,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      } while (iVar1 < 8);
    }
  }
  puVar4 = &DAT_005fdbf8;
  pcVar5 = local_70;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = (char *)((int)pcVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  *(ushort *)pcVar5 = *(ushort *)puVar4;
  switch(param_4) {
  case 2:
  case 8:
    iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.16666667);
    if (iVar1 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(GROUND_TYPE_CONCRETE);
      _sprintf(local_70,"ric-%s!?.wav");
      if (local_70[0] == '\0') {
        return;
      }
      goto LAB_004a2392;
    }
    break;
  case 3:
  case 4:
    iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.16666667);
    if (iVar1 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(GROUND_TYPE_DIRT);
      _sprintf(local_70,"ric-%s.wav");
      if (local_70[0] == '\0') {
        return;
      }
      goto LAB_004a2392;
    }
    break;
  case 5:
    iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.16666667);
    if (iVar1 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(GROUND_TYPE_METAL);
      _sprintf(local_70,"ric-%s!?.wav");
      if (local_70[0] == '\0') {
        return;
      }
      goto LAB_004a2392;
    }
    break;
  case 7:
    iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.16666667);
    if (iVar1 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(GROUND_TYPE_WOOD);
      _sprintf(local_70,"ric-%s!?.wav");
      if (local_70[0] == '\0') {
        return;
      }
      goto LAB_004a2392;
    }
  }
  if (local_70[0] == '\0') {
    return;
  }
LAB_004a2392:
  core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
            (0x02CF5680,(CDemonActor *)0x0,local_70,param_2,0.17);
  return;
}
