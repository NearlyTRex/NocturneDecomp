// Name: core_crossbow.cpp_FUN_0043d1c0
// Address: 0043d1c0
// Address Range: [[0043d1c0, 0043d809]]
// Convention: unknown
// Signature: undefined4 core_crossbow_cpp_FUN_0043d1c0(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_crossbow_cpp_FUN_0043d1c0(CWeapon *param_1)

{
  CDemonActor_vtable *pCVar1;
  CDemonSet *this_ptr;
  CVector3f *pCVar2;
  int iVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  CTrigger *this_ptr_00;
  double dVar6;
  uint uVar7;
  CCharacter *this_ptr_01;
  CDemonActor *pCStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  CVector3f CStack_c8;
  float fStack_bc;
  CDemonActor *pCStack_b8;
  CDemonActor *pCStack_b4;
  byte auStack_b0 [12];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  char acStack_68 [4];
  float local_64;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f aCStack_3c [2];
  CVector3f CStack_24;
  int iStack_18;
  CGlass *pCStack_14;
  
  pCVar2 = (CVector3f *)(*((param_1->base).vtable._ub)->initializeInEditor)(&param_1->base);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&param_1->base,aCStack_3c,pCVar2);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  local_64 = param_1->bolt_velocity;
  fStack_6c = 0.0;
  acStack_68[0] = '\0';
  acStack_68[1] = '\0';
  acStack_68[2] = '\0';
  acStack_68[3] = '\0';
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_9c,&fStack_6c);
  auStack_b0._8_4_ = aCStack_3c[0].x + fStack_9c;
  fStack_a4 = aCStack_3c[0].y + fStack_98;
  fStack_a0 = aCStack_3c[0].z + fStack_94;
  CStack_24.x = (float)1.5 / param_1->bolt_velocity;
  fStack_78 = fStack_9c * CStack_24.x;
  fStack_74 = fStack_98 * CStack_24.x;
  fStack_70 = fStack_94 * CStack_24.x;
  fStack_90 = aCStack_3c[0].x - fStack_78;
  fStack_8c = aCStack_3c[0].y - fStack_74;
  fStack_88 = aCStack_3c[0].z - fStack_70;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->base);
  if (param_1->carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1->carried_by_actor);
  }
  CStack_24.z = 0.0;
  do {
    pCVar4 = (CCharacter *)
             core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                       (0x01E57284,&fStack_90,&(((UOrientationVector *)auStack_b0)->vec).z);
    dVar6 = (double)(float)pCVar4;
    this_ptr_01 = pCVar4;
    if ((dVar6 < 0.0) || (1.0 < dVar6)) break;
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CCharacterActorType_00765a60.name_hash);
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (iVar3 = (*(((this_ptr_01->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr_01), 0 < iVar3))
    {
      this_ptr_01 = (CCharacter *)0x0;
    }
    pCStack_14 = (CGlass *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                            g_CGlassActorType_01c78c40.name_hash);
    this_ptr_00 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                             g_CTriggerActorType_02dd1084.name_hash);
    CStack_24.y = (float)this_ptr_00;
    if (this_ptr_01 == (CCharacter *)0x0) {
      if (pCStack_14 == (CGlass *)0x0) {
        if (this_ptr_00 == (CTrigger *)0x0) {
          core_fire_cpp_CFireEffect_createStake_FUN_0048b070
                    (0x01C08D04,(CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc),
                     &(param_1->base).orient.vec,
                     (CVector3f *)(0x01E57284->lights[199].filter_names[0x12] + 0x24),
                     *(int *)(0x01E57284->lights[199].filter_names[0x13] + 8));
          this_ptr_01 = pCVar4;
          break;
        }
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_00);
        uVar7 = SUB84(__BITCAST_UINT64(dVar6),0);
        iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(this_ptr_00,&param_1->base)
        ;
        if (iVar3 != 0) {
          pCVar5 = (*((param_1->base).vtable._ub)->dtor)(&param_1->base,uVar7);
          core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_00,(float)pCVar5);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)CStack_24.y);
        this_ptr_01 = pCVar4;
      }
      else {
        iVar3 = core_glass_cpp_FUN_004aded0(pCStack_14);
        this_ptr_01 = pCVar4;
        if (iVar3 == 0) break;
        core_glass_cpp_CGlass_shatter_FUN_004ada20
                  (pCStack_14,(CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
        this_ptr_01 = pCVar4;
      }
    }
    else {
      iVar3 = (*((this_ptr_01->base).vtable._ub)->initializeInEditor)(&this_ptr_01->base);
      this_ptr = 0x01E57284;
      uVar7 = (uint)((ulonglong)dVar6 >> 0x20);
      if (iVar3 != 0) {
        this_ptr_01 = pCVar4;
        if (iStack_18 == 0) {
          param_1->ammo_count = param_1->ammo_count + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff14);
      iVar3 = *(int *)(0x01E57284->lights[199].filter_names[0x13] + 0x1c);
      pCStack_e0 = (*((param_1->base).vtable._ub)->dtor)(&param_1->base,uVar7);
      fStack_dc = 0.4;
      auStack_b0._8_4_ =
           *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x18) -
           *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0xc);
      fStack_a4 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x1c) -
                  *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x10);
      fStack_a0 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x20) -
                  *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x14);
      fStack_40 = (float)10 /
                  SQRT(fStack_a0 * fStack_a0 +
                       (float)auStack_b0._8_4_ * (float)auStack_b0._8_4_ + fStack_a4 * fStack_a4);
      fStack_48 = (float)auStack_b0._8_4_ * fStack_40;
      fStack_44 = fStack_a4 * fStack_40;
      fStack_40 = fStack_a0 * fStack_40;
      if (&fStack_d8 != &fStack_48) {
        fStack_d8 = fStack_48;
        fStack_d4 = fStack_44;
        fStack_d0 = fStack_40;
      }
      pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (&this_ptr_01->base,&CStack_24,
                          (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
      if (&CStack_c8 != pCVar2) {
        CStack_c8.x = pCVar2->x;
        CStack_c8.y = pCVar2->y;
        CStack_c8.z = pCVar2->z;
      }
      fStack_bc = (float)param_1->ammo_type;
      pCStack_b4 = (CDemonActor *)0x68;
      auStack_b0._0_4_ = param_1;
      pCStack_b8 = (CDemonActor *)0x3e19999a;
      auStack_b0._8_4_ = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
      (*(((this_ptr_01->base).vtable._uc)->_uc).getGrabbed)
                (this_ptr_01,(CDemonActor *)&pCStack_e0,iVar3);
      if (param_1->can_penetrate == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18)
                );
    }
    CStack_24.z = (float)((int)CStack_24.z + 1);
  } while ((int)CStack_24.z < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  if (1.0 < (float)this_ptr_01) {
    this_ptr_01 = (CCharacter *)0x3f800000;
  }
  fStack_48 = fStack_9c * (float)this_ptr_01;
  fStack_44 = fStack_98 * (float)this_ptr_01;
  fStack_40 = fStack_94 * (float)this_ptr_01;
  fStack_84 = fStack_90 + fStack_48;
  fStack_80 = fStack_8c + fStack_44;
  fStack_7c = fStack_88 + fStack_40;
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,&param_1->base,"bow-!.wav",aCStack_3c);
  pCVar1 = (param_1->base).vtable._ub;
  param_1->fire_cooldown_timer = 0.666;
  pCVar5 = (*pCVar1->getCarrier)(&param_1->base);
  if (pCVar5 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    xxx_unk_c_FUN_004940d0(INT_005b9284);
  }
  return 1;
}
