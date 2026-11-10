// Name: core_gun.cpp_CGun_fire_FUN_004e8630
// Address: 004e8630
// Address Range: [[004e8630, 004e8ee0]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004e8630(CGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gun_cpp_CGun_fire_FUN_004e8630(CGun *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  float fVar1;
  int iVar2;
  float fVar3;
  CKeyFramedModel *model_ptr;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  byte bVar4;
  float afStackY_1148 [986];
  float *pfVar5;
  CWeapon *this_ptr_04;
  CMatrix3x3f *rotation_matrix;
  double dVar6;
  float fStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  float fStack_19c;
  float fStack_198;
  uint uStack_194;
  EAmmoType EStack_190;
  uint uStack_18c;
  CMatrix3x3f CStack_188;
  float fStack_160;
  float afStack_15c [8];
  float fStack_13c;
  float afStack_138 [2];
  CVector3f aCStack_130 [2];
  CVector3f CStack_118;
  float afStack_10c [6];
  float fStack_f4;
  float afStack_f0 [5];
  float fStack_dc;
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
  float fStack_64;
  float afStack_60 [4];
  uint uStack_50;
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
  
  bVar4 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar5 = afStack_10c;
  CStack_118.z = afStack_15c[2];
  afStack_10c[(uint)bVar4 * -2] = afStack_15c[(uint)bVar4 * -2 + 3];
  afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_15c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar5);
  CStack_118.x = fStack_88;
  afStack_10c[(uint)bVar4 * -2 + -2] = afStack_9c[(uint)bVar4 * -2 + 6];
  this_ptr_04 = &this_ptr->base;
  afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
       afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005adde0(this_ptr_04);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
              (0x02C82A60,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_118);
    return 0;
  }
  afStack_10c[5] = (this_ptr->base).bolt_velocity;
  afStack_10c[3] = 0.0;
  afStack_10c[4] = 0.0;
  core_actor_cpp_FUN_00408ac0(this_ptr,afStack_10c + 3);
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
  afStack_30[2] = (float)_DAT_005e43d3 / (this_ptr->base).bolt_velocity;
  fStack_f4 = afStack_9c[2] * afStack_30[2];
  afStack_f0[0] = afStack_9c[3] * afStack_30[2];
  afStack_f0[1] = fStack_8c * afStack_30[2];
  fStack_4c = afStack_9c[2] * afStack_30[2];
  afStack_60[(uint)bVar4 * -2 + 6] = afStack_f0[(uint)bVar4 * -2];
  afStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_7c = fVar3 - fStack_4c;
  fStack_78 = fVar1 - fStack_48;
  fStack_74 = CStack_118.z - fStack_44;
  afStack_cc[2] = fVar3 - fStack_4c;
  afStack_cc[(uint)bVar4 * -2 + 3] = afStack_9c[(uint)bVar4 * -2 + 9];
  afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,actor);
  }
  iStack_1c = 0;
  do {
    fVar3 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,afStack_cc + 2,&fStack_d0);
    dVar6 = (double)fVar3;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    iStack_14 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_14 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0x10c))(iStack_14), 0 < iVar2)) {
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
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr_03);
          }
          else {
            core_crate_cpp_FUN_00449600(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar2 != 0) {
            fVar3 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                     ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                      (int)((ulonglong)dVar6 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(this_ptr_02,fVar3);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCStack_24->base);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_01);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004e34b0(this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0xe0))(iStack_14);
      this_ptr_00 = g_CDemonSetPtr;
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffe3c);
      iVar2 = (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                        ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),(int)((ulonglong)dVar6 >> 0x20));
      fStack_13c = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      afStack_138[0] = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      afStack_138[1] = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      afStack_f0[2] = fStack_13c;
      afStack_f0[(uint)bVar4 * -2 + 3] = afStack_138[(uint)bVar4 * -2];
      afStack_f0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fVar3 = (float)_DAT_005e43e3 /
              SQRT(fStack_d4 * fStack_d4 + fStack_dc * fStack_dc + fStack_d8 * fStack_d8);
      CStack_118.x = fStack_dc * fVar3;
      CStack_118.y = fStack_d8 * fVar3;
      CStack_118.z = fStack_d4 * fVar3;
      afStack_60[2] = fStack_dc * fVar3;
      afStack_60[(uint)bVar4 * -2 + 3] = afStack_10c[(uint)bVar4 * -2 + -2];
      afStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
      if (&stack0xfffffe54 != afStack_60 + 2) {
        fStack_1ac = afStack_60[2];
        uStack_1a8 = afStack_60[3];
        uStack_1a4 = uStack_50;
      }
      core_actor_cpp_FUN_00408bb0();
      fStack_d0 = fStack_64;
      afStack_cc[(uint)bVar4 * -2] = afStack_60[(uint)bVar4 * -2];
      afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&stack0xfffffe64 != &fStack_d0) {
        fStack_19c = fStack_d0;
        fStack_198 = afStack_cc[0];
        uStack_194 = afStack_cc[1];
      }
      EStack_190 = (this_ptr->base).ammo_type;
      CStack_188.m[0].x = 1.41531e-43;
      CStack_188.m[0].y = (float)this_ptr;
      uStack_18c = 0x3e19999a;
      CStack_188.m[1].x =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x108))();
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_b8.x = CStack_118.x;
  *(float *)((int)&CStack_b8 + (uint)bVar4 * -8 + 4) = afStack_10c[(uint)bVar4 * -2 + -2];
  *(float *)((int)&CStack_b8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_10c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
  CStack_b8.y = CStack_b8.y + _DAT_005e43db;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(0x01C57074,&CStack_b8,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (0x02C82A60,(CDemonActor *)this_ptr,"45.wav",&CStack_118);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  CStack_40.x = 3.0;
  CStack_40.y = 3.0;
  CStack_40.z = -4.0;
  CStack_ac.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.3926991,0.3926991);
  CStack_ac.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.3926991,0.3926991);
  CStack_ac.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_188,&CStack_ac);
  core_dirmat_cpp_FUN_0045f690(&CStack_188,&CStack_40);
  pfVar5 = &fStack_34;
  fStack_34 = afStack_60[2];
  afStack_30[(uint)bVar4 * -2] = afStack_60[(uint)bVar4 * -2 + 3];
  afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_actor_cpp_FUN_00408ac0(this_ptr,pfVar5);
  aCStack_130[0].x = fStack_13c;
  afStack_138[(uint)bVar4 * -2 + 3] = afStack_138[(uint)bVar4 * -2];
  afStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (&CStack_40 != (CVector3f *)(afStack_138 + 2)) {
    CStack_40.x = aCStack_130[0].x;
    CStack_40.y = aCStack_130[0].y;
    CStack_40.z = aCStack_130[0].z;
  }
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_00468780("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004b7270
            (0x01C57074,&(this_ptr->base).base.location.position,&(this_ptr->base).base.orient.vec
             ,&CStack_40,model_ptr);
  return 1;
}
