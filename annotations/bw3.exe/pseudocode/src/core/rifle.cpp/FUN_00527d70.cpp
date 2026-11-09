// Name: core_rifle.cpp_FUN_00527d70
// Address: 00527d70
// Address Range: [[00527d70, 005284c3]]
// Convention: unknown
// Signature: undefined4 core_rifle_cpp_FUN_00527d70(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_rifle_cpp_FUN_00527d70(CDemonActor *param_1)

{
  CDemonSet *this_ptr;
  float fVar1;
  float fVar2;
  int iVar3;
  CGlass *this_ptr_00;
  CTrigger *this_ptr_01;
  byte bVar4;
  float afStackY_110c [995];
  float *pfVar5;
  CDemonActor *pCVar6;
  uint uStack_160;
  float fStack_15c;
  uint uStack_158;
  float fStack_154;
  uint uStack_150;
  uint uStack_14c;
  float fStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  CDemonActor *pCStack_12c;
  uint uStack_128;
  float fStack_124;
  float afStack_120 [5];
  float afStack_10c [3];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  float afStack_dc [3];
  float fStack_d0;
  float afStack_cc [5];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [4];
  uint uStack_98;
  float fStack_94;
  float afStack_90 [5];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CTrigger *pCStack_2c;
  CFlameCan *pCStack_28;
  CCrate *pCStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar5 = afStack_cc + 2;
  afStack_cc[2] = (float)uStack_4c;
  afStack_cc[(uint)bVar4 * -2 + 3] = afStack_90[(uint)bVar4 * -2 + 0x12];
  afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  core_actor_cpp_FUN_00408b80(param_1,pfVar5);
  fStack_94 = afStack_120[2];
  afStack_90[(uint)bVar4 * -2] = afStack_120[(uint)bVar4 * -2 + 3];
  pCVar6 = param_1;
  afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  iVar3 = core_weapon_cpp_FUN_0057b880(pCVar6);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"?shotgun-noammo.wav" + 1,(CVector3f *)&fStack_94);
    return 0;
  }
  afStack_dc[2] = *(float *)&param_1[2].field_0x38;
  afStack_dc[0] = 0.0;
  afStack_dc[1] = 0.0;
  core_actor_cpp_FUN_00408b00(param_1,afStack_120 + 0x11);
  fVar2 = afStack_90[0];
  fVar1 = fStack_94;
  fStack_70 = fStack_f4;
  afStack_90[(uint)bVar4 * -2 + 9] = afStack_120[(uint)bVar4 * -2 + 0xc];
  afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  fStack_b8 = fVar1 + fStack_70;
  fStack_b4 = fVar2 + fStack_6c;
  fStack_b0 = afStack_90[1] + fStack_68;
  afStack_90[2] = fVar1 + fStack_70;
  afStack_90[(uint)bVar4 * -2 + 3] = afStack_cc[(uint)bVar4 * -2 + 6];
  afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  fVar1 = fStack_94;
  fStack_30 = (float)_DAT_005cdb39 / *(float *)&param_1[2].field_0x38;
  fStack_40 = fStack_70 * fStack_30;
  fStack_3c = fStack_6c * fStack_30;
  fStack_38 = fStack_68 * fStack_30;
  fStack_7c = fStack_70 * fStack_30;
  afStack_90[(uint)bVar4 * -2 + 6] = afStack_90[(uint)bVar4 * -2 + 0x15];
  afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
  fStack_64 = fVar1 - fStack_7c;
  fStack_60 = afStack_90[0] - fStack_78;
  fStack_5c = afStack_90[1] - fStack_74;
  afStack_10c[0] = fVar1 - fStack_7c;
  afStack_120[(uint)bVar4 * -2 + 6] = afStack_90[(uint)bVar4 * -2 + 0xc];
  afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
  if (*(CDemonActor **)&param_1[2].field_0x54 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x54);
  }
  iStack_20 = 0;
  do {
    fStack_14 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_120 + 5,afStack_90 + 2)
    ;
    if ((fStack_14 < 0.0) || (1.0 < fStack_14)) break;
    iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
    if ((iStack_18 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar3)) {
      iStack_18 = 0;
    }
    this_ptr_00 = (CGlass *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CGlassClassInfo.name_hash);
    this_ptr_01 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CTriggerClassInfo.name_hash);
    pCStack_2c = this_ptr_01;
    pCStack_24 = (CCrate *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                            g_CCrateClassInfo.name_hash);
    pCStack_28 = (CFlameCan *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                            g_CFlameCanClassInfo.name_hash);
    fStack_34 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
    fStack_14 = fStack_34;
    if (iStack_18 == 0) {
      if (this_ptr_00 == (CGlass *)0x0) {
        if (this_ptr_01 == (CTrigger *)0x0) {
          if (pCStack_24 == (CCrate *)0x0) {
            if (pCStack_28 == (CFlameCan *)0x0) {
              core_fire_cpp_FUN_004a2090
                        (0x01C73654,&g_CDemonSetPtr->field_0x14d138,
                         &g_CDemonSetPtr->field_0x14d128,
                         *(uint *)&g_CDemonSetPtr->field_0x14d134,
                         *(uint *)&g_CDemonSetPtr->field_0x14d144,0);
              break;
            }
            core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(pCStack_28);
          }
          else {
            core_crate_cpp_FUN_004461c0(pCStack_24);
          }
        }
        else {
          core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_01);
          iVar3 = core_trigger_cpp_FUN_0056ede0(this_ptr_01,param_1);
          if (iVar3 != 0) {
            core_trigger_cpp_FUN_0056ee20(this_ptr_01,fStack_34);
          }
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)pCStack_2c);
        }
      }
      else {
        iVar3 = core_glass_cpp_FUN_004cc5d0(this_ptr_00);
        if (iVar3 == 0) break;
        core_glass_cpp_FUN_004cc040(this_ptr_00,&g_CDemonSetPtr->field_0x14d138);
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
      this_ptr = g_CDemonSetPtr;
      if (iVar3 != 0) {
        if (iStack_20 == 0) {
          *(int *)&param_1[4].field_0x8 = *(int *)&param_1[4].field_0x8 + 1;
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr);
          return 0;
        }
        break;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&uStack_160);
      uStack_160 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
      fStack_14 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
      uStack_158 = 0x3ecccccd;
      fStack_15c = fStack_14;
      fStack_58 = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                  *(float *)&g_CDemonSetPtr->field_0x14d110;
      fStack_54 = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                  *(float *)&g_CDemonSetPtr->field_0x14d114;
      fStack_50 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                  *(float *)&g_CDemonSetPtr->field_0x14d118;
      fStack_124 = fStack_58;
      afStack_120[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2 + 0xf];
      afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
      fStack_1c = (float)_DAT_005cdb49 /
                  SQRT(afStack_120[1] * afStack_120[1] +
                       fStack_124 * fStack_124 + afStack_120[0] * afStack_120[0]);
      fStack_100 = fStack_124 * fStack_1c;
      fStack_fc = afStack_120[0] * fStack_1c;
      fStack_f8 = afStack_120[1] * fStack_1c;
      fStack_e8 = fStack_124 * fStack_1c;
      afStack_120[(uint)bVar4 * -2 + 0xf] = afStack_120[(uint)bVar4 * -2 + 9];
      afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           afStack_120[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      if (&fStack_154 != afStack_120 + 0xe) {
        fStack_154 = fStack_e8;
        uStack_150 = uStack_e4;
        uStack_14c = uStack_e0;
      }
      core_actor_cpp_FUN_00408bf0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
      afStack_a8[2] = fStack_d0;
      afStack_a8[(uint)bVar4 * -2 + 3] = afStack_cc[(uint)bVar4 * -2];
      afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&fStack_144 != afStack_a8 + 2) {
        fStack_144 = afStack_a8[2];
        uStack_140 = afStack_a8[3];
        uStack_13c = uStack_98;
      }
      uStack_138 = *(uint *)&param_1[4].field_0xc;
      uStack_130 = 0x65;
      uStack_134 = 0x3e19999a;
      pCStack_12c = param_1;
      uStack_128 = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
      (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_160);
      if (*(int *)&param_1[2].field_0x34 == 0) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  fStack_ac = fStack_94;
  afStack_a8[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2];
  afStack_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  afStack_a8[0] = afStack_a8[0] + _DAT_005cdb41;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,(CVector3f *)&fStack_ac,(CMatrix3x3f *)&param_1->field_0x3c);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,param_1,"45.wav",(CVector3f *)&fStack_94);
  *(uint *)&param_1[2].field_0x50 = 0x3fc00000;
  return 1;
}
