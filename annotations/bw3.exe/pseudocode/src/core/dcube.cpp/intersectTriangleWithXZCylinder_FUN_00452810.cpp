// Name: core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00452810
// Address: 00452810
// Address Range: [[00452810, 00452ca5]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00452810(int *param_1,SIntersectXZCylinder *param_2)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00452810(int *param_1,SIntersectXZCylinder *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  bool bVar16;
  float local_84 [6];
  float local_6c [3];
  float local_60 [3];
  int local_54;
  float local_50;
  float local_44;
  float local_38;
  float *local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  int local_1c;
  
  if ((float)param_1[5] * param_2->dir_z + (float)param_1[3] * param_2->dir_x <= 0.0) {
    return 0;
  }
  pfVar15 = (float *)*param_1;
  pfVar14 = (float *)param_1[1];
  local_34 = (float *)param_1[2];
  fVar1 = *pfVar15 * param_2->dir_x + pfVar15[2] * param_2->dir_z;
  local_20 = *pfVar14 * param_2->dir_x + pfVar14[2] * param_2->dir_z;
  fVar2 = *local_34 * param_2->dir_x + local_34[2] * param_2->dir_z;
  pfVar13 = pfVar15;
  local_30 = fVar1;
  if (local_20 < fVar1) {
    pfVar13 = pfVar14;
    pfVar14 = pfVar15;
    local_50 = fVar1;
    local_30 = local_20;
    local_20 = fVar1;
  }
  pfVar15 = pfVar14;
  local_38 = fVar2;
  if (fVar2 < local_20) {
    local_44 = local_20;
    local_38 = local_20;
    pfVar15 = local_34;
    local_34 = pfVar14;
    local_20 = fVar2;
  }
  pfVar14 = pfVar13;
  if (local_20 < local_30) {
    local_30 = local_20;
    pfVar14 = pfVar15;
    pfVar15 = pfVar13;
  }
  if (local_38 < param_2->sweep_slab_near) {
    return 0;
  }
  if (param_2->sweep_slab_far < local_30) {
    return 0;
  }
  bVar7 = param_2->top_y <= *(float *)(*param_1 + 4);
  if (*(float *)(*param_1 + 4) <= param_2->bottom_y) {
    bVar7 = bVar7 | 2;
  }
  local_2c = (uint)bVar7;
  bVar8 = param_2->top_y <= *(float *)(param_1[1] + 4);
  if (*(float *)(param_1[1] + 4) <= param_2->bottom_y) {
    bVar8 = bVar8 | 2;
  }
  local_28 = (uint)bVar8;
  bVar9 = param_2->top_y <= *(float *)(param_1[2] + 4);
  if (*(float *)(param_1[2] + 4) <= param_2->bottom_y) {
    bVar9 = bVar9 | 2;
  }
  local_24 = (uint)bVar9;
  if ((bVar7 & bVar8 & bVar9) != 0) {
    return 0;
  }
  if (0.0 <= (float)param_1[4]) {
    bVar16 = ((bVar7 ^ bVar8) & 1) != 0;
    if (bVar16) {
      pfVar13 = (float *)*param_1;
      fVar1 = (param_2->top_y - pfVar13[1]) / (((float *)param_1[1])[1] - pfVar13[1]);
      local_6c[0] = (*(float *)param_1[1] - *pfVar13) * fVar1 + *pfVar13;
      local_84[3] = (*(float *)(param_1[1] + 8) - *(float *)(*param_1 + 8)) * fVar1 +
                    *(float *)(*param_1 + 8);
    }
    uVar11 = (uint)bVar16;
    uVar10 = uVar11;
    if (((bVar8 ^ bVar9) & 1) != 0) {
      pfVar13 = (float *)param_1[1];
      fVar1 = (param_2->top_y - pfVar13[1]) / (((float *)param_1[2])[1] - pfVar13[1]);
      local_84[uVar11 + 6] = (*(float *)param_1[2] - *pfVar13) * fVar1 + *pfVar13;
      local_1c = param_1[2];
      local_54 = param_1[1];
      uVar10 = uVar11 + 1;
      local_84[uVar11 + 3] =
           (*(float *)(local_1c + 8) - *(float *)(local_54 + 8)) * fVar1 + *(float *)(local_54 + 8);
    }
    uVar11 = uVar10;
    if (((bVar9 ^ bVar7) & 1) != 0) {
      pfVar13 = (float *)param_1[2];
      fVar1 = (param_2->top_y - pfVar13[1]) / (((float *)*param_1)[1] - pfVar13[1]);
      local_1c = uVar10 * 4;
      local_84[uVar10 + 6] = (*(float *)*param_1 - *pfVar13) * fVar1 + *pfVar13;
      uVar11 = uVar10 + 1;
      local_84[uVar10 + 3] =
           (*(float *)(*param_1 + 8) - *(float *)(param_1[2] + 8)) * fVar1 +
           *(float *)(param_1[2] + 8);
    }
    if (1 < uVar11) {
      param_2->edge_x1 = local_6c[0];
      param_2->edge_z1 = local_84[3];
      param_2->edge_x2 = local_6c[1];
      param_2->edge_z2 = local_84[4];
      iVar12 = core_dcube_cpp_intersectXZCylinder_FUN_00452490(param_2);
      if (iVar12 != 0) goto LAB_00452bd4;
    }
  }
  if ((float)param_1[4] <= 0.0) {
    bVar16 = ((local_2c ^ local_28) & 2) != 0;
    if (bVar16) {
      pfVar13 = (float *)*param_1;
      fVar1 = (param_2->bottom_y - pfVar13[1]) / (((float *)param_1[1])[1] - pfVar13[1]);
      local_60[0] = (*(float *)param_1[1] - *pfVar13) * fVar1 + *pfVar13;
      local_84[0] = (*(float *)(param_1[1] + 8) - *(float *)(*param_1 + 8)) * fVar1 +
                    *(float *)(*param_1 + 8);
    }
    uVar11 = (uint)bVar16;
    uVar10 = uVar11;
    if (((local_28 ^ local_24) & 2) != 0) {
      pfVar13 = (float *)param_1[1];
      fVar1 = (param_2->bottom_y - pfVar13[1]) / (((float *)param_1[2])[1] - pfVar13[1]);
      local_1c = uVar11 * 4;
      local_84[uVar11 + 9] = (*(float *)param_1[2] - *pfVar13) * fVar1 + *pfVar13;
      uVar10 = uVar11 + 1;
      local_84[uVar11] =
           (*(float *)(param_1[2] + 8) - *(float *)(param_1[1] + 8)) * fVar1 +
           *(float *)(param_1[1] + 8);
    }
    uVar11 = uVar10;
    if (((local_24 ^ local_2c) & 2) != 0) {
      pfVar13 = (float *)param_1[2];
      fVar1 = (param_2->bottom_y - pfVar13[1]) / (((float *)*param_1)[1] - pfVar13[1]);
      local_1c = uVar10 * 4;
      local_84[uVar10 + 9] = (*(float *)*param_1 - *pfVar13) * fVar1 + *pfVar13;
      uVar11 = uVar10 + 1;
      local_84[uVar10] =
           (*(float *)(*param_1 + 8) - *(float *)(param_1[2] + 8)) * fVar1 +
           *(float *)(param_1[2] + 8);
    }
    if (1 < uVar11) {
      param_2->edge_x1 = local_60[0];
      param_2->edge_z1 = local_84[0];
      param_2->edge_x2 = local_60[1];
      param_2->edge_z2 = local_84[1];
      iVar12 = core_dcube_cpp_intersectXZCylinder_FUN_00452490(param_2);
      if (iVar12 != 0) {
LAB_00452bd4:
        fVar1 = param_2->dir_x;
        fVar2 = param_2->param_t;
        fVar3 = param_2->dir_z;
        fVar4 = param_2->param_t;
        fVar5 = param_2->param_t;
        (param_2->push_normal).y = 0.0;
        param_2->closest_t = fVar5;
        fVar5 = param_2->center_x;
        fVar6 = param_2->intersect_x;
        (param_2->push_normal).z = (fVar3 * fVar4 + param_2->center_z) - param_2->intersect_z;
        (param_2->push_normal).x = (fVar1 * fVar2 + fVar5) - fVar6;
        return 1;
      }
    }
  }
  uVar10 = core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00452770(param_2,pfVar14,pfVar15);
  uVar11 = core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00452770(param_2,pfVar14,local_34);
  return uVar11 | uVar10;
}
