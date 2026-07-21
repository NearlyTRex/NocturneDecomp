// Name: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
// Address: 0044b290
// Address Range: [[0044b290, 0044b42b]]
// Convention: unknown
// Signature: float core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290(int param_1,uint param_2,uint param_3,float *param_4,uint *param_5)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  float local_2c [3];
  int local_20;
  float local_1c;
  float local_18;
  
  iVar4 = 0;
  local_20 = -1;
  local_1c = 1.0001;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar5 = 0;
    do {
      local_18 = (float)core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
                                  (*(int *)(param_1 + 0x2c) + iVar5,param_2,param_3);
      if (((0.0 <= local_18) && (local_18 < local_1c)) && (local_18 <= 1.0)) {
        local_20 = iVar4;
        local_1c = local_18;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  if (-1 < local_20) {
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar5 = local_20 * 0x20;
    fVar1 = *(float *)(iVar4 + 0x10 + iVar5);
    fVar2 = *(float *)(iVar4 + 0x14 + iVar5);
    if (local_2c != param_4) {
      *param_4 = -*(float *)(iVar4 + 0xc + iVar5);
      param_4[1] = -fVar1;
      param_4[2] = -fVar2;
    }
    *param_5 = (uint)*(byte *)(*(int *)(param_1 + 0x30) + local_20);
    puVar3 = *(uint **)(*(int *)(param_1 + 0x2c) + local_20 * 0x20);
    if (puVar3 != (uint *)&DAT_014b89e8) {
      _DAT_014b89e8 = *puVar3;
      _DAT_014b89f0 = puVar3[2];
      _DAT_014b89ec = puVar3[1];
    }
    puVar3 = *(uint **)(*(int *)(param_1 + 0x2c) + 4 + local_20 * 0x20);
    if (puVar3 != (uint *)&DAT_014b89f4) {
      _DAT_014b89f4 = *puVar3;
      _DAT_014b89fc = puVar3[2];
      _DAT_014b89f8 = puVar3[1];
    }
    puVar3 = *(uint **)(*(int *)(param_1 + 0x2c) + 8 + local_20 * 0x20);
    if (puVar3 != (uint *)&DAT_014b8a00) {
      _DAT_014b8a04 = puVar3[1];
      _DAT_014b8a08 = puVar3[2];
      _DAT_014b8a00 = *puVar3;
      return local_1c;
    }
  }
  return local_1c;
}
