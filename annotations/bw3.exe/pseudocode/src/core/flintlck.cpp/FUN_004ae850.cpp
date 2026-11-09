// Name: core_flintlck.cpp_FUN_004ae850
// Address: 004ae850
// Address Range: [[004ae850, 004af577]]
// Convention: unknown
// Signature: undefined4 core_flintlck_cpp_FUN_004ae850(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_flintlck_cpp_FUN_004ae850(CDemonActor *param_1)

{
  uint uVar1;
  byte auVar2 [4];
  float fVar3;
  int iVar4;
  CGlass *this_ptr;
  CTrigger *this_ptr_00;
  byte bVar5;
  float afStackY_1208 [981];
  float *pfVar6;
  CDemonActor *pCVar7;
  CVector3f *position;
  uint *puVar8;
  uint uStack_284;
  float fStack_280;
  uint uStack_27c;
  float fStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  CDemonActor *pCStack_250;
  uint uStack_24c;
  CMatrix3x3f aCStack_248 [40];
  uint uStack_220;
  float afStack_21c [2];
  CVector3f CStack_214;
  uint uStack_208;
  float afStack_204 [2];
  CVector3f CStack_1fc;
  CVector3f CStack_1f0;
  uint uStack_1e4;
  float afStack_1e0 [2];
  byte auStack_1d8 [4];
  float afStack_1d4 [5];
  float afStack_1c0 [3];
  float afStack_1b4 [3];
  float fStack_1a8;
  float afStack_1a4 [4];
  uint uStack_194;
  float afStack_190 [4];
  float afStack_180 [4];
  float fStack_170;
  uint uStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [5];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  uint uStack_124;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [5];
  uint uStack_e8;
  uint uStack_dc;
  float fStack_d8;
  uint uStack_d0;
  uint uStack_c4;
  float fStack_bc;
  CVector3f CStack_b8;
  float afStack_ac [3];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  CTrigger *pCStack_30;
  uint uStack_2c;
  float fStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar6 = afStack_1d4 + 5;
  afStack_1c0[0] = (float)uStack_d0;
  afStack_1d4[(uint)bVar5 * -2 + 6] = afStack_fc[(uint)bVar5 * -2 + 0xc];
  afStack_1d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  core_actor_cpp_FUN_00408b80(param_1,pfVar6);
  auStack_1d8 = (byte  [4])afStack_1d4[2];
  afStack_1d4[(uint)bVar5 * -2] = afStack_1d4[(uint)bVar5 * -2 + 3];
  pCVar7 = param_1;
  afStack_1d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_1d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  iVar4 = core_weapon_cpp_FUN_0057b880(pCVar7);
  if (iVar4 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"wp_noammo.wav",(CVector3f *)auStack_1d8);
    *(uint *)&param_1[2].field_0x50 = 0x3f800000;
    return 0;
  }
  afStack_1b4[2] = *(float *)&param_1[2].field_0x38;
  afStack_1b4[0] = 0.0;
  afStack_1b4[1] = 0.0;
  core_actor_cpp_FUN_00408b00(param_1,afStack_1d4 + 8);
  fVar3 = afStack_1d4[0];
  auVar2 = auStack_1d8;
  fStack_160 = fStack_1a8;
  afStack_180[(uint)bVar5 * -2 + 9] = afStack_1a4[(uint)bVar5 * -2];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_1a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  afStack_90[2] = (float)auVar2 + fStack_160;
  afStack_90[3] = fVar3 + fStack_15c;
  fStack_80 = afStack_1d4[1] + fStack_158;
  afStack_190[3] = (float)auVar2 + fStack_160;
  afStack_180[(uint)bVar5 * -2] = afStack_90[(uint)bVar5 * -2 + 3];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  auVar2 = auStack_1d8;
  fStack_34 = (float)_DAT_005c1d1d / *(float *)&param_1[2].field_0x38;
  fStack_7c = fStack_160 * fStack_34;
  fStack_78 = fStack_15c * fStack_34;
  fStack_74 = fStack_158 * fStack_34;
  fStack_100 = fStack_160 * fStack_34;
  afStack_fc[(uint)bVar5 * -2] = afStack_90[(uint)bVar5 * -2 + 6];
  afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  afStack_180[2] = (float)auVar2 - fStack_100;
  afStack_180[3] = afStack_1d4[0] - afStack_fc[0];
  fStack_170 = afStack_1d4[1] - afStack_fc[1];
  fStack_154 = (float)auVar2 - fStack_100;
  afStack_180[(uint)bVar5 * -2 + 0xc] = afStack_180[(uint)bVar5 * -2 + 3];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
  core_setcolid_cpp_FUN_0053ebd0(g_CDemonSetPtr);
  if (*(CDemonActor **)&param_1[2].field_0x54 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x54);
  }
  iStack_20 = 0;
  do {
    fStack_18 = (float)core_setcolid_cpp_FUN_0053ccc0
                                 (g_CDemonSetPtr,afStack_180 + 0xb,afStack_1a4 + 8);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    iStack_1c = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
    if ((iStack_1c != 0) &&
       (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar4)) {
      iStack_1c = 0;
    }
    this_ptr = (CGlass *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)&g_CDemonSetPtr->field_0x14d144,g_CGlassClassInfo.name_hash
                         );
    this_ptr_00 = (CTrigger *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                             g_CTriggerClassInfo.name_hash);
    pCStack_30 = this_ptr_00;
    if (iStack_1c != 0) {
      iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c);
      if (iVar4 == 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&uStack_284);
        uStack_284 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
        fStack_18 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
        uStack_27c = 0x3ecccccd;
        fStack_280 = fStack_18;
        fStack_4c = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                    *(float *)&g_CDemonSetPtr->field_0x14d110;
        fStack_48 = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                    *(float *)&g_CDemonSetPtr->field_0x14d114;
        fStack_44 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                    *(float *)&g_CDemonSetPtr->field_0x14d118;
        fStack_118 = fStack_4c;
        afStack_144[(uint)bVar5 * -2 + 0xc] = afStack_90[(uint)bVar5 * -2 + 0x12];
        afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
             afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
        fStack_38 = (float)_DAT_005c1d45 /
                    SQRT(fStack_110 * fStack_110 + fStack_118 * fStack_118 + fStack_114 * fStack_114
                        );
        fStack_70 = fStack_118 * fStack_38;
        fStack_6c = fStack_114 * fStack_38;
        fStack_68 = fStack_110 * fStack_38;
        afStack_1a4[2] = fStack_118 * fStack_38;
        afStack_1a4[(uint)bVar5 * -2 + 3] = afStack_90[(uint)bVar5 * -2 + 9];
        afStack_1a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        if (&fStack_278 != afStack_1a4 + 2) {
          fStack_278 = afStack_1a4[2];
          uStack_274 = afStack_1a4[3];
          uStack_270 = uStack_194;
        }
        core_actor_cpp_FUN_00408bf0(iStack_1c,&g_CDemonSetPtr->field_0x14d138);
        uStack_220 = afStack_144[2];
        afStack_21c[(uint)bVar5 * -2] = afStack_144[(uint)bVar5 * -2 + 3];
        afStack_21c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if (&uStack_268 != &uStack_220) {
          uStack_268 = uStack_220;
          uStack_264 = afStack_21c[0];
          uStack_260 = afStack_21c[1];
        }
        uStack_25c = *(uint *)&param_1[4].field_0xc;
        uStack_254 = 0x65;
        pCStack_250 = param_1;
        uStack_258 = 0x3e19999a;
        uStack_24c = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
        (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,&uStack_284);
        core_gore_cpp_FUN_004ce9c0
                  (g_CGorePtr,(CVector3f *)&g_CDemonSetPtr->field_0x14d138,(CVector3f *)0x0,4,
                   *(EBloodType *)(iStack_1c + 0x27a0));
      }
      break;
    }
    if (this_ptr == (CGlass *)0x0) {
      if (this_ptr_00 == (CTrigger *)0x0) {
        core_fire_cpp_FUN_004a2090
                  (0x01C73654,&g_CDemonSetPtr->field_0x14d138,&g_CDemonSetPtr->field_0x14d128,
                   *(uint *)&g_CDemonSetPtr->field_0x14d134,
                   *(uint *)&g_CDemonSetPtr->field_0x14d144,0);
        fStack_130 = *(float *)&g_CDemonSetPtr->field_0x14d138 - fStack_154;
        fStack_12c = *(float *)&g_CDemonSetPtr->field_0x14d13c - fStack_150;
        fStack_128 = *(float *)&g_CDemonSetPtr->field_0x14d140 - fStack_14c;
        fStack_64 = fStack_130;
        afStack_90[(uint)bVar5 * -2 + 0xc] = afStack_144[(uint)bVar5 * -2 + 6];
        afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
             afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        if (&fStack_a0 != afStack_90 + 0xb) {
          fStack_a0 = fStack_64;
          fStack_9c = fStack_60;
          fStack_98 = fStack_5c;
        }
        if (_DAT_005c1d25 <=
            SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c)) break;
        fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
        uVar1 = *(uint *)&g_CDemonSetPtr->field_0x14d134;
        if (uVar1 < 7) {
          if (uVar1 != 2) {
LAB_004af530:
            fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
            core_sound_cpp_FUN_00560a70
                      (0x02CF5680,param_1,"RIC-DT.WAV",(CVector3f *)auStack_1d8,fStack_18
                      );
            break;
          }
        }
        else {
          if (uVar1 < 8) {
            if ((float)_DAT_005c1d2d <= fStack_18) {
              fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
              core_sound_cpp_FUN_00560a70
                        (0x02CF5680,param_1,"RIC-WD0C.WAV",(CVector3f *)auStack_1d8,
                         fStack_18);
            }
            else {
              fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
              core_sound_cpp_FUN_00560a70
                        (0x02CF5680,param_1,"RIC-WD0B.WAV",(CVector3f *)auStack_1d8,
                         fStack_18);
            }
            break;
          }
          if (uVar1 != 8) goto LAB_004af530;
        }
        if (fStack_18 < (float)_DAT_005c1d35) {
          fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
          core_sound_cpp_FUN_00560a70
                    (0x02CF5680,param_1,"RIC-CT0A.WAV",(CVector3f *)auStack_1d8,fStack_18
                    );
        }
        else if (_DAT_005c1d3d <= (double)fStack_18) {
          fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
          core_sound_cpp_FUN_00560a70
                    (0x02CF5680,param_1,"RIC-CT0C.WAV",(CVector3f *)auStack_1d8,fStack_18
                    );
        }
        else {
          fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0x3dcccccd,0x3e4ccccd);
          core_sound_cpp_FUN_00560a70
                    (0x02CF5680,param_1,"RIC-CT0B.WAV",(CVector3f *)auStack_1d8,fStack_18
                    );
        }
        break;
      }
      core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_00);
      iVar4 = core_trigger_cpp_FUN_0056ede0(this_ptr_00,param_1);
      if (iVar4 != 0) {
        fStack_18 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
        core_trigger_cpp_FUN_0056ee20(this_ptr_00,fStack_18);
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)pCStack_30);
    }
    else {
      iVar4 = core_glass_cpp_FUN_004cc5d0(this_ptr);
      if (iVar4 == 0) break;
      core_glass_cpp_FUN_004cc040(this_ptr,&g_CDemonSetPtr->field_0x14d138);
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  fStack_148 = (float)auStack_1d8;
  afStack_144[(uint)bVar5 * -2] = afStack_1d4[(uint)bVar5 * -2];
  afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_1d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_1e4 = uStack_e8;
  afStack_1e0[(uint)bVar5 * -2] = afStack_fc[(uint)bVar5 * -2 + 6];
  afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  fStack_10c = (float)uStack_1e4;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_dc = uStack_58;
  afStack_fc[(uint)bVar5 * -2 + 9] = afStack_90[(uint)bVar5 * -2 + 0xf];
  afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
       afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  fStack_108 = fStack_d8;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  uStack_c4 = uStack_124;
  afStack_fc[(uint)bVar5 * -2 + 0xf] = afStack_144[(uint)bVar5 * -2 + 9];
  afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
       afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  fStack_104 = fStack_bc + (float)_DAT_005c1d4d;
  core_actor_cpp_FUN_00408b80(param_1,afStack_144 + 0xe);
  position = (CVector3f *)&fStack_148;
  CStack_b8._0_4_ = CStack_214._0_4_;
  *(uint *)((int)&CStack_b8 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_214 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_214 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  afStack_144[0] = afStack_144[0] + _DAT_005c1d55;
  fStack_108 = fStack_108 + _DAT_005c1d55;
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,position);
  iVar4 = 0;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,(CVector3f *)&fStack_148,(CMatrix3x3f *)&param_1->field_0x3c);
  do {
    uStack_40 = core_actor_cpp_FUN_0040ce40(0xc0400000,0x40400000);
    uStack_3c = core_actor_cpp_FUN_0040ce40(0,0x41000000);
    CStack_1fc._0_4_ = core_actor_cpp_FUN_0040ce40(0xc0400000,0x40400000);
    uStack_24 = uStack_3c;
    uStack_2c = uStack_40;
    CStack_1fc._4_4_ = uStack_3c;
    CStack_1fc._8_4_ = uStack_40;
    if (afStack_ac != afStack_204 + 2) {
      afStack_ac[1] = (float)uStack_3c;
      afStack_ac[2] = (float)uStack_40;
      afStack_ac[0] = (float)CStack_1fc._0_4_;
    }
    iVar4 = iVar4 + 1;
    fStack_28 = (float)CStack_1fc._0_4_;
    fStack_18 = (float)CStack_1fc._0_4_;
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,&CStack_b8,(CVector3f *)afStack_ac,0x20000,0x10000,6,0xffff);
  } while (iVar4 < 4);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,param_1,"wp_flintlock.wav",(CVector3f *)auStack_1d8);
  *(uint *)&param_1[2].field_0x50 = 0x3f800000;
  afStack_190[0] = 3.0;
  afStack_190[1] = 3.0;
  afStack_190[2] = -4.0;
  CStack_1f0._0_4_ = core_actor_cpp_FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  fStack_18 = (float)CStack_1f0._0_4_;
  CStack_1f0._4_4_ = core_actor_cpp_FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  CStack_1f0._8_4_ = 0;
  fStack_18 = (float)CStack_1f0._4_4_;
  core_dirmat_cpp_FUN_0045b550(aCStack_248,&CStack_1f0);
  core_dirmat_cpp_FUN_0045b800(aCStack_248,afStack_1a4 + 5);
  puVar8 = &uStack_94;
  uStack_94 = uStack_208;
  afStack_90[(uint)bVar5 * -2] = afStack_204[(uint)bVar5 * -2];
  afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_204[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408b00(param_1,puVar8);
  uStack_16c = afStack_fc[2];
  afStack_180[(uint)bVar5 * -2 + 6] = afStack_fc[(uint)bVar5 * -2 + 3];
  afStack_180[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  return 1;
}
