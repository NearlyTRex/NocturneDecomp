// Name: core_turret.cpp_CTurret_fire_FUN_005e3750
// Address: 005e3750
// MANUAL RECONSTRUCTION
// Address Range: [[005e3750, 005e3c6a]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_fire_FUN_005e3750(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_fire_FUN_005e3750(CTurret *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar1;
  float fVar4;
  CCharacter *this_ptr_00;
  EDeathState EVar2;
  CGlass *this_ptr_03;
  CTrigger *this_ptr_01;
  CCrate *this_ptr_04;
  CFlameCan *this_ptr_02;
  CVector3f *pCVar5;
  int iVar3;
  int iVar6;
  SDamageInfo SStack_e0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f local_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  CVector3f CStack_38;
  int iStack_24;

  pCVar1 = (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_5c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_a4,pCVar1);
  CStack_68.z = (this_ptr->base).bolt_velocity;
  CStack_68.x = 0.0;
  CStack_68.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_38,&CStack_68);
  CStack_98.x = CStack_a4.x + CStack_38.x;
  CStack_98.y = CStack_a4.y + CStack_38.y;
  CStack_98.z = CStack_a4.z + CStack_38.z;
  CStack_74 = CStack_a4;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  iStack_24 = 0;
  do {
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_74,&CStack_98);
    if ((fVar4 < 0.0) || (1.0 < fVar4)) break;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
       0 < (int)EVar2)) {
      this_ptr_00 = (CCharacter *)0x0;
    }
    this_ptr_03 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    this_ptr_04 = (CCrate *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_00 == (CCharacter *)0x0) {
      if (this_ptr_03 == (CGlass *)0x0) {
        if (this_ptr_01 != (CTrigger *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_01);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                            (this_ptr_01,(CDemonActor *)this_ptr);
          if (iVar3 != 0) {
            fVar4 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_01,fVar4);
          }
          goto LAB_005e3ae2;
        }
        if (this_ptr_04 == (CCrate *)0x0) {
          if (this_ptr_02 == (CFlameCan *)0x0) {
            core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0
                      (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                       &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                       g_CDemonSetPtr->collision_actor);
            break;
          }
          core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_02);
        }
        else {
          core_crate_cpp_CCrate_explode_FUN_00448a70(this_ptr_04);
        }
      }
      else {
        iVar6 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_03);
        if (iVar6 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (this_ptr_03,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_e0);
      SStack_e0.hit_part_index = g_CDemonSetPtr->collision_part_index;
      SStack_e0.damage_amount =
           (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
      SStack_e0.gore_multiplier = 0.4;
      fVar4 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fVar1 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fVar3 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fVar2 = (float)10 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
      fStack_50 = fVar4 * fVar2;
      fStack_4c = fVar1 * fVar2;
      fStack_48 = fVar3 * fVar2;
      if (&SStack_e0.impact_point != (CVector3f *)&fStack_50) {
        SStack_e0.impact_point.x = fStack_50;
        SStack_e0.impact_point.y = fStack_4c;
        SStack_e0.impact_point.z = fStack_48;
      }
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_00->base,&CStack_80,&g_CDemonSetPtr->collision_impact_position);
      if (&SStack_e0.impact_direction != pCVar5) {
        SStack_e0.impact_direction = *pCVar5;
      }
      SStack_e0.ammo_type = (this_ptr->base).ammo_type;
      SStack_e0.dismember_prob = 1.0;
      SStack_e0.attacker = (CDemonActor *)this_ptr;
      SStack_e0.damage_type = DAMAGE_TYPE_IMMUNE|DAMAGE_TYPE_DROWN;
      SStack_e0.wielder = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr)
      ;
      (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_e0);
      if ((this_ptr->base).can_penetrate == 0) break;
      this_ptr_01 = (CTrigger *)g_CDemonSetPtr->collision_actor;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr_01->base);
    }
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < 4);
  CStack_44.x = CStack_a4.x;
  CStack_44.z = CStack_a4.z;
  CStack_44.y = CStack_a4.y + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
            (g_CFireEffectPtr,&CStack_44,&(this_ptr->base).base.orient_matrix);
  this_ptr->fire_sound_frames = 2;
  (this_ptr->base).fire_cooldown_timer = this_ptr->fire_delay_time;
  return 1;
}
