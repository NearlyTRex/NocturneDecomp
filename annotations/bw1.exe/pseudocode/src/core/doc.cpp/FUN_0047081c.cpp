// Name: core_doc.cpp_FUN_0047081c
// Address: 0047081c
// Address Range: [[0047081c, 00470d5b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0047081c(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_0047081c(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CConsole *pCVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
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
  float fStack_c8;
  int iStack_c4;
  uint uStack_c0;
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
  param_1[2].flames[0x1a].flame_size.z = 0.0;
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,0);
  if ((float)_DAT_005da134 <= fStack_14) {
    if ((param_1->carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      pCStack_24 = &(param_1->base).location;
      iStack_20 = 0;
      iStack_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
        fVar3 = (float)core_actor_cpp_castToClassHash_FUN_0040c600
                                 (*(uint *)((int)g_CDemonSetPtr->actors + iStack_20),
                                  g_CLadderClassInfo.name_hash);
        fStack_18 = fVar3;
        if ((fVar3 != 0.0) &&
           (ABS((param_1->base).location.position.y - *(float *)((int)fVar3 + 0x24)) <=
            (float)_DAT_005da144)) {
          core_actor_cpp_FUN_00408bb0(fVar3,pCStack_24);
          afStack_74[2] = fStack_f0;
          afStack_74[(uint)bVar8 * -2 + 3] = *(float *)(&stack0xffffff14 + (uint)bVar8 * -8);
          afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               *(float *)(&stack0xffffff18 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if ((ABS(fStack_64) <= (float)_DAT_005da14c) && (0.0 <= fStack_64)) {
            (**(code **)(*(int *)((int)fVar3 + 0x154) + 0x1c))(fVar3);
            puVar6 = (uint *)&stack0xfffffeb0;
            puVar7 = &stack0xfffffec8;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            if (fStack_12c < afStack_74[2]) {
              if (fStack_12c + 1.0 < afStack_74[2]) goto LAB_004708ab;
              afStack_74[2] = fStack_12c;
            }
            if (afStack_74[2] < fStack_138) {
              if (afStack_74[2] < fStack_138 + (float)_DAT_005da154) goto LAB_004708ab;
              afStack_74[2] = fStack_138;
            }
            fStack_fc = fStack_138 + fStack_12c;
            fStack_f8 = fStack_134 + fStack_128;
            fStack_f4 = fStack_130 + fStack_124;
            fStack_90 = fStack_138 + fStack_12c;
            afStack_a0[(uint)bVar8 * -2 + 5] = *(float *)((int)&stack0xffffff08 + (uint)bVar8 * -8);
            afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6] =
                 *(float *)((int)&stack0xffffff0c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            fStack_54 = fStack_90 * _DAT_005da13c;
            fStack_50 = fStack_8c * _DAT_005da13c;
            fStack_4c = fStack_88 * _DAT_005da13c;
            fStack_48 = fStack_90 * _DAT_005da13c;
            afStack_74[(uint)bVar8 * -2 + 0xc] = afStack_74[(uint)bVar8 * -2 + 9];
            afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
                 afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
            fStack_64 = fStack_40;
            core_actor_cpp_FUN_00408b40(fStack_18,afStack_74 + 2);
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
            fVar9 = (float10)fcos((float10)_DAT_005da15c);
            if (fVar9 <= ABS((float10)fStack_3c * (float10)fStack_30 +
                             (float10)fStack_2c * (float10)fStack_28 +
                             (float10)fStack_34 * (float10)fStack_38)) {
              core_actor_cpp_FUN_00408bb0(param_1,(int)fStack_18 + 0x20);
              uStack_a8 = uStack_b4;
              (&stack0xffffff38)[(uint)bVar8 * -2 + 9] = (&stack0xffffff38)[(uint)bVar8 * -2 + 6];
              afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
                   (&stack0xffffff38)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
              if (0.0 < afStack_a0[0]) {
                param_1[2].flames[0x1a].flame_size.z = fStack_18;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(param_1->model).base,0x2f,1);
                pCVar1 = param_1 + 1;
                (pCVar1->base).actor_name[0x14] = '\0';
                (pCVar1->base).actor_name[0x15] = '\0';
                (pCVar1->base).actor_name[0x16] = '\0';
                (pCVar1->base).actor_name[0x17] = '\0';
                afStack_84[0] = 0.0;
                afStack_84[2] = 2.0;
                afStack_84[1] = 0.0;
                core_actor_cpp_FUN_00408b40(fStack_18,afStack_a0 + 7);
                piVar5 = &param_1[2].flames[0x1a].burn_hero;
                fStack_60 = fStack_e4;
                afStack_74[(uint)bVar8 * -2 + 6] = *(float *)(&stack0xffffff20 + (uint)bVar8 * -8);
                afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                     *(float *)(&stack0xffffff24 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
                fStack_d8 = fStack_60 - (param_1->base).location.position.x;
                fStack_d4 = fStack_5c - (param_1->base).location.position.y;
                fStack_d0 = fStack_58 - (param_1->base).location.position.z;
                fStack_cc = fStack_d8;
                (&stack0xffffff38)[(uint)bVar8 * 0xfffffffe] =
                     (float)*(uint *)((int)&stack0xffffff2c + (uint)bVar8 * -8);
                (&stack0xffffff38)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                     (float)*(uint *)
                             ((int)&stack0xffffff30 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
                if ((float *)piVar5 != &stack0xffffff34) {
                  *piVar5 = (int)fStack_cc;
                  param_1[2].flames[0x1a].burn_enemy = (int)fStack_c8;
                  param_1[2].flames[0x1a].is_visible = iStack_c4;
                }
                fStack_114 = afStack_74[2] - (param_1->base).location.position.x;
                fStack_110 = afStack_74[3] - (param_1->base).location.position.y;
                fStack_10c = fStack_64 - (param_1->base).location.position.z;
                fStack_120 = fStack_114;
                *(uint *)((int)&stack0xfffffee4 + (uint)bVar8 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xfffffef0 + (uint)bVar8 * -8);
                *(uint *)(&stack0xfffffee8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                     *(uint *)((int)&stack0xfffffef4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xfffffee0);
                uStack_c0 = afStack_a0[1];
                (&stack0xffffff38)[(uint)bVar8 * -2 + 3] = afStack_a0[(uint)bVar8 * -2 + 2];
                (&stack0xffffff38)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                     afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
                param_1[2].flames[0x1a].texture_flip = iStack_bc;
                pCVar2 = g_CConsolePtr;
                param_1[2].flames[0x1a].do_visibility_check = 0x3f800000;
                engine_console_cpp_FUN_00445430(pCVar2,"Climbing ladder %s\n",fStack_18);
                return 1;
              }
            }
          }
        }
LAB_004708ab:
        iStack_1c = iStack_1c + 1;
        iStack_20 = iStack_20 + 4;
      }
    }
  }
  return 0;
}
