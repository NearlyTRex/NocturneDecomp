// Name: core_tommygun.cpp_CTommyGun_fire_FUN_005ddb30
// Address: 005ddb30
// Address Range: [[005ddb30, 005ddded] [005ddebf, 005de32f]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_005ddb30(CTommyGun *this_ptr)

#include "nocturne.h"

int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_005ddb30(CTommyGun *this_ptr)

{
  float fVar1;
  CWeapon_full_vtable *pCVar2;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar3;
  int iVar4;
  CKeyFramedModel *model_ptr;
  CCharacter *this_ptr_01;
  EDeathState EVar5;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  CDemonActor *pCVar6;
  SDamageInfo SStack_148;
  CMatrix3x3f CStack_10c;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f local_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  CTrigger *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  CGlass *pCStack_1c;
  float fStack_18;
  
  fVar1 = (this_ptr->base).fire_cooldown_timer;
  this_ptr->fire_frames_remaining = 2;
  if (0.0 < fVar1) {
    return 0;
  }
  pCVar2 = (this_ptr->base).base.vtable._uw;
  (this_ptr->base).fire_cooldown_timer = (this_ptr->base).fire_cooldown_timer + 0.1f;
  pCVar3 = (*(pCVar2->_uw).getMuzzlePoint)(&this_ptr->base,&local_60);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_84,pCVar3);
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar4 == 0) {
    this_ptr->fire_frames_remaining = 0;
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
    this_ptr->sfx_handles[0] = 0;
    return 0;
  }
  CStack_c0.z = (this_ptr->base).bolt_velocity;
  CStack_c0.x = 0.0;
  CStack_c0.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_cc,&CStack_c0);
  CStack_d8.x = CStack_84.x + CStack_cc.x;
  CStack_d8.y = CStack_84.y + CStack_cc.y;
  CStack_d8.z = CStack_84.z + CStack_cc.z;
  fStack_2c = (float)2.5 / (this_ptr->base).bolt_velocity;
  fStack_48 = CStack_cc.x * fStack_2c;
  fStack_44 = CStack_cc.y * fStack_2c;
  fStack_40 = CStack_cc.z * fStack_2c;
  CStack_78.x = CStack_84.x - fStack_48;
  CStack_78.y = CStack_84.y - fStack_44;
  CStack_78.z = CStack_84.z - fStack_40;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar6 = (this_ptr->base).carried_by_actor;
  if (pCVar6 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar6);
  }
  iStack_20 = 0;
  do {
    fStack_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_78,&CStack_d8);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) goto LAB_005ddd4e;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (EVar5 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
       0 < (int)EVar5)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_02;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0
                        (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor);
              goto LAB_005ddd4e;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_03);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_00448a70(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_02);
          iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar4 != 0) {
            fStack_18 = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_02,fStack_18);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCStack_28->base);
        }
      }
      else {
        iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_1c);
        if (iVar4 == 0) goto LAB_005ddd4e;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_1c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar4 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      if ((iVar4 != 0) &&
         (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash),
         this_ptr_00 = g_CDemonSetPtr, pCVar6 != (CDemonActor *)0x0)) {
        if (iStack_20 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(this_ptr_00);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_148);
      SStack_148.hit_part_index = g_CDemonSetPtr->collision_part_index;
      SStack_148.damage_amount =
           (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
      SStack_148.gore_multiplier = 0.4;
      fStack_54 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fStack_50 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fStack_4c = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_30 = (float)10 /
                  SQRT(fStack_4c * fStack_4c + fStack_54 * fStack_54 + fStack_50 * fStack_50);
      fStack_6c = fStack_54 * fStack_30;
      fStack_68 = fStack_50 * fStack_30;
      fStack_64 = fStack_4c * fStack_30;
      if (&SStack_148.impact_point != (CVector3f *)&fStack_6c) {
        SStack_148.impact_point.x = fStack_6c;
        SStack_148.impact_point.y = fStack_68;
        SStack_148.impact_point.z = fStack_64;
      }
      fStack_18 = SStack_148.damage_amount;
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,&CStack_3c,&g_CDemonSetPtr->collision_impact_position);
      if (&SStack_148.impact_direction != pCVar3) {
        SStack_148.impact_direction.x = pCVar3->x;
        SStack_148.impact_direction.y = pCVar3->y;
        SStack_148.impact_direction.z = pCVar3->z;
      }
      SStack_148.ammo_type = (this_ptr->base).ammo_type;
      SStack_148.damage_type = DAMAGE_TYPE_IMMUNE|DAMAGE_TYPE_DROWN;
      SStack_148.dismember_prob = 0.15;
      SStack_148.attacker = (CDemonActor *)this_ptr;
      SStack_148.wielder =
           (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)(this_ptr_01,&SStack_148);
      if ((this_ptr->base).can_penetrate == 0) goto LAB_005ddd4e;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
    if (3 < iStack_20) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      if ((this_ptr->base).is_rendered != 0) {
        CStack_9c.x = CStack_84.x;
        CStack_9c.z = CStack_84.z;
        CStack_9c.y = CStack_84.y + -0.125f;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
                  (g_CFireEffectPtr,&CStack_9c,&(this_ptr->base).base.orient_matrix);
        CStack_e4.x = 5.0;
        CStack_e4.y = 6.0;
        CStack_e4.z = -6.0;
        CStack_90.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        fStack_18 = CStack_90.x;
        CStack_90.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_90.z = 0.0;
        fStack_18 = CStack_90.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_10c,&CStack_90);
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (&CStack_10c,&CStack_b4,&CStack_e4);
        pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                           ((CDemonActor *)this_ptr,&CStack_a8,pCVar3);
        if (&CStack_e4 != pCVar3) {
          CStack_e4.x = pCVar3->x;
          CStack_e4.y = pCVar3->y;
          CStack_e4.z = pCVar3->z;
        }
        model_ptr = core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_createShell_FUN_004c91e0
                  (g_CFireEffectPtr,&(this_ptr->base).base.location.position,
                   &(this_ptr->base).base.orient.vec,&CStack_e4,model_ptr);
      }
      return 1;
    }
  } while( true );
}
