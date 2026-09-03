// Name: core_gun.cpp_CGun_fire_FUN_004b27c0
// Address: 004b27c0
// Address Range: [[004b27c0, 004b2fb1]]
// Convention: __cdecl
// Signature: int __cdecl core_gun_cpp_CGun_fire_FUN_004b27c0(CGun *this_ptr)

#include "nocturne.h"

int __cdecl core_gun_cpp_CGun_fire_FUN_004b27c0(CGun *this_ptr)

{
  CDemonSet *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CKeyFramedModel *model_ptr;
  CHero *pCVar3;
  CCharacter *this_ptr_01;
  EDeathState EVar4;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  double dVar5;
  CDemonActor *pCVar6;
  float in_stack_fffffebc;
  byte auStack_130 [28];
  float fStack_114;
  float fStack_110;
  CDemonActor *pCStack_10c;
  CMatrix3x3f CStack_108;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f aCStack_bc [2];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f aCStack_8c [2];
  float fStack_74;
  byte auStack_70 [12];
  float fStack_64;
  float local_60;
  CVector3f aCStack_50 [2];
  CVector3f CStack_38;
  float fStack_2c;
  CTrigger *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  CGlass *pCStack_1c;
  float fStack_14;
  
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&CStack_98,pCVar1);
  iVar2 = core_weapon_cpp_CWeapon_fire_FUN_00554600(&this_ptr->base);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0052ea60
              (g_CSound_PTR_005bed68,(CDemonActor *)this_ptr,"45-dry-!.wav",&CStack_98);
    return 0;
  }
  aCStack_bc[0].z = (this_ptr->base).bolt_velocity;
  aCStack_bc[0].x = 0.0;
  aCStack_bc[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            ((CDemonActor *)this_ptr,&CStack_38,aCStack_bc);
  aCStack_8c[0].x = CStack_98.x + CStack_38.x;
  aCStack_8c[0].y = CStack_98.y + CStack_38.y;
  aCStack_8c[0].z = CStack_98.z + CStack_38.z;
  fStack_2c = (float)1.5 / (this_ptr->base).bolt_velocity;
  fStack_74 = CStack_38.x * fStack_2c;
  auStack_70._0_4_ = CStack_38.y * fStack_2c;
  auStack_70._4_4_ = CStack_38.z * fStack_2c;
  auStack_70._8_4_ = CStack_98.x - fStack_74;
  fStack_64 = CStack_98.y - (float)auStack_70._0_4_;
  local_60 = CStack_98.z - (float)auStack_70._4_4_;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
  pCVar6 = (this_ptr->base).carried_by_actor;
  if (pCVar6 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,pCVar6);
  }
  iStack_20 = 0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                          (g_CDemonSet_PTR_005be368,(CVector3f *)(auStack_70 + 8),aCStack_8c);
    dVar5 = (double)fStack_14;
    if ((dVar5 < 0.0) || (1.0 < dVar5)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CCharacterActorType_00765a60.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (EVar4 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
       0 < (int)EVar4)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (g_CDemonSet_PTR_005be368->collision_actor,
                            g_CGlassActorType_01c78c40.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CTriggerActorType_02dd1084.name_hash);
    pCStack_28 = this_ptr_02;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (g_CDemonSet_PTR_005be368->collision_actor,
                            g_CCrateActorType_0077bd40.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CFlameCanActorType_01c70654.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60
                        (g_CFireEffect_PTR_005b80f0,
                         &g_CDemonSet_PTR_005be368->collision_impact_position,
                         &g_CDemonSet_PTR_005be368->collision_normal,
                         g_CDemonSet_PTR_005be368->ground_type,
                         g_CDemonSet_PTR_005be368->collision_actor);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr_03);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_0043cdb0(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_02);
          iVar2 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar2 != 0) {
            in_stack_fffffebc =
                 (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                  ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar5),0),
                                   (int)((ulonglong)dVar5 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_02,in_stack_fffffebc);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (g_CDemonSet_PTR_005be368,&pCStack_28->base);
        }
      }
      else {
        iVar2 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004aded0(pCStack_1c);
        if (iVar2 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  (pCStack_1c,&g_CDemonSet_PTR_005be368->collision_impact_position);
      }
    }
    else {
      iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      this_ptr_00 = g_CDemonSet_PTR_005be368;
      pCVar6 = (CDemonActor *)((ulonglong)dVar5 >> 0x20);
      if (iVar2 != 0) {
        if (pCStack_1c == (CGlass *)0x0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(this_ptr_00);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffec0);
      auStack_130._0_4_ =
           (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                     ((CCharacter *)this_ptr,pCVar6,(int)in_stack_fffffebc);
      auStack_130._4_4_ = 0.4;
      CStack_38.y = (g_CDemonSet_PTR_005be368->ray_target).x -
                    (g_CDemonSet_PTR_005be368->ray_origin).x;
      CStack_38.z = (g_CDemonSet_PTR_005be368->ray_target).y -
                    (g_CDemonSet_PTR_005be368->ray_origin).y;
      fStack_2c = (g_CDemonSet_PTR_005be368->ray_target).z -
                  (g_CDemonSet_PTR_005be368->ray_origin).z;
      CStack_98.x = (float)10 /
                    SQRT(fStack_2c * fStack_2c +
                         CStack_38.y * CStack_38.y + CStack_38.z * CStack_38.z);
      CStack_a4.y = CStack_38.y * CStack_98.x;
      CStack_a4.z = CStack_38.z * CStack_98.x;
      CStack_98.x = fStack_2c * CStack_98.x;
      if ((float *)(auStack_130 + 8) != &CStack_a4.y) {
        auStack_130._8_4_ = CStack_a4.y;
        auStack_130._12_4_ = CStack_a4.z;
        auStack_130._16_4_ = CStack_98.x;
      }
      pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (&this_ptr_01->base,(CVector3f *)auStack_70,
                          &g_CDemonSet_PTR_005be368->collision_impact_position);
      if ((CVector3f *)(auStack_130 + 0x18) != pCVar1) {
        auStack_130._24_4_ = pCVar1->x;
        fStack_114 = pCVar1->y;
        fStack_110 = pCVar1->z;
      }
      pCStack_10c = (CDemonActor *)(this_ptr->base).ammo_type;
      CStack_108.m[0].x = 0.15;
      CStack_108.m[0].z = (float)this_ptr;
      CStack_108.m[0].y = 1.41531e-43;
      CStack_108.m[1].y =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffebc = 6.904392e-39;
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)auStack_130);
      if ((this_ptr->base).can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->collision_actor);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
  CStack_e0.x = CStack_98.x;
  CStack_e0.z = CStack_98.z;
  CStack_e0.y = CStack_98.y + 1.574918751107038e-314._0_4_;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
            (g_CFireEffect_PTR_005b80f0,&CStack_e0,&(this_ptr->base).base.orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (g_CSound_PTR_005bed68,(CDemonActor *)this_ptr,"45.wav",&CStack_98);
  (this_ptr->base).fire_cooldown_timer = 0.333;
  aCStack_50[0].x = 3.0;
  aCStack_50[0].y = 3.0;
  aCStack_50[0].z = -4.0;
  CStack_a4.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.3926991,0.3926991);
  fStack_14 = CStack_a4.x;
  CStack_a4.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.3926991,0.3926991);
  CStack_a4.z = 0.0;
  fStack_14 = CStack_a4.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&CStack_108,&CStack_a4);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                     (&CStack_108,&CStack_d4,aCStack_50);
  pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                     ((CDemonActor *)this_ptr,&CStack_c8,pCVar1);
  if (aCStack_50 != pCVar1) {
    aCStack_50[0].x = pCVar1->x;
    aCStack_50[0].y = pCVar1->y;
    aCStack_50[0].z = pCVar1->z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_004543b0("gatbullet.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0
            (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).base.location.position,
             &(this_ptr->base).base.orient.vec,aCStack_50,model_ptr);
  pCVar3 = (CHero *)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
  if (pCVar3 == g_HeroActors[g_LocalHeroIndex]) {
    engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
  }
  return 1;
}
