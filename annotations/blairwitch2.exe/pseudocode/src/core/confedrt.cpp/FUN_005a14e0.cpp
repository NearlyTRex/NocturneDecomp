// Name: core_confedrt.cpp_FUN_005a14e0
// Address: 005a14e0
// Address Range: [[005a14e0, 005a1a64]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a14e0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confedrt_cpp_FUN_005a14e0(CDemonActor *param_1)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_110c [996];
  float *pfVar4;
  SDamageInfo aSStack_160 [4];
  uint uStack_15c;
  uint uStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float fStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_130;
  CDemonActor *pCStack_128;
  float fStack_124;
  float afStack_120 [2];
  CVector3f local_118;
  float fStack_10c;
  float afStack_108 [4];
  uint uStack_f8;
  uint local_f4;
  float fStack_e8;
  float local_dc [3];
  float local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  float afStack_c0 [5];
  CVector3f local_ac;
  float local_a0;
  float local_9c [4];
  float fStack_8c;
  float local_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  float local_4c;
  float local_48;
  float local_44;
  float afStack_40 [3];
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  int iStack_18;
  byte *local_14;
  
  bVar3 = 0;
  if (*(int *)&param_1[0x62].field_0x190 == 0) {
    return;
  }
  local_14 = &param_1[6].field_0xfc;
  core_xform_cpp_FUN_00591530(&DAT_0265370c,local_14 + *(int *)&param_1[0x67].field_0x1f0 * 0x30);
  pfVar4 = afStack_108 + 0xb;
  local_dc[0] = (float)local_58;
  afStack_108[(uint)bVar3 * -2 + 0xc] = local_9c[(uint)bVar3 * -2 + 0x12];
  afStack_108[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
       local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13];
  core_actor_cpp_FUN_00408d70(param_1,pfVar4);
  local_118.x = afStack_c0[2];
  *(float *)((int)&local_118 + (uint)bVar3 * -8 + 4) = afStack_c0[(uint)bVar3 * -2 + 3];
  *(float *)((int)&local_118 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  core_xform_cpp_FUN_00591530(&DAT_0265370c,local_14 + *(int *)&param_1[0x67].field_0x1ec * 0x30);
  pfVar4 = local_9c + 0x1a;
  local_34[0] = (float)local_f4;
  local_9c[(uint)bVar3 * -2 + 0x1b] = afStack_108[(uint)bVar3 * -2 + 6];
  local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1c] =
       afStack_108[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  core_actor_cpp_FUN_00408d70(param_1,pfVar4);
  fVar1 = local_118.x;
  local_ac.x = local_88;
  *(float *)((int)&local_ac + (uint)bVar3 * -8 + 4) = local_9c[(uint)bVar3 * -2 + 6];
  *(float *)((int)&local_ac + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  local_4c = fVar1 - local_ac.x;
  local_48 = local_118.y - local_ac.y;
  local_44 = local_118.z - local_ac.z;
  local_64 = fVar1 - local_ac.x;
  local_9c[(uint)bVar3 * -2 + 0xf] = local_9c[(uint)bVar3 * -2 + 0x15];
  local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
       local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16];
  local_64 = local_64 * _DAT_005efd3b;
  local_60 = local_60 * _DAT_005efd3b;
  local_5c = local_5c * _DAT_005efd3b;
  local_28 = local_64 + local_ac.x;
  local_24 = local_60 + local_ac.y;
  local_20 = local_5c + local_ac.z;
  local_a0 = local_28;
  local_9c[(uint)bVar3 * -2] = local_9c[(uint)bVar3 * -2 + 0x1e];
  local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1f];
  if (local_9c + 0xe != &local_a0) {
    local_64 = local_a0;
    local_60 = local_9c[0];
    local_5c = local_9c[1];
  }
  core_fire_cpp_FUN_0049d170(0x01C3DEB4,local_9c + 0xe,&param_1->orient_matrix);
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
            (0x01C3DEB4,&local_ac,1.5,(CVector3f *)0x0,0xffff);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,param_1,"shotgun.wav",&local_118);
  (**(code **)(*(int *)(*(int *)&param_1[0x62].field_0x190 + 0x2b0) + 0x5c))
            (*(int *)&param_1[0x62].field_0x190,afStack_108 + 0xe);
  core_actor_cpp_FUN_00408d70(*(uint *)&param_1[0x62].field_0x190,afStack_108 + 0xe);
  fStack_70 = (float)uStack_c4;
  local_9c[(uint)bVar3 * -2 + 0xc] = afStack_c0[(uint)bVar3 * -2];
  local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
       afStack_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (afStack_108 + 0xe != local_9c + 0xb) {
    local_d0 = fStack_70;
    uStack_cc = uStack_6c;
    uStack_c8 = uStack_68;
  }
  afStack_40[0] = local_118.x;
  local_9c[(uint)bVar3 * -2 + 0x18] = *(float *)((int)&local_118 + (uint)bVar3 * -8 + 4);
  local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19] =
       *(float *)((int)&local_118 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
  local_14 = (byte *)
             core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,local_9c + 0x17,afStack_108 + 0xe);
  if (((float)local_14 < 0.0) || (1.0 < (float)local_14)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
  iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
  if (iStack_18 != 0) {
    iVar2 = (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x114))(iStack_18);
    if (0 < iVar2) goto LAB_005a188c;
  }
  if (iStack_18 != 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_160);
    uStack_15c = 0x41200000;
    uStack_158 = 0x3f800000;
    fStack_10c = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
    afStack_108[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    afStack_108[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    fStack_7c = fStack_10c;
    local_9c[(uint)bVar3 * -2 + 9] = afStack_108[(uint)bVar3 * -2];
    local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
         afStack_108[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    fStack_1c = (float)_DAT_005efd3f /
                SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
    local_9c[2] = fStack_7c * fStack_1c;
    local_9c[3] = fStack_78 * fStack_1c;
    fStack_8c = fStack_74 * fStack_1c;
    fStack_124 = fStack_7c * fStack_1c;
    afStack_120[(uint)bVar3 * -2] = local_9c[(uint)bVar3 * -2 + 3];
    afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         local_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    if (&fStack_154 != &fStack_124) {
      fStack_154 = fStack_124;
      fStack_150 = afStack_120[0];
      uStack_14c = afStack_120[1];
    }
    core_actor_cpp_FUN_00408de0(iStack_18,&g_CDemonSetPtr->collision_impact_position);
    afStack_108[2] = fStack_e8;
    afStack_108[(uint)bVar3 * -2 + 3] = afStack_108[(uint)bVar3 * -2 + 9];
    afStack_108[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         afStack_108[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
    if (&fStack_144 != afStack_108 + 2) {
      fStack_144 = afStack_108[2];
      uStack_140 = afStack_108[3];
      uStack_13c = uStack_f8;
    }
    pCStack_128 = param_1;
    uStack_130 = 0x65;
    (**(code **)(*(int *)(iStack_18 + 0x2b0) + 0x110))(iStack_18,aSStack_160);
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
LAB_005a188c:
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  return;
}
