// Name: core_crossbow.cpp_CCrossbow_fire_FUN_00448f20
// Address: 00448f20
// Address Range: [[00448f20, 0044953a]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00448f20(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00448f20(CCrossbow *this_ptr)

{
  CDemonActor *actor;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CCharacter *pCVar3;
  CGlass *this_ptr_01;
  CTrigger *this_ptr_02;
  float hit_points;
  double dVar4;
  CCharacter *this_ptr_03;
  byte auStack_dc [28];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  EAmmoType EStack_b4;
  CDemonActor *pCStack_b0;
  CCrossbow *pCStack_ac;
  CDemonActor *pCStack_a8;
  CDemonActor *pCStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f local_4c [2];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  
  pCVar1 = (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,local_4c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_68,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_005ee6e0(&this_ptr->base);
  if (iVar2 == 0) {
    return 0;
  }
  CStack_80.z = (this_ptr->base).bolt_velocity;
  CStack_80.x = 0.0;
  CStack_80.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            ((CDemonActor *)this_ptr,&CStack_98,&CStack_80);
  CStack_74.x = CStack_68.x + CStack_98.x;
  CStack_74.y = CStack_68.y + CStack_98.y;
  CStack_74.z = CStack_68.z + CStack_98.z;
  CStack_20.x = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_50 = CStack_98.x * CStack_20.x;
  local_4c[0].x = CStack_98.y * CStack_20.x;
  local_4c[0].y = CStack_98.z * CStack_20.x;
  CStack_8c.x = CStack_68.x - fStack_50;
  CStack_8c.y = CStack_68.y - local_4c[0].x;
  CStack_8c.z = CStack_68.z - local_4c[0].y;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  actor = (this_ptr->base).carried_by_actor;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,actor);
  }
  CStack_20.z = 0.0;
  do {
    pCVar3 = (CCharacter *)
             core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_8c,&CStack_74);
    dVar4 = (double)(float)pCVar3;
    this_ptr_03 = pCVar3;
    if ((dVar4 < 0.0) || (1.0 < dVar4)) break;
    this_ptr_03 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
    pCVar1 = SUB84(__BITCAST_UINT64(dVar4),0);
    if ((this_ptr_03 != (CCharacter *)0x0) &&
       (iVar2 = (*(((this_ptr_03->base).vtable._uc)->_uc).getDeathState)(this_ptr_03), 0 < iVar2)) {
      this_ptr_03 = (CCharacter *)0x0;
    }
    this_ptr_01 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
    CStack_20.y = (float)this_ptr_02;
    if (this_ptr_03 == (CCharacter *)0x0) {
      if (this_ptr_01 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0
                    (g_CFireEffectPtr,&g_CDemonSetPtr->collision_impact_position,
                     &(this_ptr->base).base.orient.vec,&g_CDemonSetPtr->collision_normal,
                     g_CDemonSetPtr->ground_type);
          this_ptr_03 = pCVar3;
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_005e0aa0(this_ptr_02);
        iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005e0ac0
                          (this_ptr_02,(char *)this_ptr);
        if (iVar2 != 0) {
          hit_points = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
          core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(this_ptr_02,hit_points);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)CStack_20.y);
        this_ptr_03 = pCVar3;
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(this_ptr_01);
        this_ptr_03 = pCVar3;
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (this_ptr_01,&g_CDemonSetPtr->collision_impact_position);
        this_ptr_03 = pCVar3;
      }
    }
    else {
      pCVar1 = (*(((this_ptr_03->base).vtable._uw)->_uw).getMuzzlePoint)
                         ((CWeapon *)this_ptr_03,pCVar1);
      this_ptr_00 = g_CDemonSetPtr;
      if (pCVar1 != (CVector3f *)0x0) {
        this_ptr_03 = pCVar3;
        if (this_ptr_01 == (CGlass *)0x0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff1c);
      auStack_dc._0_4_ = (*(((this_ptr->base).base.vtable._uw)->_uw).getDamage)(&this_ptr->base);
      auStack_dc._4_4_ = 0.4;
      CStack_98.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
      CStack_98.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
      CStack_98.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
      fStack_24 = (float)10 /
                  SQRT(CStack_98.z * CStack_98.z +
                       CStack_98.x * CStack_98.x + CStack_98.y * CStack_98.y);
      fStack_2c = CStack_98.x * fStack_24;
      fStack_28 = CStack_98.y * fStack_24;
      fStack_24 = CStack_98.z * fStack_24;
      if ((float *)(auStack_dc + 8) != &fStack_2c) {
        auStack_dc._8_4_ = fStack_2c;
        auStack_dc._12_4_ = fStack_28;
        auStack_dc._16_4_ = fStack_24;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr_03->base,&CStack_20,&g_CDemonSetPtr->collision_impact_position);
      if ((CVector3f *)(auStack_dc + 0x18) != pCVar1) {
        auStack_dc._24_4_ = pCVar1->x;
        fStack_c0 = pCVar1->y;
        fStack_bc = pCVar1->z;
      }
      fStack_b8 = (float)(this_ptr->base).ammo_type;
      pCStack_b0 = (CDemonActor *)0x68;
      pCStack_ac = this_ptr;
      EStack_b4 = 0x3e19999a;
      pCStack_a4 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      (*(((this_ptr_03->base).vtable._uc)->_uc).processDamage)
                (this_ptr_03,(SDamageInfo *)auStack_dc);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
    }
    CStack_20.z = (float)((int)CStack_20.z + 1);
  } while ((int)CStack_20.z < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  if (1.0 < (float)this_ptr_03) {
    this_ptr_03 = (CCharacter *)0x3f800000;
  }
  fStack_5c = CStack_98.x * (float)this_ptr_03;
  fStack_58 = CStack_98.y * (float)this_ptr_03;
  fStack_54 = CStack_98.z * (float)this_ptr_03;
  pCStack_b0 = (CDemonActor *)(CStack_8c.x + fStack_5c);
  pCStack_ac = (CCrossbow *)(CStack_8c.y + fStack_58);
  pCStack_a8 = (CDemonActor *)(CStack_8c.z + fStack_54);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40
            (g_CSoundPtr,(CDemonActor *)this_ptr,"bow-!.wav",&CStack_68);
  (this_ptr->base).fire_cooldown_timer = 0.666;
  return 1;
}
