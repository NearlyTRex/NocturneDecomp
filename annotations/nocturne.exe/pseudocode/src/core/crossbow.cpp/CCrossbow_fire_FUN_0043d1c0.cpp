// Name: core_crossbow.cpp_CCrossbow_fire_FUN_0043d1c0
// Address: 0043d1c0
// Address Range: [[0043d1c0, 0043d809]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_0043d1c0(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_0043d1c0(CCrossbow *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar2;
  int iVar3;
  float hit_points;
  CHero *pCVar4;
  CCharacter *this_ptr_01;
  EDeathState EVar5;
  CTrigger *this_ptr_02;
  double dVar6;
  CDemonActor *pCVar7;
  byte auStack_dc [28];
  float fStack_c0;
  float fStack_bc;
  CDemonActor *pCStack_b8;
  CDemonActor *pCStack_b4;
  float fStack_b0;
  CCrossbow *pCStack_ac;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f aCStack_6c [3];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f aCStack_3c [2];
  float fStack_24;
  CVector3f CStack_20;
  CGlass *pCStack_14;
  
  pCVar2 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,aCStack_3c,pCVar2);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_00554600(&this_ptr->base);
  if (iVar3 == 0) {
    return 0;
  }
  aCStack_6c[0].z = (this_ptr->base).bolt_velocity;
  aCStack_6c[0].x = 0.0;
  aCStack_6c[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            ((CDemonActor *)this_ptr,&CStack_9c,aCStack_6c);
  CStack_a8.x = aCStack_3c[0].x + CStack_9c.x;
  CStack_a8.y = aCStack_3c[0].y + CStack_9c.y;
  CStack_a8.z = aCStack_3c[0].z + CStack_9c.z;
  fStack_24 = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_78 = CStack_9c.x * fStack_24;
  fStack_74 = CStack_9c.y * fStack_24;
  fStack_70 = CStack_9c.z * fStack_24;
  CStack_90.x = aCStack_3c[0].x - fStack_78;
  CStack_90.y = aCStack_3c[0].y - fStack_74;
  CStack_90.z = aCStack_3c[0].z - fStack_70;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
  pCVar7 = (this_ptr->base).carried_by_actor;
  if (pCVar7 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,pCVar7);
  }
  CStack_20.y = 0.0;
  do {
    hit_points = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                           (g_CDemonSet_PTR_005be368,&CStack_90,&CStack_a8);
    dVar6 = (double)hit_points;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CCharacterActorType_00765a60.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (EVar5 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
       0 < (int)EVar5)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_14 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (g_CDemonSet_PTR_005be368->collision_actor,
                            g_CGlassActorType_01c78c40.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CTriggerActorType_02dd1084.name_hash);
    CStack_20.x = (float)this_ptr_02;
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_14 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_0048b070
                    (g_CFireEffect_PTR_005b80f0,&g_CDemonSet_PTR_005be368->collision_impact_position
                     ,&(this_ptr->base).base.orient.vec,&g_CDemonSet_PTR_005be368->collision_normal,
                     g_CDemonSet_PTR_005be368->ground_type);
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_02);
        iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                          (this_ptr_02,(CDemonActor *)this_ptr);
        if (iVar3 != 0) {
          hit_points = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                        ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar6),0),
                                         (int)((ulonglong)dVar6 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_02,hit_points);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (g_CDemonSet_PTR_005be368,(CDemonActor *)CStack_20.x);
      }
      else {
        iVar3 = core_glass_cpp_CGlass_FUN_004aded0(pCStack_14);
        if (iVar3 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  (pCStack_14,&g_CDemonSet_PTR_005be368->collision_impact_position);
      }
    }
    else {
      iVar3 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      this_ptr_00 = g_CDemonSet_PTR_005be368;
      pCVar7 = (CDemonActor *)((ulonglong)dVar6 >> 0x20);
      if (iVar3 != 0) {
        if (CStack_20.z == 0.0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff14);
      auStack_dc._0_4_ =
           (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                     ((CCharacter *)this_ptr,pCVar7,(int)hit_points);
      auStack_dc._4_4_ = 0.4;
      CStack_a8.y = (g_CDemonSet_PTR_005be368->ray_target).x -
                    (g_CDemonSet_PTR_005be368->ray_origin).x;
      CStack_a8.z = (g_CDemonSet_PTR_005be368->ray_target).y -
                    (g_CDemonSet_PTR_005be368->ray_origin).y;
      CStack_9c.x = (g_CDemonSet_PTR_005be368->ray_target).z -
                    (g_CDemonSet_PTR_005be368->ray_origin).z;
      aCStack_3c[0].x =
           (float)10 /
           SQRT(CStack_9c.x * CStack_9c.x + CStack_a8.y * CStack_a8.y + CStack_a8.z * CStack_a8.z);
      fStack_44 = CStack_a8.y * aCStack_3c[0].x;
      fStack_40 = CStack_a8.z * aCStack_3c[0].x;
      aCStack_3c[0].x = CStack_9c.x * aCStack_3c[0].x;
      if ((float *)(auStack_dc + 8) != &fStack_44) {
        auStack_dc._8_4_ = fStack_44;
        auStack_dc._12_4_ = fStack_40;
        auStack_dc._16_4_ = aCStack_3c[0].x;
      }
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (&this_ptr_01->base,&CStack_20,
                          &g_CDemonSet_PTR_005be368->collision_impact_position);
      if ((CVector3f *)(auStack_dc + 0x18) != pCVar2) {
        auStack_dc._24_4_ = pCVar2->x;
        fStack_c0 = pCVar2->y;
        fStack_bc = pCVar2->z;
      }
      pCStack_b8 = (CDemonActor *)(this_ptr->base).ammo_type;
      fStack_b0 = 1.45735e-43;
      pCStack_ac = this_ptr;
      pCStack_b4 = (CDemonActor *)0x3e19999a;
      CStack_a8.y = (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)
                                     ((CDemonActor *)this_ptr);
      hit_points = 6.230251e-39;
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)auStack_dc);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->collision_actor);
    }
    CStack_20.y = (float)((int)CStack_20.y + 1);
  } while ((int)CStack_20.y < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
  if (1.0 < hit_points) {
    hit_points = 1.0;
  }
  fStack_48 = CStack_9c.x * hit_points;
  fStack_44 = CStack_9c.y * hit_points;
  fStack_40 = CStack_9c.z * hit_points;
  fStack_84 = CStack_90.x + fStack_48;
  fStack_80 = CStack_90.y + fStack_44;
  fStack_7c = CStack_90.z + fStack_40;
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (g_CSound_PTR_005bed68,(CDemonActor *)this_ptr,"bow-!.wav",aCStack_3c);
  pCVar1 = (this_ptr->base).base.vtable._ub;
  (this_ptr->base).fire_cooldown_timer = 0.666;
  pCVar4 = (CHero *)(*pCVar1->getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 == g_HeroActors[g_LocalHeroIndex]) {
    engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
  }
  return 1;
}
