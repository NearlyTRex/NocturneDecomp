// Name: core_crossbow.cpp_CCrossbow_fire_FUN_00448f20
// Address: 00448f20
// Address Range: [[00448f20, 0044953a]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00448f20(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00448f20(CCrossbow *this_ptr)

{
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  float grab_type;
  CCharacter *this_ptr_01;
  CTrigger *this_ptr_02;
  double dVar3;
  CDemonActor *pCVar4;
  byte auStack_dc [28];
  float fStack_c0;
  float fStack_bc;
  CDemonActor *pCStack_b8;
  CDemonActor *pCStack_b4;
  float fStack_b0;
  CCrossbow *pCStack_ac;
  CDemonActor *pCStack_a4;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  CGlass *pCStack_14;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_6c,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    return 0;
  }
  CStack_84.z = (this_ptr->base).bolt_velocity;
  CStack_84.x = 0.0;
  CStack_84.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_9c,&CStack_84);
  CStack_78.x = CStack_6c.x + CStack_9c.x;
  CStack_78.y = CStack_6c.y + CStack_9c.y;
  CStack_78.z = CStack_6c.z + CStack_9c.z;
  fStack_24 = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_54 = CStack_9c.x * fStack_24;
  fStack_50 = CStack_9c.y * fStack_24;
  local_4c = CStack_9c.z * fStack_24;
  CStack_90.x = CStack_6c.x - fStack_54;
  CStack_90.y = CStack_6c.y - fStack_50;
  CStack_90.z = CStack_6c.z - local_4c;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  pCVar4 = (this_ptr->base).carried_by_actor;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar4);
  }
  CStack_20.y = 0.0;
  do {
    grab_type = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_90,&CStack_78);
    dVar3 = (double)grab_type;
    if ((dVar3 < 0.0) || (1.0 < dVar3)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01), 0 < iVar2)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_14 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    CStack_20.x = (float)this_ptr_02;
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_14 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     &(this_ptr->base).base.orient.vec,&g_CDemonSetPtr->collision_normal,
                     g_CDemonSetPtr->ground_type);
          break;
        }
        core_trigger_cpp_CTrigger_FUN_005e0aa0(this_ptr_02);
        iVar2 = core_trigger_cpp_CTrigger_FUN_005e0ac0(this_ptr_02);
        if (iVar2 != 0) {
          grab_type = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                       ((CCharacter *)this_ptr,SUB84(dVar3,0),
                                        (int)((ulonglong)dVar3 >> 0x20));
          core_trigger_cpp_CTrigger_FUN_005e0b00(this_ptr_02);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)CStack_20.x);
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_14);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (pCStack_14,&g_CDemonSetPtr->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      this_ptr_00 = g_CDemonSetPtr;
      pCVar4 = (CDemonActor *)((ulonglong)dVar3 >> 0x20);
      if (iVar2 != 0) {
        if (CStack_20.z == 0.0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff14);
      auStack_dc._0_4_ =
           (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                     ((CCharacter *)this_ptr,pCVar4,(int)grab_type);
      auStack_dc._4_4_ = 0.4;
      CStack_9c.y = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_9c.z = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_90.x = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_24 = (float)10 /
                  SQRT(CStack_90.x * CStack_90.x +
                       CStack_9c.y * CStack_9c.y + CStack_9c.z * CStack_9c.z);
      fStack_2c = CStack_9c.y * fStack_24;
      fStack_28 = CStack_9c.z * fStack_24;
      fStack_24 = CStack_90.x * fStack_24;
      if ((float *)(auStack_dc + 8) != &fStack_2c) {
        auStack_dc._8_4_ = fStack_2c;
        auStack_dc._12_4_ = fStack_28;
        auStack_dc._16_4_ = fStack_24;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_01->base,&CStack_20,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)(auStack_dc + 0x18) != pCVar1) {
        auStack_dc._24_4_ = pCVar1->x;
        fStack_c0 = pCVar1->y;
        fStack_bc = pCVar1->z;
      }
      pCStack_b8 = (CDemonActor *)(this_ptr->base).ammo_type;
      fStack_b0 = 1.45735e-43;
      pCStack_ac = this_ptr;
      pCStack_b4 = (CDemonActor *)0x3e19999a;
      pCStack_a4 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      grab_type = 6.29812e-39;
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)auStack_dc);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    CStack_20.y = (float)((int)CStack_20.y + 1);
  } while ((int)CStack_20.y < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < grab_type) {
    grab_type = 1.0;
  }
  fStack_60 = CStack_9c.x * grab_type;
  fStack_5c = CStack_9c.y * grab_type;
  fStack_58 = CStack_9c.z * grab_type;
  pCStack_b4 = (CDemonActor *)(CStack_90.x + fStack_60);
  fStack_b0 = CStack_90.y + fStack_5c;
  pCStack_ac = (CCrossbow *)(CStack_90.z + fStack_58);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_6c);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
