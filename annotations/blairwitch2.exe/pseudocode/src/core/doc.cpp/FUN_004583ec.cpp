// Name: core_doc.cpp_FUN_004583ec
// Address: 004583ec
// Address Range: [[004583ec, 0045892b]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_004583ec(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_004583ec(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CConsole *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
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
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
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
  float fStack_6c;
  float fStack_68;
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
  byte *puStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  *(uint *)&param_1[2].field_0x4154 = 0;
  fStack_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
  if ((float)_DAT_005d0347 <= fStack_14) {
    if ((*(int *)&param_1->field_0x2620 == 0) && (*(int *)&param_1->field_0x2698 == 0)) {
      puStack_24 = &(param_1->base).field_0x20;
      iStack_20 = 0;
      iStack_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= iStack_1c) break;
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)((int)g_CDemonSetPtr->actors + iStack_20),
                           g_CLadderClassInfo.name_hash);
        iStack_18 = iVar3;
        if ((iVar3 != 0) &&
           (ABS(*(float *)&(param_1->base).field_0x24 - *(float *)(iVar3 + 0x24)) <=
            (float)_DAT_005d0357)) {
          core_actor_cpp_FUN_00408de0(iVar3,puStack_24);
          fStack_6c = fStack_f0;
          (&stack0xffffff98)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff14 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff18 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if ((ABS(fStack_64) <= (float)_DAT_005d035f) && (0.0 <= fStack_64)) {
            (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x24))(iVar3);
            puVar4 = (uint *)&stack0xfffffeb0;
            puVar5 = &stack0xfffffec8;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            if (fStack_12c < fStack_6c) {
              if (fStack_12c + 1.0 < fStack_6c) goto LAB_0045847b;
              fStack_6c = fStack_12c;
            }
            if (fStack_6c < fStack_138) {
              if (fStack_6c < fStack_138 + (float)_DAT_005d0367) goto LAB_0045847b;
              fStack_6c = fStack_138;
            }
            fStack_fc = fStack_138 + fStack_12c;
            fStack_f8 = fStack_134 + fStack_128;
            fStack_f4 = fStack_130 + fStack_124;
            fStack_90 = fStack_138 + fStack_12c;
            *(uint *)((int)&stack0xffffff74 + (uint)bVar6 * -8) =
                 *(uint *)((int)&stack0xffffff08 + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)((int)&stack0xffffff0c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            fStack_54 = fStack_90 * _DAT_005d034f;
            fStack_50 = fStack_8c * _DAT_005d034f;
            fStack_4c = fStack_88 * _DAT_005d034f;
            fStack_48 = fStack_90 * _DAT_005d034f;
            *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8) =
                 *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            fStack_64 = fStack_40;
            core_actor_cpp_FUN_00408d70(iStack_18,&stack0xffffff94);
            fStack_108 = fStack_78;
            (&stack0xfffffefc)[(uint)bVar6 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffff8c + (uint)bVar6 * 0xfffffffe * 4);
            *(uint *)((int)&stack0xffffff00 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if (&stack0xffffff94 != &stack0xfffffef8) {
              fStack_6c = fStack_108;
              fStack_68 = fStack_104;
              fStack_64 = fStack_100;
            }
            fStack_2c = (param_1->base).orient_matrix.m[0].z;
            fStack_34 = (param_1->base).orient_matrix.m[1].z;
            fStack_3c = (param_1->base).orient_matrix.m[2].z;
            fStack_28 = *(float *)(iStack_18 + 0x44);
            fStack_38 = *(float *)(iStack_18 + 0x50);
            fStack_30 = *(float *)(iStack_18 + 0x5c);
            fVar7 = (float10)fcos((float10)_DAT_005d036f);
            if (fVar7 <= ABS((float10)fStack_3c * (float10)fStack_30 +
                             (float10)fStack_2c * (float10)fStack_28 +
                             (float10)fStack_34 * (float10)fStack_38)) {
              core_actor_cpp_FUN_00408de0(param_1,iStack_18 + 0x20);
              uStack_a8 = uStack_b4;
              *(uint *)(&stack0xffffff5c + (uint)bVar6 * -8) =
                   *(uint *)(&stack0xffffff50 + (uint)bVar6 * -8);
              *(uint *)((int)&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                   *(uint *)(&stack0xffffff54 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
              if (0.0 < fStack_a0) {
                *(int *)&param_1[2].field_0x4154 = iStack_18;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->model,0x2c,1);
                pCVar1 = param_1 + 1;
                (pCVar1->base).actor_name[0x14] = '\0';
                (pCVar1->base).actor_name[0x15] = '\0';
                (pCVar1->base).actor_name[0x16] = '\0';
                (pCVar1->base).actor_name[0x17] = '\0';
                uStack_84 = 0;
                uStack_7c = 0x40000000;
                uStack_80 = 0;
                core_actor_cpp_FUN_00408d70(iStack_18,&stack0xffffff7c);
                fStack_60 = fStack_e4;
                *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
                     *(uint *)(&stack0xffffff20 + (uint)bVar6 * -8);
                *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                     *(uint *)(&stack0xffffff24 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
                fStack_d8 = fStack_60 - *(float *)&(param_1->base).field_0x20;
                fStack_d4 = fStack_5c - *(float *)&(param_1->base).field_0x24;
                fStack_d0 = fStack_58 - *(float *)&(param_1->base).field_0x28;
                fStack_cc = fStack_d8;
                (&stack0xffffff38)[(uint)bVar6 * 0xfffffffe] =
                     (float)*(uint *)((int)&stack0xffffff2c + (uint)bVar6 * -8);
                *(uint *)((int)&stack0xffffff3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                     *(uint *)((int)&stack0xffffff30 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
                if ((float *)&param_1[2].field_0x4280 != &stack0xffffff34) {
                  *(float *)&param_1[2].field_0x4280 = fStack_cc;
                  *(float *)&param_1[2].field_0x4284 = fStack_c8;
                  *(uint *)&param_1[2].field_0x4288 = uStack_c4;
                }
                fStack_114 = fStack_6c - *(float *)&(param_1->base).field_0x20;
                fStack_110 = fStack_68 - *(float *)&(param_1->base).field_0x24;
                fStack_10c = fStack_64 - *(float *)&(param_1->base).field_0x28;
                fStack_120 = fStack_114;
                *(uint *)((int)&stack0xfffffee4 + (uint)bVar6 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xfffffef0 + (uint)bVar6 * -8);
                *(uint *)(&stack0xfffffee8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                     *(uint *)((int)&stack0xfffffef4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xfffffee0);
                uStack_c0 = uStack_9c;
                *(uint *)((int)&stack0xffffff44 + (uint)bVar6 * -8) =
                     *(uint *)(&stack0xffffff68 + (uint)bVar6 * -8);
                *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                     *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
                *(uint *)&param_1[2].field_0x428c = uStack_bc;
                pCVar2 = g_CConsolePtr;
                *(uint *)&param_1[2].field_0x4290 = 0x3f800000;
                engine_console_cpp_FUN_00436710(pCVar2,"Climbing ladder %s\n",iStack_18);
                return 1;
              }
            }
          }
        }
LAB_0045847b:
        iStack_1c = iStack_1c + 1;
        iStack_20 = iStack_20 + 4;
      }
    }
  }
  return 0;
}
