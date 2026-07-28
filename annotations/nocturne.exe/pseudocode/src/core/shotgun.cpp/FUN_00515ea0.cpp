// Name: core_shotgun.cpp_FUN_00515ea0
// Address: 00515ea0
// Address Range: [[00515ea0, 00516614]]
// Convention: unknown
// Signature: undefined4 core_shotgun_cpp_FUN_00515ea0(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_shotgun_cpp_FUN_00515ea0(CWeapon *param_1)

{
  CDemonActor_vtable *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  float *pfVar4;
  CDemonActor *pCVar5;
  CDemonSet *this_ptr;
  CTrigger *this_ptr_00;
  float10 fVar6;
  float10 fVar7;
  CDemonSet *in_stack_fffffec0;
  float grab_type;
  ulonglong uStack_124;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  CVector3f CStack_10c;
  float fStack_100;
  float fStack_fc;
  EDamageType EStack_f8;
  UOrientationVector UStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f aCStack_bc [2];
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_90;
  float local_8c;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CTrigger *pCStack_4c;
  CPlatform *pCStack_48;
  CDemonActor *pCStack_44;
  CDemonActor *pCStack_40;
  CFlameCan *pCStack_3c;
  CCrate *pCStack_38;
  float fStack_34;
  CDemonSet *pCStack_30;
  CPlatform *pCStack_28;
  int iStack_20;
  CDemonActor *pCStack_14;
  
  pCVar2 = (CVector3f *)(*((param_1->base).vtable._ub)->initializeInEditor)(&param_1->base);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&param_1->base,&CStack_7c,pCVar2);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0052ea60
              (0x02DC9450,&param_1->base,"shotgun-noammo.wav",&CStack_7c);
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)param_1[1].base.actor_name * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  pCStack_40 = (CDemonActor *)(float)(fVar6 * (float10)param_1->bolt_velocity);
  fStack_34 = (float)core_actor_cpp_getRandomInt_FUN_0040de00(10,0xf);
  pCStack_3c = (CFlameCan *)0x0;
  if (0 < (int)fStack_34) {
    do {
      pCStack_44 = (CDemonActor *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0);
      pCStack_14 = pCStack_44;
      pCStack_14 = (CDemonActor *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0);
      fVar6 = (float10)fcos((float10)(float)pCStack_44);
      fVar7 = (float10)fsin((float10)(float)pCStack_44);
      fStack_64 = (float)(fVar6 * (float10)(float)pCStack_14);
      fStack_60 = (float)(fVar7 * (float10)(float)pCStack_14);
      fStack_5c = param_1->bolt_velocity;
      pfVar4 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_c4);
      if (&fStack_64 != pfVar4) {
        fStack_64 = *pfVar4;
        fStack_60 = pfVar4[1];
        fStack_5c = pfVar4[2];
      }
      fStack_94 = CStack_7c.x + fStack_64;
      fStack_90 = CStack_7c.y + fStack_60;
      local_8c = CStack_7c.z + fStack_5c;
      pCStack_38 = (CCrate *)((float)1.5 / param_1->bolt_velocity);
      fStack_d0 = fStack_64 * (float)pCStack_38;
      fStack_cc = fStack_60 * (float)pCStack_38;
      fStack_c8 = fStack_5c * (float)pCStack_38;
      fStack_70 = CStack_7c.x - fStack_d0;
      fStack_6c = CStack_7c.y - fStack_cc;
      fStack_68 = CStack_7c.z - fStack_c8;
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->base);
      if (param_1->carried_by_actor != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1->carried_by_actor);
      }
      iStack_20 = 0;
      do {
        fStack_11c = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                      (0x01E57284,&fStack_70);
        uStack_124 = (double)fStack_11c;
        pCStack_14 = (CDemonActor *)fStack_11c;
        if ((uStack_124 < 0.0) || (1.0 < uStack_124)) break;
        grab_type = 7.474038e-39;
        this_ptr = (CDemonSet *)
                   core_actor_cpp_castToClassHash_FUN_0040d890
                             (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18)
                              ,g_CCharacterActorType_00765a60.name_hash);
        if ((this_ptr != (CDemonSet *)0x0) &&
           (iVar3 = (**(code **)((int)this_ptr->cameras[0].ambient_value + 0x104))
                              ((CCharacter *)this_ptr), 0 < iVar3)) {
          this_ptr = (CDemonSet *)0x0;
        }
        pCStack_38 = (CCrate *)
                     core_actor_cpp_castToClassHash_FUN_0040d890
                               (*(CDemonActor **)
                                 (0x01E57284->lights[199].filter_names[0x13] + 0x18),
                                g_CGlassActorType_01c78c40.name_hash);
        this_ptr_00 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                (*(CDemonActor **)
                                  (0x01E57284->lights[199].filter_names[0x13] + 0x18),
                                 g_CTriggerActorType_02dd1084.name_hash);
        pCStack_4c = this_ptr_00;
        pCStack_40 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (*(CDemonActor **)
                                 (0x01E57284->lights[199].filter_names[0x13] + 0x18),
                                g_CCrateActorType_0077bd40.name_hash);
        pCStack_44 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (*(CDemonActor **)
                                 (0x01E57284->lights[199].filter_names[0x13] + 0x18),
                                g_CFlameCanActorType_01c70654.name_hash);
        pCVar5 = (*((param_1->base).vtable._ub)->dtor)(&param_1->base,(uint)in_stack_fffffec0);
        pCStack_28 = pCStack_48;
        pCStack_40 = (CDemonActor *)(((1.0 - grab_type) * (float)pCVar5) / (float)(int)pCStack_48);
        if (this_ptr == (CDemonSet *)0x0) {
          if (pCStack_30 == (CDemonSet *)0x0) {
            if (this_ptr_00 == (CTrigger *)0x0) {
              if (pCStack_38 == (CCrate *)0x0) {
                if (pCStack_3c == (CFlameCan *)0x0) {
                  in_stack_fffffec0 =
                       *(CDemonSet **)(0x01E57284->lights[199].filter_names[0x13] + 8);
                  core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60
                            (0x01C08D04,
                             (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc),
                             (CVector3f *)(0x01E57284->lights[199].filter_names[0x12] + 0x24),
                             (int)in_stack_fffffec0,
                             *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18))
                  ;
                  break;
                }
                in_stack_fffffec0 = (CDemonSet *)0x5165b6;
                core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(pCStack_3c);
              }
              else {
                in_stack_fffffec0 = (CDemonSet *)0x5165c1;
                core_crate_cpp_CCrate_explode_FUN_0043cdb0(pCStack_38);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_00);
              iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                                (this_ptr_00,&param_1->base);
              if (iVar3 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_00,(float)pCStack_40);
              }
              in_stack_fffffec0 = 0x01E57284;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCStack_44);
            }
          }
          else {
            in_stack_fffffec0 = (CDemonSet *)0x516572;
            iVar3 = core_glass_cpp_FUN_004aded0(pCStack_30);
            if (iVar3 == 0) break;
            in_stack_fffffec0 = pCStack_30;
            core_glass_cpp_CGlass_shatter_FUN_004ada20
                      ((CGlass *)pCStack_30,
                       (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
          }
        }
        else {
          in_stack_fffffec0 = (CDemonSet *)0x5163eb;
          iVar3 = (**(code **)((int)this_ptr->cameras[0].ambient_value + 0xd8))
                            ((CDemonActor *)this_ptr);
          if (iVar3 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffed8);
          uStack_124 = __BITCAST_DOUBLE(CONCAT44(0x3ecccccd,pCStack_3c));
          UStack_f4.vec.z =
               *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x18) -
               *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0xc);
          fStack_e8 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x1c) -
                      *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x10);
          fStack_e4 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x20) -
                      *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x14);
          pCStack_28 = (CPlatform *)
                       ((float)10 /
                       SQRT(fStack_e4 * fStack_e4 +
                            UStack_f4.vec.z * UStack_f4.vec.z + fStack_e8 * fStack_e8));
          fStack_c8 = UStack_f4.vec.z * (float)pCStack_28;
          fStack_c4 = fStack_e8 * (float)pCStack_28;
          fStack_c0 = fStack_e4 * (float)pCStack_28;
          if (&fStack_11c != &fStack_c8) {
            fStack_11c = fStack_c8;
            fStack_118 = fStack_c4;
            fStack_114 = fStack_c0;
          }
          in_stack_fffffec0 = this_ptr;
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr,aCStack_bc,
                              (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
          if (&CStack_10c != pCVar2) {
            CStack_10c.x = pCVar2->x;
            CStack_10c.y = pCVar2->y;
            CStack_10c.z = pCVar2->z;
          }
          fStack_100 = (float)param_1->ammo_type;
          EStack_f8 = DAMAGE_TYPE_IMMUNE|DAMAGE_TYPE_DROWN;
          fStack_fc = 0.15;
          UStack_f4._0_4_ = param_1;
          UStack_f4.vec.z = (float)(*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
          (**(code **)((int)this_ptr->cameras[0].ambient_value + 0x100))
                    ((CCharacter *)this_ptr,(CDemonActor *)&uStack_124,(int)grab_type);
          if (param_1->can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,
                     *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      pCStack_3c = (CFlameCan *)((pCStack_3c->base).actor_name + 1);
    } while ((int)pCStack_3c < (int)fStack_34);
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  CStack_a0.x = CStack_7c.x;
  CStack_a0.z = CStack_7c.z;
  CStack_a0.y = CStack_7c.y + -0.125f;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
            (0x01C08D04,&CStack_a0,&(param_1->base).orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,&param_1->base,"shotgun.wav",&CStack_7c);
  pCVar1 = (param_1->base).vtable._ub;
  param_1->fire_cooldown_timer = 0.666;
  pCVar5 = (*pCVar1->getCarrier)(&param_1->base);
  if (pCVar5 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    uStack_124._0_1_ = (byte)INT_005b9284;
    uStack_124._1_1_ = INT_005b9284._1_1_;
    uStack_124._2_1_ = INT_005b9284._2_1_;
    uStack_124._3_1_ = INT_005b9284._3_1_;
    xxx_unk_c_FUN_004940d0();
  }
  return 1;
}
