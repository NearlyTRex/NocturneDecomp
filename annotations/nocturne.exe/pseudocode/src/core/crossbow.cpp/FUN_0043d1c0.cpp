// Name: core_crossbow.cpp_FUN_0043d1c0
// Address: 0043d1c0
// Address Range: [[0043d1c0, 0043d809]]
// Convention: unknown
// Signature: undefined4 core_crossbow_cpp_FUN_0043d1c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_crossbow_cpp_FUN_0043d1c0(CCharacter *param_1)

{
  CDemonActor_vtable *pCVar1;
  CDemonSet *this_ptr;
  CVector3f *pCVar2;
  int iVar3;
  float hit_points;
  CDemonActor *pCVar4;
  CCharacter *this_ptr_00;
  EDeathState EVar5;
  CTrigger *this_ptr_01;
  double dVar6;
  byte auStack_dc [28];
  float fStack_c0;
  float fStack_bc;
  CDemonActor *pCStack_b8;
  CDemonActor *pCStack_b4;
  float fStack_b0;
  CCharacter *pCStack_ac;
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
  
  pCVar2 = (CVector3f *)(*(((param_1->base).vtable._uc)->_uc).canWalk)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&param_1->base,aCStack_3c,pCVar2);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_00554600((CWeapon *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  aCStack_6c[0].z = (param_1->model).transformed_vertices[0x1a].x;
  aCStack_6c[0].x = 0.0;
  aCStack_6c[0].y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(&param_1->base,&CStack_9c,aCStack_6c);
  CStack_a8.x = aCStack_3c[0].x + CStack_9c.x;
  CStack_a8.y = aCStack_3c[0].y + CStack_9c.y;
  CStack_a8.z = aCStack_3c[0].z + CStack_9c.z;
  fStack_24 = (float)1.5 / (param_1->model).transformed_vertices[0x1a].x;
  fStack_78 = CStack_9c.x * fStack_24;
  fStack_74 = CStack_9c.y * fStack_24;
  fStack_70 = CStack_9c.z * fStack_24;
  CStack_90.x = aCStack_3c[0].x - fStack_78;
  CStack_90.y = aCStack_3c[0].y - fStack_74;
  CStack_90.z = aCStack_3c[0].z - fStack_70;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->base);
  pCVar4 = (CDemonActor *)(param_1->model).transformed_vertices[0x1c].y;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar4);
  }
  CStack_20.y = 0.0;
  do {
    hit_points = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                           (0x01E57284,&CStack_90,&CStack_a8);
    dVar6 = (double)hit_points;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CCharacterActorType_00765a60.name_hash);
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (EVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
       0 < (int)EVar5)) {
      this_ptr_00 = (CCharacter *)0x0;
    }
    pCStack_14 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CGlassActorType_01c78c40.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CTriggerActorType_02dd1084.name_hash);
    CStack_20.x = (float)this_ptr_01;
    if (this_ptr_00 == (CCharacter *)0x0) {
      if (pCStack_14 == (CGlass *)0x0) {
        if (this_ptr_01 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_0048b070
                    (0x01C08D04,(CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc),
                     &(param_1->base).orient.vec,
                     (CVector3f *)(0x01E57284->lights[199].filter_names[0x12] + 0x24),
                     *(int *)(0x01E57284->lights[199].filter_names[0x13] + 8));
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_01);
        iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(this_ptr_01,&param_1->base)
        ;
        if (iVar3 != 0) {
          hit_points = (float)(*(((param_1->base).vtable._uc)->_uc).getGrabbed)
                                        (param_1,SUB84(__BITCAST_UINT64(dVar6),0),(int)((ulonglong)dVar6 >> 0x20));
          core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_01,hit_points);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)CStack_20.x);
      }
      else {
        iVar3 = core_glass_cpp_FUN_004aded0(pCStack_14);
        if (iVar3 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  (pCStack_14,(CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
      }
    }
    else {
      iVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).canWalk)(this_ptr_00);
      this_ptr = 0x01E57284;
      pCVar4 = (CDemonActor *)((ulonglong)dVar6 >> 0x20);
      if (iVar3 != 0) {
        if (CStack_20.z == 0.0) {
          (param_1->model).transformed_vertices[0x4f].y =
               (float)((int)(param_1->model).transformed_vertices[0x4f].y + 1);
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff14);
      auStack_dc._0_4_ =
           (*(((param_1->base).vtable._uc)->_uc).getGrabbed)(param_1,pCVar4,(int)hit_points);
      auStack_dc._4_4_ = 0.4;
      CStack_a8.y = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x18) -
                    *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0xc);
      CStack_a8.z = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x1c) -
                    *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x10);
      CStack_9c.x = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x20) -
                    *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x14);
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
                         (&this_ptr_00->base,&CStack_20,
                          (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
      if ((CVector3f *)(auStack_dc + 0x18) != pCVar2) {
        auStack_dc._24_4_ = pCVar2->x;
        fStack_c0 = pCVar2->y;
        fStack_bc = pCVar2->z;
      }
      pCStack_b8 = (CDemonActor *)(param_1->model).transformed_vertices[0x4f].z;
      fStack_b0 = 1.45735e-43;
      pCStack_ac = param_1;
      pCStack_b4 = (CDemonActor *)0x3e19999a;
      CStack_a8.y = (float)(*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
      hit_points = 6.230251e-39;
      (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                (this_ptr_00,(SDamageInfo *)auStack_dc);
      if ((param_1->model).transformed_vertices[0x19].z == 0.0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18)
                );
    }
    CStack_20.y = (float)((int)CStack_20.y + 1);
  } while ((int)CStack_20.y < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
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
            (0x02DC9450,&param_1->base,"bow-!.wav",aCStack_3c);
  pCVar1 = (param_1->base).vtable._ub;
  (param_1->model).transformed_vertices[0x1c].x = 0.666;
  pCVar4 = (*pCVar1->getCarrier)(&param_1->base);
  if (pCVar4 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    xxx_unk_c_FUN_004940d0(INT_005b9284);
  }
  return 1;
}
