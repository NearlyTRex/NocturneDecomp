// Name: core_particle.cpp_CParticle_process_FUN_004ef120
// Address: 004ef120
// Address Range: [[004ef120, 004ef43f]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_process_FUN_004ef120(float *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_particle_cpp_CParticle_process_FUN_004ef120(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_105c [998];
  byte *puVar6;
  uint *puVar7;
  uint local_74;
  float local_68;
  float local_64;
  float local_60;
  float afStack_5c [3];
  float local_50;
  float local_4c;
  float local_48;
  float afStack_44 [3];
  uint local_38;
  float afStack_34 [4];
  float fStack_24;
  float local_20;
  float local_1c;
  float local_14;
  
  bVar5 = 0;
  if (0.0 < param_1[6]) {
    if (param_1 + 9 != param_1) {
      param_1[9] = *param_1;
      param_1[10] = param_1[1];
      param_1[0xb] = param_1[2];
    }
    param_1[0xc] = param_1[8];
    local_20 = *(float *)(0x01C775EC + 0x264);
    param_1[4] = param_1[7] * local_20 + param_1[4];
    *param_1 = *param_1 + param_1[3] * local_20;
    param_1[1] = param_1[1] + param_1[4] * local_20;
    param_1[2] = param_1[2] + param_1[5] * local_20;
    local_1c = local_20;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(&DAT_01fba938,param_1);
    puVar7 = &stack0xffffff8c;
    puVar6 = &DAT_01fba938;
    local_74 = local_38;
    *(float *)((int)&stack0xffffff90 + (uint)bVar5 * 0xfffffffe * 4) =
         afStack_34[(uint)bVar5 * 0xfffffffe];
    *(float *)(&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         afStack_34[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    fVar3 = (float)core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0(puVar6,puVar7);
    param_1[8] = fVar3;
    if ((fVar3 != 0.0) || (param_1[0xc] != 0.0)) {
      pfVar1 = param_1 + 9;
      local_14 = (float)core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                                  (&DAT_01fba938,pfVar1,param_1,afStack_34 + 2,0);
      if ((0.0 <= local_14) && (local_14 < 1.0)) {
        local_50 = *param_1 - *pfVar1;
        local_4c = param_1[1] - param_1[10];
        local_48 = param_1[2] - param_1[0xb];
        local_68 = *pfVar1 + local_50 * local_14 * _DAT_0058cb88;
        local_64 = param_1[10] + local_4c * local_14 * _DAT_0058cb88;
        local_60 = param_1[0xb] + local_48 * local_14 * _DAT_0058cb88;
        if (param_1 != &local_68) {
          *param_1 = local_68;
          param_1[1] = local_64;
          param_1[2] = local_60;
        }
        iVar4 = (**(code **)((int)param_1[0xd] + 0xc))(param_1,afStack_34 + 2);
        if (iVar4 == 0) {
          pfVar1 = param_1 + 3;
          fVar3 = (fStack_24 * param_1[5] + afStack_34[2] * *pfVar1 + afStack_34[3] * param_1[4]) *
                  _DAT_0058cb8c;
          if (pfVar1 != afStack_5c) {
            *pfVar1 = afStack_34[2] * fVar3 - *pfVar1;
            param_1[4] = afStack_34[3] * fVar3 - param_1[4];
            param_1[5] = fStack_24 * fVar3 - param_1[5];
          }
          pfVar1 = param_1 + 3;
          fVar3 = param_1[4] * _DAT_0058cb90;
          fVar2 = _DAT_0058cb90 * param_1[5];
          if (pfVar1 != afStack_44) {
            *pfVar1 = *pfVar1 * _DAT_0058cb90;
            param_1[4] = fVar3;
            param_1[5] = fVar2;
          }
        }
        else {
          param_1[6] = 0.0;
        }
      }
    }
    fVar3 = param_1[6];
    param_1[6] = fVar3 - local_1c;
    if (fVar3 - local_1c < 0.0) {
      param_1[6] = 0.0;
      return;
    }
  }
  return;
}
