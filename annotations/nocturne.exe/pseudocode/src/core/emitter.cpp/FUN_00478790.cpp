// Name: core_emitter.cpp_FUN_00478790
// Address: 00478790
// Address Range: [[00478790, 00478f78]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00478790(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_emitter_cpp_FUN_00478790(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  byte auStack_e8 [24];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  byte local_b8 [12];
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_a0 [12];
  float local_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  uint local_6c;
  float local_68;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint local_4c;
  float local_48;
  uint local_44;
  float local_2c;
  float local_28;
  float local_14;
  
  iVar5 = *(int *)(param_1 + 0x484);
  iVar2 = _strcmp(param_1 + 0x164,"none");
  if ((iVar2 != 0) &&
     (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x164)
     , uVar4 = 0x01E57284, iVar2 != 0)) {
    iVar5 = 1;
    *(uint *)(param_1 + 0x160) = 1;
    *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x22c);
    core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(uVar4,param_1);
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x1c8);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x160) = 0;
  }
  if (*(int *)(param_1 + 0x150) == 10) {
    iVar5 = 0;
    iVar2 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                      ((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                       (double)*(float *)(param_1 + 0x28),0,0x40490000);
    if (((iVar2 == 0) || (iVar5 = 1, *(int *)(0x01C775EC + 0x1c) != 0)) ||
       (iVar2 = _strnicmp(), iVar2 != 0)) {
      if (iVar5 != 0) goto LAB_0047883d;
    }
    else {
      iVar5 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x430));
  }
LAB_0047883d:
  if (*(int *)(param_1 + 0x160) == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x430));
    goto LAB_00478941;
  }
  fVar1 = *(float *)(param_1 + 0x438) + param_2;
  *(float *)(param_1 + 0x438) = fVar1;
  if ((fVar1 < *(float *)(param_1 + 0x43c)) ||
     (*(float *)(param_1 + 0x438) = *(float *)(param_1 + 0x438) - *(float *)(param_1 + 0x43c),
     iVar5 == 0)) goto LAB_00478941;
  switch(*(uint *)(param_1 + 0x150)) {
  case 0:
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90();
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(param_1 + 0x444,param_1 + 0x20);
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0x7fff);
    *(int *)(param_1 + 0x480) = iVar5;
    iVar5 = (iVar5 + (iVar5 >> 0x1f) * -0x100) - (uint)((iVar5 >> 0x1f) << 7 < 0);
    iVar2 = iVar5 >> 0x1f;
    uVar4 = 0x41200000;
    *(char *)(param_1 + 0x460) =
         (char)((int)(((iVar5 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    goto LAB_00478902;
  case 1:
    iVar5 = 0;
    do {
      if (&local_70 != (float *)(param_1 + 0x20)) {
        local_70 = *(float *)(param_1 + 0x20);
        local_6c = *(uint *)(param_1 + 0x24);
        local_68 = *(float *)(param_1 + 0x28);
      }
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbf000000,0x3f000000);
      local_70 = local_14 * *(float *)(param_1 + 0x154) + local_70;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbf000000,0x3f000000);
      local_68 = local_14 * *(float *)(param_1 + 0x15c) + local_68;
      local_d0 = 0;
      local_cc = *(uint *)(param_1 + 0x158);
      iVar5 = iVar5 + 1;
      local_c8 = 0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0();
    } while (iVar5 < 4);
    break;
  case 4:
    local_28 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f490fdb,0x3fc90fdb);
    local_14 = local_28;
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40c90fdb);
    local_2c = *(float *)(param_1 + 0x3bc);
    fVar6 = (float10)fcos((float10)local_28);
    fVar7 = (float10)fcos((float10)local_14);
    fVar8 = (float10)fsin((float10)local_28);
    fVar9 = (float10)fsin((float10)local_14);
    local_90 = (float)((float10)local_2c * fVar8);
    local_94 = (float)((float10)local_2c * fVar7 * fVar6);
    local_8c = (float)(fVar9 * (float10)local_2c * fVar6);
    uVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x240);
    core_fire_cpp_CFireEffect_createRock_FUN_0048b320(0x01C08D04,param_1 + 0x20,&local_94,uVar4);
    break;
  case 5:
    core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_00479390(param_1,local_b8);
    core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0();
    iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_ac = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
    local_a8 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
    local_a4 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
    if (SQRT(local_a4 * local_a4 + local_ac * local_ac + local_a8 * local_a8) <
        (float)2.5) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290();
      core_charactr_cpp_FUN_00427730
                (*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),local_a0,0,0,0x3f800000,1);
    }
    break;
  case 6:
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710();
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710();
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710();
    core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710();
    break;
  case 7:
    core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420();
    if (&local_4c != (uint *)(param_1 + 0x20)) {
      local_4c = *(uint *)(param_1 + 0x20);
      local_48 = *(float *)(param_1 + 0x24);
      local_44 = *(uint *)(param_1 + 0x28);
    }
    local_48 = *(float *)(param_1 + 0x158) * (float)0.5 + local_48;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(param_1 + 0x444,&local_4c);
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0x7fff);
    *(int *)(param_1 + 0x480) = iVar5;
    iVar5 = (iVar5 + (iVar5 >> 0x1f) * -0x100) - (uint)((iVar5 >> 0x1f) << 7 < 0);
    iVar2 = iVar5 >> 0x1f;
    *(char *)(param_1 + 0x460) =
         (char)((int)(((iVar5 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    uVar4 = *(uint *)(param_1 + 0x158);
LAB_00478902:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(param_1 + 0x444,uVar4);
    uVar4 = 0x01E57284;
    *(uint *)(param_1 + 0x464) = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(uVar4,param_1 + 0x444);
    break;
  case 8:
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90();
    break;
  case 9:
    iVar5 = *(int *)(param_1 + 0x3c8);
    if (iVar5 != 0) {
      pfVar3 = (float *)(**(code **)(*(int *)(iVar5 + 0x14c) + 0x14))(iVar5,auStack_e8);
      fStack_c4 = *pfVar3 + pfVar3[3];
      fStack_c0 = pfVar3[1] + pfVar3[4];
      fStack_88 = fStack_c4 * 5.2220990168285998e-315._0_4_;
      fStack_bc = pfVar3[2] + pfVar3[5];
      fStack_84 = fStack_c0 * 5.2220990168285998e-315._0_4_;
      fStack_80 = fStack_bc * 5.2220990168285998e-315._0_4_;
      pfVar3 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200();
      iVar5 = *(int *)(param_1 + 0x3c8);
      fStack_7c = *(float *)(iVar5 + 0x20) + *pfVar3;
      fStack_78 = *(float *)(iVar5 + 0x24) + pfVar3[1];
      fStack_74 = *(float *)(iVar5 + 0x28) + pfVar3[2];
      if (&fStack_58 != &fStack_7c) {
        fStack_58 = fStack_7c;
        fStack_54 = fStack_78;
        fStack_50 = fStack_74;
      }
      core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
                (0x01C08D04,param_1 + 0x20,&fStack_58,0,0,0x40800000);
    }
  }
  if (((*(char *)(param_1 + 0x3cc) != '\0') &&
      (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0x430)),
      iVar5 == 0)) && ((*(int *)(param_1 + 0x434) != 1 || (*(int *)(param_1 + 0x488) == 0)))) {
    uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x3cc);
    *(uint *)(param_1 + 0x430) = uVar4;
  }
LAB_00478941:
  *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x3c0) == 0) {
    if ((0.0 < *(float *)(param_1 + 0x22c)) &&
       (param_2 = *(float *)(param_1 + 0x440) - param_2, *(float *)(param_1 + 0x440) = param_2,
       param_2 <= 0.0)) {
      *(uint *)(param_1 + 0x440) = 0;
      *(uint *)(param_1 + 0x160) = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x160) == 0) {
    param_2 = *(float *)(param_1 + 0x440) - param_2;
    *(float *)(param_1 + 0x440) = param_2;
    if (param_2 <= 0.0) {
      *(uint *)(param_1 + 0x160) = 1;
      *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x22c);
      return;
    }
  }
  else {
    param_2 = *(float *)(param_1 + 0x440) - param_2;
    *(float *)(param_1 + 0x440) = param_2;
    if (param_2 <= 0.0) {
      *(uint *)(param_1 + 0x160) = 0;
      *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x3c4);
      return;
    }
  }
  return;
}
