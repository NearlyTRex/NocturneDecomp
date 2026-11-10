// Name: core_turret.cpp_CTurret_fire_FUN_0057fc20
// Address: 0057fc20
// Address Range: [[0057fc20, 005801db]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_fire_FUN_0057fc20(CTurret *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_turret_cpp_CTurret_fire_FUN_0057fc20(CTurret *this_ptr)

{
  float fVar1;
  int iVar2;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  byte bVar3;
  CTurret *apCStackY_10d8 [3];
  float afStackY_10cc [15];
  CDemonActor *apCStackY_1090 [3];
  float afStackY_1084 [975];
  float *pfVar4;
  CTrigger *actor;
  CMatrix3x3f *rotation_matrix;
  double dVar5;
  float fStack_114;
  CDemonActor *pCStack_110;
  uint uStack_10c;
  CDemonActor *pCStack_104;
  float fStack_100;
  float fStack_fc;
  EAmmoType EStack_f8;
  uint uStack_f4;
  CDemonActor *pCStack_f0;
  CTurret *apCStack_ec [2];
  CDemonActor *pCStack_e4;
  float afStack_e0 [4];
  uint uStack_d0;
  float afStack_cc [3];
  uint uStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_a8;
  CDemonActor *apCStack_a4 [3];
  float afStack_98 [4];
  float fStack_88;
  float afStack_84 [6];
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float afStack_44 [5];
  CDemonActor *pCStack_30;
  float afStack_2c [2];
  CTrigger *pCStack_24;
  CCrate *pCStack_20;
  int iStack_1c;
  int iStack_14;
  
  bVar3 = 0;
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar4 = afStack_e0 + 5;
  uStack_d0 = afStack_e0[2];
  afStack_e0[(uint)bVar3 * -2 + 5] = afStack_e0[(uint)bVar3 * -2 + 3];
  afStack_e0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 6] =
       afStack_e0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar4);
  afStack_98[2] = fStack_48;
  afStack_98[(uint)bVar3 * -2 + 3] = afStack_44[(uint)bVar3 * -2];
  afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  fStack_b8 = (this_ptr->base).bolt_velocity;
  uStack_c0 = 0;
  uStack_bc = 0;
  core_actor_cpp_FUN_00408cf0(this_ptr,&uStack_c0);
  fVar1 = afStack_98[2];
  apCStack_a4[2] = pCStack_e4;
  afStack_98[(uint)bVar3 * -2] = afStack_e0[(uint)bVar3 * -2];
  afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_e0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  pCStack_30 = (CDemonActor *)(fVar1 + (float)apCStack_a4[2]);
  afStack_2c[0] = afStack_98[3] + afStack_98[0];
  afStack_2c[1] = fStack_88 + afStack_98[1];
  pCStack_f0 = (CDemonActor *)(fVar1 + (float)apCStack_a4[2]);
  apCStack_ec[(uint)bVar3 * -2] = (CTurret *)afStack_2c[(uint)bVar3 * -2];
  apCStack_ec[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       (CTurret *)afStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  afStack_84[0] = afStack_98[2];
  afStack_98[(uint)bVar3 * -2 + 6] = afStack_98[(uint)bVar3 * -2 + 3];
  afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  iStack_1c = 0;
  do {
    fVar1 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,afStack_98 + 5,&pCStack_f0);
    dVar5 = (double)fVar1;
    if ((dVar5 < 0.0) || (1.0 < dVar5)) break;
    iStack_14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((iStack_14 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iStack_14 + 0x2b0) + 0x114))(iStack_14), 0 < iVar2)) {
      iStack_14 = 0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_24 = this_ptr_01;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (iStack_14 == 0) {
      if (this_ptr_00 == (CGlass *)0x0) {
        if (this_ptr_01 != (CTrigger *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(this_ptr_01);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570
                            (this_ptr_01,(CDemonActor *)this_ptr);
          actor = pCStack_24;
          if (iVar2 != 0) {
            fVar1 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                     ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar5),0),
                                      (int)((ulonglong)dVar5 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(this_ptr_01,fVar1);
            actor = pCStack_24;
          }
          goto LAB_00580072;
        }
        if (pCStack_20 == (CCrate *)0x0) {
          if (this_ptr_02 == (CFlameCan *)0x0) {
            core_fire_cpp_CFireEffect_createBulletImpact_FUN_0049cd50
                      (0x01C3DEB4,&g_CDemonSetPtr->collision_impact_position,
                       &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                       g_CDemonSetPtr->collision_actor);
            break;
          }
          core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr_02);
        }
        else {
          core_crate_cpp_FUN_0043a350(pCStack_20);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(this_ptr_00);
        if (iVar2 == 0) break;
        core_glass_cpp_FUN_004c6d40(this_ptr_00,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffed4);
      iVar2 = (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                        ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar5),0),(int)((ulonglong)dVar5 >> 0x20));
      CStack_6c.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_6c.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_6c.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_60 = CStack_6c.x;
      afStack_5c[(uint)bVar3 * -2] = *(float *)((int)&CStack_6c + (uint)bVar3 * -8 + 4);
      afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&CStack_6c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      fVar1 = (float)_DAT_005ed82c /
              SQRT(fStack_4c * fStack_4c +
                   afStack_5c[2] * afStack_5c[2] + afStack_5c[3] * afStack_5c[3]);
      fStack_48 = afStack_5c[2] * fVar1;
      afStack_44[0] = afStack_5c[3] * fVar1;
      afStack_44[1] = fStack_4c * fVar1;
      fStack_a8 = afStack_5c[2] * fVar1;
      apCStack_a4[(uint)bVar3 * -2] = (CDemonActor *)afStack_44[(uint)bVar3 * -2];
      apCStack_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           (CDemonActor *)afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (&stack0xfffffeec != &fStack_a8) {
        fStack_114 = fStack_a8;
        pCStack_110 = apCStack_a4[0];
        uStack_10c = apCStack_a4[1];
      }
      core_actor_cpp_FUN_00408de0();
      apCStack_a4[2] = pCStack_30;
      afStack_98[(uint)bVar3 * -2] = afStack_2c[(uint)bVar3 * -2];
      afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           afStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (&pCStack_104 != apCStack_a4 + 2) {
        pCStack_104 = apCStack_a4[2];
        fStack_100 = afStack_98[0];
        fStack_fc = afStack_98[1];
      }
      EStack_f8 = (this_ptr->base).ammo_type;
      pCStack_f0 = (CDemonActor *)&DAT_00000065;
      uStack_f4 = 0x3f800000;
      apCStack_ec[0] = this_ptr;
      pCStack_e4 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x110))();
      if ((this_ptr->base).can_penetrate == 0) break;
      actor = (CTrigger *)g_CDemonSetPtr->collision_actor;
LAB_00580072:
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&actor->base);
    }
    iStack_1c = iStack_1c + 1;
  } while (iStack_1c < 4);
  rotation_matrix = &(this_ptr->base).base.orient_matrix;
  CStack_6c.x = afStack_98[2];
  *(float *)((int)&CStack_6c + (uint)bVar3 * -8 + 4) = afStack_98[(uint)bVar3 * -2 + 3];
  *(float *)((int)&CStack_6c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  CStack_6c.y = CStack_6c.y + _DAT_005ed828;
  core_fire_cpp_FUN_0049d120(0x01C3DEB4,&CStack_6c,rotation_matrix);
  this_ptr->fire_sound_frames = 2;
  (this_ptr->base).fire_cooldown_timer = this_ptr->fire_delay_time;
  return 1;
}
