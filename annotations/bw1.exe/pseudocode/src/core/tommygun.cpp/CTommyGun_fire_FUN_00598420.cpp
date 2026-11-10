// Name: core_tommygun.cpp_CTommyGun_fire_FUN_00598420
// Address: 00598420
// Address Range: [[00598420, 00598d15]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00598420(CTommyGun *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00598420(CTommyGun *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  float fVar2;
  int iVar3;
  float fVar4;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  byte bVar5;
  float afStackY_113c [983];
  float *pfVar6;
  CTommyGun *this_ptr_04;
  double dVar7;
  float fStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  float fStack_19c;
  float fStack_198;
  uint uStack_194;
  EAmmoType EStack_190;
  uint uStack_18c;
  CMatrix3x3f CStack_188;
  float fStack_154;
  float afStack_150 [4];
  uint uStack_140;
  CVector3f CStack_130;
  uint uStack_124;
  uint uStack_120;
  float fStack_11c;
  float fStack_118;
  float afStack_114 [4];
  float fStack_104;
  float afStack_100 [3];
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [2];
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [5];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float afStack_84 [5];
  float fStack_70;
  float afStack_6c [5];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [3];
  CTrigger *pCStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  int iStack_14;
  
  bVar5 = 0;
  fVar4 = (this_ptr->base).fire_cooldown_timer;
  this_ptr->fire_frames_remaining = 2;
  if (0.0 < fVar4) {
    return 0;
  }
  pCVar1 = (this_ptr->base).base.vtable._uc;
  (this_ptr->base).fire_cooldown_timer = (this_ptr->base).fire_cooldown_timer + _DAT_005f7f04;
  (*(pCVar1->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar6 = afStack_6c + 2;
  afStack_6c[1] = fStack_d0;
  afStack_6c[(uint)bVar5 * -2 + 2] = afStack_cc[(uint)bVar5 * -2];
  afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 3] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar6);
  fStack_b8 = afStack_cc[2];
  afStack_cc[(uint)bVar5 * -2 + 6] = afStack_cc[(uint)bVar5 * -2 + 3];
  this_ptr_04 = this_ptr;
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(&this_ptr_04->base);
  if (iVar3 == 0) {
    this_ptr->fire_frames_remaining = 0;
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
    this_ptr->sfx_handles[0] = 0;
    return 0;
  }
  fStack_11c = (this_ptr->base).bolt_velocity;
  uStack_124 = 0;
  uStack_120 = 0;
  core_actor_cpp_FUN_00408ac0(this_ptr,&uStack_124);
  fVar2 = fStack_b4;
  fVar4 = fStack_b8;
  fStack_4c = fStack_e8;
  afStack_6c[(uint)bVar5 * -2 + 9] = afStack_e4[(uint)bVar5 * -2];
  afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_58 = fVar4 + fStack_4c;
  fStack_54 = fVar2 + fStack_48;
  fStack_50 = fStack_b0 + fStack_44;
  afStack_100[0] = fVar4 + fStack_4c;
  afStack_114[(uint)bVar5 * -2 + 6] = afStack_6c[(uint)bVar5 * -2 + 6];
  fVar4 = fStack_b8;
  afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  afStack_30[2] = (float)_DAT_005f7f08 / (this_ptr->base).bolt_velocity;
  fStack_118 = fStack_4c * afStack_30[2];
  afStack_114[0] = fStack_48 * afStack_30[2];
  afStack_114[1] = fStack_44 * afStack_30[2];
  afStack_114[2] = fStack_4c * afStack_30[2];
  afStack_114[(uint)bVar5 * -2 + 3] = afStack_114[(uint)bVar5 * -2];
  afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_a0 = fVar4 - afStack_114[2];
  afStack_9c[0] = fStack_b4 - afStack_114[3];
  afStack_9c[1] = fStack_b0 - fStack_104;
  afStack_150[2] = fVar4 - afStack_114[2];
  afStack_150[(uint)bVar5 * -2 + 3] = afStack_9c[(uint)bVar5 * -2];
  afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,actor);
  }
  iStack_1c = 0;
  do {
    fVar4 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,afStack_150 + 2,afStack_114 + 5);
    dVar7 = (double)fVar4;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) goto LAB_005986af;
    iStack_14 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_14 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0x10c))(iStack_14), 0 < iVar3)) {
      iStack_14 = 0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_24 = this_ptr_02;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (iStack_14 == 0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_20 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0
                        (0x01C57074,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor);
              goto LAB_005986af;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr_03);
          }
          else {
            core_crate_cpp_FUN_00449600(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr_02);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar3 != 0) {
            fVar4 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                     ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar7),0),
                                      (int)((ulonglong)dVar7 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(this_ptr_02,fVar4);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCStack_24->base);
        }
      }
      else {
        iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_01);
        if (iVar3 == 0) goto LAB_005986af;
        core_glass_cpp_FUN_004e34b0(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0xe0))(iStack_14);
      if ((iVar3 != 0) &&
         (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                            ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash),
         this_ptr_00 = g_CDemonSetPtr, iVar3 != 0)) {
        if (iStack_1c == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(this_ptr_00);
          return 0;
        }
        goto LAB_005986af;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffe3c);
      iVar3 = (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                        ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar7),0),(int)((ulonglong)dVar7 >> 0x20));
      CStack_130.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_130.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_130.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_88 = CStack_130.x;
      afStack_84[(uint)bVar5 * -2] = *(float *)((int)&CStack_130 + (uint)bVar5 * -8 + 4);
      afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(float *)((int)&CStack_130 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      fVar4 = (float)_DAT_005f7f18 /
              SQRT(afStack_84[1] * afStack_84[1] +
                   fStack_88 * fStack_88 + afStack_84[0] * afStack_84[0]);
      fStack_70 = fStack_88 * fVar4;
      afStack_6c[0] = afStack_84[0] * fVar4;
      afStack_6c[1] = afStack_84[1] * fVar4;
      afStack_150[2] = fStack_88 * fVar4;
      afStack_150[(uint)bVar5 * -2 + 3] = afStack_6c[(uint)bVar5 * -2];
      afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (&stack0xfffffe54 != afStack_150 + 2) {
        fStack_1ac = afStack_150[2];
        uStack_1a8 = afStack_150[3];
        uStack_1a4 = uStack_140;
      }
      core_actor_cpp_FUN_00408bb0();
      fStack_154 = fStack_a0;
      afStack_150[(uint)bVar5 * -2] = afStack_9c[(uint)bVar5 * -2];
      afStack_150[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (&stack0xfffffe64 != &fStack_154) {
        fStack_19c = fStack_154;
        fStack_198 = afStack_150[0];
        uStack_194 = afStack_150[1];
      }
      EStack_190 = (this_ptr->base).ammo_type;
      CStack_188.m[0].x = 1.41531e-43;
      uStack_18c = 0x3e19999a;
      CStack_188.m[0].y = (float)this_ptr;
      CStack_188.m[1].x =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (**(code **)(*(int *)(iVar3 + 0x154) + 0x108))();
      if ((this_ptr->base).can_penetrate == 0) goto LAB_005986af;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
LAB_005986af:
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      if ((this_ptr->base).is_rendered != 0) {
        CStack_130.x = fStack_b8;
        *(float *)((int)&CStack_130 + (uint)bVar5 * -8 + 4) = afStack_cc[(uint)bVar5 * -2 + 6];
        *(float *)((int)&CStack_130 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        CStack_130.y = CStack_130.y + _DAT_005f7f10;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
                  (0x01C57074,&CStack_130,&(this_ptr->base).base.orient_matrix);
        CStack_f4.x = 5.0;
        CStack_f4.y = 6.0;
        CStack_f4.z = -6.0;
        CStack_dc.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.3926991,0.3926991);
        CStack_dc.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.3926991,0.3926991);
        CStack_dc.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_188,&CStack_dc);
        core_dirmat_cpp_FUN_0045f690(&CStack_188,&CStack_f4);
        pfVar6 = &fStack_88;
        fStack_88 = fStack_34;
        afStack_84[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2];
        afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_actor_cpp_FUN_00408ac0(this_ptr,pfVar6);
        CStack_40.x = fStack_70;
        *(float *)((int)&CStack_40 + (uint)bVar5 * -8 + 4) = afStack_6c[(uint)bVar5 * -2];
        *(float *)((int)&CStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (&CStack_f4 != &CStack_40) {
          CStack_f4.x = CStack_40.x;
          CStack_f4.y = CStack_40.y;
          CStack_f4.z = CStack_40.z;
        }
        model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_00468780("bullet.kfm")
        ;
        core_fire_cpp_CFireEffect_createShell_FUN_004b7270
                  (0x01C57074,&(this_ptr->base).base.location.position,
                   &(this_ptr->base).base.orient.vec,&CStack_f4,model_ptr);
      }
      return 1;
    }
  } while( true );
}
