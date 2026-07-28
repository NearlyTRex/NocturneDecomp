// Name: core_tommygun.cpp_FUN_00545c30
// Address: 00545c30
// Address Range: [[00545c30, 0054646b]]
// Convention: unknown
// Signature: undefined4 core_tommygun_cpp_FUN_00545c30(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_tommygun_cpp_FUN_00545c30(CWeapon *param_1)

{
  float fVar1;
  CDemonActor_vtable *pCVar2;
  CDemonSet *this_ptr;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  uint uVar6;
  CKeyFramedModel *model_ptr;
  CCharacter *this_ptr_00;
  CTrigger *this_ptr_01;
  CFlameCan *this_ptr_02;
  double dVar7;
  uint uVar8;
  float in_stack_fffffec4;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  CVector3f CStack_11c;
  float fStack_110;
  CDemonActor *pCStack_10c;
  CMatrix3x3f CStack_108;
  CVector3f CStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  byte auStack_b0 [12];
  char acStack_a4 [8];
  float fStack_9c;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f aCStack_68 [2];
  byte auStack_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  CTrigger *pCStack_24;
  CCrate *pCStack_20;
  uint uStack_1c;
  char acStack_18 [4];
  float fStack_14;
  
  fVar1 = param_1->fire_cooldown_timer;
  param_1[1].base.actor_name[0] = '\x02';
  param_1[1].base.actor_name[1] = '\0';
  param_1[1].base.actor_name[2] = '\0';
  param_1[1].base.actor_name[3] = '\0';
  if (0.0 < fVar1) {
    return 0;
  }
  pCVar2 = (param_1->base).vtable._ub;
  param_1->fire_cooldown_timer = param_1->fire_cooldown_timer + 0.1f;
  pCVar3 = (CVector3f *)(*pCVar2->initializeInEditor)(&param_1->base);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&param_1->base,&CStack_98,pCVar3);
  iVar4 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar4 == 0) {
    param_1[1].base.actor_name[0] = '\0';
    param_1[1].base.actor_name[1] = '\0';
    param_1[1].base.actor_name[2] = '\0';
    param_1[1].base.actor_name[3] = '\0';
    (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"45-dry-!.wav @2.0");
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.actor_name + 4));
    pCVar5 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
    if (pCVar5 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0(INT_005b9284);
    }
    param_1 = param_1 + 1;
    (param_1->base).actor_name[4] = '\0';
    (param_1->base).actor_name[5] = '\0';
    (param_1->base).actor_name[6] = '\0';
    (param_1->base).actor_name[7] = '\0';
    return 0;
  }
  fStack_9c = param_1->bolt_velocity;
  acStack_a4[0] = '\0';
  acStack_a4[1] = '\0';
  acStack_a4[2] = '\0';
  acStack_a4[3] = '\0';
  acStack_a4[4] = '\0';
  acStack_a4[5] = '\0';
  acStack_a4[6] = '\0';
  acStack_a4[7] = '\0';
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_74,acStack_a4);
  fStack_bc = CStack_98.x + fStack_74;
  fStack_b8 = CStack_98.y + fStack_70;
  fStack_b4 = CStack_98.z + fStack_6c;
  fStack_28 = (float)2.5 / param_1->bolt_velocity;
  fStack_c8 = fStack_74 * fStack_28;
  fStack_c4 = fStack_70 * fStack_28;
  fStack_c0 = fStack_6c * fStack_28;
  fStack_38 = CStack_98.x - fStack_c8;
  fStack_34 = CStack_98.y - fStack_c4;
  fStack_30 = CStack_98.z - fStack_c0;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->base);
  if (param_1->carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1->carried_by_actor);
  }
  uStack_1c = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                 (0x01E57284,&fStack_38,&fStack_bc);
    dVar7 = (double)fStack_14;
    if ((dVar7 < 0.0) || (1.0 < dVar7)) goto LAB_00545ebe;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CCharacterActorType_00765a60.name_hash);
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (iVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr_00), 0 < iVar4))
    {
      this_ptr_00 = (CCharacter *)0x0;
    }
    acStack_18 = (char  [4])
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CGlassActorType_01c78c40.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CTriggerActorType_02dd1084.name_hash);
    pCStack_24 = this_ptr_01;
    pCStack_20 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CCrateActorType_0077bd40.name_hash);
    this_ptr_02 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CFlameCanActorType_01c70654.name_hash);
    if (this_ptr_00 == (CCharacter *)0x0) {
      if (acStack_18 == (char  [4])0x0) {
        if (this_ptr_01 == (CTrigger *)0x0) {
          if (pCStack_20 == (CCrate *)0x0) {
            if (this_ptr_02 == (CFlameCan *)0x0) {
              core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60
                        (0x01C08D04,
                         (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc),
                         (CVector3f *)(0x01E57284->lights[199].filter_names[0x12] + 0x24),
                         *(int *)(0x01E57284->lights[199].filter_names[0x13] + 8),
                         *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
              goto LAB_00545ebe;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr_02);
          }
          else {
            core_crate_cpp_CCrate_explode_FUN_0043cdb0(pCStack_20);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_01);
          uVar8 = SUB84(__BITCAST_UINT64(dVar7),0);
          iVar4 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                            (this_ptr_01,&param_1->base);
          if (iVar4 != 0) {
            pCVar5 = (*((param_1->base).vtable._ub)->dtor)(&param_1->base,uVar8);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_01,(float)pCVar5);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&pCStack_24->base);
        }
      }
      else {
        iVar4 = core_glass_cpp_FUN_004aded0(acStack_18);
        if (iVar4 == 0) goto LAB_00545ebe;
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  ((CGlass *)acStack_18,
                   (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
      }
    }
    else {
      iVar4 = (*((this_ptr_00->base).vtable._ub)->initializeInEditor)(&this_ptr_00->base);
      uVar8 = (uint)((ulonglong)dVar7 >> 0x20);
      if ((iVar4 != 0) &&
         (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (param_1->carried_by_actor,g_CHeroActorType_01cae0ec.name_hash),
         this_ptr = 0x01E57284, pCVar5 != (CDemonActor *)0x0)) {
        if (acStack_18 == (char  [4])0x0) {
          param_1->ammo_count = param_1->ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(this_ptr);
          return 0;
        }
        goto LAB_00545ebe;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffec0);
      (*((param_1->base).vtable._ub)->dtor)(&param_1->base,uVar8);
      fStack_c8 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x18) -
                  *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0xc);
      fStack_c4 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x1c) -
                  *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x10);
      fStack_c0 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x20) -
                  *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x14);
      pCStack_20 = (CCrate *)
                   ((float)10 /
                   SQRT(fStack_c0 * fStack_c0 + fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4));
      fStack_38 = fStack_c8 * (float)pCStack_20;
      fStack_34 = fStack_c4 * (float)pCStack_20;
      fStack_30 = fStack_c0 * (float)pCStack_20;
      if (&fStack_12c != &fStack_38) {
        fStack_12c = fStack_38;
        fStack_128 = fStack_34;
        fStack_124 = fStack_30;
      }
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (&this_ptr_00->base,&CStack_d4,
                          (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
      if (&CStack_11c != pCVar3) {
        CStack_11c.x = pCVar3->x;
        CStack_11c.y = pCVar3->y;
        CStack_11c.z = pCVar3->z;
      }
      fStack_110 = (float)param_1->ammo_type;
      CStack_108.m[0].x = 1.41531e-43;
      pCStack_10c = (CDemonActor *)0x3e19999a;
      CStack_108.m[0].y = (float)param_1;
      CStack_108.m[1].x = (float)(*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
      (*(((this_ptr_00->base).vtable._uc)->_uc).getGrabbed)
                (this_ptr_00,(CDemonActor *)&stack0xfffffecc,(int)in_stack_fffffec4);
      if (param_1->can_penetrate == 0) goto LAB_00545ebe;
      in_stack_fffffec4 = 7.749876e-39;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18)
                );
    }
    uStack_1c = uStack_1c + 1;
    if (3 < (int)uStack_1c) {
LAB_00545ebe:
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      if (param_1->is_rendered != 0) {
        aCStack_68[0].x = CStack_98.x;
        aCStack_68[0].z = CStack_98.z;
        aCStack_68[0].y = CStack_98.y + -0.125f;
        core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
                  (0x01C08D04,aCStack_68,&(param_1->base).orient_matrix);
        CStack_80.x = 5.0;
        CStack_80.y = 6.0;
        CStack_80.z = -6.0;
        CStack_8c.x = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0xbec90fdb,0x3ec90fdb);
        fStack_14 = CStack_8c.x;
        CStack_8c.y = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0xbec90fdb,0x3ec90fdb);
        CStack_8c.z = 0.0;
        fStack_14 = CStack_8c.y;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&CStack_108,&CStack_8c);
        uVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                          (&CStack_108,auStack_b0,&CStack_80);
        pCVar3 = (CVector3f *)
                 core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,auStack_50,uVar6);
        if (&CStack_80 != pCVar3) {
          CStack_80.x = pCVar3->x;
          CStack_80.y = pCVar3->y;
          CStack_80.z = pCVar3->z;
        }
        model_ptr = core_dmodel_cpp_loadModel_FUN_004543b0("bullet.kfm");
        core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0
                  (0x01C08D04,&(param_1->base).location.position,&(param_1->base).orient.vec,
                   &CStack_80,model_ptr);
      }
      return 1;
    }
  } while( true );
}
