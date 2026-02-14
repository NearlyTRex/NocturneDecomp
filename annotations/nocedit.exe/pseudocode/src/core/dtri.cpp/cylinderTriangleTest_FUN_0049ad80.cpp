// Name: core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
// Address: 0049ad80
// Address Range: [[0049ad80, 0049b17c]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CDemonTriangle *pCVar9;
  CDemonTriangle *pCVar10;
  CDemonTriangle *vertex2;
  bool bVar11;
  float local_7c [6];
  float local_64 [3];
  float local_58 [5];
  float local_44;
  CDemonTriangle *local_40;
  float local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if ((triangle->normal).z * cylinder->normal_z + (triangle->normal).x * cylinder->normal_x <= 0.0)
  {
    return;
  }
  pCVar10 = (CDemonTriangle *)&triangle->vertex2;
  local_40 = (CDemonTriangle *)&triangle->vertex3;
  fVar4 = (triangle->vertex1).x * cylinder->normal_x + (triangle->vertex1).z * cylinder->normal_z;
  local_2c = ((CVector3f *)pCVar10)->x * cylinder->normal_x +
             (triangle->vertex2).z * cylinder->normal_z;
  fVar5 = (triangle->vertex3).z * cylinder->normal_z +
          ((CVector3f *)local_40)->x * cylinder->normal_x;
  pCVar9 = triangle;
  local_3c = fVar4;
  if (local_2c < fVar4) {
    pCVar9 = pCVar10;
    pCVar10 = triangle;
    local_3c = local_2c;
    local_2c = fVar4;
    local_28 = fVar4;
  }
  vertex2 = pCVar10;
  local_44 = fVar5;
  if (fVar5 < local_2c) {
    local_24 = local_2c;
    local_44 = local_2c;
    vertex2 = local_40;
    local_40 = pCVar10;
    local_2c = fVar5;
  }
  pCVar10 = pCVar9;
  if (local_2c < local_3c) {
    local_3c = local_2c;
    pCVar10 = vertex2;
    vertex2 = pCVar9;
  }
  if (local_44 < cylinder->inner_radius) {
    return;
  }
  if (cylinder->outer_radius < local_3c) {
    return;
  }
  bVar1 = cylinder->bottom_y <= (triangle->vertex1).y;
  if ((triangle->vertex1).y <= cylinder->top_y) {
    bVar1 = bVar1 | 2;
  }
  local_38 = (uint)bVar1;
  bVar2 = cylinder->bottom_y <= (triangle->vertex2).y;
  if ((triangle->vertex2).y <= cylinder->top_y) {
    bVar2 = bVar2 | 2;
  }
  local_30 = (uint)bVar2;
  bVar3 = cylinder->bottom_y <= (triangle->vertex3).y;
  if ((triangle->vertex3).y <= cylinder->top_y) {
    bVar3 = bVar3 | 2;
  }
  local_34 = (uint)bVar3;
  if ((bVar1 & bVar2 & bVar3) != 0) {
    return;
  }
  if (0.0 <= (triangle->normal).y) {
    bVar11 = ((bVar1 ^ bVar2) & 1) != 0;
    if (bVar11) {
      fVar4 = (cylinder->bottom_y - (triangle->vertex1).y) /
              ((triangle->vertex2).y - (triangle->vertex1).y);
      local_7c[0] = ((triangle->vertex2).x - (triangle->vertex1).x) * fVar4 + (triangle->vertex1).x;
      local_58[0] = ((triangle->vertex2).z - (triangle->vertex1).z) * fVar4 + (triangle->vertex1).z;
    }
    uVar7 = (uint)bVar11;
    uVar6 = uVar7;
    if (((bVar2 ^ bVar3) & 1) != 0) {
      fVar4 = (cylinder->bottom_y - (triangle->vertex2).y) /
              ((triangle->vertex3).y - (triangle->vertex2).y);
      local_7c[uVar7] =
           ((triangle->vertex3).x - (triangle->vertex2).x) * fVar4 + (triangle->vertex2).x;
      uVar6 = uVar7 + 1;
      local_7c[uVar7 + 9] =
           ((triangle->vertex3).z - (triangle->vertex2).z) * fVar4 + (triangle->vertex2).z;
    }
    uVar7 = uVar6;
    if (((bVar3 ^ bVar1) & 1) != 0) {
      fVar4 = (cylinder->bottom_y - (triangle->vertex3).y) /
              ((triangle->vertex1).y - (triangle->vertex3).y);
      local_7c[uVar6] =
           ((triangle->vertex1).x - (triangle->vertex3).x) * fVar4 + (triangle->vertex3).x;
      uVar7 = uVar6 + 1;
      local_7c[uVar6 + 9] =
           ((triangle->vertex1).z - (triangle->vertex3).z) * fVar4 + (triangle->vertex3).z;
    }
    if (1 < uVar7) {
      cylinder->edge_x1 = local_7c[0];
      cylinder->edge_z1 = local_58[0];
      cylinder->edge_x2 = local_7c[1];
      cylinder->edge_z2 = local_58[1];
      iVar8 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
      if (iVar8 != 0) goto LAB_0049b0c8;
    }
  }
  if ((triangle->normal).y <= 0.0) {
    bVar11 = ((local_38 ^ local_30) & 2) != 0;
    if (bVar11) {
      fVar4 = (cylinder->top_y - (triangle->vertex1).y) /
              ((triangle->vertex2).y - (triangle->vertex1).y);
      local_7c[3] = ((triangle->vertex2).x - (triangle->vertex1).x) * fVar4 + (triangle->vertex1).x;
      local_64[0] = ((triangle->vertex2).z - (triangle->vertex1).z) * fVar4 + (triangle->vertex1).z;
    }
    uVar7 = (uint)bVar11;
    uVar6 = uVar7;
    if (((local_30 ^ local_34) & 2) != 0) {
      fVar4 = (cylinder->top_y - (triangle->vertex2).y) /
              ((triangle->vertex3).y - (triangle->vertex2).y);
      local_7c[uVar7 + 3] =
           ((triangle->vertex3).x - (triangle->vertex2).x) * fVar4 + (triangle->vertex2).x;
      uVar6 = uVar7 + 1;
      local_7c[uVar7 + 6] =
           ((triangle->vertex3).z - (triangle->vertex2).z) * fVar4 + (triangle->vertex2).z;
    }
    uVar7 = uVar6;
    if (((local_34 ^ local_38) & 2) != 0) {
      fVar4 = (cylinder->top_y - (triangle->vertex3).y) /
              ((triangle->vertex1).y - (triangle->vertex3).y);
      local_7c[uVar6 + 3] =
           ((triangle->vertex1).x - (triangle->vertex3).x) * fVar4 + (triangle->vertex3).x;
      uVar7 = uVar6 + 1;
      local_7c[uVar6 + 6] =
           ((triangle->vertex1).z - (triangle->vertex3).z) * fVar4 + (triangle->vertex3).z;
    }
    if (1 < uVar7) {
      cylinder->edge_x1 = local_7c[3];
      cylinder->edge_z1 = local_64[0];
      cylinder->edge_x2 = local_7c[4];
      cylinder->edge_z2 = local_64[1];
      iVar8 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
      if (iVar8 != 0) {
LAB_0049b0c8:
        cylinder->flags = 0;
        cylinder->max_distance = cylinder->param_t;
        cylinder->push_x =
             (cylinder->normal_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
        cylinder->push_z =
             (cylinder->normal_x * cylinder->param_t + cylinder->center_x) - cylinder->intersect_x;
        return;
      }
    }
  }
  core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
            (cylinder,&pCVar10->vertex1,&vertex2->vertex1);
  core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
            (cylinder,&pCVar10->vertex1,&local_40->vertex1);
  return;
}
