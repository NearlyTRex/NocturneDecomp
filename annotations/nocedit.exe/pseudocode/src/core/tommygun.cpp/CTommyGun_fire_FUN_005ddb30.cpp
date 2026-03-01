// Name: core_tommygun.cpp_CTommyGun_fire_FUN_005ddb30
// Address: 005ddb30
// Address Range: [[005ddb30, 005ddded] [005ddebf, 005de32f]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_005ddb30(CTommyGun *this_ptr)

#include "nocturne.h"

int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_005ddb30(CTommyGun *this_ptr)

{
  float fVar1;
  CCharacter_full_vtable *pCVar2;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar3;
  int iVar4;
  CCharacter *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  CDemonActor *pCVar5;
  double dVar6;
  CDemonActor *pCVar7;
  float in_stack_fffffebc;
  byte auStack_130 [28];
  float fStack_114;
  float fStack_110;
  CDemonActor *pCStack_10c;
  CMatrix3x3f CStack_108;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f aCStack_74 [2];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_28;
  float fStack_1c;
  CGlass *pCStack_18;
  float fStack_14;
  
  fVar1 = (this_ptr->base).fire_cooldown_timer;
  this_ptr->fire_frames_remaining = 2;
  if (0.0 < fVar1) {
    return 0;
  }
  pCVar2 = (this_ptr->base).base.vtable._uc;
  (this_ptr->base).fire_cooldown_timer = (this_ptr->base).fire_cooldown_timer + 0.1f;
  pCVar3 = (CVector3f *)(*(pCVar2->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_80,pCVar3);
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar4 == 0) {
    this_ptr->fire_frames_remaining = 0;
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
    this_ptr->sfx_handles[0] = 0;
    return 0;
  }
  CStack_bc.z = (this_ptr->base).bolt_velocity;
  CStack_bc.x = 0.0;
  CStack_bc.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_c8,&CStack_bc);
  CStack_d4.x = CStack_80.x + CStack_c8.x;
  CStack_d4.y = CStack_80.y + CStack_c8.y;
  CStack_d4.z = CStack_80.z + CStack_c8.z;
  CStack_28.x = (float)2.5 / (this_ptr->base).bolt_velocity;
  fStack_44 = CStack_c8.x * CStack_28.x;
  fStack_40 = CStack_c8.y * CStack_28.x;
  fStack_3c = CStack_c8.z * CStack_28.x;
  aCStack_74[0].x = CStack_80.x - fStack_44;
  aCStack_74[0].y = CStack_80.y - fStack_40;
  aCStack_74[0].z = CStack_80.z - fStack_3c;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar7 = (this_ptr->base).carried_by_actor;
  if (pCVar7 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar7);
  }
  fStack_1c = 0.0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,aCStack_74,&CStack_d4);
    dVar6 = (double)fStack_14;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) goto LAB_005ddd4e;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (iVar4 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01), 0 < iVar4)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_18 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    CStack_28.y = (float)this_ptr_02;
    CStack_28.z = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if ((CCrate *)CStack_28.z == (CCrate *)0x0) {
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
            core_crate_cpp_CCrate_explode_FUN_00448a70((CCrate *)CStack_28.z);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_02);
          iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                            (this_ptr_02,(char *)this_ptr);
          if (iVar4 != 0) {
            in_stack_fffffebc =
                 (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                  ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                   (int)((ulonglong)dVar6 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_02,in_stack_fffffebc);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)CStack_28.y)
          ;
        }
      }
      else {
        iVar4 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_18);
        if (iVar4 == 0) goto LAB_005ddd4e;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_18,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar4 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      pCVar7 = (CDemonActor *)((ulonglong)dVar6 >> 0x20);
      if ((iVar4 != 0) &&
         (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                             ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash),
         this_ptr_00 = g_CDemonSetPtr, pCVar5 != (CDemonActor *)0x0)) {
        if (pCStack_18 == (CGlass *)0x0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(this_ptr_00);
          return 0;
        }
        goto LAB_005ddd4e;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffec0);
      auStack_130._0_4_ =
           (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                     ((CCharacter *)this_ptr,pCVar7,(int)in_stack_fffffebc);
      auStack_130._4_4_ = 0.4;
      fStack_40 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fStack_3c = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fStack_38 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_1c = (float)10 /
                  SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
      fStack_58 = fStack_40 * fStack_1c;
      fStack_54 = fStack_3c * fStack_1c;
      fStack_50 = fStack_38 * fStack_1c;
      if ((float *)(auStack_130 + 8) != &fStack_58) {
        auStack_130._8_4_ = fStack_58;
        auStack_130._12_4_ = fStack_54;
        auStack_130._16_4_ = fStack_50;
      }
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,&CStack_28,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)(auStack_130 + 0x18) != pCVar3) {
        auStack_130._24_4_ = pCVar3->x;
        fStack_114 = pCVar3->y;
        fStack_110 = pCVar3->z;
      }
      pCStack_10c = (CDemonActor *)(this_ptr->base).ammo_type;
      CStack_108.m[0].y = 1.41531e-43;
      CStack_108.m[0].x = 0.15;
      CStack_108.m[0].z = (float)this_ptr;
      CStack_108.m[1].y =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffebc = 8.621821e-39;
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)auStack_130);
      if ((this_ptr->base).can_penetrate == 0) goto LAB_005ddd4e;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    fStack_1c = (float)((int)fStack_1c + 1);
    if (3 < (int)fStack_1c) {
LAB_005ddd4e:
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      if ((this_ptr->base).is_rendered != 0) {
        CStack_98.x = CStack_80.x;
        CStack_98.z = CStack_80.z;
        CStack_98.y = CStack_80.y + -0.125f;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
                  (g_CFireEffectPtr,&CStack_98,&(this_ptr->base).base.orient_matrix);
        CStack_e0.x = 5.0;
        CStack_e0.y = 6.0;
        CStack_e0.z = -6.0;
        CStack_8c.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        fStack_14 = CStack_8c.x;
        CStack_8c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.3926991,0.3926991);
        CStack_8c.z = 0.0;
        fStack_14 = CStack_8c.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_108,&CStack_8c);
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (&CStack_108,&CStack_b0,&CStack_e0);
        pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                           ((CDemonActor *)this_ptr,&CStack_a4,pCVar3);
        if (&CStack_e0 != pCVar3) {
          CStack_e0.x = pCVar3->x;
          CStack_e0.y = pCVar3->y;
          CStack_e0.z = pCVar3->z;
        }
        core_dmodel_cpp_loadModel_FUN_00478c00("bullet.kfm");
        core_fire_cpp_CFireEffect_createShell_FUN_004c91e0(g_CFireEffectPtr);
      }
      return 1;
    }
  } while( true );
}
