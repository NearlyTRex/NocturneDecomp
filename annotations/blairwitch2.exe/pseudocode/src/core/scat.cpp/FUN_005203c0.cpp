// Name: core_scat.cpp_FUN_005203c0
// Address: 005203c0
// Address Range: [[005203c0, 00520a59]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_005203c0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_005203c0(int param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  byte bVar7;
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
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [4];
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
  
  bVar7 = 0;
  *(uint *)(param_1 + 0x25668) = 0;
  if ((param_3 == 0) &&
     (iVar2 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar2 + 0x24) == 2)) {
    param_3 = 1;
  }
  local_1a8 = *(float *)(param_1 + 0x25658);
  local_24 = *(float *)(param_1 + 0x2565c);
  if ((*(int *)(param_1 + 0x24378) == 0) || (*(int *)(param_1 + 0x10a64) == 2)) {
    if ((*(int *)(param_1 + 0x25640) == 0) || (param_3 != 0)) {
      *(uint *)(param_1 + 0x25664) = 0;
    }
    else if (*(int *)(param_1 + 0x10a74) == 0) {
      local_20 = param_3;
      local_1c = 1e+30;
      iVar5 = 0;
      for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
        iVar1 = *(int *)((int)g_CDemonSetPtr->actors + iVar5);
        local_1a4 = (float)core_scat_cpp_FUN_00520a60
                                     (param_1,iVar1,iVar1 == *(int *)(param_1 + 0x25664));
        if ((0.0 <= local_1a4) && (local_1a4 < local_1c)) {
          local_20 = iVar1;
          local_1c = local_1a4;
        }
        iVar5 = iVar5 + 4;
        local_18 = local_1a4;
      }
      *(int *)(param_1 + 0x25664) = local_20;
    }
    if (*(int *)(param_1 + 0x10a74) == 0) {
      if (*(int *)(param_1 + 0x25664) != 0) {
        __arrinit(&stack0xfffffe60,10,&g_CVectorTypeInfo);
        iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25664) + 0x2b0) + 0x5c))
                          (*(int *)(param_1 + 0x25664),&stack0xfffffe60);
        if (iVar2 < 1) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x25664) + 0x2b0) + 0x24))
                    (*(int *)(param_1 + 0x25664));
          pfVar4 = (float *)&stack0xfffffed8;
          pfVar6 = &stack0xfffffef0;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = *pfVar4;
            pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          afStack_58[2] = fStack_110 + fStack_104;
          afStack_58[3] = fStack_10c + fStack_100;
          fStack_48 = fStack_108 + fStack_fc;
          fStack_98 = fStack_110 + fStack_104;
          *(float *)((int)&stack0xffffff6c + (uint)bVar7 * -8) = afStack_58[(uint)bVar7 * -2 + 3];
          *(float *)((int)&stack0xffffff70 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_e0 = fStack_98 * _DAT_005e2bcf;
          fStack_dc = fStack_94 * _DAT_005e2bcf;
          fStack_d8 = fStack_90 * _DAT_005e2bcf;
          fStack_d4 = fStack_98 * _DAT_005e2bcf;
          (&stack0xffffff30)[(uint)bVar7 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffff24 + (uint)bVar7 * -8);
          *(uint *)(&stack0xffffff34 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          if (&stack0xffffff50 != &stack0xffffff2c) {
            fStack_b0 = fStack_d4;
            fStack_ac = fStack_d0;
          }
        }
        else if (&stack0xffffff50 != &stack0xfffffe60) {
          fStack_b0 = local_1a0;
          fStack_ac = fStack_19c;
        }
        core_actor_cpp_FUN_00408d70(*(uint *)(param_1 + 0x25664),&stack0xffffff50);
        uStack_ec = uStack_80;
        *(uint *)((int)&stack0xffffff18 + (uint)bVar7 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff84 + (uint)bVar7 * -8);
        *(float *)(&stack0xffffff1c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -8];
        core_actor_cpp_FUN_00408de0(param_1,&stack0xffffff14);
        fStack_8c = fStack_f8;
        *(uint *)((int)&stack0xffffff78 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xffffff0c + (uint)bVar7 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xffffff7c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)(&stack0xffffff10 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  ((CDeformableModelInstance *)(param_1 + 0x2b4),_DAT_01e62080,&CStack_68);
        fVar3 = fStack_8c;
        fStack_bc = CStack_68.x;
        *(uint *)((int)&stack0xffffff48 + (uint)bVar7 * -8) =
             *(uint *)((int)&CStack_68 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&stack0xffffff4c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&CStack_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        fStack_c8 = fVar3 - fStack_bc;
        fStack_c4 = fStack_88 - fStack_b8;
        fStack_c0 = fStack_84 - fStack_b4;
        fStack_a4 = fVar3 - fStack_bc;
        *(uint *)((int)&stack0xffffff60 + (uint)bVar7 * 0xfffffffe * 4) =
             *(uint *)((int)&stack0xffffff3c + (uint)bVar7 * -8);
        *(uint *)(&stack0xffffff64 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             *(uint *)((int)&stack0xffffff40 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffff5c);
        fStack_5c = fStack_74;
        afStack_58[(uint)bVar7 * -2] = afStack_58[(uint)bVar7 * -2 + -6];
        afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -5];
        local_1a8 = fStack_5c;
        local_24 = afStack_58[0];
      }
    }
    else if (*(int *)(param_1 + 0x25664) == 0) {
      *(uint *)(param_1 + 0x2565c) = 0;
      *(uint *)(param_1 + 0x25658) = *(uint *)(param_1 + 0x2565c);
      local_1a8 = *(float *)(param_1 + 0x25658);
      local_24 = local_1a8;
    }
  }
  else {
    local_1a8 = *(float *)(param_1 + 0x10a94) * _DAT_005e2bbb * (float)_DAT_005e2bc3 * param_2 +
                local_1a8;
    local_34 = 0x3fc90fdb;
    if (local_1a8 < _DAT_005e2bcb) {
      local_1a8 = -1.5707964;
    }
    if (1.5707964 < local_1a8) {
      local_1a8 = 1.5707964;
    }
    local_24 = 0.0;
  }
  local_2c = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                       (local_24 - *(float *)(param_1 + 0x2565c));
  local_18 = local_2c;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                       (local_1a8 - *(float *)(param_1 + 0x25658));
  local_28 = param_2 * _DAT_005e2bbb * (float)_DAT_005e2bd3;
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
  *(float *)(param_1 + 0x25658) = *(float *)(param_1 + 0x25658) + local_30;
  *(float *)(param_1 + 0x2565c) = *(float *)(param_1 + 0x2565c) + local_2c;
  if ((*(int *)(param_1 + 0x25664) != 0) && (param_3 == 0)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                         (*(float *)(param_1 + 0x2565c) - local_24);
    if (((float)_DAT_005e2bdb <= ABS(local_18)) &&
       (fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                          (*(float *)(param_1 + 0x2565c) - local_24),
       (float)_DAT_005e2bdb <= ABS(fVar3))) {
      return;
    }
    *(uint *)(param_1 + 0x25668) = 1;
    return;
  }
  return;
}
