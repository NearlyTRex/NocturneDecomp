// Name: core_scat.cpp_FUN_005424f0
// Address: 005424f0
// Address Range: [[005424f0, 00542b89]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_005424f0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_005424f0(int param_1,float param_2,int param_3)

{
  int iVar1;
  SMotion *pSVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_10e0 [971];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_74;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar8 = 0;
  *(uint *)(param_1 + 0x1ffd4) = 0;
  if ((param_3 == 0) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)(param_1 + 0x158)), pSVar2->state_index == 2)) {
    param_3 = 1;
  }
  local_1a8 = *(float *)(param_1 + 0x1ffc4);
  local_24 = *(float *)(param_1 + 0x1ffc8);
  if ((*(int *)(param_1 + 0x1fae4) == 0) || (*(int *)(param_1 + 0xc1d4) == 2)) {
    if ((*(int *)(param_1 + 0x1ffac) == 0) || (param_3 != 0)) {
      *(uint *)(param_1 + 0x1ffd0) = 0;
    }
    else if (*(int *)(param_1 + 0xc1e4) == 0) {
      local_20 = param_3;
      local_1c = 1e+30;
      iVar6 = 0;
      for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
        iVar1 = *(int *)((int)g_CDemonSetPtr->actors + iVar6);
        local_1a4 = (float)core_scat_cpp_FUN_00542b90
                                     (param_1,iVar1,iVar1 == *(int *)(param_1 + 0x1ffd0));
        if ((0.0 <= local_1a4) && (local_1a4 < local_1c)) {
          local_20 = iVar1;
          local_1c = local_1a4;
        }
        iVar6 = iVar6 + 4;
        local_18 = local_1a4;
      }
      *(int *)(param_1 + 0x1ffd0) = local_20;
    }
    if (*(int *)(param_1 + 0xc1e4) == 0) {
      if (*(int *)(param_1 + 0x1ffd0) != 0) {
        __arrinit(&stack0xfffffe60,10,&g_CVectorTypeInfo);
        iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1ffd0) + 0x154) + 0x54))
                          (*(int *)(param_1 + 0x1ffd0),&stack0xfffffe60);
        if (iVar3 < 1) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x1ffd0) + 0x154) + 0x1c))
                    (*(int *)(param_1 + 0x1ffd0));
          pfVar5 = (float *)&stack0xfffffed8;
          pfVar7 = &stack0xfffffef0;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar7 = *pfVar5;
            pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          fStack_50 = fStack_110 + fStack_104;
          fStack_4c = fStack_10c + fStack_100;
          fStack_48 = fStack_108 + fStack_fc;
          fStack_98 = fStack_110 + fStack_104;
          *(uint *)((int)&stack0xffffff6c + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffffb4 + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xffffff70 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffffb8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          fStack_e0 = fStack_98 * _DAT_005ededb;
          fStack_dc = fStack_94 * _DAT_005ededb;
          fStack_d8 = fStack_90 * _DAT_005ededb;
          fStack_d4 = fStack_98 * _DAT_005ededb;
          (&stack0xffffff30)[(uint)bVar8 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffff24 + (uint)bVar8 * -8);
          *(uint *)(&stack0xffffff34 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffff28 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if (&stack0xffffff50 != &stack0xffffff2c) {
            fStack_b0 = fStack_d4;
            fStack_ac = fStack_d0;
          }
        }
        else if (&stack0xffffff50 != &stack0xfffffe60) {
          fStack_b0 = local_1a0;
          fStack_ac = fStack_19c;
        }
        core_actor_cpp_FUN_00408b40(*(uint *)(param_1 + 0x1ffd0),&stack0xffffff50);
        uStack_ec = uStack_80;
        *(uint *)((int)&stack0xffffff18 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff84 + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffff1c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff88 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        core_actor_cpp_FUN_00408bb0(param_1,&stack0xffffff14);
        fStack_8c = fStack_f8;
        *(uint *)((int)&stack0xffffff78 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff0c + (uint)bVar8 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xffffff7c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff10 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        core_skeleton_cpp_FUN_00569040(param_1 + 0x158,_DAT_01e7e02c);
        fVar4 = fStack_8c;
        fStack_bc = fStack_68;
        *(uint *)((int)&stack0xffffff48 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff4c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffffa0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_c8 = fVar4 - fStack_bc;
        fStack_c4 = fStack_88 - fStack_b8;
        fStack_c0 = fStack_84 - fStack_b4;
        fStack_a4 = fVar4 - fStack_bc;
        *(uint *)((int)&stack0xffffff60 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)((int)&stack0xffffff3c + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffff64 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff40 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff5c);
        fStack_5c = fStack_74;
        *(uint *)((int)&stack0xffffffa8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffffac + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff94 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        local_1a8 = fStack_5c;
        local_24 = fStack_58;
      }
    }
    else if (*(int *)(param_1 + 0x1ffd0) == 0) {
      *(uint *)(param_1 + 0x1ffc8) = 0;
      *(uint *)(param_1 + 0x1ffc4) = *(uint *)(param_1 + 0x1ffc8);
      local_1a8 = *(float *)(param_1 + 0x1ffc4);
      local_24 = local_1a8;
    }
  }
  else {
    local_1a8 = *(float *)(param_1 + 0xc204) * _DAT_005edec7 * (float)_DAT_005edecf * param_2 +
                local_1a8;
    local_34 = 0x3fc90fdb;
    if (local_1a8 < _DAT_005eded7) {
      local_1a8 = -1.5707964;
    }
    if (1.5707964 < local_1a8) {
      local_1a8 = 1.5707964;
    }
    local_24 = 0.0;
  }
  local_2c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                       (local_24 - *(float *)(param_1 + 0x1ffc8));
  local_18 = local_2c;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                       (local_1a8 - *(float *)(param_1 + 0x1ffc4));
  local_28 = param_2 * _DAT_005edec7 * (float)_DAT_005ededf;
  local_38 = -local_28;
  if (local_2c < local_38) {
    local_2c = local_38;
  }
  if (local_28 < local_2c) {
    local_2c = local_28;
  }
  local_3c = -local_28;
  local_30 = local_18;
  if (local_18 < local_3c) {
    local_30 = local_3c;
  }
  if (local_28 < local_30) {
    local_30 = local_28;
  }
  *(float *)(param_1 + 0x1ffc4) = *(float *)(param_1 + 0x1ffc4) + local_30;
  *(float *)(param_1 + 0x1ffc8) = *(float *)(param_1 + 0x1ffc8) + local_2c;
  if ((*(int *)(param_1 + 0x1ffd0) != 0) && (param_3 == 0)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                         (*(float *)(param_1 + 0x1ffc8) - local_24);
    if (((float)_DAT_005edee7 <= ABS(local_18)) &&
       (fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                          (*(float *)(param_1 + 0x1ffc8) - local_24),
       (float)_DAT_005edee7 <= ABS(fVar4))) {
      return;
    }
    *(uint *)(param_1 + 0x1ffd4) = 1;
    return;
  }
  return;
}
