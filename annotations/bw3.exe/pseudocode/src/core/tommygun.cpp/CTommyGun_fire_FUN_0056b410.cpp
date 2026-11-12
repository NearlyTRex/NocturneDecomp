// Name: core_tommygun.cpp_CTommyGun_fire_FUN_0056b410
// Address: 0056b410
// Address Range: [[0056b410, 0056bd06]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_0056b410(CTommyGun *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_0056b410(CTommyGun *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  CDemonSet *this_ptr_00;
  float fVar2;
  int iVar3;
  float fVar4;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  CDemonActor *pCVar5;
  CCharacter *this_ptr_04;
  float unaff_EBX;
  byte bVar6;
  float afStackY_1138 [981];
  float *pfVar7;
  CTommyGun *this_ptr_05;
  double dVar8;
  CDemonActor *pCVar9;
  float in_stack_fffffe3c;
  byte auStack_1b0 [44];
  float fStack_184;
  CTommyGun *pCStack_180;
  CDemonActor *pCStack_178;
  float fStack_150;
  float afStack_14c [4];
  float fStack_13c;
  CVector3f CStack_130;
  float afStack_124 [4];
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
  uint uStack_34;
  float fStack_28;
  CTrigger *pCStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  int iStack_18;
  CCharacter *pCStack_14;
  
  bVar6 = 0;
  fVar4 = (this_ptr->base).fire_cooldown_timer;
  this_ptr->fire_frames_remaining = 2;
  if (0.0 < fVar4) {
    return 0;
  }
  pCVar1 = (this_ptr->base).base.vtable._uc;
  (this_ptr->base).fire_cooldown_timer = (this_ptr->base).fire_cooldown_timer + _DAT_005d6473;
  (*(pCVar1->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar7 = afStack_6c + 2;
  afStack_6c[1] = fStack_d0;
  afStack_6c[(uint)bVar6 * -2 + 2] = afStack_cc[(uint)bVar6 * -2];
  afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3] =
       afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
  fStack_b8 = afStack_cc[2];
  afStack_cc[(uint)bVar6 * -2 + 6] = afStack_cc[(uint)bVar6 * -2 + 3];
  this_ptr_05 = this_ptr;
  afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr_05->base);
  if (iVar3 == 0) {
    this_ptr->fire_frames_remaining = 0;
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
    this_ptr->sfx_handles[0] = 0;
    return 0;
  }
  afStack_124[2] = (this_ptr->base).bolt_velocity;
  afStack_124[0] = 0.0;
  afStack_124[1] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_124);
  fVar2 = fStack_b4;
  fVar4 = fStack_b8;
  fStack_4c = fStack_e8;
  afStack_6c[(uint)bVar6 * -2 + 9] = afStack_e4[(uint)bVar6 * -2];
  afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
       afStack_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fStack_58 = fVar4 + fStack_4c;
  fStack_54 = fVar2 + fStack_48;
  fStack_50 = fStack_b0 + fStack_44;
  afStack_100[0] = fVar4 + fStack_4c;
  afStack_114[(uint)bVar6 * -2 + 6] = afStack_6c[(uint)bVar6 * -2 + 6];
  fVar4 = fStack_b8;
  afStack_114[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  fStack_28 = (float)_DAT_005d6477 / (this_ptr->base).bolt_velocity;
  afStack_124[3] = fStack_4c * fStack_28;
  afStack_114[0] = fStack_48 * fStack_28;
  afStack_114[1] = fStack_44 * fStack_28;
  afStack_114[2] = fStack_4c * fStack_28;
  afStack_114[(uint)bVar6 * -2 + 3] = afStack_114[(uint)bVar6 * -2];
  afStack_114[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_114[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fStack_a0 = fVar4 - afStack_114[2];
  afStack_9c[0] = fStack_b4 - afStack_114[3];
  afStack_9c[1] = fStack_b0 - fStack_104;
  afStack_14c[1] = fVar4 - afStack_114[2];
  afStack_14c[(uint)bVar6 * 0xfffffffe + 2] = afStack_9c[(uint)bVar6 * -2];
  afStack_14c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 3] =
       afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar9 = (this_ptr->base).carried_by_actor;
  if (pCVar9 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar9);
  }
  iStack_1c = 0;
  do {
    fVar4 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_14c + 1,afStack_114 + 5);
    dVar8 = (double)fVar4;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) goto LAB_0056b69f;
    pCStack_14 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if (pCStack_14 != (CCharacter *)0x0) {
      (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_24 = this_ptr_02;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCStack_14 == (CCharacter *)0x0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_20 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_FUN_004a2090
                        (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor,0);
              goto LAB_0056b69f;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_03);
          }
          else {
            core_crate_cpp_FUN_004461c0(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_02);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar3 != 0) {
            unaff_EBX = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                         ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar8),0),
                                          (int)((ulonglong)dVar8 >> 0x20));
            in_stack_fffffe3c = unaff_EBX;
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_02,unaff_EBX);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_24->base);
        }
      }
      else {
        iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01);
        if (iVar3 == 0) goto LAB_0056b69f;
        core_glass_cpp_FUN_004cc040(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar3 = (*(((pCStack_14->base).vtable._uc)->_uc).isInvulnerable)(pCStack_14);
      pCVar9 = (CDemonActor *)((ulonglong)dVar8 >> 0x20);
      if ((iVar3 != 0) &&
         (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                             ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash),
         this_ptr_00 = g_CDemonSetPtr, pCVar5 != (CDemonActor *)0x0)) {
        if (iStack_18 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
          return 0;
        }
        goto LAB_0056b69f;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffe40);
      this_ptr_04 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,pCVar9,(int)in_stack_fffffe3c);
      auStack_1b0._4_4_ = 0.4;
      auStack_1b0._0_4_ = this_ptr_04;
      CStack_130.y = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_130.z = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      afStack_124[0] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      afStack_84[0] = CStack_130.y;
      afStack_84[(uint)bVar6 * -2 + 1] = afStack_124[(uint)bVar6 * -2 + -1];
      afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2] =
           afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2];
      fVar4 = (float)_DAT_005d6487 /
              SQRT(afStack_84[2] * afStack_84[2] +
                   afStack_84[0] * afStack_84[0] + afStack_84[1] * afStack_84[1]);
      afStack_6c[0] = afStack_84[0] * fVar4;
      afStack_6c[1] = afStack_84[1] * fVar4;
      afStack_6c[2] = afStack_84[2] * fVar4;
      afStack_14c[2] = afStack_84[0] * fVar4;
      afStack_14c[(uint)bVar6 * 0xfffffffe + 3] = afStack_6c[(uint)bVar6 * -2 + 1];
      afStack_14c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4] =
           afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2];
      if ((float *)(auStack_1b0 + 8) != afStack_14c + 2) {
        auStack_1b0._8_4_ = afStack_14c[2];
        auStack_1b0._12_4_ = afStack_14c[3];
        auStack_1b0._16_4_ = fStack_13c;
      }
      core_actor_cpp_FUN_00408bf0(unaff_EBX);
      fStack_150 = afStack_9c[0];
      afStack_14c[(uint)bVar6 * -2] = afStack_9c[(uint)bVar6 * -2 + 1];
      afStack_14c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
           afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2];
      if ((float *)(auStack_1b0 + 0x18) != &fStack_150) {
        auStack_1b0._24_4_ = fStack_150;
        auStack_1b0._28_4_ = afStack_14c[0];
        auStack_1b0._32_4_ = afStack_14c[1];
      }
      auStack_1b0._36_4_ = (this_ptr->base).ammo_type;
      fStack_184 = 1.41531e-43;
      auStack_1b0._40_4_ = (CDemonActor *)0x3e19999a;
      pCStack_180 = this_ptr;
      pCStack_178 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffe3c = 7.965292e-39;
      (*(((this_ptr_04->base).vtable._uc)->_uc).processDamage)
                (this_ptr_04,(SDamageInfo *)auStack_1b0);
      if ((this_ptr->base).can_penetrate == 0) goto LAB_0056b69f;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
LAB_0056b69f:
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      if ((this_ptr->base).is_rendered != 0) {
        CStack_130.x = fStack_b8;
        afStack_124[(uint)bVar6 * -2 + -2] = afStack_cc[(uint)bVar6 * -2 + 6];
        afStack_124[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
             afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        CStack_130.y = CStack_130.y + _DAT_005d647f;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
                  (0x01C73654,&CStack_130,&(this_ptr->base).base.orient_matrix);
        CStack_f4.x = 5.0;
        CStack_f4.y = 6.0;
        CStack_f4.z = -6.0;
        CStack_dc.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
        CStack_dc.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
        CStack_dc.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                  ((CMatrix3x3f *)(auStack_1b0 + 0x28),&CStack_dc);
        core_dirmat_cpp_FUN_0045b800(auStack_1b0 + 0x28,&CStack_f4);
        pfVar7 = afStack_9c + 5;
        fStack_88 = (float)uStack_34;
        afStack_84[(uint)bVar6 * -2] = afStack_6c[(uint)bVar6 * -2 + 0xf];
        afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        core_actor_cpp_FUN_00408b00(this_ptr,pfVar7);
        CStack_40.x = fStack_70;
        afStack_6c[(uint)bVar6 * -2 + 0xc] = afStack_6c[(uint)bVar6 * -2];
        afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (&CStack_f4 != (CVector3f *)(afStack_6c + 0xb)) {
          CStack_f4.x = CStack_40.x;
          CStack_f4.y = CStack_40.y;
          CStack_f4.z = CStack_40.z;
        }
        model_ptr = core_dmodel_cpp_loadModel_FUN_00462420("bullet.kfm");
        core_fire_cpp_CFireEffect_createShell_FUN_004a3e70
                  (0x01C73654,&(this_ptr->base).base.location.position,
                   &(this_ptr->base).base.orient.vec,&CStack_f4,model_ptr);
      }
      return 1;
    }
  } while( true );
}
