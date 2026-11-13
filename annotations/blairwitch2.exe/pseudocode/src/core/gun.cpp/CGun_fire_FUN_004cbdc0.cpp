// Name: core_gun.cpp_CGun_fire_FUN_004cbdc0
// Address: 004cbdc0
// Address Range: [[004cbdc0, 004cc676]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004cbdc0(CGun *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gun_cpp_CGun_fire_FUN_004cbdc0(CGun *this_ptr)

{
  CDemonSet *this_ptr_00;
  float fVar1;
  int iVar2;
  float fVar3;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  CCharacter *this_ptr_04;
  float unaff_EBX;
  byte bVar4;
  float afStackY_1148 [76];
  CTrigger *apCStackY_1018 [910];
  float *pfVar5;
  CWeapon *this_ptr_05;
  CMatrix3x3f *rotation_matrix;
  double dVar6;
  CDemonActor *pCVar7;
  float in_stack_fffffe3c;
  byte auStack_1b0 [44];
  float fStack_184;
  CGun *pCStack_180;
  CDemonActor *pCStack_178;
  uint uStack_160;
  float afStack_15c [5];
  CVector3f aCStack_148 [2];
  float fStack_130;
  float afStack_12c [2];
  CVector3f CStack_124;
  float afStack_118 [6];
  uint uStack_100;
  float fStack_fc;
  float afStack_f8 [5];
  float fStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f CStack_c4;
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f aCStack_88 [2];
  float fStack_70;
  float afStack_6c [5];
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_34;
  float afStack_30 [2];
  CTrigger *pCStack_28;
  float fStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  int iStack_18;
  CCharacter *pCStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar5 = afStack_118;
  CStack_124.z = fStack_94;
  afStack_118[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2];
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar5);
  CStack_124.x = afStack_15c[2];
  afStack_118[(uint)bVar4 * -2 + -2] = afStack_15c[(uint)bVar4 * -2 + 3];
  this_ptr_05 = &this_ptr->base;
  afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
       afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(this_ptr_05);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_124);
    return 0;
  }
  afStack_f8[0] = (this_ptr->base).bolt_velocity;
  uStack_100 = 0;
  fStack_fc = 0.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,&uStack_100);
  fVar1 = CStack_124.y;
  fVar3 = CStack_124.x;
  afStack_b4[2] = fStack_70;
  afStack_b4[(uint)bVar4 * -2 + 3] = afStack_6c[(uint)bVar4 * -2];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_d0 = fVar3 + afStack_b4[2];
  fStack_cc = fVar1 + afStack_b4[3];
  fStack_c8 = CStack_124.z + fStack_a4;
  fStack_dc = fVar3 + afStack_b4[2];
  afStack_f8[(uint)bVar4 * 0xfffffffe + 8] = afStack_f8[(uint)bVar4 * 0xfffffffe + 0xb];
  afStack_f8[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 9] =
       afStack_f8[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xc];
  fVar3 = CStack_124.x;
  fStack_24 = (float)_DAT_005d97e6 / (this_ptr->base).bolt_velocity;
  afStack_54[2] = afStack_b4[2] * fStack_24;
  afStack_54[3] = afStack_b4[3] * fStack_24;
  fStack_44 = fStack_a4 * fStack_24;
  fStack_b8 = afStack_b4[2] * fStack_24;
  afStack_b4[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2 + 3];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_34 = fVar3 - fStack_b8;
  afStack_30[0] = CStack_124.y - afStack_b4[0];
  afStack_30[1] = CStack_124.z - afStack_b4[1];
  fStack_130 = fVar3 - fStack_b8;
  afStack_12c[(uint)bVar4 * -2] = afStack_30[(uint)bVar4 * -2];
  afStack_12c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar7 = (this_ptr->base).carried_by_actor;
  if (pCVar7 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCVar7);
  }
  iStack_1c = 0;
  do {
    fVar3 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&fStack_130,afStack_f8 + 7);
    dVar6 = (double)fVar3;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
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
    pCStack_28 = this_ptr_02;
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
                        (0x01C3DEB4,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr_03);
          }
          else {
            core_crate_cpp_FUN_0043a350(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar2 != 0) {
            unaff_EBX = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                         ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                          (int)((ulonglong)dVar6 >> 0x20));
            in_stack_fffffe3c = unaff_EBX;
            core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_02,unaff_EBX);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_28->base);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004c6d40(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((pCStack_14->base).vtable._uc)->_uc).isInvulnerable)(pCStack_14);
      this_ptr_00 = g_CDemonSetPtr;
      pCVar7 = (CDemonActor *)((ulonglong)dVar6 >> 0x20);
      if (iVar2 != 0) {
        if (iStack_18 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe40);
      this_ptr_04 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,pCVar7,(int)in_stack_fffffe3c);
      auStack_1b0._4_4_ = 0.4;
      auStack_1b0._0_4_ = this_ptr_04;
      afStack_12c[0] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      afStack_12c[1] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_124.x = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_e4 = afStack_12c[0];
      afStack_f8[(uint)bVar4 * 0xfffffffe + 6] = afStack_12c[(uint)bVar4 * -2 + 1];
      afStack_f8[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7] =
           (float)*(uint *)((int)&CStack_124 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      fVar3 = (float)_DAT_005d97f6 /
              SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
      afStack_54[0] = fStack_d8 * fVar3;
      afStack_54[1] = fStack_d4 * fVar3;
      afStack_54[2] = fStack_d0 * fVar3;
      fStack_fc = fStack_d8 * fVar3;
      afStack_f8[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2 + 1];
      afStack_f8[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
           afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2];
      if ((float *)(auStack_1b0 + 8) != &fStack_fc) {
        auStack_1b0._8_4_ = fStack_fc;
        auStack_1b0._12_4_ = afStack_f8[0];
        auStack_1b0._16_4_ = afStack_f8[1];
      }
      core_actor_cpp_FUN_00408de0(unaff_EBX);
      afStack_30[0] = afStack_6c[0];
      afStack_30[(uint)bVar4 * -2 + 1] = afStack_6c[(uint)bVar4 * -2 + 1];
      (&pCStack_28)[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
           (CTrigger *)afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2];
      if ((float *)(auStack_1b0 + 0x18) != afStack_30) {
        auStack_1b0._24_4_ = afStack_30[0];
        auStack_1b0._28_4_ = afStack_30[1];
        auStack_1b0._32_4_ = pCStack_28;
      }
      auStack_1b0._36_4_ = (this_ptr->base).ammo_type;
      fStack_184 = 1.41531e-43;
      pCStack_180 = this_ptr;
      auStack_1b0._40_4_ = (CDemonActor *)0x0;
      pCStack_178 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffe3c = 7.050324e-39;
      (*(((this_ptr_04->base).vtable._uc)->_uc).processDamage)
                (this_ptr_04,(SDamageInfo *)auStack_1b0);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_c4.x = CStack_124.x;
  *(float *)((int)&CStack_c4 + (uint)bVar4 * -8 + 4) = afStack_118[(uint)bVar4 * -2 + -2];
  *(float *)((int)&CStack_c4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_118[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
  CStack_c4.y = CStack_c4.y + _DAT_005d97ee;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0049d120(0x01C3DEB4,&CStack_c4,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"45.wav",&CStack_124);
  (this_ptr->base).fire_cooldown_timer = 0.333;
  aCStack_88[0].x = 3.0;
  aCStack_88[0].y = 3.0;
  aCStack_88[0].z = -4.0;
  CStack_a0.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  CStack_a0.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.3926991,0.3926991);
  CStack_a0.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            ((CMatrix3x3f *)(auStack_1b0 + 0x28),&CStack_a0);
  core_dirmat_cpp_FUN_00449530(auStack_1b0 + 0x28,aCStack_88);
  pfVar5 = afStack_f8 + 1;
  afStack_f8[1] = (float)uStack_160;
  afStack_f8[(uint)bVar4 * 0xfffffffe + 2] = afStack_15c[(uint)bVar4 * -2];
  afStack_f8[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 3] =
       afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408cf0(this_ptr,pfVar5);
  aCStack_148[0].x = fStack_58;
  afStack_15c[(uint)bVar4 * -2 + 6] = afStack_54[(uint)bVar4 * -2];
  afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (aCStack_88 != (CVector3f *)(afStack_15c + 5)) {
    aCStack_88[0].x = aCStack_148[0].x;
    aCStack_88[0].y = aCStack_148[0].y;
    aCStack_88[0].z = aCStack_148[0].z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_0044fba0("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0049e970
            (0x01C3DEB4,&(this_ptr->base).base.location.position,&(this_ptr->base).base.orient.vec
             ,aCStack_88,model_ptr);
  return 1;
}
