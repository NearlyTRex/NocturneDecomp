// Name: core_turret.cpp_CTurret_fire_FUN_005a3870
// Address: 005a3870
// Address Range: [[005a3870, 005a3e2b]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_fire_FUN_005a3870(CTurret *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_turret_cpp_CTurret_fire_FUN_005a3870(CTurret *this_ptr)

{
  float fVar1;
  CGlass *this_ptr_00;
  CTurret *this_ptr_01;
  CFlameCan *this_ptr_02;
  CCharacter *this_ptr_03;
  int iVar2;
  CDemonActor *unaff_ESI;
  byte bVar3;
  CTurret *apCStackY_10d8 [3];
  float afStackY_10cc [993];
  CVector3f *input_local_point;
  CTurret *actor;
  CMatrix3x3f *rotation_matrix;
  double dVar4;
  byte auStack_11c [48];
  CTurret *apCStack_ec [2];
  CVector3f CStack_e4;
  uint uStack_d8;
  uint auStack_d4 [2];
  CVector3f CStack_cc;
  CVector3f aCStack_c0 [2];
  float fStack_a8;
  float afStack_a4 [2];
  CDemonActor *pCStack_9c;
  float afStack_98 [4];
  float fStack_88;
  CVector3f aCStack_84 [2];
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  CVector3f aCStack_48 [2];
  CVector3f CStack_30;
  CTurret *pCStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  CCharacter *pCStack_14;
  
  bVar3 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  input_local_point = &CStack_cc;
  auStack_d4[1] = uStack_d8;
  *(uint *)((int)&CStack_cc + (uint)bVar3 * -8) = auStack_d4[(uint)bVar3 * -2];
  *(uint *)((int)aCStack_c0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -8) =
       auStack_d4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,input_local_point,aCStack_48);
  afStack_98[2] = aCStack_48[0].x;
  afStack_98[(uint)bVar3 * -2 + 3] = *(float *)((int)aCStack_48 + (uint)bVar3 * -8 + 4);
  afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       *(float *)((int)aCStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  aCStack_c0[0].z = (this_ptr->base).bolt_velocity;
  aCStack_c0[0].x = 0.0;
  aCStack_c0[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
            ((CDemonActor *)this_ptr,aCStack_c0,&CStack_e4);
  fVar1 = afStack_98[2];
  pCStack_9c = (CDemonActor *)CStack_e4.x;
  afStack_98[(uint)bVar3 * -2] = *(float *)((int)&CStack_e4 + (uint)bVar3 * -8 + 4);
  afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)((int)&CStack_e4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  CStack_30.x = fVar1 + (float)pCStack_9c;
  CStack_30.y = afStack_98[3] + afStack_98[0];
  CStack_30.z = fStack_88 + afStack_98[1];
  auStack_11c._44_4_ = (CDemonActor *)(fVar1 + (float)pCStack_9c);
  apCStack_ec[(uint)bVar3 * -2] = *(CTurret **)((int)&CStack_30 + (uint)bVar3 * -8 + 4);
  apCStack_ec[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(CTurret **)((int)&CStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  aCStack_84[0].x = afStack_98[2];
  *(float *)((int)aCStack_84 + (uint)bVar3 * -8 + 4) = afStack_98[(uint)bVar3 * -2 + 3];
  *(float *)((int)aCStack_84 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  iStack_1c = 0;
  do {
    fVar1 = core_setcolid_cpp_CDemonSet_raycast_FUN_00557300
                      (g_CDemonSetPtr,aCStack_84,(CVector3f *)(auStack_11c + 0x2c));
    dVar4 = (double)fVar1;
    if ((dVar4 < 0.0) || (1.0 < dVar4)) break;
    pCStack_14 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if (pCStack_14 != (CCharacter *)0x0) {
      (*(((pCStack_14->base).vtable._uc)->_uc).getDeathState)(pCStack_14);
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTurret *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_24 = this_ptr_01;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (pCStack_14 == (CCharacter *)0x0) {
      if (this_ptr_00 == (CGlass *)0x0) {
        if (this_ptr_01 != (CTurret *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0((CTrigger *)this_ptr_01);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
                            ((CTrigger *)this_ptr_01,(CDemonActor *)this_ptr);
          actor = pCStack_24;
          if (iVar2 != 0) {
            fVar1 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                     ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar4),0),
                                      (int)((ulonglong)dVar4 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30((CTrigger *)this_ptr_01,fVar1);
            actor = pCStack_24;
          }
          goto LAB_005a3cc2;
        }
        if (pCStack_20 == (CCrate *)0x0) {
          if (this_ptr_02 == (CFlameCan *)0x0) {
            core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0
                      (0x01C57074,&g_CDemonSetPtr->collision_impact_position,
                       &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                       g_CDemonSetPtr->collision_actor);
            break;
          }
          core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr_02);
        }
        else {
          core_crate_cpp_FUN_00449600(pCStack_20);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(this_ptr_00);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004e34b0
                  (this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffed4);
      actor = this_ptr;
      this_ptr_03 = (CCharacter *)
                    (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                              ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar4),0),(int)((ulonglong)dVar4 >> 0x20)
                              );
      auStack_11c._4_4_ = 0.4;
      auStack_11c._0_4_ = this_ptr_03;
      CStack_6c.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_6c.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_6c.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_60 = CStack_6c.x;
      afStack_5c[(uint)bVar3 * -2] = *(float *)((int)&CStack_6c + (uint)bVar3 * -8 + 4);
      afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&CStack_6c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      fVar1 = (float)_DAT_005f8b88 /
              SQRT(fStack_4c * fStack_4c +
                   afStack_5c[2] * afStack_5c[2] + afStack_5c[3] * afStack_5c[3]);
      aCStack_48[0].x = afStack_5c[2] * fVar1;
      aCStack_48[0].y = afStack_5c[3] * fVar1;
      aCStack_48[0].z = fStack_4c * fVar1;
      fStack_a8 = afStack_5c[2] * fVar1;
      afStack_a4[(uint)bVar3 * -2] = *(float *)((int)aCStack_48 + (uint)bVar3 * -8 + 4);
      afStack_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)aCStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if ((float *)(auStack_11c + 8) != &fStack_a8) {
        auStack_11c._8_4_ = fStack_a8;
        auStack_11c._12_4_ = afStack_a4[0];
        auStack_11c._16_4_ = afStack_a4[1];
      }
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (unaff_ESI,&g_CDemonSetPtr->collision_impact_position,&CStack_30);
      pCStack_9c = (CDemonActor *)CStack_30.x;
      afStack_98[(uint)bVar3 * -2] = *(float *)((int)&CStack_30 + (uint)bVar3 * -8 + 4);
      afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&CStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if ((CDemonActor **)(auStack_11c + 0x18) != &pCStack_9c) {
        auStack_11c._24_4_ = pCStack_9c;
        auStack_11c._28_4_ = afStack_98[0];
        auStack_11c._32_4_ = afStack_98[1];
      }
      auStack_11c._36_4_ = (this_ptr->base).ammo_type;
      auStack_11c._44_4_ = &DAT_00000065;
      auStack_11c._40_4_ = (CDemonActor *)0x3f800000;
      apCStack_ec[0] = this_ptr;
      CStack_e4.x = (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)
                                     ((CDemonActor *)this_ptr);
      (*(((this_ptr_03->base).vtable._uc)->_uc).processDamage)
                (this_ptr_03,(SDamageInfo *)auStack_11c);
      if ((this_ptr->base).can_penetrate == 0) break;
LAB_005a3cc2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)actor);
    }
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 4);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_6c.x = afStack_98[2];
  *(float *)((int)&CStack_6c + (uint)bVar3 * -8 + 4) = afStack_98[(uint)bVar3 * -2 + 3];
  *(float *)((int)&CStack_6c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  CStack_6c.y = CStack_6c.y + _DAT_005f8b84;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(0x01C57074,&CStack_6c,rotation_matrix);
  this_ptr->fire_sound_frames = 2;
  (this_ptr->base).fire_cooldown_timer = this_ptr->fire_delay_time;
  return 1;
}
