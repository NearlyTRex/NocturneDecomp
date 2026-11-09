// Name: core_doc.cpp_FUN_0047081c
// Address: 0047081c
// Address Range: [[0047081c, 00470d5b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0047081c(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_0047081c(int param_1)

{
  CConsole *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
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
  uint auStack_c8 [5];
  uint uStack_b4;
  uint uStack_a8;
  float fStack_a0;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
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
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  *(uint *)(param_1 + 0x1ff84) = 0;
  fStack_14 = (float)core_charactr_cpp_FUN_00434590(param_1,0);
  if ((float)_DAT_005da134 <= fStack_14) {
    if ((*(int *)(param_1 + 0x25b0) == 0) && (*(int *)(param_1 + 0x2628) == 0)) {
      iStack_24 = param_1 + 0x20;
      iStack_20 = 0;
      iStack_1c = 0;
      while( true ) {
        if (*(int *)&g_CDemonSetPtr->field_0x14d164 <= iStack_1c) break;
        iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iStack_20),
                           g_CLadderClassInfo.name_hash);
        iStack_18 = iVar2;
        if ((iVar2 != 0) &&
           (ABS(*(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24)) <= (float)_DAT_005da144)) {
          core_actor_cpp_FUN_00408bb0(iVar2,iStack_24);
          afStack_74[2] = fStack_f0;
          afStack_74[(uint)bVar5 * 0xfffffffe + 3] =
               (float)*(uint *)(&stack0xffffff14 + (uint)bVar5 * -8);
          afStack_74[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4] =
               (float)*(uint *)(&stack0xffffff18 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if ((ABS(fStack_64) <= (float)_DAT_005da14c) && (0.0 <= fStack_64)) {
            (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
            puVar3 = (uint *)&stack0xfffffeb0;
            puVar4 = &stack0xfffffec8;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
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
            auStack_c8[(uint)bVar5 * 0xfffffffe + 0xf] =
                 *(uint *)((int)&stack0xffffff08 + (uint)bVar5 * -8);
            auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x10] =
                 *(uint *)((int)&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            fStack_54 = fStack_90 * _DAT_005da13c;
            fStack_50 = fStack_8c * _DAT_005da13c;
            fStack_4c = fStack_88 * _DAT_005da13c;
            fStack_48 = fStack_90 * _DAT_005da13c;
            afStack_74[(uint)bVar5 * 0xfffffffe + 0xc] = afStack_74[(uint)bVar5 * 0xfffffffe + 9];
            afStack_74[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
                 afStack_74[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 10];
            fStack_64 = fStack_40;
            core_actor_cpp_FUN_00408b40(iStack_18,afStack_74 + 2);
            fStack_108 = fStack_78;
            (&stack0xfffffefc)[(uint)bVar5 * 0xfffffffe] = afStack_74[(uint)bVar5 * 0xfffffffe];
            *(float *)((int)&stack0xffffff00 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 afStack_74[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
            if (afStack_74 + 2 != &stack0xfffffef8) {
              afStack_74[2] = fStack_108;
              afStack_74[3] = fStack_104;
              fStack_64 = fStack_100;
            }
            fStack_2c = *(float *)(param_1 + 0x44);
            fStack_34 = *(float *)(param_1 + 0x50);
            fStack_3c = *(float *)(param_1 + 0x5c);
            fStack_28 = *(float *)(iStack_18 + 0x44);
            fStack_38 = *(float *)(iStack_18 + 0x50);
            fStack_30 = *(float *)(iStack_18 + 0x5c);
            fVar6 = (float10)fcos((float10)_DAT_005da15c);
            if (fVar6 <= ABS((float10)fStack_3c * (float10)fStack_30 +
                             (float10)fStack_2c * (float10)fStack_28 +
                             (float10)fStack_34 * (float10)fStack_38)) {
              core_actor_cpp_FUN_00408bb0(param_1,iStack_18 + 0x20);
              uStack_a8 = uStack_b4;
              auStack_c8[(uint)bVar5 * 0xfffffffe + 9] = auStack_c8[(uint)bVar5 * 0xfffffffe + 6];
              auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 10] =
                   auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 7];
              if (0.0 < fStack_a0) {
                *(int *)(param_1 + 0x1ff84) = iStack_18;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)(param_1 + 0x158),0x2f,1);
                *(uint *)(param_1 + 0xc1e4) = 0;
                uStack_84 = 0;
                uStack_7c = 0x40000000;
                uStack_80 = 0;
                core_actor_cpp_FUN_00408b40(iStack_18,auStack_c8 + 0x11);
                fStack_60 = fStack_e4;
                afStack_74[(uint)bVar5 * 0xfffffffe + 6] =
                     (float)*(uint *)(&stack0xffffff20 + (uint)bVar5 * -8);
                afStack_74[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 7] =
                     (float)*(uint *)(&stack0xffffff24 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                fStack_d8 = fStack_60 - *(float *)(param_1 + 0x20);
                fStack_d4 = fStack_5c - *(float *)(param_1 + 0x24);
                fStack_d0 = fStack_58 - *(float *)(param_1 + 0x28);
                fStack_cc = fStack_d8;
                *(uint *)((int)auStack_c8 + (uint)bVar5 * -8) =
                     *(uint *)((int)&stack0xffffff2c + (uint)bVar5 * -8);
                auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
                     *(uint *)((int)&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                if ((float *)(param_1 + 0x200ac) != &fStack_cc) {
                  *(float *)(param_1 + 0x200ac) = fStack_cc;
                  *(uint *)(param_1 + 0x200b0) = auStack_c8[0];
                  *(uint *)(param_1 + 0x200b4) = auStack_c8[1];
                }
                fStack_114 = afStack_74[2] - *(float *)(param_1 + 0x20);
                fStack_110 = afStack_74[3] - *(float *)(param_1 + 0x24);
                fStack_10c = fStack_64 - *(float *)(param_1 + 0x28);
                fStack_120 = fStack_114;
                *(uint *)((int)&stack0xfffffee4 + (uint)bVar5 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xfffffef0 + (uint)bVar5 * -8);
                *(uint *)(&stack0xfffffee8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)((int)&stack0xfffffef4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                core_vecdir_cpp_FUN_005a7520(&stack0xfffffee0);
                auStack_c8[2] = uStack_9c;
                auStack_c8[(uint)bVar5 * 0xfffffffe + 3] =
                     auStack_c8[(uint)bVar5 * 0xfffffffe + 0xc];
                auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4] =
                     auStack_c8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd];
                *(uint *)(param_1 + 0x200b8) = auStack_c8[3];
                pCVar1 = g_CConsolePtr;
                *(uint *)(param_1 + 0x200bc) = 0x3f800000;
                engine_console_cpp_FUN_00445430(pCVar1,"Climbing ladder %s\n",iStack_18);
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
