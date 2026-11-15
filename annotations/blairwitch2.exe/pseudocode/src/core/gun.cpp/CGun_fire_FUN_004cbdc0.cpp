// Name: core_gun.cpp_CGun_fire_FUN_004cbdc0
// Address: 004cbdc0
// Address Range: [[004cbdc0, 004cc676]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004cbdc0(CGun *this_ptr)

#include "nocturne.h"

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
  CDemonActor *unaff_EBX;
  byte bVar4;
  float afStackY_1148 [76];
  CTrigger *apCStackY_1018 [910];
  CVector3f *pCVar5;
  CWeapon *this_ptr_05;
  CMatrix3x3f *rotation_matrix;
  double dVar6;
  CDemonActor *pCVar7;
  CDemonActor *in_stack_fffffe3c;
  byte auStack_1b0 [44];
  float fStack_184;
  CGun *pCStack_180;
  CDemonActor *pCStack_178;
  CVector3f CStack_160;
  CVector3f CStack_154;
  CVector3f aCStack_148 [2];
  CVector3f CStack_130;
  CVector3f CStack_124;
  CVector3f aCStack_118 [2];
  CVector3f CStack_100;
  CVector3f CStack_f4;
  float fStack_e4;
  float fStack_e0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [2];
  CVector3f CStack_c4;
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f aCStack_88 [2];
  byte auStack_70 [8];
  float afStack_68 [4];
  CVector3f CStack_58;
  float afStack_4c [6];
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
  pCVar5 = aCStack_118;
  CStack_124.z = fStack_94;
  *(float *)((int)aCStack_118 + (uint)bVar4 * -8) = afStack_90[(uint)bVar4 * -2];
  *(float *)((int)aCStack_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar5,&CStack_154);
  CStack_124.x = CStack_154.x;
  *(uint *)((int)aCStack_118 + (uint)bVar4 * -8 + -8) =
       *(uint *)((int)&CStack_154 + (uint)bVar4 * -8 + 4);
  this_ptr_05 = &this_ptr->base;
  *(uint *)((int)aCStack_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4) =
       *(uint *)((int)&CStack_154 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(this_ptr_05);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_124);
    return 0;
  }
  CStack_100.z = (this_ptr->base).bolt_velocity;
  CStack_100.x = 0.0;
  CStack_100.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            ((CDemonActor *)this_ptr,&CStack_100,(CVector3f *)auStack_70);
  fVar1 = CStack_124.y;
  fVar3 = CStack_124.x;
  afStack_b4[2] = (float)auStack_70._0_4_;
  afStack_b4[(uint)bVar4 * -2 + 3] = afStack_68[(uint)bVar4 * -2 + -1];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  fStack_d0 = fVar3 + afStack_b4[2];
  afStack_cc[0] = fVar1 + afStack_b4[3];
  afStack_cc[1] = CStack_124.z + fStack_a4;
  CStack_dc.x = fVar3 + afStack_b4[2];
  *(float *)((int)&CStack_dc + (uint)bVar4 * -8 + 4) = afStack_cc[(uint)bVar4 * -2];
  *(float *)((int)&CStack_dc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fVar3 = CStack_124.x;
  fStack_24 = (float)_DAT_005d97e6 / (this_ptr->base).bolt_velocity;
  afStack_4c[0] = afStack_b4[2] * fStack_24;
  afStack_4c[1] = afStack_b4[3] * fStack_24;
  afStack_4c[2] = fStack_a4 * fStack_24;
  fStack_b8 = afStack_b4[2] * fStack_24;
  afStack_b4[(uint)bVar4 * -2] = afStack_4c[(uint)bVar4 * -2 + 1];
  afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2];
  fStack_34 = fVar3 - fStack_b8;
  afStack_30[0] = CStack_124.y - afStack_b4[0];
  afStack_30[1] = CStack_124.z - afStack_b4[1];
  CStack_130.x = fVar3 - fStack_b8;
  *(float *)((int)&CStack_130 + (uint)bVar4 * -8 + 4) = afStack_30[(uint)bVar4 * -2];
  *(float *)((int)&CStack_130 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
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
    fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0(g_CDemonSetPtr,&CStack_130,&CStack_dc);
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
            core_crate_cpp_CCrate_explode_FUN_0043a350(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar2 != 0) {
            unaff_EBX = (CDemonActor *)
                        (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                  ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                   (int)((ulonglong)dVar6 >> 0x20));
            in_stack_fffffe3c = unaff_EBX;
            core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_02,(float)unaff_EBX);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&pCStack_28->base);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004c6d40
                  (this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
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
      CStack_130.y = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_130.z = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_124.x = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_e4 = CStack_130.y;
      (&fStack_e0)[(uint)bVar4 * -2] = *(float *)((int)&CStack_130 + (uint)bVar4 * -8 + 8);
      *(uint *)((int)&CStack_dc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&CStack_124 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      fVar3 = (float)_DAT_005d97f6 /
              SQRT(fStack_d0 * fStack_d0 + CStack_dc.y * CStack_dc.y + CStack_dc.z * CStack_dc.z);
      CStack_58.y = CStack_dc.y * fVar3;
      CStack_58.z = CStack_dc.z * fVar3;
      afStack_4c[0] = fStack_d0 * fVar3;
      CStack_100.y = CStack_dc.y * fVar3;
      *(float *)((int)&CStack_100 + (uint)bVar4 * -8 + 8) = afStack_4c[(uint)bVar4 * -2 + -1];
      *(float *)((int)&CStack_f4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2];
      if ((float *)(auStack_1b0 + 8) != &CStack_100.y) {
        auStack_1b0._8_4_ = CStack_100.y;
        auStack_1b0._12_4_ = CStack_100.z;
        auStack_1b0._16_4_ = CStack_f4.x;
      }
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                (unaff_EBX,&g_CDemonSetPtr->collision_impact_position,(CVector3f *)(auStack_70 + 4))
      ;
      afStack_30[0] = (float)auStack_70._4_4_;
      afStack_30[(uint)bVar4 * -2 + 1] = afStack_68[(uint)bVar4 * -2];
      (&pCStack_28)[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
           (CTrigger *)afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
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
      in_stack_fffffe3c = (CDemonActor *)0x4cc56f;
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
  *(uint *)((int)&CStack_c4 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)aCStack_118 + (uint)bVar4 * -8 + -8);
  *(uint *)((int)&CStack_c4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)aCStack_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4);
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
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
            ((CMatrix3x3f *)(auStack_1b0 + 0x28),aCStack_88,&CStack_160);
  pCVar5 = &CStack_f4;
  CStack_f4.x = CStack_160.x;
  *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_160 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_160 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0((CDemonActor *)this_ptr,pCVar5,&CStack_58)
  ;
  aCStack_148[0].x = CStack_58.x;
  *(float *)((int)aCStack_148 + (uint)bVar4 * -8 + 4) = afStack_4c[(uint)bVar4 * -2 + -2];
  *(float *)((int)aCStack_148 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
  if (aCStack_88 != aCStack_148) {
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
