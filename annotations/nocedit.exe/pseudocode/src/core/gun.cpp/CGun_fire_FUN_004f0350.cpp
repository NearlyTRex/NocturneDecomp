// Name: core_gun.cpp_CGun_fire_FUN_004f0350
// Address: 004f0350
// Address Range: [[004f0350, 004f05f2] [004f06df, 004f0b16]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)

#include "nocturne.h"

int __cdecl core_gun_cpp_CGun_fire_FUN_004f0350(CGun *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CCharacter *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
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
  fStack_30 = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_48 = CStack_3c.x * fStack_30;
  fStack_44 = CStack_3c.y * fStack_30;
  fStack_40 = CStack_3c.z * fStack_30;
  CStack_e4.x = CStack_c0.x - fStack_48;
  CStack_e4.y = CStack_c0.y - fStack_44;
  CStack_e4.z = CStack_c0.z - fStack_40;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
  }
  iStack_24 = 0;
  do {
    fStack_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_e4,&CStack_b4);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01), 0 < iVar2)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_2c = this_ptr_02;
    pCStack_28 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_28 == (CCrate *)0x0) {
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
            core_crate_cpp_CCrate_explode_FUN_00448a70(pCStack_28);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar2 != 0) {
            fStack_18 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_02,fStack_18);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCStack_2c->base);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_1c);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_1c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
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
      fStack_cc = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fStack_c8 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fStack_c4 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_20 = (float)10 /
                  SQRT(fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8);
      fStack_9c = fStack_cc * fStack_20;
      fStack_98 = fStack_c8 * fStack_20;
      fStack_94 = fStack_c4 * fStack_20;
      if (&SStack_148.impact_point != (CVector3f *)&fStack_9c) {
        SStack_148.impact_point.x = fStack_9c;
        SStack_148.impact_point.y = fStack_98;
        SStack_148.impact_point.z = fStack_94;
      }
      fStack_18 = SStack_148.damage_amount;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,&CStack_6c,&g_CDemonSetPtr->collision_impact_position);
      if (&SStack_148.impact_direction != pCVar1) {
        SStack_148.impact_direction.x = pCVar1->x;
        SStack_148.impact_direction.y = pCVar1->y;
        SStack_148.impact_direction.z = pCVar1->z;
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
  CStack_d8.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  fStack_18 = CStack_d8.x;
  CStack_d8.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
  CStack_d8.z = 0.0;
  fStack_18 = CStack_d8.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_10c,&CStack_d8);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&CStack_10c,&CStack_84,&CStack_90);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     ((CDemonActor *)this_ptr,&CStack_78,pCVar1);
  if (&CStack_90 != pCVar1) {
    CStack_90.x = pCVar1->x;
    CStack_90.y = pCVar1->y;
    CStack_90.z = pCVar1->z;
  }
  core_dmodel_cpp_loadModel_FUN_00478c00("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004c91e0(g_CFireEffectPtr);
  return 1;
}
