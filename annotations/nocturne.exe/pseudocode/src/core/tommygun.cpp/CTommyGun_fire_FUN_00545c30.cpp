// Name: core_tommygun.cpp_CTommyGun_fire_FUN_00545c30
// Address: 00545c30
// Address Range: [[00545c30, 0054646b]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00545c30(CTommyGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00545c30(CTommyGun *this_ptr)

{
  float fVar1;
  CCharacter_full_vtable *pCVar2;
  CDemonSet *this_ptr_00;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CKeyFramedModel *model_ptr;
  CCharacter *this_ptr_01;
  EDeathState EVar6;
  CTrigger *this_ptr_02;
  CFlameCan *this_ptr_03;
  CDemonActor *pCVar7;
  double dVar8;
  float in_stack_fffffebc;
  byte auStack_130 [28];
  float fStack_114;
  float fStack_110;
  CDemonActor *pCStack_10c;
  CMatrix3x3f CStack_108;
  CVector3f CStack_d0;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f aCStack_68 [2];
  CVector3f aCStack_50 [2];
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  CTrigger *pCStack_24;
  CCrate *pCStack_20;
  float fStack_1c;
  CGlass *pCStack_18;
  float fStack_14;
  
  fVar1 = (this_ptr->base).fire_cooldown_timer;
  this_ptr->fire_frames_remaining = 2;
  if (0.0 < fVar1) {
    return 0;
  }
  pCVar2 = (this_ptr->base).base.vtable._uc;
  (this_ptr->base).fire_cooldown_timer = (this_ptr->base).fire_cooldown_timer + 0.1f;
  pCVar3 = (CVector3f *)(*(pCVar2->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&CStack_98,pCVar3);
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_00554600(&this_ptr->base);
  if (iVar4 == 0) {
    this_ptr->fire_frames_remaining = 0;
    (*((this_ptr->base).base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[0]);
    pCVar5 = (*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
    if (pCVar5 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284);
    }
    this_ptr->sfx_handles[0] = 0;
    return 0;
  }
  CStack_a4.z = (this_ptr->base).bolt_velocity;
  CStack_a4.x = 0.0;
  CStack_a4.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
            ((CDemonActor *)this_ptr,&CStack_74,&CStack_a4);
  CStack_bc.x = CStack_98.x + CStack_74.x;
  CStack_bc.y = CStack_98.y + CStack_74.y;
  CStack_bc.z = CStack_98.z + CStack_74.z;
  fStack_28 = (float)2.5 / (this_ptr->base).bolt_velocity;
  CStack_d0.z = CStack_74.x * fStack_28;
  fStack_c4 = CStack_74.y * fStack_28;
  fStack_c0 = CStack_74.z * fStack_28;
  CStack_38.x = CStack_98.x - CStack_d0.z;
  CStack_38.y = CStack_98.y - fStack_c4;
  CStack_38.z = CStack_98.z - fStack_c0;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
  pCVar5 = (this_ptr->base).carried_by_actor;
  if (pCVar5 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,pCVar5);
  }
  fStack_1c = 0.0;
  do {
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                          (g_CDemonSet_PTR_005be368,&CStack_38,&CStack_bc);
    dVar8 = (double)fStack_14;
    if ((dVar8 < 0.0) || (1.0 < dVar8)) goto LAB_00545ebe;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CCharacterActorType_00765a60.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (EVar6 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
       0 < (int)EVar6)) {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_18 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (g_CDemonSet_PTR_005be368->collision_actor,
                            g_CGlassActorType_01c78c40.name_hash);
    this_ptr_02 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CTriggerActorType_02dd1084.name_hash);
    pCStack_24 = this_ptr_02;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (g_CDemonSet_PTR_005be368->collision_actor,
                            g_CCrateActorType_0077bd40.name_hash);
    this_ptr_03 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (g_CDemonSet_PTR_005be368->collision_actor,
                             g_CFlameCanActorType_01c70654.name_hash);
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_18 == (CGlass *)0x0) {
        if (this_ptr_02 == (CTrigger *)0x0) {
          if (pCStack_20 == (CCrate *)0x0) {
            if (this_ptr_03 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60
                        (g_CFireEffect_PTR_005b80f0,
                         &g_CDemonSet_PTR_005be368->collision_impact_position,
                         &g_CDemonSet_PTR_005be368->collision_normal,
                         g_CDemonSet_PTR_005be368->ground_type,
                         g_CDemonSet_PTR_005be368->collision_actor);
              goto LAB_00545ebe;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr_03);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_0043cdb0(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_02);
          iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                            (this_ptr_02,(CDemonActor *)this_ptr);
          if (iVar4 != 0) {
            in_stack_fffffebc =
                 (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                                  ((CCharacter *)this_ptr,SUB84(__BITCAST_UINT64(dVar8),0),
                                   (int)((ulonglong)dVar8 >> 0x20));
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_02,in_stack_fffffebc);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (g_CDemonSet_PTR_005be368,&pCStack_24->base);
        }
      }
      else {
        iVar4 = core_glass_cpp_CGlass_FUN_004aded0(pCStack_18);
        if (iVar4 == 0) goto LAB_00545ebe;
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  (pCStack_18,&g_CDemonSet_PTR_005be368->collision_impact_position);
      }
    }
    else {
      iVar4 = (*(((this_ptr_01->base).vtable._uc)->_uc).canWalk)(this_ptr_01);
      pCVar5 = (CDemonActor *)((ulonglong)dVar8 >> 0x20);
      if ((iVar4 != 0) &&
         (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                             ((this_ptr->base).carried_by_actor,g_CHeroActorType_01cae0ec.name_hash)
         , this_ptr_00 = g_CDemonSet_PTR_005be368, pCVar7 != (CDemonActor *)0x0)) {
        if (pCStack_18 == (CGlass *)0x0) {
          (this_ptr->base).ammo_count = (this_ptr->base).ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(this_ptr_00);
          return 0;
        }
        goto LAB_00545ebe;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffec0);
      auStack_130._0_4_ =
           (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                     ((CCharacter *)this_ptr,pCVar5,(int)in_stack_fffffebc);
      auStack_130._4_4_ = 0.4;
      fStack_c4 = (g_CDemonSet_PTR_005be368->ray_target).x -
                  (g_CDemonSet_PTR_005be368->ray_origin).x;
      fStack_c0 = (g_CDemonSet_PTR_005be368->ray_target).y -
                  (g_CDemonSet_PTR_005be368->ray_origin).y;
      CStack_bc.x = (g_CDemonSet_PTR_005be368->ray_target).z -
                    (g_CDemonSet_PTR_005be368->ray_origin).z;
      fStack_1c = (float)10 /
                  SQRT(CStack_bc.x * CStack_bc.x + fStack_c4 * fStack_c4 + fStack_c0 * fStack_c0);
      CStack_38.y = fStack_c4 * fStack_1c;
      CStack_38.z = fStack_c0 * fStack_1c;
      fStack_2c = CStack_bc.x * fStack_1c;
      if ((float *)(auStack_130 + 8) != &CStack_38.y) {
        auStack_130._8_4_ = CStack_38.y;
        auStack_130._12_4_ = CStack_38.z;
        auStack_130._16_4_ = fStack_2c;
      }
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (&this_ptr_01->base,&CStack_d0,
                          &g_CDemonSet_PTR_005be368->collision_impact_position);
      if ((CVector3f *)(auStack_130 + 0x18) != pCVar3) {
        auStack_130._24_4_ = pCVar3->x;
        fStack_114 = pCVar3->y;
        fStack_110 = pCVar3->z;
      }
      pCStack_10c = (CDemonActor *)(this_ptr->base).ammo_type;
      CStack_108.m[0].y = 1.41531e-43;
      CStack_108.m[0].x = 0.15;
      CStack_108.m[0].z = (float)this_ptr;
      CStack_108.m[1].y =
           (float)(*((this_ptr->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr);
      in_stack_fffffebc = 7.749827e-39;
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)
                (this_ptr_01,(SDamageInfo *)auStack_130);
      if ((this_ptr->base).can_penetrate == 0) goto LAB_00545ebe;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->collision_actor);
    }
    fStack_1c = (float)((int)fStack_1c + 1);
    if (3 < (int)fStack_1c) {
LAB_00545ebe:
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
      if ((this_ptr->base).is_rendered != 0) {
        aCStack_68[0].x = CStack_98.x;
        aCStack_68[0].z = CStack_98.z;
        aCStack_68[0].y = CStack_98.y + -0.125f;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
                  (g_CFireEffect_PTR_005b80f0,aCStack_68,&(this_ptr->base).base.orient_matrix);
        CStack_80.x = 5.0;
        CStack_80.y = 6.0;
        CStack_80.z = -6.0;
        CStack_8c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.3926991,0.3926991);
        fStack_14 = CStack_8c.x;
        CStack_8c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.3926991,0.3926991);
        CStack_8c.z = 0.0;
        fStack_14 = CStack_8c.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&CStack_108,&CStack_8c);
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                           (&CStack_108,&CStack_b0,&CStack_80);
        pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                           ((CDemonActor *)this_ptr,aCStack_50,pCVar3);
        if (&CStack_80 != pCVar3) {
          CStack_80.x = pCVar3->x;
          CStack_80.y = pCVar3->y;
          CStack_80.z = pCVar3->z;
        }
        model_ptr = core_dmodel_cpp_loadModel_FUN_004543b0("bullet.kfm");
        core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0
                  (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).base.location.position,
                   &(this_ptr->base).base.orient.vec,&CStack_80,model_ptr);
      }
      return 1;
    }
  } while( true );
}
