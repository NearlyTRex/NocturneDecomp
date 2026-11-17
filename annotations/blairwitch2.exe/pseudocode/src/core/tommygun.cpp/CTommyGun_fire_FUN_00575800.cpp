// Name: core_tommygun.cpp_CTommyGun_fire_FUN_00575800
// Address: 00575800
// Address Range: [[00575800, 005760f5]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00575800(CTommyGun *this_ptr)

#include "nocturne.h"

int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00575800(CTommyGun *this_ptr)

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
  CDemonActor *unaff_EBX;
  byte bVar6;
  float afStackY_1138 [982];
  CVector3f *pCVar7;
  CTommyGun *this_ptr_05;
  double dVar8;
  CDemonActor *pCVar9;
  CDemonActor *in_stack_fffffe3c;
  byte auStack_1b0 [44];
  float fStack_184;
  CTommyGun *pCStack_180;
  CDemonActor *pCStack_178;
  float fStack_150;
  float fStack_14c;
  CVector3f CStack_148;
  float afStack_13c [3];
  CVector3f CStack_130;
  CVector3f CStack_124;
  float fStack_118;
  float afStack_114 [4];
  float fStack_104;
  CVector3f CStack_100;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [2];
  CVector3f CStack_c4;
  float fStack_b8;
  float afStack_b4 [5];
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f CStack_88;
  float afStack_7c [3];
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CVector3f CStack_40;
  CVector3f CStack_34;
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
  (this_ptr->base).fire_cooldown_timer = (this_ptr->base).fire_cooldown_timer + 0.1f;
  (*(pCVar1->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pCVar7 = &CStack_64;
  CStack_70.z = fStack_d0;
  *(float *)((int)&CStack_64 + (uint)bVar6 * -8) = afStack_cc[(uint)bVar6 * -2];
  *(float *)((int)&CStack_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) =
       afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar7,&CStack_c4);
  fStack_b8 = CStack_c4.x;
  afStack_b4[(uint)bVar6 * -2] = *(float *)((int)&CStack_c4 + (uint)bVar6 * -8 + 4);
  this_ptr_05 = this_ptr;
  afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)((int)&CStack_c4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(&this_ptr_05->base);
  if (iVar3 == 0) {
    this_ptr->fire_frames_remaining = 0;
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
    this_ptr->sfx_handles[0] = 0;
    return 0;
  }
  CStack_124.z = (this_ptr->base).bolt_velocity;
  CStack_124.x = 0.0;
  CStack_124.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            ((CDemonActor *)this_ptr,&CStack_124,&CStack_e8);
  fVar2 = afStack_b4[0];
  fVar4 = fStack_b8;
  afStack_54[2] = CStack_e8.x;
  afStack_54[(uint)bVar6 * -2 + 3] = *(float *)((int)&CStack_e8 + (uint)bVar6 * -8 + 4);
  afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       *(float *)((int)&CStack_e8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  fStack_58 = fVar4 + afStack_54[2];
  afStack_54[0] = fVar2 + afStack_54[3];
  afStack_54[1] = afStack_b4[1] + fStack_44;
  CStack_100.x = fVar4 + afStack_54[2];
  *(float *)((int)&CStack_100 + (uint)bVar6 * -8 + 4) = afStack_54[(uint)bVar6 * -2];
  fVar4 = fStack_b8;
  *(float *)((int)&CStack_100 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fStack_28 = (float)2.5 / (this_ptr->base).bolt_velocity;
  fStack_118 = afStack_54[2] * fStack_28;
  afStack_114[0] = afStack_54[3] * fStack_28;
  afStack_114[1] = fStack_44 * fStack_28;
  afStack_114[2] = afStack_54[2] * fStack_28;
  afStack_114[(uint)bVar6 * -2 + 3] = afStack_114[(uint)bVar6 * -2];
  afStack_114[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_114[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fStack_a0 = fVar4 - afStack_114[2];
  CStack_9c.x = afStack_b4[0] - afStack_114[3];
  CStack_9c.y = afStack_b4[1] - fStack_104;
  CStack_148.x = fVar4 - afStack_114[2];
  afStack_13c[(uint)bVar6 * -2 + -2] = *(float *)((int)&CStack_9c + (uint)bVar6 * -8);
  afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
       *(float *)((int)&CStack_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar9 = (this_ptr->base).carried_by_actor;
  if (pCVar9 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar9);
  }
  iStack_1c = 0;
  do {
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0(g_CDemonSetPtr,&CStack_148,&CStack_100)
    ;
    dVar8 = (double)fVar4;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) goto LAB_00575a8f;
    pCStack_14 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if (pCStack_14 != (CCharacter *)0x0) {
      (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_24 = this_ptr_02;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCStack_14 == (CCharacter *)0x0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_20 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_0049cd50
                        (g_CFireEffect_PTR_00614d30,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor);
              goto LAB_00575a8f;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr_03);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_0043a350(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_02);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar3 != 0) {
            unaff_EBX = (CDemonActor *)
                        (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                  ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar8),0),
                                   (int)((ulonglong)dVar8 >> 0x20));
            in_stack_fffffe3c = unaff_EBX;
            core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_02,(float)unaff_EBX);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_24->base);
        }
      }
      else {
        iVar3 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_01);
        if (iVar3 == 0) goto LAB_00575a8f;
        core_glass_cpp_CGlass_shatter_FUN_004c6d40
                  (this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar3 = (*(((pCStack_14->base).vtable._uc)->_uc).isInvulnerable)(pCStack_14);
      pCVar9 = (CDemonActor *)((ulonglong)dVar8 >> 0x20);
      if ((iVar3 != 0) &&
         (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash),
         this_ptr_00 = g_CDemonSetPtr, pCVar5 != (CDemonActor *)0x0)) {
        if (iStack_18 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr_00);
          return 0;
        }
        goto LAB_00575a8f;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe40);
      this_ptr_04 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,pCVar9,(int)in_stack_fffffe3c);
      auStack_1b0._4_4_ = 0.4;
      auStack_1b0._0_4_ = this_ptr_04;
      CStack_130.y = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_130.z = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_124.x = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      CStack_88.y = CStack_130.y;
      afStack_7c[(uint)bVar6 * -2 + -1] = *(float *)((int)&CStack_130 + (uint)bVar6 * -8 + 8);
      afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
           *(float *)((int)&CStack_124 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fVar4 = (float)10 /
              SQRT(afStack_7c[0] * afStack_7c[0] +
                   CStack_88.y * CStack_88.y + CStack_88.z * CStack_88.z);
      CStack_70.y = CStack_88.y * fVar4;
      CStack_70.z = CStack_88.z * fVar4;
      CStack_64.x = afStack_7c[0] * fVar4;
      CStack_148.y = CStack_88.y * fVar4;
      afStack_13c[(uint)bVar6 * -2 + -1] = *(float *)((int)&CStack_70 + (uint)bVar6 * -8 + 8);
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
           *(float *)((int)&CStack_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if ((float *)(auStack_1b0 + 8) != &CStack_148.y) {
        auStack_1b0._8_4_ = CStack_148.y;
        auStack_1b0._12_4_ = CStack_148.z;
        auStack_1b0._16_4_ = afStack_13c[0];
      }
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                (unaff_EBX,&g_CDemonSetPtr->collision_impact_position,&CStack_9c);
      fStack_150 = CStack_9c.x;
      (&fStack_14c)[(uint)bVar6 * -2] = *(float *)((int)&CStack_9c + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_148 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&CStack_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if ((float *)(auStack_1b0 + 0x18) != &fStack_150) {
        auStack_1b0._24_4_ = fStack_150;
        auStack_1b0._28_4_ = fStack_14c;
        auStack_1b0._32_4_ = CStack_148.x;
      }
      auStack_1b0._36_4_ = (this_ptr->base).ammo_type;
      fStack_184 = 1.41531e-43;
      auStack_1b0._40_4_ = (CDemonActor *)0x3e19999a;
      pCStack_180 = this_ptr;
      pCStack_178 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffe3c = (CDemonActor *)0x575fee;
      (*(((this_ptr_04->base).vtable._uc)->_uc).processDamage)
                (this_ptr_04,(SDamageInfo *)auStack_1b0);
      if ((this_ptr->base).can_penetrate == 0) goto LAB_00575a8f;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
LAB_00575a8f:
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      if ((this_ptr->base).is_rendered != 0) {
        CStack_130.x = fStack_b8;
        *(float *)((int)&CStack_130 + (uint)bVar6 * -8 + 4) = afStack_b4[(uint)bVar6 * -2];
        *(float *)((int)&CStack_130 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        CStack_130.y = CStack_130.y + -0.125f;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0049d120
                  (g_CFireEffect_PTR_00614d30,&CStack_130,&(this_ptr->base).base.orient_matrix);
        CStack_f4.x = 5.0;
        CStack_f4.y = 6.0;
        CStack_f4.z = -6.0;
        CStack_dc.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
        CStack_dc.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
        CStack_dc.z = 0.0;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
                  ((CMatrix3x3f *)(auStack_1b0 + 0x28),&CStack_dc);
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
                  ((CMatrix3x3f *)(auStack_1b0 + 0x28),&CStack_f4,&CStack_34);
        pCVar7 = &CStack_88;
        CStack_88.x = CStack_34.x;
        afStack_7c[(uint)bVar6 * -2 + -2] = *(float *)((int)&CStack_34 + (uint)bVar6 * -8 + 4);
        afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
             *(float *)((int)&CStack_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                  ((CDemonActor *)this_ptr,pCVar7,&CStack_70);
        CStack_40.x = CStack_70.x;
        afStack_54[(uint)bVar6 * -2 + 6] = *(float *)((int)&CStack_70 + (uint)bVar6 * -8 + 4);
        afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             *(float *)((int)&CStack_70 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        if (&CStack_f4 != (CVector3f *)(afStack_54 + 5)) {
          CStack_f4.x = CStack_40.x;
          CStack_f4.y = CStack_40.y;
          CStack_f4.z = CStack_40.z;
        }
        model_ptr = core_dmodel_cpp_loadModel_FUN_0044fba0("bullet.kfm");
        core_fire_cpp_CFireEffect_createShell_FUN_0049e970
                  (g_CFireEffect_PTR_00614d30,&(this_ptr->base).base.location.position,
                   &(this_ptr->base).base.orient.vec,&CStack_f4,model_ptr);
      }
      return 1;
    }
  } while( true );
}
