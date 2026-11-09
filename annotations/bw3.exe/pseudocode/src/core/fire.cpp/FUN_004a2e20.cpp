// Name: core_fire.cpp_FUN_004a2e20
// Address: 004a2e20
// Address Range: [[004a2e20, 004a36df]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a2e20(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a2e20(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,uint param_13,uint param_14,uint param_15,uint param_16,uint param_17,uint param_18,uint param_19,uint param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_1148 [987];
  uint uStack_1a4;
  CDemonSet *this_ptr;
  float local_168;
  float local_15c;
  float local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_124;
  uint local_120;
  uint local_11c;
  CVector3f local_118;
  uint local_10c;
  float afStack_108 [4];
  float local_f8;
  byte local_f4 [4];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4 [4];
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  byte local_c4 [8];
  float local_bc [6];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88 [3];
  uint local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_30;
  int local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  CDemonActor *local_18;
  float local_14;
  
  bVar7 = 0;
  if (param_25 < 3) {
    local_30 = param_25 + 1;
    while( true ) {
      core_setcolid_cpp_FUN_0053ecd0(g_CDemonSetPtr,param_6,param_7,param_8,param_9);
      local_e8 = *param_2;
      local_e4[(uint)bVar7 * -2] = param_2[(uint)bVar7 * -2 + 1];
      local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           (param_2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      afStack_108[2] = local_e8 + *param_3;
      afStack_108[3] = local_e4[0] + param_3[1];
      local_f8 = local_e4[1] + param_3[2];
      local_c4._0_4_ = local_e8 + *param_3;
      *(float *)((int)local_c4 + (uint)bVar7 * -8 + 4) = afStack_108[(uint)bVar7 * -2 + 3];
      *(float *)((int)local_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      local_14 = (float)core_setcolid_cpp_FUN_0053ccc0();
      if ((local_14 < 0.0) || (1.0 <= local_14)) {
        local_54 = -param_3[1];
        local_50 = -param_3[2];
        local_58 = -*param_3;
        local_d0 = -*param_3;
        local_e4[(uint)bVar7 * -2 + 6] =
             *(float *)((int)local_bc + ((uint)bVar7 * -2 + 0x18) * 4 + 8);
        local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             *(float *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19) * 4 + 8);
        if ((float *)local_f4 != local_e4 + 5) {
          local_f4 = (byte  [4])local_d0;
          local_f0 = local_cc;
          local_ec = local_c8;
        }
        local_28 = SQRT(local_ec * local_ec +
                        (float)local_f4 * (float)local_f4 + local_f0 * local_f0);
        if (local_28 <= 0.0) {
          local_f0 = 0.0;
          local_f4 = (byte  [4])0x0;
          local_ec = 0.0;
        }
        else {
          fVar1 = 1.0 / local_28;
          local_f4 = (byte  [4])((float)local_f4 * fVar1);
          local_f0 = local_f0 * fVar1;
          local_ec = local_ec * fVar1;
        }
      }
      else {
        local_a0 = *param_3 * local_14;
        local_9c = param_3[1] * local_14;
        local_98 = param_3[2] * local_14;
        local_64 = *param_3 * local_14;
        *(uint *)((int)local_bc + ((uint)bVar7 * -2 + 0x15) * 4 + 8) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + 6) * 4 + 8);
        *(uint *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16) * 4 + 8) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 7) * 4 + 8);
        local_70 = *param_2 + local_64;
        local_6c = param_2[1] + local_60;
        local_68 = param_2[2] + local_5c;
        local_118._0_4_ = *param_2 + local_64;
        *(uint *)((int)&local_118 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + 0x12) * 4 + 8);
        *(uint *)((int)&local_118 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13) * 4 + 8);
        if ((CVector3f *)local_c4 != &local_118) {
          local_c4._0_4_ = local_118._0_4_;
          local_c4._4_4_ = local_118._4_4_;
          local_bc[0] = (float)local_118._8_4_;
        }
        if (local_f4 != &g_CDemonSetPtr->field_0x14d128) {
          local_f4 = (byte  [4])*(float *)&g_CDemonSetPtr->field_0x14d128;
          local_f0 = *(float *)&g_CDemonSetPtr->field_0x14d12c;
          local_ec = *(float *)&g_CDemonSetPtr->field_0x14d130;
        }
      }
      local_18 = *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144;
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      local_2c = *(int *)(iVar4 + 0x20b8c);
      *(uint *)(iVar4 + 0x20b8c) = 0;
      param_22 = 0.0;
      param_23 = 0.0;
      param_24 = 0.0;
      if (local_18 != (CDemonActor *)0x0) {
        core_actor_cpp_FUN_00408bf0();
        local_124 = local_7c;
        *(uint *)((int)&stack0xfffffee0 + (uint)bVar7 * -8) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + 0xf) * 4 + 8);
        *(uint *)((int)&stack0xfffffee4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10) * 4 + 8);
        if (&param_12 != &stack0xfffffedc) {
          param_12 = local_124;
          param_13 = local_120;
          param_14 = local_11c;
        }
        core_actor_cpp_FUN_00408bf0();
        local_154 = local_130;
        *(uint *)((int)&stack0xfffffeb0 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffed4 + (uint)bVar7 * -8);
        *(uint *)((int)&stack0xfffffeb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xfffffed8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        if (&param_15 != &stack0xfffffeac) {
          param_15 = local_154;
          param_16 = local_150;
          param_17 = local_14c;
        }
        core_actor_cpp_FUN_00408b40();
        iVar4 = param_25;
        local_13c = local_10c;
        *(float *)((int)&stack0xfffffec8 + (uint)bVar7 * -8) = afStack_108[(uint)bVar7 * -2];
        *(float *)((int)&stack0xfffffecc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             afStack_108[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        if (&param_18 != &stack0xfffffec4) {
          param_18 = local_13c;
          param_19 = local_138;
          param_20 = local_134;
        }
        if ((((param_25 == 0) && (param_10 != 0)) &&
            (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(), iVar2 != 0)) &&
           (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xe0))(), iVar2 != 0)) {
          param_9 = iVar4;
          param_8 = 0xff;
          param_7 = 0xff;
        }
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840();
        if ((iVar4 != 0) &&
           (iVar3 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xe0))(), iVar2 = _DAT_01d5ba14,
           iVar3 == 0)) {
          *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b8c) = iVar4;
          iVar4 = *(int *)(iVar2 * 4 + 0x1d5ba04);
          if (local_2c == *(int *)(iVar4 + 0x20b8c)) {
            return;
          }
          *(uint *)(iVar4 + 0x20b90) = 0;
          return;
        }
        fStack_148 = *param_3;
        *(float *)((int)&stack0xfffffebc + (uint)bVar7 * -8) = param_3[(uint)bVar7 * -2 + 1];
        *(float *)((int)&stack0xfffffec0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             (param_3 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        fStack_24 = SQRT(fStack_140 * fStack_140 + fStack_148 * fStack_148 + fStack_144 * fStack_144
                        );
        if (fStack_24 <= 0.0) {
          fStack_144 = 0.0;
          fStack_148 = 0.0;
          fStack_140 = 0.0;
        }
        else {
          fVar1 = 1.0 / fStack_24;
          fStack_148 = fStack_148 * fVar1;
          fStack_144 = fStack_144 * fVar1;
          fStack_140 = fStack_140 * fVar1;
        }
        fVar1 = fStack_140 * param_3[2] + fStack_148 * *param_3 + fStack_144 * param_3[1];
        if ((float)_DAT_005c09f0 < fVar1) {
          if (fVar1 < 1.0) {
            fVar8 = (float10)fVar1;
            acos();
            fStack_1c = (float)fVar8;
          }
          else {
            fStack_1c = 0.0;
          }
        }
        else {
          fStack_1c = 3.1415927;
        }
        param_21 = fStack_1c;
        (**(code **)(*(int *)&local_18->field_0x154 + 0xb4))();
      }
      local_168 = 0.0;
      if (param_11 != 0) {
        local_168 = param_4;
      }
      if (0.0 < param_24) {
        local_20 = (local_ec * param_3[2] + (float)local_f4 * *param_3 + local_f0 * param_3[1]) *
                   _DAT_005c09e4;
        fVar1 = (float)local_f4 * local_20;
        local_bc[1] = fVar1;
        local_bc[2] = local_f0 * local_20;
        local_bc[3] = local_ec * local_20;
        *(uint *)((int)&stack0xfffffea4 + (uint)bVar7 * -8) =
             *(uint *)((int)local_bc + (uint)bVar7 * -8 + 8);
        *(uint *)((int)&stack0xfffffea8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 8);
        local_bc[4] = fVar1 - *param_3;
        local_bc[5] = local_15c - param_3[1];
        local_a4 = local_158 - param_3[2];
        local_e4[2] = local_bc[4];
        local_e4[(uint)bVar7 * -2 + 3] = *(float *)((int)local_bc + ((uint)bVar7 * -2 + 3) * 4 + 8);
        local_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             *(float *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4 + 8);
        local_4c = -local_e4[2];
        local_48 = -local_e4[3];
        local_44 = -local_d4;
        local_94 = -local_e4[2];
        *(uint *)((int)local_bc + ((uint)bVar7 * -2 + 9) * 4 + 8) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + 0x1b) * 4 + 8);
        *(uint *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 10) * 4 + 8) =
             *(uint *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c) * 4 + 8);
        if (local_e4 + 2 != &local_94) {
          local_e4[2] = local_94;
          local_e4[3] = local_90;
          local_d4 = local_8c;
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
        puVar5 = &param_4;
        puVar6 = (uint *)&stack0xfffffe30;
        for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        core_fire_cpp_FUN_004a2e20(param_1,local_c4,local_e4 + 2);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(g_CDemonSetPtr);
        local_168 = (1.0 - param_24) * (float)_DAT_005c09e8 * local_168;
      }
      if (param_22 <= 0.0) goto LAB_004a32cf;
      if ((param_22 != 1.0) || (param_23 != param_21)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,local_18);
    }
    local_88[0] = *param_3;
    *(float *)((int)local_bc + ((uint)bVar7 * -2 + 0xc) * 4 + 8) = param_3[(uint)bVar7 * -2 + 1];
    this_ptr = g_CDemonSetPtr;
    *(float *)((int)local_bc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd) * 4 + 8) =
         (param_3 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,local_18);
    puVar5 = &param_4;
    puVar6 = (uint *)&stack0xfffffe30;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_fire_cpp_FUN_004a2e20(param_1,local_c4,local_88);
    local_168 = (1.0 - param_22) * (float)_DAT_005c09e8 * local_168;
LAB_004a32cf:
    uStack_1a4 = 0x4a3306;
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_004a2aa0
              (param_1,(CVector3f *)&local_e8,(CVector3f *)local_c4,param_4,local_168,
               (CVector3f *)local_f4,param_7,param_8,param_9,param_5);
  }
  return;
}
