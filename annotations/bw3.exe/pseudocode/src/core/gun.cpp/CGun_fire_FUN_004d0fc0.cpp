// Name: core_gun.cpp_CGun_fire_FUN_004d0fc0
// Address: 004d0fc0
// Address Range: [[004d0fc0, 004d1871]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004d0fc0(CGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gun_cpp_CGun_fire_FUN_004d0fc0(CGun *this_ptr)

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
  float afStackY_1148 [985];
  float *pfVar5;
  CWeapon *this_ptr_05;
  CMatrix3x3f *rotation_matrix;
  uint *puVar6;
  double dVar7;
  CDemonActor *pCVar8;
  float in_stack_fffffe3c;
  byte auStack_1b0 [44];
  float fStack_184;
  CGun *pCStack_180;
  CDemonActor *pCStack_178;
  float fStack_160;
  float afStack_15c [8];
  float fStack_13c;
  float afStack_138 [2];
  CVector3f aCStack_130 [2];
  CVector3f CStack_118;
  float afStack_10c [6];
  float fStack_f4;
  float afStack_f0 [6];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [5];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  float fStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_40;
  uint uStack_34;
  float afStack_30 [3];
  CTrigger *pCStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  int iStack_18;
  CCharacter *pCStack_14;
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar5 = afStack_10c;
  CStack_118.z = afStack_15c[2];
  afStack_10c[(uint)bVar4 * -2] = afStack_15c[(uint)bVar4 * -2 + 3];
  afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_actor_cpp_FUN_00408b80(this_ptr,pfVar5);
  CStack_118.x = fStack_88;
  afStack_10c[(uint)bVar4 * -2 + -2] = afStack_9c[(uint)bVar4 * -2 + 6];
  this_ptr_05 = &this_ptr->base;
  afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
       afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(this_ptr_05);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_118);
    return 0;
  }
  afStack_10c[5] = (this_ptr->base).bolt_velocity;
  afStack_10c[3] = 0.0;
  afStack_10c[4] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_10c + 3);
  fVar1 = CStack_118.y;
  fVar3 = CStack_118.x;
  afStack_9c[2] = fStack_a0;
  afStack_9c[(uint)bVar4 * -2 + 3] = afStack_9c[(uint)bVar4 * -2];
  afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_160 = fVar3 + afStack_9c[2];
  afStack_15c[0] = fVar1 + afStack_9c[3];
  afStack_15c[1] = CStack_118.z + fStack_8c;
  fStack_d0 = fVar3 + afStack_9c[2];
  afStack_cc[(uint)bVar4 * -2] = afStack_15c[(uint)bVar4 * -2];
  afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fVar1 = CStack_118.y;
  fVar3 = CStack_118.x;
  afStack_30[2] = (float)_DAT_005c49f7 / (this_ptr->base).bolt_velocity;
  fStack_f4 = afStack_9c[2] * afStack_30[2];
  afStack_f0[0] = afStack_9c[3] * afStack_30[2];
  afStack_f0[1] = fStack_8c * afStack_30[2];
  fStack_4c = afStack_9c[2] * afStack_30[2];
  afStack_5c[(uint)bVar4 * -2 + 5] = afStack_f0[(uint)bVar4 * -2];
  afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 6] =
       afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_7c = fVar3 - fStack_4c;
  fStack_78 = fVar1 - fStack_48;
  fStack_74 = CStack_118.z - fStack_44;
  afStack_cc[2] = fVar3 - fStack_4c;
  afStack_cc[(uint)bVar4 * -2 + 3] = afStack_9c[(uint)bVar4 * -2 + 9];
  afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar8 = (this_ptr->base).carried_by_actor;
  if (pCVar8 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar8);
  }
  iStack_1c = 0;
  do {
    fVar3 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_cc + 2,afStack_f0 + 8);
    dVar7 = (double)fVar3;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) break;
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
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090
                        (0x01C73654,&g_CDemonSetPtr->collision_impact_position,
                         &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                         g_CDemonSetPtr->collision_actor,0);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_03);
          }
          else {
            core_crate_cpp_FUN_004461c0(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar2 != 0) {
            unaff_EBX = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                         ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar7),0),
                                          (int)((ulonglong)dVar7 >> 0x20));
            in_stack_fffffe3c = unaff_EBX;
            core_trigger_cpp_CTrigger_applyDamage_FUN_0056ee20(this_ptr_02,unaff_EBX);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCStack_24->base);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004cc040(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((pCStack_14->base).vtable._uc)->_uc).isInvulnerable)(pCStack_14);
      this_ptr_00 = g_CDemonSetPtr;
      pCVar8 = (CDemonActor *)((ulonglong)dVar7 >> 0x20);
      if (iVar2 != 0) {
        if (iStack_18 == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffe40);
      this_ptr_04 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,pCVar8,(int)in_stack_fffffe3c);
      auStack_1b0._4_4_ = 0.4;
      auStack_1b0._0_4_ = this_ptr_04;
      afStack_138[0] = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      afStack_138[1] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      aCStack_130[0].x = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      afStack_f0[3] = afStack_138[0];
      afStack_f0[(uint)bVar4 * -2 + 4] = afStack_138[(uint)bVar4 * -2 + 1];
      afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5] =
           afStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2];
      fVar3 = (float)_DAT_005c4a07 /
              SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
      CStack_118.y = fStack_d8 * fVar3;
      CStack_118.z = fStack_d4 * fVar3;
      afStack_10c[0] = fStack_d0 * fVar3;
      afStack_5c[2] = fStack_d8 * fVar3;
      afStack_5c[(uint)bVar4 * -2 + 3] = afStack_10c[(uint)bVar4 * -2 + -1];
      afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2];
      if ((float *)(auStack_1b0 + 8) != afStack_5c + 2) {
        auStack_1b0._8_4_ = afStack_5c[2];
        auStack_1b0._12_4_ = afStack_5c[3];
        auStack_1b0._16_4_ = fStack_4c;
      }
      core_actor_cpp_FUN_00408bf0(unaff_EBX);
      afStack_cc[0] = fStack_60;
      afStack_cc[(uint)bVar4 * -2 + 1] = afStack_5c[(uint)bVar4 * -2];
      afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2] =
           afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if ((float *)(auStack_1b0 + 0x18) != afStack_cc) {
        auStack_1b0._24_4_ = afStack_cc[0];
        auStack_1b0._28_4_ = afStack_cc[1];
        auStack_1b0._32_4_ = afStack_cc[2];
      }
      auStack_1b0._36_4_ = (this_ptr->base).ammo_type;
      fStack_184 = 1.41531e-43;
      pCStack_180 = this_ptr;
      auStack_1b0._40_4_ = (CDemonActor *)0x3e19999a;
      pCStack_178 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffe3c = 7.079731e-39;
      (*(((this_ptr_04->base).vtable._uc)->_uc).processDamage)
                (this_ptr_04,(SDamageInfo *)auStack_1b0);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_b8.x = CStack_118.x;
  *(float *)((int)&CStack_b8 + (uint)bVar4 * -8 + 4) = afStack_10c[(uint)bVar4 * -2 + -2];
  *(float *)((int)&CStack_b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
  CStack_b8.y = CStack_b8.y + _DAT_005c49ff;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(0x01C73654,&CStack_b8,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"45.wav",&CStack_118);
  (this_ptr->base).fire_cooldown_timer = 0.333;
  CStack_40.x = 3.0;
  CStack_40.y = 3.0;
  CStack_40.z = -4.0;
  CStack_ac.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_ac.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.3926991,0.3926991);
  CStack_ac.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            ((CMatrix3x3f *)(auStack_1b0 + 0x28),&CStack_ac);
  core_dirmat_cpp_FUN_0045b800(auStack_1b0 + 0x28,&CStack_40);
  puVar6 = &uStack_34;
  uStack_34 = afStack_5c[1];
  afStack_30[(uint)bVar4 * -2] = afStack_5c[(uint)bVar4 * -2 + 2];
  afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3];
  core_actor_cpp_FUN_00408b00(this_ptr,puVar6);
  aCStack_130[0].x = fStack_13c;
  afStack_138[(uint)bVar4 * -2 + 3] = afStack_138[(uint)bVar4 * -2];
  afStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (&CStack_40 != (CVector3f *)(afStack_138 + 2)) {
    CStack_40.x = aCStack_130[0].x;
    CStack_40.y = aCStack_130[0].y;
    CStack_40.z = aCStack_130[0].z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_00462420("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004a3e70
            (0x01C73654,&(this_ptr->base).base.location.position,&(this_ptr->base).base.orient.vec
             ,&CStack_40,model_ptr);
  return 1;
}
