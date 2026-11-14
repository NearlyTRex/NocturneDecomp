// Name: core_confedrt.cpp_FUN_005a14e0
// Address: 005a14e0
// Address Range: [[005a14e0, 005a1a64]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a14e0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confedrt_cpp_FUN_005a14e0(CDemonActor *param_1)

{
  void *pvVar1;
  float fVar2;
  EDeathState EVar3;
  byte bVar4;
  float afStackY_110c [996];
  float *pfVar5;
  SDamageInfo SStack_160;
  float fStack_124;
  float afStack_120 [2];
  CVector3f local_118;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
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
  CCharacter *pCStack_18;
  int *local_14;
  
  bVar4 = 0;
  if (param_1[0x62].particle_systems[0].particles == (void *)0x0) {
    return;
  }
  local_14 = &param_1[6].is_transparent;
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,local_14 + (int)param_1[0x67].particle_systems[2].owner * 0xc);
  pfVar5 = afStack_108 + 0xb;
  local_dc[0] = (float)local_58;
  afStack_108[(uint)bVar4 * -2 + 0xc] = local_9c[(uint)bVar4 * -2 + 0x12];
  afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  core_actor_cpp_FUN_00408d70(param_1,pfVar5);
  local_118.x = afStack_c0[2];
  *(float *)((int)&local_118 + (uint)bVar4 * -8 + 4) = afStack_c0[(uint)bVar4 * -2 + 3];
  *(float *)((int)&local_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,local_14 + param_1[0x67].particle_systems[2].active * 0xc);
  pfVar5 = local_9c + 0x1a;
  local_34[0] = (float)local_f4;
  local_9c[(uint)bVar4 * -2 + 0x1b] = afStack_108[(uint)bVar4 * -2 + 6];
  local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c] =
       afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408d70(param_1,pfVar5);
  fVar2 = local_118.x;
  local_ac.x = local_88;
  *(float *)((int)&local_ac + (uint)bVar4 * -8 + 4) = local_9c[(uint)bVar4 * -2 + 6];
  *(float *)((int)&local_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  local_4c = fVar2 - local_ac.x;
  local_48 = local_118.y - local_ac.y;
  local_44 = local_118.z - local_ac.z;
  local_64 = fVar2 - local_ac.x;
  local_9c[(uint)bVar4 * -2 + 0xf] = local_9c[(uint)bVar4 * -2 + 0x15];
  local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
       local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
  local_64 = local_64 * _DAT_005efd3b;
  local_60 = local_60 * _DAT_005efd3b;
  local_5c = local_5c * _DAT_005efd3b;
  local_28 = local_64 + local_ac.x;
  local_24 = local_60 + local_ac.y;
  local_20 = local_5c + local_ac.z;
  local_a0 = local_28;
  local_9c[(uint)bVar4 * -2] = local_9c[(uint)bVar4 * -2 + 0x1e];
  local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
  if (local_9c + 0xe != &local_a0) {
    local_64 = local_a0;
    local_60 = local_9c[0];
    local_5c = local_9c[1];
  }
  core_fire_cpp_CFireEffect_createMuzzleEffect_FUN_0049d170
            (0x01C3DEB4,local_9c + 0xe,&param_1->orient_matrix);
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
            (0x01C3DEB4,&local_ac,1.5,(CVector3f *)0x0,0xffff);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,param_1,"shotgun.wav",&local_118);
  pvVar1 = param_1[0x62].particle_systems[0].particles;
  (**(code **)(*(int *)((int)pvVar1 + 0x2b0) + 0x5c))(pvVar1,afStack_108 + 0xe);
  core_actor_cpp_FUN_00408d70(param_1[0x62].particle_systems[0].particles,afStack_108 + 0xe);
  fStack_70 = (float)uStack_c4;
  local_9c[(uint)bVar4 * -2 + 0xc] = afStack_c0[(uint)bVar4 * -2];
  local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       afStack_c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (afStack_108 + 0xe != local_9c + 0xb) {
    local_d0 = fStack_70;
    uStack_cc = uStack_6c;
    uStack_c8 = uStack_68;
  }
  afStack_40[0] = local_118.x;
  local_9c[(uint)bVar4 * -2 + 0x18] = *(float *)((int)&local_118 + (uint)bVar4 * -8 + 4);
  local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
       *(float *)((int)&local_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
  local_14 = (int *)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,local_9c + 0x17,afStack_108 + 0xe)
  ;
  if (((float)local_14 < 0.0) || (1.0 < (float)local_14)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
  pCStack_18 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
  if (pCStack_18 != (CCharacter *)0x0) {
    EVar3 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18);
    if (0 < (int)EVar3) goto LAB_005a188c;
  }
  if (pCStack_18 != (CCharacter *)0x0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_160);
    SStack_160.damage_amount = 0x41200000;
    SStack_160.gore_multiplier = 1.0;
    fStack_10c = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
    afStack_108[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    afStack_108[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    fStack_7c = fStack_10c;
    local_9c[(uint)bVar4 * -2 + 9] = afStack_108[(uint)bVar4 * -2];
    local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_1c = (float)_DAT_005efd3f /
                SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
    local_9c[2] = fStack_7c * fStack_1c;
    local_9c[3] = fStack_78 * fStack_1c;
    fStack_8c = fStack_74 * fStack_1c;
    fStack_124 = fStack_7c * fStack_1c;
    afStack_120[(uint)bVar4 * -2] = local_9c[(uint)bVar4 * -2 + 3];
    afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (&SStack_160.impact_point != (CVector3f *)&fStack_124) {
      SStack_160.impact_point.x = fStack_124;
      SStack_160.impact_point.y = afStack_120[0];
      SStack_160.impact_point.z = afStack_120[1];
    }
    core_actor_cpp_FUN_00408de0(pCStack_18,&g_CDemonSetPtr->collision_impact_position);
    afStack_108[2] = fStack_e8;
    afStack_108[(uint)bVar4 * -2 + 3] = afStack_108[(uint)bVar4 * -2 + 9];
    afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    if (&SStack_160.impact_direction != (CVector3f *)(afStack_108 + 2)) {
      SStack_160.impact_direction.x = afStack_108[2];
      SStack_160.impact_direction.y = afStack_108[3];
      SStack_160.impact_direction.z = fStack_f8;
    }
    SStack_160.wielder = param_1;
    SStack_160.damage_type = DAMAGE_TYPE_ATTACK_BULLET;
    (*(((pCStack_18->base).vtable._uc)->_uc).processDamage)(pCStack_18,&SStack_160);
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
LAB_005a188c:
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  return;
}
