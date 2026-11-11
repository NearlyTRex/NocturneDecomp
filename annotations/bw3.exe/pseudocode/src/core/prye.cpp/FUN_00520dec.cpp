// Name: core_prye.cpp_FUN_00520dec
// Address: 00520dec
// Address Range: [[00520dec, 0052132b]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_00520dec(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_prye_cpp_FUN_00520dec(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CConsole *pCVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_1108 [1001];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int iStack_c8;
  float afStack_c4 [2];
  int iStack_bc;
  uint uStack_b4;
  uint uStack_a8;
  float afStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float afStack_74 [4];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CLocation *pCStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  param_1[2].flames[0x15].base.orient_matrix.m[0].x = 0.0;
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
  if ((float)_DAT_005cd517 <= fStack_14) {
    if ((param_1->carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      pCStack_24 = &(param_1->base).location;
      iStack_20 = 0;
      iStack_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
        fVar3 = (float)core_actor_cpp_castToClassHash_FUN_0040c840
                                 (*(uint *)((int)g_CDemonSetPtr->actors + iStack_20),
                                  g_CLadderClassInfo.name_hash);
        fStack_18 = fVar3;
        if ((fVar3 != 0.0) &&
           (ABS((param_1->base).location.position.y - *(float *)((int)fVar3 + 0x24)) <=
            (float)_DAT_005cd527)) {
          core_actor_cpp_FUN_00408bf0(fVar3,pCStack_24);
          afStack_74[2] = fStack_f0;
          afStack_74[(uint)bVar8 * -2 + 3] = *(float *)(&stack0xffffff14 + (uint)bVar8 * -8);
          afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               *(float *)(&stack0xffffff18 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if ((ABS(fStack_64) <= (float)_DAT_005cd52f) && (0.0 <= fStack_64)) {
            (**(code **)(*(int *)((int)fVar3 + 0x154) + 0x1c))(fVar3);
            puVar6 = (uint *)&stack0xfffffeb0;
            puVar7 = &stack0xfffffec8;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            if (fStack_12c < afStack_74[2]) {
              if (fStack_12c + 1.0 < afStack_74[2]) goto LAB_00520e7b;
              afStack_74[2] = fStack_12c;
            }
            if (afStack_74[2] < fStack_138) {
              if (afStack_74[2] < fStack_138 + (float)_DAT_005cd537) goto LAB_00520e7b;
              afStack_74[2] = fStack_138;
            }
            fStack_fc = fStack_138 + fStack_12c;
            fStack_f8 = fStack_134 + fStack_128;
            fStack_f4 = fStack_130 + fStack_124;
            fStack_90 = fStack_138 + fStack_12c;
            afStack_a0[(uint)bVar8 * -2 + 5] = *(float *)((int)&stack0xffffff08 + (uint)bVar8 * -8);
            afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6] =
                 *(float *)((int)&stack0xffffff0c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            fStack_54 = fStack_90 * _DAT_005cd51f;
            fStack_50 = fStack_8c * _DAT_005cd51f;
            fStack_4c = fStack_88 * _DAT_005cd51f;
            fStack_48 = fStack_90 * _DAT_005cd51f;
            afStack_74[(uint)bVar8 * -2 + 0xc] = afStack_74[(uint)bVar8 * -2 + 9];
            afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
                 afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
            fStack_64 = fStack_40;
            core_actor_cpp_FUN_00408b80(fStack_18,afStack_74 + 2);
            fStack_108 = afStack_84[3];
            (&stack0xfffffefc)[(uint)bVar8 * 0xfffffffe] = afStack_74[(uint)bVar8 * -2];
            *(float *)((int)&stack0xffffff00 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if (afStack_74 + 2 != &stack0xfffffef8) {
              afStack_74[2] = fStack_108;
              afStack_74[3] = fStack_104;
              fStack_64 = fStack_100;
            }
            fStack_2c = (param_1->base).orient_matrix.m[0].z;
            fStack_34 = (param_1->base).orient_matrix.m[1].z;
            fStack_3c = (param_1->base).orient_matrix.m[2].z;
            fStack_28 = *(float *)((int)fStack_18 + 0x44);
            fStack_38 = *(float *)((int)fStack_18 + 0x50);
            fStack_30 = *(float *)((int)fStack_18 + 0x5c);
            fVar9 = (float10)fcos((float10)_DAT_005cd53f);
            if (fVar9 <= ABS((float10)fStack_3c * (float10)fStack_30 +
                             (float10)fStack_2c * (float10)fStack_28 +
                             (float10)fStack_34 * (float10)fStack_38)) {
              core_actor_cpp_FUN_00408bf0(param_1,(int)fStack_18 + 0x20);
              uStack_a8 = uStack_b4;
              afStack_c4[(uint)bVar8 * -2 + 8] = afStack_c4[(uint)bVar8 * -2 + 5];
              afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
                   afStack_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6];
              if (0.0 < afStack_a0[0]) {
                param_1[2].flames[0x15].base.orient_matrix.m[0].x = fStack_18;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(param_1->model).base,0x37,1);
                pCVar1 = param_1 + 1;
                (pCVar1->base).actor_name[0x14] = '\0';
                (pCVar1->base).actor_name[0x15] = '\0';
                (pCVar1->base).actor_name[0x16] = '\0';
                (pCVar1->base).actor_name[0x17] = '\0';
                afStack_84[0] = 0.0;
                afStack_84[2] = 2.0;
                afStack_84[1] = 0.0;
                core_actor_cpp_FUN_00408b80(fStack_18,afStack_a0 + 7);
                pfVar5 = &param_1[2].flames[0x15].animation_time;
                fStack_60 = fStack_e4;
                afStack_74[(uint)bVar8 * -2 + 6] = afStack_c4[(uint)bVar8 * -2 + -7];
                afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                     *(float *)(&stack0xffffff24 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
                fStack_d8 = fStack_60 - (param_1->base).location.position.x;
                fStack_d4 = fStack_5c - (param_1->base).location.position.y;
                fStack_d0 = fStack_58 - (param_1->base).location.position.z;
                fStack_cc = fStack_d8;
                afStack_c4[(uint)bVar8 * -2 + -1] =
                     *(float *)((int)&stack0xffffff2c + (uint)bVar8 * -8);
                afStack_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
                     *(float *)((int)&stack0xffffff30 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
                if (pfVar5 != &stack0xffffff34) {
                  *pfVar5 = fStack_cc;
                  param_1[2].flames[0x15].globe.position_scaled.x = iStack_c8;
                  param_1[2].flames[0x15].globe.position_scaled.y = (int)afStack_c4[0];
                }
                fStack_114 = afStack_74[2] - (param_1->base).location.position.x;
                fStack_110 = afStack_74[3] - (param_1->base).location.position.y;
                fStack_10c = fStack_64 - (param_1->base).location.position.z;
                fStack_120 = fStack_114;
                *(uint *)((int)&stack0xfffffee4 + (uint)bVar8 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xfffffef0 + (uint)bVar8 * -8);
                *(uint *)(&stack0xfffffee8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                     *(uint *)((int)&stack0xfffffef4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xfffffee0);
                afStack_c4[1] = afStack_a0[1];
                afStack_c4[(uint)bVar8 * -2 + 2] = afStack_a0[(uint)bVar8 * -2 + 2];
                afStack_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
                     afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
                param_1[2].flames[0x15].globe.position_scaled.z = iStack_bc;
                pCVar2 = g_CConsolePtr;
                param_1[2].flames[0x15].globe.linear_radius_scaled = 0x3f800000;
                engine_console_cpp_FUN_00441ff0(pCVar2,"Climbing ladder %s\n",fStack_18);
                return 1;
              }
            }
          }
        }
LAB_00520e7b:
        iStack_1c = iStack_1c + 1;
        iStack_20 = iStack_20 + 4;
      }
    }
  }
  return 0;
}
