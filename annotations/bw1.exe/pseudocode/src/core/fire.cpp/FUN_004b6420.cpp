// Name: core_fire.cpp_FUN_004b6420
// Address: 004b6420
// Address Range: [[004b6420, 004b6c56]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b6420(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,float param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004b6420(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,float param_12,uint param_13,uint param_14,uint param_15,uint param_16,uint param_17,uint param_18,uint param_19,uint param_20,float param_21,float param_22,float param_23,float param_24,int param_25)

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
  uint local_150;
  uint local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  uint local_130;
  uint local_124;
  float local_118;
  float local_114;
  float local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  CVector3f local_100;
  float local_f4;
  float local_f0 [4];
  uint local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  CVector3f local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
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
  CVector3f local_64;
  CVector3f local_58;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [4];
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
      local_100.x = *param_2;
      *(float *)((int)&local_100 + (uint)bVar6 * -8 + 4) = param_2[(uint)bVar6 * -2 + 1];
      *(float *)((int)&local_100 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4 + 8) =
           (param_2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      local_118 = local_100.x + *param_3;
      local_114 = local_100.y + param_3[1];
      local_110 = local_100.z + param_3[2];
      local_64.x = local_100.x + *param_3;
      *(float *)((int)&local_64 + (uint)bVar6 * -8 + 4) =
           (&stack0xfffffea4)[(uint)bVar6 * -2 + 0x12];
      *(float *)((int)&local_64 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4 + 8) =
           (&stack0xfffffea4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      local_18 = (float)core_setcolid_cpp_FUN_00557300();
      if ((local_18 < 0.0) || (1.0 <= local_18)) {
        local_138 = -param_3[1];
        local_134 = -param_3[2];
        local_13c = -*param_3;
        local_d0.x = -*param_3;
        local_f0[(uint)bVar6 * -2 + 9] = (&stack0xfffffea4)[(uint)bVar6 * -2 + 9];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             (&stack0xfffffea4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        if (&local_58 != (CVector3f *)(local_f0 + 8)) {
          local_58.x = local_d0.x;
          local_58.y = local_d0.y;
          local_58.z = local_d0.z;
        }
        local_2c = SQRT(local_58.z * local_58.z + local_58.x * local_58.x + local_58.y * local_58.y)
        ;
        if (local_2c <= 0.0) {
          local_58.y = 0.0;
          local_58.x = 0.0;
          local_58.z = 0.0;
        }
        else {
          fVar1 = 1.0 / local_2c;
          local_58.x = local_58.x * fVar1;
          local_58.y = local_58.y * fVar1;
          local_58.z = local_58.z * fVar1;
        }
      }
      else {
        local_148 = *param_3 * local_18;
        local_144 = param_3[1] * local_18;
        local_140 = param_3[2] * local_18;
        local_c4 = *param_3 * local_18;
        local_f0[(uint)bVar6 * -2 + 0xc] = (&stack0xfffffea4)[(uint)bVar6 * -2 + 6];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             (&stack0xfffffea4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        local_b8 = *param_2 + local_c4;
        local_b4 = param_2[1] + local_c0;
        local_b0 = param_2[2] + local_bc;
        local_ac.x = *param_2 + local_c4;
        local_f0[(uint)bVar6 * -2 + 0x12] = local_f0[(uint)bVar6 * -2 + 0xf];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        if (&local_64 != (CVector3f *)(local_f0 + 0x11)) {
          local_64.x = local_ac.x;
          local_64.y = local_ac.y;
          local_64.z = local_ac.z;
        }
        if (&local_58 != &g_CDemonSetPtr->collision_normal) {
          local_58.x = (g_CDemonSetPtr->collision_normal).x;
          local_58.y = (g_CDemonSetPtr->collision_normal).y;
          local_58.z = (g_CDemonSetPtr->collision_normal).z;
        }
      }
      local_20 = g_CDemonSetPtr->collision_actor;
      param_22 = 0.0;
      param_23 = 0.0;
      param_24 = 0.0;
      if (g_CDemonSetPtr->collision_actor != (CDemonActor *)0x0) {
        core_actor_cpp_FUN_00408bb0();
        local_f0[2] = local_7c;
        local_f0[(uint)bVar6 * -2 + 3] = local_f0[(uint)bVar6 * -2 + 0x1e];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
        if (&param_12 != local_f0 + 2) {
          param_12 = local_f0[2];
          param_13 = local_f0[3];
          param_14 = local_e0;
        }
        core_actor_cpp_FUN_00408bb0();
        local_154 = local_124;
        (&stack0xfffffea4)[(uint)bVar6 * -2 + 3] = (&stack0xfffffea4)[(uint)bVar6 * -2 + 0xf];
        (&stack0xfffffea4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             (&stack0xfffffea4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        if (&param_15 != &stack0xfffffeac) {
          param_15 = local_154;
          param_16 = local_150;
          param_17 = local_14c;
        }
        core_actor_cpp_FUN_00408b00();
        iVar3 = param_25;
        local_10c = local_130;
        (&stack0xfffffea4)[(uint)bVar6 * -2 + 0x15] = (&stack0xfffffea4)[(uint)bVar6 * -2 + 0xc];
        (&stack0xfffffea4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
             (&stack0xfffffea4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        if (&param_18 != &stack0xfffffef4) {
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
        local_f4 = *param_3;
        local_f0[(uint)bVar6 * -2] = param_3[(uint)bVar6 * -2 + 1];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             (param_3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
        local_30 = SQRT(local_f0[1] * local_f0[1] + local_f4 * local_f4 + local_f0[0] * local_f0[0])
        ;
        if (local_30 <= 0.0) {
          local_f0[0] = 0.0;
          local_f4 = 0.0;
          local_f0[1] = 0.0;
        }
        else {
          fVar1 = 1.0 / local_30;
          local_f4 = local_f4 * fVar1;
          local_f0[0] = local_f0[0] * fVar1;
          local_f0[1] = local_f0[1] * fVar1;
        }
        fVar1 = local_f0[1] * param_3[2] + local_f4 * *param_3 + local_f0[0] * param_3[1];
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
        (*((local_20->vtable)._ub)->onLaserHit)(local_20,(SLaserInfo *)&param_4);
      }
      local_168 = 0.0;
      if (param_11 != 0) {
        local_168 = param_4;
      }
      if (0.0 < param_24) {
        fStack_28 = (local_58.z * param_3[2] + local_58.x * *param_3 + local_58.y * param_3[1]) *
                    _DAT_005df628;
        fStack_dc = local_58.x * fStack_28;
        fStack_d8 = local_58.y * fStack_28;
        fStack_d4 = local_58.z * fStack_28;
        fStack_88 = local_58.x * fStack_28;
        local_f0[(uint)bVar6 * -2 + 0x1b] = local_f0[(uint)bVar6 * -2 + 6];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
             local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        fStack_4c = fStack_88 - *param_3;
        fStack_48 = fStack_84 - param_3[1];
        afStack_44[0] = fStack_80 - param_3[2];
        fStack_160 = fStack_88 - *param_3;
        (&stack0xfffffea4)[(uint)bVar6 * 0xfffffffe] = afStack_44[(uint)bVar6 * -2 + -1];
        (&stack0xfffffea4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2];
        fStack_70 = -fStack_160;
        fStack_6c = -fStack_15c;
        fStack_68 = -fStack_158;
        fStack_a0 = -fStack_160;
        local_f0[(uint)bVar6 * -2 + 0x15] = local_f0[(uint)bVar6 * -2 + 0x21];
        local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
             local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
        if (&stack0xfffffea0 != local_f0 + 0x14) {
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
        core_fire_cpp_FUN_004b6420(param_1,&local_64,&stack0xfffffea0);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00559060(g_CDemonSetPtr);
        local_168 = (1.0 - param_24) * (float)_DAT_005df62c * local_168;
      }
      if (param_22 <= 0.0) goto LAB_004b6aac;
      if ((param_22 != 1.0) || (param_23 != param_21)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,local_20);
    }
    afStack_94[0] = *param_3;
    local_f0[(uint)bVar6 * -2 + 0x18] = param_3[(uint)bVar6 * -2 + 1];
    this_ptr = g_CDemonSetPtr;
    local_f0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
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
    core_fire_cpp_FUN_004b6420(param_1,&local_64,local_f0 + 0x17);
    local_168 = (1.0 - param_22) * (float)_DAT_005df62c * local_168;
LAB_004b6aac:
    uStack_1a4 = 0x4b6ae3;
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_004b6070
              (param_1,&local_100,&local_64,param_4,local_168,&local_58,param_7,param_8,param_9,
               param_5);
  }
  return;
}
