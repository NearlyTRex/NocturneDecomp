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
  CVector3f *pCVar5;
  SDamageInfo SStack_160;
  float fStack_124;
  float afStack_120 [2];
  CVector3f local_118;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  CVector3f local_f4;
  CVector3f CStack_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f CStack_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c [4];
  float fStack_8c;
  CVector3f local_88;
  float fStack_7c;
  float afStack_78 [2];
  CVector3f CStack_70;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  float local_4c;
  float local_48 [5];
  CVector3f local_34;
  float local_28;
  float local_24 [3];
  CCharacter *pCStack_18;
  int *local_14;
  
  bVar4 = 0;
  if (param_1[0x62].particle_systems[0].particles == (void *)0x0) {
    return;
  }
  local_14 = &param_1[6].is_transparent;
  core_xform_cpp_transformVector3x4_FUN_00591530
            ((CVector3f *)&DAT_0265370c,
             (CMatrix3x4f *)(local_14 + (int)param_1[0x67].particle_systems[2].owner * 0xc),
             &local_58);
  pCVar5 = &local_dc;
  local_dc.x = local_58.x;
  *(uint *)((int)&local_dc + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_58 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_dc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(param_1,pCVar5,&local_b8);
  local_118.x = local_b8.x;
  *(uint *)((int)&local_118 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_b8 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_xform_cpp_transformVector3x4_FUN_00591530
            ((CVector3f *)&DAT_0265370c,
             (CMatrix3x4f *)(local_14 + param_1[0x67].particle_systems[2].active * 0xc),&local_f4);
  pCVar5 = &local_34;
  local_34.x = local_f4.x;
  *(uint *)((int)&local_34 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_f4 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_f4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(param_1,pCVar5,&local_88);
  fVar2 = local_118.x;
  local_ac.x = local_88.x;
  *(uint *)((int)&local_ac + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_88 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  local_4c = fVar2 - local_ac.x;
  local_48[0] = local_118.y - local_ac.y;
  local_48[1] = local_118.z - local_ac.z;
  local_64 = fVar2 - local_ac.x;
  afStack_78[(uint)bVar4 * -2 + 6] = local_48[(uint)bVar4 * -2];
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  local_64 = local_64 * _DAT_005efd3b;
  local_60 = local_60 * _DAT_005efd3b;
  local_5c = local_5c * _DAT_005efd3b;
  local_28 = local_64 + local_ac.x;
  local_24[0] = local_60 + local_ac.y;
  local_24[1] = local_5c + local_ac.z;
  local_a0 = local_28;
  local_9c[(uint)bVar4 * -2] = local_24[(uint)bVar4 * -2];
  local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (afStack_78 + 5 != &local_a0) {
    local_64 = local_a0;
    local_60 = local_9c[0];
    local_5c = local_9c[1];
  }
  core_fire_cpp_CFireEffect_createMuzzleEffect_FUN_0049d170
            (0x01C3DEB4,afStack_78 + 5,&param_1->orient_matrix);
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
            (0x01C3DEB4,&local_ac,1.5,(CVector3f *)0x0,0xffff);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,param_1,"shotgun.wav",&local_118);
  pvVar1 = param_1[0x62].particle_systems[0].particles;
  (**(code **)(*(int *)((int)pvVar1 + 0x2b0) + 0x5c))(pvVar1,&local_d0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            (param_1[0x62].particle_systems[0].particles,&local_d0,&CStack_c4);
  CStack_70.x = CStack_c4.x;
  afStack_78[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_c4 + (uint)bVar4 * -8 + 4);
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       *(float *)((int)&CStack_c4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (&local_d0 != (CVector3f *)(afStack_78 + 2)) {
    local_d0.x = CStack_70.x;
    local_d0.y = CStack_70.y;
    local_d0.z = CStack_70.z;
  }
  local_48[2] = local_118.x;
  local_48[(uint)bVar4 * -2 + 3] = *(float *)((int)&local_118 + (uint)bVar4 * -8 + 4);
  local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       *(float *)((int)&local_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
  local_14 = (int *)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,local_48 + 2,&local_d0);
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
    afStack_78[(uint)bVar4 * -2] = afStack_108[(uint)bVar4 * -2];
    afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_24[2] = (float)_DAT_005efd3f /
                  SQRT(afStack_78[1] * afStack_78[1] +
                       fStack_7c * fStack_7c + afStack_78[0] * afStack_78[0]);
    local_9c[2] = fStack_7c * local_24[2];
    local_9c[3] = afStack_78[0] * local_24[2];
    fStack_8c = afStack_78[1] * local_24[2];
    fStack_124 = fStack_7c * local_24[2];
    afStack_120[(uint)bVar4 * -2] = local_9c[(uint)bVar4 * -2 + 3];
    afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (&SStack_160.impact_point != (CVector3f *)&fStack_124) {
      SStack_160.impact_point.x = fStack_124;
      SStack_160.impact_point.y = afStack_120[0];
      SStack_160.impact_point.z = afStack_120[1];
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              (&pCStack_18->base,&g_CDemonSetPtr->collision_impact_position,&CStack_e8);
    afStack_108[2] = CStack_e8.x;
    afStack_108[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_e8 + (uint)bVar4 * -8 + 4);
    afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&CStack_e8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
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
