// Name: core_confedrt.cpp_CConfederate_fireShotgun_FUN_005a14e0
// Address: 005a14e0
// Address Range: [[005a14e0, 005a1a64]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_fireShotgun_FUN_005a14e0(CConfederate *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_confedrt_cpp_CConfederate_fireShotgun_FUN_005a14e0(CConfederate *this_ptr)

{
  CCharacter *this_ptr_00;
  float fVar1;
  EDeathState EVar2;
  byte bVar3;
  float afStackY_110c [996];
  CVector3f *pCVar4;
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
  CVector3f local_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f local_88;
  float fStack_7c;
  float afStack_78 [2];
  CVector3f CStack_70;
  CVector3f local_64;
  CVector3f local_58;
  float local_4c;
  float local_48 [2];
  CVector3f CStack_40;
  CVector3f local_34;
  float local_28;
  float local_24 [3];
  CCharacter *pCStack_18;
  CMatrix3x4f *local_14;
  
  bVar3 = 0;
  if ((this_ptr->base).base.victim == (CCharacter *)0x0) {
    return;
  }
  local_14 = (this_ptr->base).base.base.model.bone_transform.bone_model_matrices;
  core_xform_cpp_transformVector3x4_FUN_00591530
            (&g_ZeroVector,local_14 + this_ptr->gun2_bone,&local_58);
  pCVar4 = &local_dc;
  local_dc.x = local_58.x;
  *(uint *)((int)&local_dc + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_58 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&local_dc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar4,&local_b8);
  local_118.x = local_b8.x;
  *(uint *)((int)&local_118 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_b8 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&local_118 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_b8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_xform_cpp_transformVector3x4_FUN_00591530
            (&g_ZeroVector,local_14 + this_ptr->gun_bone,&local_f4);
  pCVar4 = &local_34;
  local_34.x = local_f4.x;
  *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_f4 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_f4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar4,&local_88);
  fVar1 = local_118.x;
  local_ac.x = local_88.x;
  *(uint *)((int)&local_ac + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_88 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&local_ac + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_88 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  local_4c = fVar1 - local_ac.x;
  local_48[0] = local_118.y - local_ac.y;
  local_48[1] = local_118.z - local_ac.z;
  local_64.x = fVar1 - local_ac.x;
  *(float *)((int)&local_64 + (uint)bVar3 * -8 + 4) = local_48[(uint)bVar3 * -2];
  *(float *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       local_48[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_64.x = local_64.x * 0.66f;
  local_64.y = local_64.y * 0.66f;
  local_64.z = local_64.z * 0.66f;
  local_28 = local_64.x + local_ac.x;
  local_24[0] = local_64.y + local_ac.y;
  local_24[1] = local_64.z + local_ac.z;
  local_a0.x = local_28;
  *(float *)((int)&local_a0 + (uint)bVar3 * -8 + 4) = local_24[(uint)bVar3 * -2];
  *(float *)((int)&local_a0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       local_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (&local_64 != &local_a0) {
    local_64.x = local_a0.x;
    local_64.y = local_a0.y;
    local_64.z = local_a0.z;
  }
  core_fire_cpp_CFireEffect_createMuzzleEffect_FUN_0049d170
            (g_CFireEffectPtr,&local_64,&(this_ptr->base).base.base.base.orient_matrix);
  core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
            (g_CFireEffectPtr,&local_ac,1.5,(CVector3f *)0x0,0xffff);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"shotgun.wav",&local_118);
  this_ptr_00 = (this_ptr->base).base.victim;
  (*((this_ptr_00->base).vtable._ub)->getTargetPoints)(&this_ptr_00->base,&local_d0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            (&((this_ptr->base).base.victim)->base,&local_d0,&CStack_c4);
  CStack_70.x = CStack_c4.x;
  afStack_78[(uint)bVar3 * -2 + 3] = *(float *)((int)&CStack_c4 + (uint)bVar3 * -8 + 4);
  afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       *(float *)((int)&CStack_c4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (&local_d0 != (CVector3f *)(afStack_78 + 2)) {
    local_d0.x = CStack_70.x;
    local_d0.y = CStack_70.y;
    local_d0.z = CStack_70.z;
  }
  CStack_40.x = local_118.x;
  *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_118 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_118 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  local_14 = (CMatrix3x4f *)
             core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0(g_CDemonSetPtr,&CStack_40,&local_d0);
  if (((float)local_14 < 0.0) || (1.0 < (float)local_14)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
  pCStack_18 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
  if (pCStack_18 != (CCharacter *)0x0) {
    EVar2 = (*(((pCStack_18->base).vtable._uc)->_uc).getDeathState)(pCStack_18);
    if (0 < (int)EVar2) goto LAB_005a188c;
  }
  if (pCStack_18 != (CCharacter *)0x0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_160);
    SStack_160.damage_amount = 0x41200000;
    SStack_160.gore_multiplier = 1.0;
    fStack_10c = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
    afStack_108[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    afStack_108[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    fStack_7c = fStack_10c;
    afStack_78[(uint)bVar3 * -2] = afStack_108[(uint)bVar3 * -2];
    afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_108[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    local_24[2] = (float)10 /
                  SQRT(afStack_78[1] * afStack_78[1] +
                       fStack_7c * fStack_7c + afStack_78[0] * afStack_78[0]);
    fStack_94 = fStack_7c * local_24[2];
    afStack_90[0] = afStack_78[0] * local_24[2];
    afStack_90[1] = afStack_78[1] * local_24[2];
    fStack_124 = fStack_7c * local_24[2];
    afStack_120[(uint)bVar3 * -2] = afStack_90[(uint)bVar3 * -2];
    afStack_120[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (&SStack_160.impact_point != (CVector3f *)&fStack_124) {
      SStack_160.impact_point.x = fStack_124;
      SStack_160.impact_point.y = afStack_120[0];
      SStack_160.impact_point.z = afStack_120[1];
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              (&pCStack_18->base,&g_CDemonSetPtr->collision_impact_position,&CStack_e8);
    afStack_108[2] = CStack_e8.x;
    afStack_108[(uint)bVar3 * -2 + 3] = *(float *)((int)&CStack_e8 + (uint)bVar3 * -8 + 4);
    afStack_108[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         *(float *)((int)&CStack_e8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (&SStack_160.impact_direction != (CVector3f *)(afStack_108 + 2)) {
      SStack_160.impact_direction.x = afStack_108[2];
      SStack_160.impact_direction.y = afStack_108[3];
      SStack_160.impact_direction.z = fStack_f8;
    }
    SStack_160.wielder = (CDemonActor *)this_ptr;
    SStack_160.damage_type = DAMAGE_TYPE_ATTACK_BULLET;
    (*(((pCStack_18->base).vtable._uc)->_uc).processDamage)(pCStack_18,&SStack_160);
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
LAB_005a188c:
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  return;
}
