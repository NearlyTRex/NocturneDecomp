// Name: core_elephant.cpp_FUN_00477890
// Address: 00477890
// Address Range: [[00477890, 00477fcd]]
// Convention: unknown
// Signature: undefined4 core_elephant_cpp_FUN_00477890(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_elephant_cpp_FUN_00477890(CWeapon *param_1)

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
  UOrientationVector aUStack_f4 [2];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  CVector3f aCStack_d0 [2];
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  byte auStack_88 [8];
  float fStack_80;
  byte auStack_7c [48];
  CTrigger *pCStack_4c;
  CPlatform *pCStack_48;
  CDemonActor *pCStack_44;
  CFlameCan *pCStack_40;
  float fStack_3c;
  CCrate *pCStack_38;
  float fStack_34;
  CDemonSet *pCStack_30;
  CPlatform *pCStack_28;
  int iStack_20;
  CPlatform *pCStack_14;
  
  pCVar2 = (CVector3f *)(*((param_1->base).vtable._ub)->initializeInEditor)(&param_1->base);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&param_1->base,aCStack_d0,pCVar2);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0052ea60
              (0x02DC9450,&param_1->base,"shotgun-noammo.wav",aCStack_d0);
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)param_1[1].base.actor_name * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  pCStack_40 = (CFlameCan *)(float)(fVar6 * (float10)param_1->bolt_velocity);
  fStack_34 = (float)core_actor_cpp_getRandomInt_FUN_0040de00(10,0xf);
  fStack_3c = 0.0;
  if (0 < (int)fStack_34) {
    do {
      pCStack_48 = (CPlatform *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0);
      pCStack_14 = pCStack_48;
      pCStack_14 = (CPlatform *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0);
      fVar6 = (float10)fcos((float10)(float)pCStack_48);
      fVar7 = (float10)fsin((float10)(float)pCStack_48);
      fStack_dc = (float)(fVar6 * (float10)(float)pCStack_14);
      fStack_d8 = (float)(fVar7 * (float10)(float)pCStack_14);
      fStack_d4 = param_1->bolt_velocity;
      pfVar4 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,auStack_88);
      if (&fStack_dc != pfVar4) {
        fStack_dc = *pfVar4;
        fStack_d8 = pfVar4[1];
        fStack_d4 = pfVar4[2];
      }
      fStack_b8 = aCStack_d0[0].x + fStack_dc;
      fStack_b4 = aCStack_d0[0].y + fStack_d8;
      local_b0 = aCStack_d0[0].z + fStack_d4;
      pCStack_38 = (CCrate *)((float)1.5 / param_1->bolt_velocity);
      fStack_a0 = fStack_dc * (float)pCStack_38;
      fStack_9c = fStack_d8 * (float)pCStack_38;
      fStack_98 = fStack_d4 * (float)pCStack_38;
      fStack_94 = aCStack_d0[0].x - fStack_a0;
      fStack_90 = aCStack_d0[0].y - fStack_9c;
      fStack_8c = aCStack_d0[0].z - fStack_98;
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->base);
      if (param_1->carried_by_actor != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1->carried_by_actor);
      }
      iStack_20 = 0;
      do {
        fStack_11c = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                      (0x01E57284,&fStack_94);
        uStack_124 = (double)fStack_11c;
        pCStack_14 = (CPlatform *)fStack_11c;
        if ((uStack_124 < 0.0) || (1.0 < uStack_124)) break;
        grab_type = 6.564865e-39;
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
        pCStack_40 = (CFlameCan *)
                     core_actor_cpp_castToClassHash_FUN_0040d890
                               (*(CDemonActor **)
                                 (0x01E57284->lights[199].filter_names[0x13] + 0x18),
                                g_CCrateActorType_0077bd40.name_hash);
        pCStack_48 = (CPlatform *)
                     core_actor_cpp_castToClassHash_FUN_0040d890
                               (*(CDemonActor **)
                                 (0x01E57284->lights[199].filter_names[0x13] + 0x18),
                                g_CFlameCanActorType_01c70654.name_hash);
        pCVar5 = (*((param_1->base).vtable._ub)->dtor)(&param_1->base,(uint)in_stack_fffffec0);
        pCStack_28 = pCStack_48;
        fStack_3c = ((1.0 - grab_type) * (float)pCVar5) / (float)(int)pCStack_48;
        if (this_ptr == (CDemonSet *)0x0) {
          if (pCStack_30 == (CDemonSet *)0x0) {
            if (this_ptr_00 == (CTrigger *)0x0) {
              if (pCStack_38 == (CCrate *)0x0) {
                if (pCStack_40 == (CFlameCan *)0x0) {
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
                in_stack_fffffec0 = (CDemonSet *)0x477f6f;
                core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(pCStack_40);
              }
              else {
                in_stack_fffffec0 = (CDemonSet *)0x477f7a;
                core_crate_cpp_CCrate_explode_FUN_0043cdb0(pCStack_38);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(this_ptr_00);
              iVar3 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_005485a0
                                (this_ptr_00,&param_1->base);
              if (iVar3 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(this_ptr_00,fStack_3c);
              }
              in_stack_fffffec0 = 0x01E57284;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCStack_44);
            }
          }
          else {
            in_stack_fffffec0 = (CDemonSet *)0x477f2b;
            iVar3 = core_glass_cpp_FUN_004aded0(pCStack_30);
            if (iVar3 == 0) break;
            in_stack_fffffec0 = pCStack_30;
            core_glass_cpp_CGlass_shatter_FUN_004ada20
                      ((CGlass *)pCStack_30,
                       (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
          }
        }
        else {
          in_stack_fffffec0 = (CDemonSet *)0x477d83;
          iVar3 = (**(code **)((int)this_ptr->cameras[0].ambient_value + 0xd8))
                            ((CDemonActor *)this_ptr);
          if (iVar3 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffed8);
          uStack_124 = __BITCAST_DOUBLE(CONCAT44(0x3ecccccd,pCStack_38));
          fStack_80 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x18) -
                      *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0xc);
          auStack_7c._0_4_ =
               *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x1c) -
               *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x10);
          auStack_7c._4_4_ =
               *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x20) -
               *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x14);
          pCStack_28 = (CPlatform *)
                       ((float)10 /
                       SQRT((float)auStack_7c._4_4_ * (float)auStack_7c._4_4_ +
                            fStack_80 * fStack_80 +
                            (float)auStack_7c._0_4_ * (float)auStack_7c._0_4_));
          fStack_d4 = fStack_80 * (float)pCStack_28;
          aCStack_d0[0].x = (float)auStack_7c._0_4_ * (float)pCStack_28;
          aCStack_d0[0].y = (float)auStack_7c._4_4_ * (float)pCStack_28;
          if (&fStack_11c != &fStack_d4) {
            fStack_11c = fStack_d4;
            fStack_118 = aCStack_d0[0].x;
            fStack_114 = aCStack_d0[0].y;
          }
          in_stack_fffffec0 = this_ptr;
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr,(CVector3f *)(auStack_7c + 8),
                              (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
          if (&CStack_10c != pCVar2) {
            CStack_10c.x = pCVar2->x;
            CStack_10c.y = pCVar2->y;
            CStack_10c.z = pCVar2->z;
          }
          fStack_100 = (float)param_1->ammo_type;
          EStack_f8 = DAMAGE_TYPE_PIERCING;
          fStack_fc = 1.0;
          aUStack_f4[0]._0_4_ = param_1;
          aUStack_f4[0]._8_4_ = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
          (**(code **)((int)this_ptr->cameras[0].ambient_value + 0x100))
                    ((CCharacter *)this_ptr,(CDemonActor *)&uStack_124,(int)grab_type);
          if (param_1->can_penetrate == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,
                     *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      fStack_3c = (float)((int)fStack_3c + 1);
    } while ((int)fStack_3c < (int)fStack_34);
  }
  auStack_7c._0_4_ = aCStack_d0[0].x;
  auStack_7c._8_4_ = aCStack_d0[0].z;
  auStack_7c._4_4_ = aCStack_d0[0].y + 1.574918751107038e-314._0_4_;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
            (0x01C08D04,(CVector3f *)auStack_7c,&(param_1->base).orient_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,&param_1->base,"elephantgun.wav",aCStack_d0);
  pCVar1 = (param_1->base).vtable._ub;
  param_1->fire_cooldown_timer = 1.0;
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
