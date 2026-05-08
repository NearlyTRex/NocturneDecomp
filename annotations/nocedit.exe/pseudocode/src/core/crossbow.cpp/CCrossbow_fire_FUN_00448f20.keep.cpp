// Name: core_crossbow.cpp_CCrossbow_fire_FUN_00448f20
// Address: 00448f20
// MANUAL RECONSTRUCTION
// Address Range: [[00448f20, 0044953a]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00448f20(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00448f20(CCrossbow *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar1;
  int iVar2;
  float fVar4;
  CCharacter *this_ptr_01;
  EDeathState EVar3;
  CGlass *this_ptr_03;
  CTrigger *this_ptr_02;
  int iVar5;
  CVector3f *pCVar6;
  float fStack_f8;
  SDamageInfo SStack_f4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f local_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  float fStack_28;
  CTrigger *pCStack_24;
  int iStack_20;
  float fStack_1c;
  CGlass *pCStack_18;
  float fStack_14;
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  
  pCVar1 = (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_4c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_70,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    return 0;
  }
  CStack_88.z = (this_ptr->base).bolt_velocity;
  CStack_88.x = 0.0;
  CStack_88.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_a0,&CStack_88);
  CStack_7c.x = CStack_70.x + CStack_a0.x;
  CStack_7c.y = CStack_70.y + CStack_a0.y;
  CStack_7c.z = CStack_70.z + CStack_a0.z;
  fVar4 = (float)1.5 / (this_ptr->base).bolt_velocity;
  CStack_94.x = CStack_70.x - CStack_a0.x * fVar4;
  CStack_94.y = CStack_70.y - CStack_a0.y * fVar4;
  CStack_94.z = CStack_70.z - CStack_a0.z * fVar4;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
  }
  iStack_20 = 0;
  do {
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_94,&CStack_7c);
    if ((fVar4 < 0.0) || (1.0 < fVar4)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (EVar3 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
       0 < (int)EVar3)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    this_ptr_03 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (this_ptr_03 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     &(this_ptr->base).base.orient.vec,&g_CDemonSetPtr->collision_normal,
                     g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_02);
        iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                          (this_ptr_02,(CDemonActor *)this_ptr);
        if (iVar5 != 0) {
          fVar4 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
          core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_02,fVar4);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr_02);
      }
      else {
        iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_03);
        if (iVar5 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (this_ptr_03,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar5 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar5 != 0) {
        if (iStack_20 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_f4);
      SStack_f4.hit_part_index = g_CDemonSetPtr->collision_part_index;
      SStack_f4.damage_amount =
           (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
      SStack_f4.gore_multiplier = 0.4;
      fVar4 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fVar1 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fVar3 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fVar2 = (float)10 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
      fStack_40 = fVar4 * fVar2;
      fStack_3c = fVar1 * fVar2;
      fStack_38 = fVar3 * fVar2;
      if (&SStack_f4.impact_point != (CVector3f *)&fStack_40) {
        SStack_f4.impact_point.x = fStack_40;
        SStack_f4.impact_point.y = fStack_3c;
        SStack_f4.impact_point.z = fStack_38;
      }
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,&CStack_34,&g_CDemonSetPtr->collision_impact_position);
      if (&SStack_f4.impact_direction != pCVar6) {
        SStack_f4.impact_direction = *pCVar6;
      }
      SStack_f4.ammo_type = (this_ptr->base).ammo_type;
      SStack_f4.damage_type = DAMAGE_TYPE_LAUNCH;
      SStack_f4.attacker = (CDemonActor *)this_ptr;
      SStack_f4.dismember_prob = 0.15;
      SStack_f4.wielder = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr)
      ;
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)(this_ptr_01,&SStack_f4);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_70);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
