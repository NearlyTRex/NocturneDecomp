// Name: core_fire.cpp_FUN_004b6420
// Address: 004b6420
// Address Range: [[004b6420, 004b6c56]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b6420(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,float param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,float param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004b6420(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,float param_12,uint param_13,uint param_14,uint param_15,uint param_16,uint param_17,uint param_18,uint param_19,float param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  float afStackY_1148 [987];
  uint uStack_1a4;
  CDemonSet *this_ptr;
  float local_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  uint local_154;
  float local_150 [4];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  uint local_130;
  uint local_124;
  float afStack_120 [4];
  float local_110;
  uint local_10c;
  uint local_108;
  float local_104;
  byte local_100 [4];
  float local_fc [6];
  uint local_e4;
  uint local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac [3];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float afStack_94 [3];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  byte local_64 [8];
  float local_5c;
  byte local_58 [4];
  float local_54;
  float local_50;
  float fStack_4c;
  float afStack_48 [5];
  int local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  CDemonActor *local_20;
  float local_18;
  
  bVar6 = 0;
  if (param_25 < 3) {
    local_34 = param_25 + 1;
    while( true ) {
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00559310
                (g_CDemonSetPtr,param_6,param_7,param_8,param_9);
      local_100 = (byte  [4])*param_2;
      local_fc[(uint)bVar6 * -2] = param_2[(uint)bVar6 * -2 + 1];
      local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           (param_2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      afStack_120[2] = (float)local_100 + *param_3;
      afStack_120[3] = local_fc[0] + param_3[1];
      local_110 = local_fc[1] + param_3[2];
      local_64._0_4_ = (float)local_100 + *param_3;
      *(float *)(local_58 + (uint)bVar6 * -8 + -8) = local_fc[(uint)bVar6 * -2 + -6];
      *(float *)(local_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -4) =
           local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -5];
      local_18 = (float)core_setcolid_cpp_FUN_00557300();
      if ((local_18 < 0.0) || (1.0 <= local_18)) {
        local_138 = -param_3[1];
        local_134 = -param_3[2];
        local_13c = -*param_3;
        local_d0 = -*param_3;
        local_fc[(uint)bVar6 * -2 + 0xc] = local_150[(uint)bVar6 * 0xfffffffe + 6];
        local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             local_150[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 7];
        if ((float *)local_58 != local_fc + 0xb) {
          local_58 = (byte  [4])local_d0;
          local_54 = local_cc;
          local_50 = local_c8;
        }
        local_2c = SQRT(local_50 * local_50 +
                        (float)local_58 * (float)local_58 + local_54 * local_54);
        if (local_2c <= 0.0) {
          local_54 = 0.0;
          local_58 = (byte  [4])0x0;
          local_50 = 0.0;
        }
        else {
          fVar1 = 1.0 / local_2c;
          local_58 = (byte  [4])((float)local_58 * fVar1);
          local_54 = local_54 * fVar1;
          local_50 = local_50 * fVar1;
        }
      }
      else {
        local_150[2] = *param_3 * local_18;
        local_150[3] = param_3[1] * local_18;
        local_140 = param_3[2] * local_18;
        local_c4 = *param_3 * local_18;
        local_fc[(uint)bVar6 * -2 + 0xf] = local_150[(uint)bVar6 * 0xfffffffe + 3];
        local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             local_150[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4];
        local_b8 = *param_2 + local_c4;
        local_b4 = param_2[1] + local_c0;
        local_b0 = param_2[2] + local_bc;
        local_ac[0] = *param_2 + local_c4;
        local_fc[(uint)bVar6 * -2 + 0x15] = local_fc[(uint)bVar6 * -2 + 0x12];
        local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
             local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
        if ((float *)local_64 != local_fc + 0x14) {
          local_64._0_4_ = local_ac[0];
          local_64._4_4_ = local_ac[1];
          local_5c = local_ac[2];
        }
        if (local_58 != &g_CDemonSetPtr->field_0x14d128) {
          local_58 = (byte  [4])*(float *)&g_CDemonSetPtr->field_0x14d128;
          local_54 = *(float *)&g_CDemonSetPtr->field_0x14d12c;
          local_50 = *(float *)&g_CDemonSetPtr->field_0x14d130;
        }
      }
      local_20 = *(CDemonActor **)&g_CDemonSetPtr->field_0x14d144;
      param_22 = 0.0;
      param_23 = 0.0;
      param_24 = 0.0;
      if (*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144 != (CDemonActor *)0x0) {
        core_actor_cpp_FUN_00408bb0();
        local_fc[5] = local_7c;
        local_fc[(uint)bVar6 * -2 + 6] = local_fc[(uint)bVar6 * -2 + 0x21];
        local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
        if (&param_12 != local_fc + 5) {
          param_12 = local_fc[5];
          param_13 = local_e4;
          param_14 = local_e0;
        }
        core_actor_cpp_FUN_00408bb0();
        local_154 = local_124;
        *(uint *)((int)local_150 + (uint)bVar6 * -8) =
             *(uint *)(local_100 + (uint)bVar6 * -8 + -0x20);
        local_150[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
             local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
        if (&param_15 != &local_154) {
          param_15 = local_154;
          param_16 = local_150[0];
          param_17 = local_150[1];
        }
        core_actor_cpp_FUN_00408b00();
        iVar3 = param_25;
        local_10c = local_130;
        local_fc[(uint)bVar6 * -2 + -3] = local_150[(uint)bVar6 * 0xfffffffe + 9];
        (&local_104)[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe] =
             local_150[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 10];
        if (&param_18 != &local_10c) {
          param_18 = local_10c;
          param_19 = local_108;
          param_20 = local_104;
        }
        if ((param_25 == 0) && (param_10 != 0)) {
          iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600();
          if (iVar2 != 0) {
            iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xe0))();
            if (iVar2 != 0) {
              param_9 = iVar3;
              param_8 = 0xff;
              param_7 = 0xff;
            }
          }
        }
        local_fc[2] = *param_3;
        local_fc[(uint)bVar6 * -2 + 3] = param_3[(uint)bVar6 * -2 + 1];
        local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             (param_3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
        local_30 = SQRT(local_fc[4] * local_fc[4] +
                        local_fc[2] * local_fc[2] + local_fc[3] * local_fc[3]);
        if (local_30 <= 0.0) {
          local_fc[3] = 0.0;
          local_fc[2] = 0.0;
          local_fc[4] = 0.0;
        }
        else {
          fVar1 = 1.0 / local_30;
          local_fc[2] = local_fc[2] * fVar1;
          local_fc[3] = local_fc[3] * fVar1;
          local_fc[4] = local_fc[4] * fVar1;
        }
        fVar1 = local_fc[4] * param_3[2] + local_fc[2] * *param_3 + local_fc[3] * param_3[1];
        if ((float)_DAT_005df634 < fVar1) {
          if (fVar1 < 1.0) {
            fVar7 = (float10)fVar1;
            acos();
            fStack_24 = (float)fVar7;
          }
          else {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = 3.1415927;
        }
        param_21 = fStack_24;
        (**(code **)(*(int *)&local_20->field_0x154 + 0xb4))();
      }
      local_168 = 0.0;
      if (param_11 != 0) {
        local_168 = param_4;
      }
      if (0.0 < param_24) {
        fStack_28 = (local_50 * param_3[2] + (float)local_58 * *param_3 + local_54 * param_3[1]) *
                    _DAT_005df628;
        fStack_dc = (float)local_58 * fStack_28;
        fStack_d8 = local_54 * fStack_28;
        fStack_d4 = local_50 * fStack_28;
        fStack_88 = (float)local_58 * fStack_28;
        local_fc[(uint)bVar6 * -2 + 0x1e] = local_fc[(uint)bVar6 * -2 + 9];
        local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
             local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        fStack_4c = fStack_88 - *param_3;
        afStack_48[0] = fStack_84 - param_3[1];
        afStack_48[1] = fStack_80 - param_3[2];
        fStack_160 = fStack_88 - *param_3;
        (&stack0xfffffea4)[(uint)bVar6 * 0xfffffffe] = afStack_48[(uint)bVar6 * -2];
        *(float *)((int)&stack0xfffffea8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        fStack_70 = -fStack_160;
        fStack_6c = -fStack_15c;
        fStack_68 = -fStack_158;
        fStack_a0 = -fStack_160;
        local_fc[(uint)bVar6 * -2 + 0x18] = local_fc[(uint)bVar6 * -2 + 0x24];
        local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
             local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
        if (&stack0xfffffea0 != local_fc + 0x17) {
          fStack_160 = fStack_a0;
          fStack_15c = fStack_9c;
          fStack_158 = fStack_98;
        }
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
        puVar4 = &param_4;
        puVar5 = (uint *)&stack0xfffffe30;
        for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        core_fire_cpp_FUN_004b6420(param_1,local_64,&stack0xfffffea0);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(g_CDemonSetPtr);
        local_168 = (1.0 - param_24) * (float)_DAT_005df62c * local_168;
      }
      if (param_22 <= 0.0) goto LAB_004b6aac;
      if ((param_22 != 1.0) || (param_23 != param_21)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,local_20);
    }
    afStack_94[0] = *param_3;
    local_fc[(uint)bVar6 * -2 + 0x1b] = param_3[(uint)bVar6 * -2 + 1];
    this_ptr = g_CDemonSetPtr;
    local_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
         (param_3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(this_ptr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,local_20);
    puVar4 = &param_4;
    puVar5 = (uint *)&stack0xfffffe30;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_fire_cpp_FUN_004b6420(param_1,local_64,local_fc + 0x1a);
    local_168 = (1.0 - param_22) * (float)_DAT_005df62c * local_168;
LAB_004b6aac:
    uStack_1a4 = 0x4b6ae3;
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_004b6070
              (param_1,(CVector3f *)local_100,(CVector3f *)local_64,param_4,local_168,
               (CVector3f *)local_58,param_7,param_8,param_9,param_5);
  }
  return;
}
