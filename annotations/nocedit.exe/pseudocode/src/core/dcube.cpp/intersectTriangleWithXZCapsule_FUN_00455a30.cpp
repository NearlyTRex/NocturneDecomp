// Name: core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30
// Address: 00455a30
// Address Range: [[00455a30, 00455ec5]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_intersectTriangleWithXZCapsule_FUN_00455a30 (CVector3f **triangle_vertices,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

uint __cdecl
core_dcube_cpp_intersectTriangleWithXZCapsule_FUN_00455a30
          (CVector3f **triangle_vertices,SIntersectXZCylinder *cylinder)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar11;
  bool bVar12;
  float local_84 [6];
  float local_6c [3];
  float local_60 [3];
  CVector3f *local_54;
  float local_50;
  float local_44;
  float local_38;
  CVector3f *local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  CVector3f *local_1c;
  
  if ((float)triangle_vertices[5] * cylinder->normal_z +
      (float)triangle_vertices[3] * cylinder->normal_x <= 0.0) {
    return 0;
  }
  pCVar11 = *triangle_vertices;
  pCVar10 = triangle_vertices[1];
  local_34 = triangle_vertices[2];
  fVar4 = pCVar11->x * cylinder->normal_x + pCVar11->z * cylinder->normal_z;
  local_20 = pCVar10->x * cylinder->normal_x + pCVar10->z * cylinder->normal_z;
  fVar5 = local_34->x * cylinder->normal_x + local_34->z * cylinder->normal_z;
  pCVar9 = pCVar11;
  local_30 = fVar4;
  if (local_20 < fVar4) {
    pCVar9 = pCVar10;
    pCVar10 = pCVar11;
    local_50 = fVar4;
    local_30 = local_20;
    local_20 = fVar4;
  }
  pCVar11 = pCVar10;
  local_38 = fVar5;
  if (fVar5 < local_20) {
    local_44 = local_20;
    local_38 = local_20;
    pCVar11 = local_34;
    local_34 = pCVar10;
    local_20 = fVar5;
  }
  pCVar10 = pCVar9;
  if (local_20 < local_30) {
    local_30 = local_20;
    pCVar10 = pCVar11;
    pCVar11 = pCVar9;
  }
  if (local_38 < cylinder->inner_radius) {
    return 0;
  }
  if (cylinder->outer_radius < local_30) {
    return 0;
  }
  bVar1 = cylinder->bottom_y <= (*triangle_vertices)->y;
  if ((*triangle_vertices)->y <= cylinder->top_y) {
    bVar1 = bVar1 | 2;
  }
  local_2c = (uint)bVar1;
  bVar2 = cylinder->bottom_y <= triangle_vertices[1]->y;
  if (triangle_vertices[1]->y <= cylinder->top_y) {
    bVar2 = bVar2 | 2;
  }
  local_28 = (uint)bVar2;
  bVar3 = cylinder->bottom_y <= triangle_vertices[2]->y;
  if (triangle_vertices[2]->y <= cylinder->top_y) {
    bVar3 = bVar3 | 2;
  }
  local_24 = (uint)bVar3;
  if ((bVar1 & bVar2 & bVar3) != 0) {
    return 0;
  }
  if (0.0 <= (float)triangle_vertices[4]) {
    bVar12 = ((bVar1 ^ bVar2) & 1) != 0;
    if (bVar12) {
      pCVar9 = *triangle_vertices;
      fVar4 = (cylinder->bottom_y - pCVar9->y) / (triangle_vertices[1]->y - pCVar9->y);
      local_6c[0] = (triangle_vertices[1]->x - pCVar9->x) * fVar4 + pCVar9->x;
      local_84[3] = (triangle_vertices[1]->z - (*triangle_vertices)->z) * fVar4 +
                    (*triangle_vertices)->z;
    }
    uVar7 = (uint)bVar12;
    uVar6 = uVar7;
    if (((bVar2 ^ bVar3) & 1) != 0) {
      pCVar9 = triangle_vertices[1];
      fVar4 = (cylinder->bottom_y - pCVar9->y) / (triangle_vertices[2]->y - pCVar9->y);
      local_84[uVar7 + 6] = (triangle_vertices[2]->x - pCVar9->x) * fVar4 + pCVar9->x;
      local_1c = triangle_vertices[2];
      local_54 = triangle_vertices[1];
      uVar6 = uVar7 + 1;
      local_84[uVar7 + 3] = (local_1c->z - local_54->z) * fVar4 + local_54->z;
    }
    uVar7 = uVar6;
    if (((bVar3 ^ bVar1) & 1) != 0) {
      pCVar9 = triangle_vertices[2];
      fVar4 = (cylinder->bottom_y - pCVar9->y) / ((*triangle_vertices)->y - pCVar9->y);
      local_1c = (CVector3f *)(uVar6 * 4);
      local_84[uVar6 + 6] = ((*triangle_vertices)->x - pCVar9->x) * fVar4 + pCVar9->x;
      uVar7 = uVar6 + 1;
      local_84[uVar6 + 3] =
           ((*triangle_vertices)->z - triangle_vertices[2]->z) * fVar4 + triangle_vertices[2]->z;
    }
    if (1 < uVar7) {
      cylinder->edge_x1 = local_6c[0];
      cylinder->edge_z1 = local_84[3];
      cylinder->edge_x2 = local_6c[1];
      cylinder->edge_z2 = local_84[4];
      iVar8 = core_dcube_cpp_intersectXZCapsule_FUN_004556b0(cylinder);
      if (iVar8 != 0) goto LAB_00455df4;
    }
  }
  if ((float)triangle_vertices[4] <= 0.0) {
    bVar12 = ((local_2c ^ local_28) & 2) != 0;
    if (bVar12) {
      pCVar9 = *triangle_vertices;
      fVar4 = (cylinder->top_y - pCVar9->y) / (triangle_vertices[1]->y - pCVar9->y);
      local_60[0] = (triangle_vertices[1]->x - pCVar9->x) * fVar4 + pCVar9->x;
      local_84[0] = (triangle_vertices[1]->z - (*triangle_vertices)->z) * fVar4 +
                    (*triangle_vertices)->z;
    }
    uVar7 = (uint)bVar12;
    uVar6 = uVar7;
    if (((local_28 ^ local_24) & 2) != 0) {
      pCVar9 = triangle_vertices[1];
      fVar4 = (cylinder->top_y - pCVar9->y) / (triangle_vertices[2]->y - pCVar9->y);
      local_1c = (CVector3f *)(uVar7 * 4);
      local_84[uVar7 + 9] = (triangle_vertices[2]->x - pCVar9->x) * fVar4 + pCVar9->x;
      uVar6 = uVar7 + 1;
      local_84[uVar7] =
           (triangle_vertices[2]->z - triangle_vertices[1]->z) * fVar4 + triangle_vertices[1]->z;
    }
    uVar7 = uVar6;
    if (((local_24 ^ local_2c) & 2) != 0) {
      pCVar9 = triangle_vertices[2];
      fVar4 = (cylinder->top_y - pCVar9->y) / ((*triangle_vertices)->y - pCVar9->y);
      local_1c = (CVector3f *)(uVar6 * 4);
      local_84[uVar6 + 9] = ((*triangle_vertices)->x - pCVar9->x) * fVar4 + pCVar9->x;
      uVar7 = uVar6 + 1;
      local_84[uVar6] =
           ((*triangle_vertices)->z - triangle_vertices[2]->z) * fVar4 + triangle_vertices[2]->z;
    }
    if (1 < uVar7) {
      cylinder->edge_x1 = local_60[0];
      cylinder->edge_z1 = local_84[0];
      cylinder->edge_x2 = local_60[1];
      cylinder->edge_z2 = local_84[1];
      iVar8 = core_dcube_cpp_intersectXZCapsule_FUN_004556b0(cylinder);
      if (iVar8 != 0) {
LAB_00455df4:
        cylinder->flags = 0;
        cylinder->max_distance = cylinder->param_t;
        cylinder->push_x =
             (cylinder->normal_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
        cylinder->push_z =
             (cylinder->normal_x * cylinder->param_t + cylinder->center_x) - cylinder->intersect_x;
        return 1;
      }
    }
  }
  uVar6 = core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990(cylinder,pCVar10,pCVar11);
  uVar7 = core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990(cylinder,pCVar10,local_34);
  return uVar7 | uVar6;
}
