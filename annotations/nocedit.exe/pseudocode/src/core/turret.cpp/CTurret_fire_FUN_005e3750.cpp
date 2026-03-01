// Name: core_turret.cpp_CTurret_fire_FUN_005e3750
// Address: 005e3750
// Address Range: [[005e3750, 005e3c6a]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_fire_FUN_005e3750(CTurret *this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_fire_FUN_005e3750(CTurret *this_ptr)

{
  CVector3f *pCVar1;
  CCharacter *this_ptr_00;
  int iVar2;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  float hit_points;
  CTrigger *actor;
  double dVar3;
  byte auStack_cc [12];
  float fStack_c0;
  float fStack_bc;
  CVector3f CStack_b4;
  CDemonActor *pCStack_a8;
  CDemonActor *pCStack_a4;
  CVector3f CStack_a0;
  CVector3f aCStack_94 [2];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  CVector3f aCStack_64 [3];
  CVector3f CStack_40;
  CVector3f CStack_34;
  CTrigger *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  CGlass *pCStack_1c;
  float fStack_14;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_a0,pCVar1);
  aCStack_64[0].z = (this_ptr->base).bolt_velocity;
  aCStack_64[0].x = 0.0;
  aCStack_64[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_34,aCStack_64);
  aCStack_94[0].x = CStack_a0.x + CStack_34.x;
  aCStack_94[0].y = CStack_a0.y + CStack_34.y;
  aCStack_94[0].z = CStack_a0.z + CStack_34.z;
  CStack_70.x = CStack_a0.x;
  CStack_70.y = CStack_a0.y;
  CStack_70.z = CStack_a0.z;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  iStack_20 = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_70,aCStack_94);
    dVar3 = (double)fStack_14;
    if ((dVar3 < 0.0) || (1.0 < dVar3)) break;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (iVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00), 0 < iVar2)) {
      this_ptr_00 = (CCharacter *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    pCStack_28 = this_ptr_01;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
    if (this_ptr_00 == (CCharacter *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (this_ptr_01 != (CTrigger *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_01);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                            (this_ptr_01,(char *)this_ptr);
          actor = pCStack_28;
          if (iVar2 != 0) {
            hit_points = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                          ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar3),0),
                                           (int)((ulonglong)dVar3 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_01,hit_points);
            actor = pCStack_28;
          }
          goto LAB_005e3ae2;
        }
        if (pCStack_24 == (CCrate *)0x0) {
          if (this_ptr_02 == (CFlameCan *)0x0) {
            core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0
                      (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                       &g_CDemonSetPtr->collision_normal,g_CDemonSetPtr->ground_type,
                       g_CDemonSetPtr->collision_actor);
            break;
          }
          core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_02);
        }
        else {
          core_crate_cpp_CCrate_explode_FUN_00448a70(pCStack_24);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_1c);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_1c,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff24);
      auStack_cc._0_4_ =
           (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                     ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar3),0),(int)((ulonglong)dVar3 >> 0x20));
      auStack_cc._4_4_ = 0.4;
      fStack_7c = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      fStack_78 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      fStack_74 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      CStack_40.z = (float)10 /
                    SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
      CStack_40.x = fStack_7c * CStack_40.z;
      CStack_40.y = fStack_78 * CStack_40.z;
      CStack_40.z = fStack_74 * CStack_40.z;
      if ((CVector3f *)(auStack_cc + 8) != &CStack_40) {
        auStack_cc._8_4_ = CStack_40.x;
        fStack_c0 = CStack_40.y;
        fStack_bc = CStack_40.z;
      }
      actor = (CTrigger *)0x5e3a62;
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_00->base,&CStack_70,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)(auStack_cc + 0x18) != pCVar1) {
        CStack_b4.x = pCVar1->x;
        CStack_b4.y = pCVar1->y;
        CStack_b4.z = pCVar1->z;
      }
      pCStack_a8 = (CDemonActor *)(this_ptr->base).ammo_type;
      pCStack_a4 = (CDemonActor *)0x3f800000;
      CStack_a0.y = (float)this_ptr;
      CStack_a0.x = 1.41531e-43;
      aCStack_94[0].x =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                (this_ptr_00,(SDamageInfo *)auStack_cc);
      if ((this_ptr->base).can_penetrate == 0) break;
LAB_005e3ae2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&actor->base);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  CStack_40.x = CStack_a0.x;
  CStack_40.z = CStack_a0.z;
  CStack_40.y = CStack_a0.y + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
            (g_CFireEffectPtr,&CStack_40,&(this_ptr->base).base.orient_matrix);
  this_ptr->fire_sound_frames = 2;
  (this_ptr->base).fire_cooldown_timer = this_ptr->fire_delay_time;
  return 1;
}
