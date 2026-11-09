// Name: core_burncrss.cpp_FUN_00424550
// Address: 00424550
// Address Range: [[00424550, 00424e22]]
// Convention: unknown
// Signature: undefined4 core_burncrss_cpp_FUN_00424550(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_burncrss_cpp_FUN_00424550(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CGlass *this_ptr;
  CTrigger *this_ptr_00;
  uint uVar6;
  byte bVar7;
  float afStackY_112c [994];
  float *pfVar8;
  CDemonActor *pCVar9;
  CDemonSet *this_ptr_01;
  uint uStack_180;
  float fStack_17c;
  uint uStack_178;
  float fStack_174;
  uint uStack_170;
  uint uStack_16c;
  float fStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  CDemonActor *pCStack_14c;
  uint uStack_148;
  float fStack_144;
  float afStack_140 [5];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [5];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [5];
  uint uStack_e4;
  float afStack_e0 [4];
  uint uStack_d0;
  float fStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float afStack_b4 [3];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [3];
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  CTrigger *pCStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar7 = 0;
  *(uint *)&param_1[4].field_0x3c = 1;
  if (0.0 < *(float *)&param_1[4].field_0x34) {
    return 1;
  }
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar8 = afStack_c8 + 5;
  afStack_b4[0] = (float)uStack_e4;
  afStack_c8[(uint)bVar7 * -2 + 6] = afStack_e0[(uint)bVar7 * -2];
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_actor_cpp_FUN_00408b80(param_1,pfVar8);
  fStack_cc = afStack_11c[2];
  afStack_c8[(uint)bVar7 * -2] = afStack_11c[(uint)bVar7 * -2 + 3];
  pCVar9 = param_1;
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  iVar4 = core_weapon_cpp_FUN_0057b880(pCVar9);
  if (iVar4 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"wp_nomana.wav",(CVector3f *)&fStack_cc);
    *(uint *)&param_1[4].field_0x3c = 0;
    *(uint *)&param_1[2].field_0x50 = 0x3f800000;
    return 0;
  }
  iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[4].field_0x44);
  if (iVar4 == 0) {
    uVar6 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                      (0x02CF5680,param_1,"wp_burningcross.wav",(CVector3f *)&fStack_cc);
    *(uint *)&param_1[4].field_0x44 = uVar6;
  }
  *(uint *)&param_1[4].field_0x34 = 0x3e800000;
  afStack_f8[4] = *(float *)&param_1[2].field_0x38;
  afStack_f8[2] = 0.0;
  afStack_f8[3] = 0.0;
  core_actor_cpp_FUN_00408b00(param_1,afStack_f8 + 2);
  fVar3 = afStack_c8[1];
  fVar2 = afStack_c8[0];
  fVar1 = fStack_cc;
  fStack_a8 = fStack_144;
  afStack_c8[(uint)bVar7 * -2 + 9] = afStack_140[(uint)bVar7 * -2];
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_fc = fVar1 + fStack_a8;
  afStack_f8[0] = fVar2 + fStack_a4;
  afStack_f8[1] = fVar3 + fStack_a0;
  fStack_48 = fVar1 + fStack_a8;
  afStack_44[(uint)bVar7 * -2] = afStack_f8[(uint)bVar7 * -2];
  afStack_44[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fVar1 = fStack_cc;
  fStack_34 = (float)_DAT_005b7926 / *(float *)&param_1[2].field_0x38;
  fStack_9c = fStack_a8 * fStack_34;
  fStack_98 = fStack_a4 * fStack_34;
  fStack_94 = fStack_a0 * fStack_34;
  fStack_60 = fStack_a8 * fStack_34;
  afStack_c8[(uint)bVar7 * -2 + 0x1b] = afStack_c8[(uint)bVar7 * -2 + 0xc];
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c] =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  fStack_120 = fVar1 - fStack_60;
  afStack_11c[0] = afStack_c8[0] - fStack_5c;
  afStack_11c[1] = afStack_c8[1] - fStack_58;
  afStack_140[2] = fVar1 - fStack_60;
  afStack_140[(uint)bVar7 * -2 + 3] = afStack_11c[(uint)bVar7 * -2];
  this_ptr_01 = g_CDemonSetPtr;
  afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_01);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
  core_setcolid_cpp_FUN_0053ebd0(g_CDemonSetPtr);
  if (*(CDemonActor **)&param_1[2].field_0x54 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
              (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x54);
  }
  iVar4 = 0;
  do {
    fStack_18 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_140 + 2,&fStack_48);
    if ((fStack_18 < 0.0) || (1.0 < fStack_18)) break;
    iStack_1c = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                           g_CCharacterClassInfo.name_hash);
    if ((iStack_1c != 0) &&
       (iVar5 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar5)) {
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
    pCStack_2c = this_ptr_00;
    if (iStack_1c != 0) {
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)&param_1[2].field_0x54,g_CEnemyClassInfo.name_hash);
      if ((iVar4 != 0) ||
         (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c), iVar4 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&uStack_180);
        uStack_180 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
        fStack_18 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
        uStack_178 = 0x3ecccccd;
        fStack_17c = fStack_18;
        fStack_78 = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                    *(float *)&g_CDemonSetPtr->field_0x14d110;
        fStack_74 = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                    *(float *)&g_CDemonSetPtr->field_0x14d114;
        fStack_70 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                    *(float *)&g_CDemonSetPtr->field_0x14d118;
        afStack_c8[2] = fStack_78;
        afStack_c8[(uint)bVar7 * -2 + 3] = afStack_c8[(uint)bVar7 * -2 + 0x15];
        afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
        fStack_30 = (float)_DAT_005b792e /
                    SQRT(fStack_b8 * fStack_b8 +
                         afStack_c8[2] * afStack_c8[2] + afStack_c8[3] * afStack_c8[3]);
        fStack_90 = afStack_c8[2] * fStack_30;
        fStack_8c = afStack_c8[3] * fStack_30;
        fStack_88 = fStack_b8 * fStack_30;
        fStack_6c = afStack_c8[2] * fStack_30;
        afStack_c8[(uint)bVar7 * -2 + 0x18] = afStack_c8[(uint)bVar7 * -2 + 0xf];
        afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
             afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
        if (&fStack_174 != afStack_c8 + 0x17) {
          fStack_174 = fStack_6c;
          uStack_170 = uStack_68;
          uStack_16c = uStack_64;
        }
        core_actor_cpp_FUN_00408bf0(iStack_1c,&g_CDemonSetPtr->field_0x14d138);
        afStack_e0[2] = fStack_84;
        afStack_e0[(uint)bVar7 * -2 + 3] = afStack_c8[(uint)bVar7 * -2 + 0x12];
        afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        if (&fStack_164 != afStack_e0 + 2) {
          fStack_164 = afStack_e0[2];
          uStack_160 = afStack_e0[3];
          uStack_15c = uStack_d0;
        }
        uStack_158 = *(uint *)&param_1[4].field_0xc;
        uStack_154 = 0x3e19999a;
        uStack_150 = 0x66;
        pCStack_14c = param_1;
        uStack_148 = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
        (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,&uStack_180);
        if (&CStack_108 != (CVector3f *)&g_CDemonSetPtr->field_0x14d138) {
          CStack_108._0_4_ = *(uint *)&g_CDemonSetPtr->field_0x14d138;
          CStack_108._4_4_ = *(uint *)&g_CDemonSetPtr->field_0x14d13c;
          CStack_108._8_4_ = *(uint *)&g_CDemonSetPtr->field_0x14d140;
        }
        iVar4 = 0;
        do {
          afStack_44[2] = (float)core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
          afStack_44[3] = (float)core_actor_cpp_FUN_0040ce40(0,0x41200000);
          afStack_54[0] = (float)core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
          uStack_24 = afStack_44[3];
          uStack_28 = afStack_44[2];
          afStack_54[1] = afStack_44[3];
          afStack_54[2] = afStack_44[2];
          if (&CStack_12c != (CVector3f *)(afStack_c8 + 0x1d)) {
            CStack_12c._4_4_ = afStack_44[3];
            CStack_12c._8_4_ = afStack_44[2];
            CStack_12c._0_4_ = afStack_54[0];
          }
          iVar4 = iVar4 + 1;
          fStack_20 = afStack_54[0];
          fStack_18 = afStack_54[0];
          core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                    (0x01C73654,&CStack_108,&CStack_12c,0x20000,0x10000,4,0xffff);
        } while (iVar4 < 0x10);
        if (*(int *)(iStack_1c + 0x27c0) != 0) {
          core_charactr_cpp_FUN_0042fbd0(iStack_1c,&fStack_164,0,0,0x3f800000,1,0x40000000);
        }
      }
      break;
    }
    if (this_ptr == (CGlass *)0x0) {
      if (this_ptr_00 == (CTrigger *)0x0) {
        core_fire_cpp_FUN_004a2090
                  (0x01C73654,&g_CDemonSetPtr->field_0x14d138,&g_CDemonSetPtr->field_0x14d128,
                   *(uint *)&g_CDemonSetPtr->field_0x14d134,
                   *(uint *)&g_CDemonSetPtr->field_0x14d144,1);
        core_fire_cpp_FUN_004a3af0
                  (0x01C73654,&g_CDemonSetPtr->field_0x14d138,&g_CDemonSetPtr->field_0x14d128,3,0,
                   0);
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,param_1,"wp_burningcross_scorch.wav",
                   (CVector3f *)&g_CDemonSetPtr->field_0x14d138);
        break;
      }
      core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_00);
      iVar5 = core_trigger_cpp_FUN_0056ede0(this_ptr_00,param_1);
      if (iVar5 != 0) {
        fStack_18 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
        core_trigger_cpp_FUN_0056ee20(this_ptr_00,fStack_18);
      }
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)pCStack_2c);
    }
    else {
      iVar5 = core_glass_cpp_FUN_004cc5d0(this_ptr);
      if (iVar5 == 0) break;
      core_glass_cpp_FUN_004cc040(this_ptr,&g_CDemonSetPtr->field_0x14d138);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  return 1;
}
