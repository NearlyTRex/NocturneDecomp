// Name: core_particle.cpp_FUN_00510ef0
// Address: 00510ef0
// Address Range: [[00510ef0, 00511363]]
// Convention: unknown
// Signature: void core_particle_cpp_FUN_00510ef0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_particle_cpp_FUN_00510ef0(CVector3f *param_1)

{
  CVector3f *pCVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_110c [1010];
  CDemonRaytrace *this_ptr;
  CVector3i *voxel_coords;
  CVector3i local_124;
  float fStack_118;
  float afStack_114 [4];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0 [2];
  CVector3i local_e8;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  float local_c4;
  float local_c0 [4];
  float local_b0;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c [4];
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78 [2];
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [4];
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
  if (0.0 < param_1[3].x) {
    if ((CVector3f *)&param_1[3].z != param_1) {
      param_1[3].z = param_1->x;
      param_1[4].x = param_1->y;
      param_1[4].y = param_1->z;
    }
    param_1[4].z = param_1[3].y;
    local_28 = g_CGamePtr->delta_time_float;
    local_100 = param_1[2].x * local_28;
    local_fc = param_1[2].y * local_28;
    local_f8 = param_1[2].z * local_28;
    afStack_114[2] = param_1[1].x + local_100;
    param_1[1].x = afStack_114[2];
    afStack_114[2] = afStack_114[2] * local_28;
    afStack_114[3] = param_1[1].y + local_fc;
    local_104 = param_1[1].z + local_f8;
    param_1[1].y = afStack_114[3];
    afStack_114[3] = afStack_114[3] * local_28;
    param_1[1].z = local_104;
    local_104 = local_104 * local_28;
    param_1->x = param_1->x + afStack_114[2];
    param_1->y = param_1->y + afStack_114[3];
    param_1->z = param_1->z + local_104;
    local_9c[2] = afStack_114[2];
    local_9c[3] = afStack_114[3];
    local_8c = local_104;
    local_34 = local_100;
    local_30 = local_fc;
    local_2c = local_f8;
    local_1c = local_28;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50
              (&g_CDemonRaytraceInstance,param_1,&local_e8);
    voxel_coords = &local_124;
    this_ptr = &g_CDemonRaytraceInstance;
    local_124.x = local_e8.x;
    *(uint *)((int)&local_124 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_e8 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_124 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_e8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    fVar3 = (float)core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00476b50
                             (this_ptr,voxel_coords);
    param_1[3].y = fVar3;
    if ((fVar3 != 0.0) || (param_1[4].z != 0.0)) {
      local_20 = &param_1[3].z;
      fVar3 = (float)core_dtrace_cpp_FUN_00472c60
                               (&g_CDemonRaytraceInstance,local_20,param_1,local_c0 + 5,0);
      pfVar2 = local_20;
      local_18 = fVar3;
      if ((0.0 <= fVar3) && (fVar3 < 1.0)) {
        local_c0[2] = param_1->x - *local_20;
        local_c0[3] = param_1->y - local_20[1];
        local_b0 = param_1->z - local_20[2];
        local_4c = local_c0[2];
        afStack_60[(uint)bVar5 * -2 + 6] = local_c0[(uint)bVar5 * -2 + 3];
        afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        local_a0 = local_4c * fVar3;
        local_9c[0] = local_48 * fVar3;
        local_9c[1] = local_44 * fVar3;
        local_c4 = local_4c * fVar3;
        local_c0[(uint)bVar5 * -2] = local_9c[(uint)bVar5 * -2];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        local_7c = local_c4 * _DAT_005e159a;
        local_78[0] = local_c0[0] * _DAT_005e159a;
        local_78[1] = local_c0[1] * _DAT_005e159a;
        local_f4 = local_c4 * _DAT_005e159a;
        local_f0[(uint)bVar5 * -2] = local_78[(uint)bVar5 * -2];
        local_f0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        afStack_60[2] = *pfVar2 + local_f4;
        afStack_60[3] = pfVar2[1] + local_f0[0];
        local_50 = pfVar2[2] + local_f0[1];
        local_88.x = *pfVar2 + local_f4;
        *(float *)((int)&local_88 + (uint)bVar5 * -8 + 4) = afStack_60[(uint)bVar5 * -2 + 3];
        *(float *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if (param_1 != &local_88) {
          param_1->x = local_88.x;
          param_1->y = local_88.y;
          param_1->z = local_88.z;
        }
        iVar4 = (**(code **)((int)param_1[5].x + 0xc))(param_1,local_c0 + 5);
        if (iVar4 == 0) {
          pCVar1 = param_1 + 1;
          fStack_24 = (fStack_a4 * param_1[1].z + local_ac * pCVar1->x + fStack_a8 * param_1[1].y) *
                      _DAT_005e159e;
          fStack_64 = local_ac * fStack_24;
          afStack_60[0] = fStack_a8 * fStack_24;
          afStack_60[1] = fStack_a4 * fStack_24;
          fStack_dc = local_ac * fStack_24;
          afStack_d8[(uint)bVar5 * -2] = afStack_60[(uint)bVar5 * -2];
          afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          fStack_40 = fStack_dc - pCVar1->x;
          fStack_3c = afStack_d8[0] - param_1[1].y;
          fStack_38 = afStack_d8[1] - param_1[1].z;
          CStack_70.x = fStack_40;
          *(float *)((int)&CStack_70 + (uint)bVar5 * -8 + 4) = afStack_60[(uint)bVar5 * -2 + 9];
          *(float *)((int)&CStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          if (pCVar1 != &CStack_70) {
            pCVar1->x = CStack_70.x;
            param_1[1].y = CStack_70.y;
            param_1[1].z = CStack_70.z;
          }
          pCVar1 = param_1 + 1;
          fStack_118 = pCVar1->x * _DAT_005e15a2;
          afStack_114[0] = param_1[1].y * _DAT_005e15a2;
          afStack_114[1] = param_1[1].z * _DAT_005e15a2;
          CStack_d0.x = fStack_118;
          *(float *)((int)&CStack_d0 + (uint)bVar5 * -8 + 4) = afStack_114[(uint)bVar5 * -2];
          *(float *)((int)&CStack_d0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (pCVar1 != &CStack_d0) {
            pCVar1->x = CStack_d0.x;
            param_1[1].y = CStack_d0.y;
            param_1[1].z = CStack_d0.z;
          }
        }
        else {
          param_1[3].x = 0.0;
        }
      }
    }
    local_1c = param_1[3].x - local_1c;
    param_1[3].x = local_1c;
    if (local_1c < 0.0) {
      param_1[3].x = 0.0;
      return;
    }
  }
  return;
}
