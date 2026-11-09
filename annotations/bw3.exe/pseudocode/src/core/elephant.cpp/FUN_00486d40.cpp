// Name: core_elephant.cpp_FUN_00486d40
// Address: 00486d40
// Address Range: [[00486d40, 00487557]]
// Convention: unknown
// Signature: undefined4 core_elephant_cpp_FUN_00486d40(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_elephant_cpp_FUN_00486d40(CDemonActor *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  CGlass *this_ptr;
  CTrigger *this_ptr_00;
  float fVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1130 [994];
  float *pfVar8;
  CDemonActor *pCVar9;
  CDemonSet *this_ptr_01;
  CMatrix3x3f *rotation_matrix;
  uint uStack_184;
  float fStack_180;
  uint uStack_17c;
  float fStack_178;
  float fStack_174;
  uint uStack_170;
  float fStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  CDemonActor *pCStack_150;
  uint uStack_14c;
  float fStack_148;
  float afStack_144 [4];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_118 [3];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float afStack_e8 [3];
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_ac;
  float afStack_a8 [5];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float afStack_6c [4];
  float fStack_5c;
  float fStack_48;
  float fStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  CTrigger *pCStack_30;
  CCrate *pCStack_2c;
  CFlameCan *pCStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0xe0))(param_1);
  pfVar8 = afStack_144 + 0x17;
  afStack_e8[0] = (float)uStack_b8;
  afStack_144[(uint)bVar5 * -2 + 0x18] = afStack_144[(uint)bVar5 * -2 + 0x24];
  afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
       afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
  core_actor_cpp_FUN_00408b80(param_1,pfVar8);
  fStack_ac = fStack_88;
  afStack_a8[(uint)bVar5 * -2] = afStack_84[(uint)bVar5 * -2];
  pCVar9 = param_1;
  afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  iVar2 = core_weapon_cpp_FUN_0057b880(pCVar9);
  if (iVar2 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"shotgun-noammo.wav",(CVector3f *)&fStack_ac);
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)&param_1[4].field_0x34 * (float10)_DAT_005bd99c *
                         (float10)_DAT_005bd9a4);
  fStack_40 = (float)(fVar6 * (float10)*(float *)&param_1[2].field_0x38);
  fStack_34 = (float)core_actor_cpp_getRandomInt_FUN_0040cea0(10,0xf);
  iStack_3c = 0;
  if (0 < (int)fStack_34) {
    do {
      fStack_48 = (float)core_actor_cpp_FUN_0040ce40(0,0x40c90fdb);
      fStack_14 = fStack_48;
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0,fStack_40);
      fVar6 = (float10)fcos((float10)fStack_48);
      fVar7 = (float10)fsin((float10)fStack_48);
      fStack_94 = (float)(fVar6 * (float10)fStack_14);
      fStack_90 = (float)(fVar7 * (float10)fStack_14);
      fStack_8c = *(float *)&param_1[2].field_0x38;
      core_actor_cpp_FUN_00408b00(param_1,afStack_a8 + 5);
      fStack_f4 = fStack_dc;
      afStack_144[(uint)bVar5 * -2 + 0x15] = afStack_144[(uint)bVar5 * -2 + 0x1b];
      afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
           afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
      if (afStack_a8 + 5 != afStack_144 + 0x14) {
        fStack_94 = fStack_f4;
        fStack_90 = fStack_f0;
        fStack_8c = fStack_ec;
      }
      afStack_6c[2] = fStack_ac + fStack_94;
      afStack_6c[3] = afStack_a8[0] + fStack_90;
      fStack_5c = afStack_a8[1] + fStack_8c;
      afStack_a8[2] = fStack_ac + fStack_94;
      afStack_a8[(uint)bVar5 * -2 + 3] = afStack_6c[(uint)bVar5 * -2 + 3];
      afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      fVar1 = afStack_a8[1];
      fVar4 = afStack_a8[0];
      fVar3 = fStack_ac;
      fStack_38 = (float)_DAT_005bd9b4 / *(float *)&param_1[2].field_0x38;
      afStack_84[2] = fStack_94 * fStack_38;
      afStack_84[3] = fStack_90 * fStack_38;
      fStack_74 = fStack_8c * fStack_38;
      fStack_130 = fStack_94 * fStack_38;
      afStack_144[(uint)bVar5 * -2 + 6] = afStack_84[(uint)bVar5 * -2 + 3];
      afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      fStack_d0 = fVar3 - fStack_130;
      fStack_cc = fVar4 - fStack_12c;
      fStack_c8 = fVar1 - fStack_128;
      afStack_118[0] = fVar3 - fStack_130;
      afStack_144[(uint)bVar5 * -2 + 0xc] = afStack_144[(uint)bVar5 * -2 + 0x1e];
      this_ptr_01 = g_CDemonSetPtr;
      afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_01);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
      if (*(CDemonActor **)&param_1[2].field_0x54 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1[2].field_0x54);
      }
      iStack_20 = 0;
      do {
        fVar3 = (float)core_setcolid_cpp_FUN_0053ccc0
                                 (g_CDemonSetPtr,afStack_144 + 0xb,afStack_a8 + 2);
        fStack_14 = fVar3;
        if ((fVar3 < 0.0) || (1.0 < fVar3)) break;
        iStack_18 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                               g_CCharacterClassInfo.name_hash);
        if ((iStack_18 != 0) &&
           (iVar2 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0x10c))(iStack_18), 0 < iVar2)) {
          iStack_18 = 0;
        }
        this_ptr = (CGlass *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                              g_CGlassClassInfo.name_hash);
        this_ptr_00 = (CTrigger *)
                      core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                                 g_CTriggerClassInfo.name_hash);
        pCStack_30 = this_ptr_00;
        pCStack_2c = (CCrate *)
                     core_actor_cpp_castToClassHash_FUN_0040c840
                               (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                                g_CCrateClassInfo.name_hash);
        pCStack_28 = (CFlameCan *)
                     core_actor_cpp_castToClassHash_FUN_0040c840
                               (*(uint *)&g_CDemonSetPtr->field_0x14d144,
                                g_CFlameCanClassInfo.name_hash);
        fVar4 = (float)(**(code **)(*(int *)&param_1->field_0x154 + 0xec))(param_1);
        fStack_14 = fStack_34;
        fStack_24 = ((1.0 - fVar3) * fVar4) / (float)(int)fStack_34;
        if (iStack_18 == 0) {
          if (this_ptr == (CGlass *)0x0) {
            if (this_ptr_00 == (CTrigger *)0x0) {
              if (pCStack_2c == (CCrate *)0x0) {
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
                core_crate_cpp_FUN_004461c0(pCStack_2c);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(this_ptr_00);
              iVar2 = core_trigger_cpp_FUN_0056ede0(this_ptr_00,param_1);
              if (iVar2 != 0) {
                core_trigger_cpp_FUN_0056ee20(this_ptr_00,fStack_24);
              }
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,(CDemonActor *)pCStack_30);
            }
          }
          else {
            iVar2 = core_glass_cpp_FUN_004cc5d0(this_ptr);
            if (iVar2 == 0) break;
            core_glass_cpp_FUN_004cc040(this_ptr,&g_CDemonSetPtr->field_0x14d138);
          }
        }
        else {
          iVar2 = (**(code **)(*(int *)(iStack_18 + 0x154) + 0xe0))(iStack_18);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&uStack_184);
          uStack_184 = *(uint *)&g_CDemonSetPtr->field_0x14d148;
          fStack_180 = fStack_24;
          uStack_17c = 0x3ecccccd;
          afStack_144[2] =
               *(float *)&g_CDemonSetPtr->field_0x14d11c - *(float *)&g_CDemonSetPtr->field_0x14d110
          ;
          afStack_144[3] =
               *(float *)&g_CDemonSetPtr->field_0x14d120 - *(float *)&g_CDemonSetPtr->field_0x14d114
          ;
          fStack_134 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                       *(float *)&g_CDemonSetPtr->field_0x14d118;
          fStack_100 = afStack_144[2];
          afStack_144[(uint)bVar5 * -2 + 0x12] = afStack_144[(uint)bVar5 * -2 + 3];
          afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
               afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          fStack_1c = (float)_DAT_005bd9bc /
                      SQRT(fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc);
          fStack_10c = fStack_100 * fStack_1c;
          fStack_108 = fStack_fc * fStack_1c;
          fStack_104 = fStack_f8 * fStack_1c;
          fStack_148 = fStack_100 * fStack_1c;
          afStack_144[(uint)bVar5 * -2] = afStack_144[(uint)bVar5 * -2 + 0xf];
          afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
          if (&fStack_178 != &fStack_148) {
            fStack_178 = fStack_148;
            fStack_174 = afStack_144[0];
            uStack_170 = afStack_144[1];
          }
          core_actor_cpp_FUN_00408bf0(iStack_18,&g_CDemonSetPtr->field_0x14d138);
          fStack_c4 = fStack_124;
          afStack_144[(uint)bVar5 * -2 + 0x21] = afStack_144[(uint)bVar5 * -2 + 9];
          afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
               afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          if (&fStack_168 != afStack_144 + 0x20) {
            fStack_168 = fStack_c4;
            uStack_164 = uStack_c0;
            uStack_160 = uStack_bc;
          }
          uStack_15c = *(uint *)&param_1[4].field_0xc;
          uStack_154 = 0x6b;
          uStack_158 = 0x3f800000;
          pCStack_150 = param_1;
          uStack_14c = (**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
          (**(code **)(*(int *)(iStack_18 + 0x154) + 0x108))(iStack_18,&uStack_184);
          if (*(int *)&param_1[2].field_0x34 == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                    (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
        }
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < 4);
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < (int)fStack_34);
  }
  rotation_matrix = (CMatrix3x3f *)&param_1->field_0x3c;
  fStack_70 = fStack_ac;
  afStack_6c[(uint)bVar5 * -2] = afStack_a8[(uint)bVar5 * -2];
  afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  afStack_6c[0] = afStack_6c[0] + _DAT_005bd9ac;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
            (0x01C73654,(CVector3f *)&fStack_70,rotation_matrix);
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,param_1,"elephantgun.wav",(CVector3f *)&fStack_ac);
  *(uint *)&param_1[2].field_0x50 = 0x3f800000;
  return 1;
}
