// Name: core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
// Address: 0050fb00
// Address Range: [[0050fb00, 0050fc8f]]
// Convention: unknown
// Signature: undefined4 core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

uint core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(int param_1,float *param_2,float *param_3)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float local_20 [3];
  uint local_14;
  
  if ((float *)(param_1 + 0x14cd28) != param_2) {
    *(float *)(param_1 + 0x14cd28) = *param_2;
    *(float *)(param_1 + 0x14cd2c) = param_2[1];
    *(float *)(param_1 + 0x14cd30) = param_2[2];
  }
  if ((float *)(param_1 + 0x14cd34) != param_3) {
    *(float *)(param_1 + 0x14cd34) = *param_3;
    *(float *)(param_1 + 0x14cd38) = param_3[1];
    *(float *)(param_1 + 0x14cd3c) = param_3[2];
  }
  puVar1 = (uint *)(param_1 + 0x15f2e4);
  local_14 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                       (&DAT_01fba938,param_2,param_3,puVar1,param_1 + 0x15f2f0);
  *(uint *)(param_1 + 0x15f2e0) = local_14;
  if ((uint *)(param_1 + 0x14cd40) != puVar1) {
    *(uint *)(param_1 + 0x14cd40) = *puVar1;
    *(uint *)(param_1 + 0x14cd44) = *(uint *)(param_1 + 0x15f2e8);
    *(uint *)(param_1 + 0x14cd48) = *(uint *)(param_1 + 0x15f2ec);
  }
  *(uint *)(param_1 + 0x14cd4c) = *(uint *)(param_1 + 0x15f2f0);
  if (*(float *)(param_1 + 0x15f2e0) < 0.0) {
    *(uint *)(param_1 + 0x15f2e0) = 0x3f8147ae;
  }
  uVar9 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
                    (param_1,0xbf800000,param_2,param_3,*(uint *)(param_1 + 0x15f2e0));
  *(uint *)(param_1 + 0x15f2dc) = uVar9;
  if (*(float *)(param_1 + 0x15f2dc) <= 1.0) {
    fVar3 = param_3[1];
    fVar4 = param_2[1];
    pfVar2 = (float *)(param_1 + 0x15f2dc);
    fVar5 = param_3[2];
    fVar6 = param_2[2];
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    if ((float *)(param_1 + 0x14cd50) != local_20) {
      *(float *)(param_1 + 0x14cd50) = *param_2 + (*param_3 - *param_2) * *pfVar2;
      *(float *)(param_1 + 0x14cd54) = fVar7 + (fVar3 - fVar4) * *pfVar2;
      *(float *)(param_1 + 0x14cd58) = fVar8 + (fVar5 - fVar6) * *pfVar2;
      return *(uint *)(param_1 + 0x15f2dc);
    }
  }
  return *(uint *)(param_1 + 0x15f2dc);
}
