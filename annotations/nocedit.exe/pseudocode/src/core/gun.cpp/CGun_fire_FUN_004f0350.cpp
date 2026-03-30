// Name: core_gun.cpp_CGun_fire_FUN_004f0350
// Address: 004f0350
// Address Range: [[004f0350, 004f05f2] [004f06df, 004f0b16]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)

#include "nocturne.h"

int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar1;
  int iVar2;
  float fVar4;
  CVector3f *pCVar5;
  CKeyFramedModel *model_ptr;
  CCharacter *this_ptr_01;
  EDeathState EVar3;
  CGlass *this_ptr_04;
  CTrigger *this_ptr_02;
  CCrate *this_ptr_05;
  CFlameCan *this_ptr_03;
  int iVar6;
  SDamageInfo SStack_148;
  CMatrix3x3f CStack_10c;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f local_60;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  float fStack_30;
  CTrigger *pCStack_2c;
  CCrate *pCStack_28;
  int iStack_24;
  float fStack_20;
  CGlass *pCStack_1c;
  float fStack_18;
  CDemonSet *this_ptr_00;
  CDemonActor *actor;
  
  pCVar1 = (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_60);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_c0,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005b3a40
              (g_CSoundPtr,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_c0);
    return 0;
  }
  CStack_a8.z = (this_ptr->base).bolt_velocity;
  CStack_a8.x = 0.0;
  CStack_a8.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_3c,&CStack_a8);
  CStack_b4.x = CStack_c0.x + CStack_3c.x;
  CStack_b4.y = CStack_c0.y + CStack_3c.y;
  CStack_b4.z = CStack_c0.z + CStack_3c.z;
  fVar4 = (float)1.5 / (this_ptr->base).bolt_velocity;
  CStack_e4.x = CStack_c0.x - CStack_3c.x * fVar4;
  CStack_e4.y = CStack_c0.y - CStack_3c.y * fVar4;
  CStack_e4.z = CStack_c0.z - CStack_3c.z * fVar4;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
  }
  iStack_24 = 0;
  do {
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_e4,&CStack_b4);
    if ((fVar4 < 0.0) || (1.0 < fVar4)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (EVar3 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
       0 < (int)EVar3)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    this_ptr_04 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    this_ptr_05 = (CCrate *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (this_ptr_04 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (this_ptr_05 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0
                        (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_03);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_00448a70(this_ptr_05);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_02);
          iVar6 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar6 != 0) {
            fVar4 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_02,fVar4);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr_02)
          ;
        }
      }
      else {
        iVar6 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_04);
        if (iVar6 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (this_ptr_04,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar6 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar6 != 0) {
        if (iStack_24 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_148);
      SStack_148.hit_part_index = g_CDemonSetPtr->collision_part_index;
      SStack_148.damage_amount =
           (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
      SStack_148.gore_multiplier = 0.4;
      fVar4 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fVar1 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fVar3 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fVar2 = (float)10 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
      fStack_9c = fVar4 * fVar2;
      fStack_98 = fVar1 * fVar2;
      fStack_94 = fVar3 * fVar2;
      if (&SStack_148.impact_point != (CVector3f *)&fStack_9c) {
        SStack_148.impact_point.x = fStack_9c;
        SStack_148.impact_point.y = fStack_98;
        SStack_148.impact_point.z = fStack_94;
      }
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,&CStack_6c,&g_CDemonSetPtr->collision_impact_position);
      if (&SStack_148.impact_direction != pCVar5) {
        SStack_148.impact_direction.x = pCVar5->x;
        SStack_148.impact_direction.y = pCVar5->y;
        SStack_148.impact_direction.z = pCVar5->z;
      }
      SStack_148.ammo_type = (this_ptr->base).ammo_type;
      SStack_148.dismember_prob = 0.15;
      SStack_148.attacker = (CDemonActor *)this_ptr;
      SStack_148.damage_type = DAMAGE_TYPE_IMMUNE|DAMAGE_TYPE_DROWN;
      SStack_148.wielder =
           (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)(this_ptr_01,&SStack_148);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  CStack_54.x = CStack_c0.x;
  CStack_54.z = CStack_c0.z;
  CStack_54.y = CStack_c0.y + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
            (g_CFireEffectPtr,&CStack_54,&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"45.wav",&CStack_c0);
  (this_ptr->base).fire_cooldown_timer = 0.333;
  CStack_90.x = 3.0;
  CStack_90.y = 3.0;
  CStack_90.z = -4.0;
  CStack_d8.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_d8.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_d8.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_10c,&CStack_d8);
  pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&CStack_10c,&CStack_84,&CStack_90);
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,&CStack_78,pCVar5);
  if (&CStack_90 != pCVar5) {
    CStack_90.x = pCVar5->x;
    CStack_90.y = pCVar5->y;
    CStack_90.z = pCVar5->z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004c91e0
            (g_CFireEffectPtr,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient.vec,&CStack_90,model_ptr);
  return 1;
}
