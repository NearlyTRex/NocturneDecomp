// Name: core_particle.cpp_FUN_00532250
// Address: 00532250
// Address Range: [[00532250, 005326c3]]
// Convention: unknown
// Signature: void core_particle_cpp_FUN_00532250(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_particle_cpp_FUN_00532250(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_110c [1010];
  CDemonRaytrace *this_ptr;
  CVector3i *voxel_coords;
  uint local_124;
  float afStack_120 [4];
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0 [5];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c [4];
  float local_8c;
  float local_88;
  float local_84 [4];
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float *local_20;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  if (0.0 < param_1[9]) {
    if (param_1 + 0xb != param_1) {
      param_1[0xb] = *param_1;
      param_1[0xc] = param_1[1];
      param_1[0xd] = param_1[2];
    }
    param_1[0xe] = param_1[10];
    local_28 = *(float *)&g_CGamePtr->field_0x294;
    local_100 = param_1[6] * local_28;
    local_fc = param_1[7] * local_28;
    local_f8 = param_1[8] * local_28;
    local_10c = param_1[3] + local_100;
    param_1[3] = local_10c;
    local_10c = local_10c * local_28;
    fVar3 = param_1[5];
    fVar2 = param_1[4];
    param_1[4] = fVar2 + local_fc;
    local_108 = (fVar2 + local_fc) * local_28;
    param_1[5] = fVar3 + local_f8;
    local_104 = (fVar3 + local_f8) * local_28;
    *param_1 = *param_1 + local_10c;
    param_1[1] = param_1[1] + local_108;
    param_1[2] = param_1[2] + local_104;
    local_9c[2] = local_10c;
    local_9c[3] = local_108;
    local_8c = local_104;
    local_34 = local_100;
    local_30 = local_fc;
    local_2c = local_f8;
    local_1c = local_28;
    core_dtrace_cpp_FUN_0048ef40(&g_CDemonRaytraceInstance,param_1);
    voxel_coords = (CVector3i *)&local_124;
    this_ptr = &g_CDemonRaytraceInstance;
    local_124 = local_f0[2];
    afStack_120[(uint)bVar5 * -2] = local_f0[(uint)bVar5 * -2 + 3];
    afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         local_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    fVar3 = (float)core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0048f040
                             (this_ptr,voxel_coords);
    param_1[10] = fVar3;
    if ((fVar3 != 0.0) || (param_1[0xe] != 0.0)) {
      local_20 = param_1 + 0xb;
      fVar3 = (float)core_dtrace_cpp_FUN_0048b150
                               (&g_CDemonRaytraceInstance,local_20,param_1,local_f0 + 0x11,0);
      pfVar1 = local_20;
      local_18 = fVar3;
      if ((0.0 <= fVar3) && (fVar3 < 1.0)) {
        local_b8 = *param_1 - *local_20;
        local_b4 = param_1[1] - local_20[1];
        local_b0 = param_1[2] - local_20[2];
        local_4c = *param_1 - *local_20;
        local_84[(uint)bVar5 * -2 + 0xf] = local_f0[(uint)bVar5 * -2 + 0xf];
        local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
             local_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
        local_a0 = local_4c * fVar3;
        local_9c[0] = local_48 * fVar3;
        local_9c[1] = local_44 * fVar3;
        local_c4 = local_4c * fVar3;
        local_f0[(uint)bVar5 * -2 + 0xc] = local_9c[(uint)bVar5 * -2];
        local_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
             local_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        local_84[2] = local_c4 * _DAT_005ec7f5;
        local_84[3] = local_c0 * _DAT_005ec7f5;
        local_74 = local_bc * _DAT_005ec7f5;
        local_f4 = local_c4 * _DAT_005ec7f5;
        local_f0[(uint)bVar5 * -2] = local_84[(uint)bVar5 * -2 + 3];
        local_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        local_58 = *pfVar1 + local_f4;
        local_54 = pfVar1[1] + local_f0[0];
        local_50 = pfVar1[2] + local_f0[1];
        local_88 = *pfVar1 + local_f4;
        local_84[(uint)bVar5 * -2] = local_84[(uint)bVar5 * -2 + 0xc];
        local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
        if (param_1 != &local_88) {
          *param_1 = local_88;
          param_1[1] = local_84[0];
          param_1[2] = local_84[1];
        }
        iVar4 = (**(code **)((int)param_1[0xf] + 0xc))(param_1,local_f0 + 0x11);
        if (iVar4 == 0) {
          pfVar1 = param_1 + 3;
          fStack_24 = (fStack_a4 * param_1[5] + local_ac * *pfVar1 + fStack_a8 * param_1[4]) *
                      _DAT_005ec7f9;
          fStack_64 = local_ac * fStack_24;
          fStack_60 = fStack_a8 * fStack_24;
          fStack_5c = fStack_a4 * fStack_24;
          fStack_dc = local_ac * fStack_24;
          local_f0[(uint)bVar5 * -2 + 6] = local_84[(uint)bVar5 * -2 + 9];
          local_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          fStack_40 = fStack_dc - *pfVar1;
          fStack_3c = fStack_d8 - param_1[4];
          fStack_38 = fStack_d4 - param_1[5];
          fStack_70 = fStack_dc - *pfVar1;
          local_84[(uint)bVar5 * -2 + 6] = local_84[(uint)bVar5 * -2 + 0x12];
          local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
          if (pfVar1 != local_84 + 5) {
            *pfVar1 = fStack_70;
            param_1[4] = fStack_6c;
            param_1[5] = fStack_68;
          }
          pfVar1 = param_1 + 3;
          afStack_120[2] = *pfVar1 * _DAT_005ec7fd;
          afStack_120[3] = param_1[4] * _DAT_005ec7fd;
          fStack_110 = param_1[5] * _DAT_005ec7fd;
          fStack_d0 = *pfVar1 * _DAT_005ec7fd;
          local_f0[(uint)bVar5 * -2 + 9] = afStack_120[(uint)bVar5 * -2 + 3];
          local_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
               afStack_120[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          if (pfVar1 != local_f0 + 8) {
            *pfVar1 = fStack_d0;
            param_1[4] = fStack_cc;
            param_1[5] = fStack_c8;
          }
        }
        else {
          param_1[9] = 0.0;
        }
      }
    }
    fVar3 = param_1[9];
    param_1[9] = fVar3 - local_1c;
    if (fVar3 - local_1c < 0.0) {
      param_1[9] = 0.0;
      return;
    }
  }
  return;
}
