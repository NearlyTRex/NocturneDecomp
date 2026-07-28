// Name: core_turret.cpp_CTurret_fire_FUN_0054ab10
// Address: 0054ab10
// Address Range: [[0054ab10, 0054b02a]]
// Convention: unknown
// Signature: undefined4 core_turret_cpp_CTurret_fire_FUN_0054ab10(CDemonActor *param_1)

#include "nocturne.h"

uint core_turret_cpp_CTurret_fire_FUN_0054ab10(CDemonActor *param_1)

{
  CPlatform *pCVar1;
  CVector3f *pCVar2;
  CCharacter *this_ptr;
  int iVar3;
  CCharacter *this_ptr_00;
  CFlameCan *this_ptr_01;
  CDemonActor *hit_points;
  CCharacter *actor;
  uint flags;
  double dVar4;
  float in_stack_ffffff28;
  CDemonActor *pCStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_b8;
  float fStack_ac;
  CDemonActor *pCStack_a8;
  CDemonActor *pCStack_a4;
  UOrientationVector UStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  CDemonActor *pCStack_68;
  int aiStack_64 [2];
  float local_5c;
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CCharacter *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  CGlass *pCStack_1c;
  float fStack_14;
  
  pCVar2 = (CVector3f *)(*((param_1->vtable)._ub)->initializeInEditor)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&UStack_a0.vec,pCVar2);
  local_5c = param_1[2].orient_matrix.m[0].y;
  aiStack_64[0] = 0;
  aiStack_64[1] = ACTOR_NOT_CREATED;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_34,aiStack_64);
  fStack_94 = UStack_a0.vec.x + fStack_34;
  fStack_90 = UStack_a0.vec.y + fStack_30;
  fStack_8c = UStack_a0.vec.z + fStack_2c;
  CStack_74.y = UStack_a0.vec.x;
  CStack_74.z = UStack_a0.vec.y;
  pCStack_68 = (CDemonActor *)UStack_a0.vec.z;
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  iStack_20 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                 (0x01E57284,&CStack_74.y,&fStack_94);
    dVar4 = (double)fStack_14;
    if ((dVar4 < 0.0) || (1.0 < dVar4)) break;
    this_ptr = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                          g_CCharacterActorType_00765a60.name_hash);
    flags = SUB84(__BITCAST_UINT64(dVar4),0);
    if ((this_ptr != (CCharacter *)0x0) &&
       (iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr), 0 < iVar3)) {
      this_ptr = (CCharacter *)0x0;
    }
    pCStack_1c = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CGlassActorType_01c78c40.name_hash);
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CTriggerActorType_02dd1084.name_hash);
    pCStack_28 = this_ptr_00;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CCrateActorType_0077bd40.name_hash);
    this_ptr_01 = (CFlameCan *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CFlameCanActorType_01c70654.name_hash);
    if (this_ptr == (CCharacter *)0x0) {
      if (pCStack_1c == (CGlass *)0x0) {
        if (this_ptr_00 != (CCharacter *)0x0) {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580((CTrigger *)this_ptr_00);
          iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                            ((CTrigger *)this_ptr_00,param_1);
          actor = pCStack_28;
          if (iVar3 != 0) {
            hit_points = (*((param_1->vtable)._ub)->dtor)(param_1,flags);
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0
                      ((CTrigger *)this_ptr_00,(float)hit_points);
            actor = pCStack_28;
          }
          goto LAB_0054aea2;
        }
        if (pCStack_24 == (CCrate *)0x0) {
          if (this_ptr_01 == (CFlameCan *)0x0) {
            core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60
                      (0x01C08D04,
                       (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc),
                       (CVector3f *)(0x01E57284->lights[199].filter_names[0x12] + 0x24),
                       *(int *)(0x01E57284->lights[199].filter_names[0x13] + 8),
                       *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
            break;
          }
          core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr_01);
        }
        else {
          core_crate_cpp_CCrate_explode_FUN_0043cdb0(pCStack_24);
        }
      }
      else {
        iVar3 = core_glass_cpp_FUN_004aded0(pCStack_1c);
        if (iVar3 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  (pCStack_1c,(CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
      }
    }
    else {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff24);
      pCStack_d0 = (*((param_1->vtable)._ub)->dtor)(param_1,flags);
      fStack_cc = 0.4;
      fStack_80 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x18) -
                  *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0xc);
      fStack_7c = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x1c) -
                  *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x10);
      fStack_78 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x20) -
                  *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x14);
      CStack_40.y = (float)10 /
                    SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80 + fStack_7c * fStack_7c);
      fStack_44 = fStack_80 * CStack_40.y;
      CStack_40.x = fStack_7c * CStack_40.y;
      CStack_40.y = fStack_78 * CStack_40.y;
      if (&fStack_c8 != &fStack_44) {
        fStack_c8 = fStack_44;
        fStack_c4 = CStack_40.x;
        fStack_c0 = CStack_40.y;
      }
      actor = this_ptr;
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (&this_ptr->base,&CStack_74,
                          (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
      if (&CStack_b8 != pCVar2) {
        CStack_b8.x = pCVar2->x;
        CStack_b8.y = pCVar2->y;
        CStack_b8.z = pCVar2->z;
      }
      fStack_ac = param_1[4].location.position.y;
      pCStack_a8 = (CDemonActor *)0x3f800000;
      UStack_a0._0_4_ = param_1;
      pCStack_a4 = (CDemonActor *)0x65;
      UStack_a0.vec.z = (float)(*((param_1->vtable)._ub)->getCarrier)(param_1);
      (*(((this_ptr->base).vtable._uc)->_uc).getGrabbed)
                (this_ptr,(CDemonActor *)&pCStack_d0,(int)in_stack_ffffff28);
      if (param_1[2].orient_matrix.m[0].x == 0.0) break;
      pCStack_d0 = *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18);
LAB_0054aea2:
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&actor->base);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  CStack_40.x = UStack_a0.vec.x;
  CStack_40.z = UStack_a0.vec.z;
  CStack_40.y = UStack_a0.vec.y + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
            (0x01C08D04,&CStack_40,&param_1->orient_matrix);
  pCVar1 = param_1[5].standing_platform;
  param_1[6].create_event[0x50] = '\x02';
  param_1[6].create_event[0x51] = '\0';
  param_1[6].create_event[0x52] = '\0';
  param_1[6].create_event[0x53] = '\0';
  param_1[2].orient_matrix.m[2].y = (float)pCVar1;
  return 1;
}
