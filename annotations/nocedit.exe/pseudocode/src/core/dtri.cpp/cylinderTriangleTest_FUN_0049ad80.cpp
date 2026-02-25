// Name: core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
// Address: 0049ad80
// Address Range: [[0049ad80, 0049b17c]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  CDemonTriangle *pCVar11;
  CDemonTriangle *pCVar12;
  CDemonTriangle *vertex2;
  bool bVar13;
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
  
  if ((triangle->normal).z * cylinder->dir_z + (triangle->normal).x * cylinder->dir_x <= 0.0) {
    return;
  }
  pCVar12 = (CDemonTriangle *)&triangle->vertex2;
  local_40 = (CDemonTriangle *)&triangle->vertex3;
  fVar1 = (triangle->vertex1).x * cylinder->dir_x + (triangle->vertex1).z * cylinder->dir_z;
  local_2c = ((CVector3f *)pCVar12)->x * cylinder->dir_x + (triangle->vertex2).z * cylinder->dir_z;
  fVar2 = (triangle->vertex3).z * cylinder->dir_z + ((CVector3f *)local_40)->x * cylinder->dir_x;
  pCVar11 = triangle;
  local_3c = fVar1;
  if (local_2c < fVar1) {
    pCVar11 = pCVar12;
    pCVar12 = triangle;
    local_3c = local_2c;
    local_2c = fVar1;
    local_28 = fVar1;
  }
  vertex2 = pCVar12;
  local_44 = fVar2;
  if (fVar2 < local_2c) {
    local_24 = local_2c;
    local_44 = local_2c;
    vertex2 = local_40;
    local_40 = pCVar12;
    local_2c = fVar2;
  }
  pCVar12 = pCVar11;
  if (local_2c < local_3c) {
    local_3c = local_2c;
    pCVar12 = vertex2;
    vertex2 = pCVar11;
  }
  if (local_44 < cylinder->sweep_slab_near) {
    return;
  }
  if (cylinder->sweep_slab_far < local_3c) {
    return;
  }
  bVar5 = cylinder->top_y <= (triangle->vertex1).y;
  if ((triangle->vertex1).y <= cylinder->bottom_y) {
    bVar5 = bVar5 | 2;
  }
  local_38 = (uint)bVar5;
  bVar6 = cylinder->top_y <= (triangle->vertex2).y;
  if ((triangle->vertex2).y <= cylinder->bottom_y) {
    bVar6 = bVar6 | 2;
  }
  local_30 = (uint)bVar6;
  bVar7 = cylinder->top_y <= (triangle->vertex3).y;
  if ((triangle->vertex3).y <= cylinder->bottom_y) {
    bVar7 = bVar7 | 2;
  }
  local_34 = (uint)bVar7;
  if ((bVar5 & bVar6 & bVar7) != 0) {
    return;
  }
  if (0.0 <= (triangle->normal).y) {
    bVar13 = ((bVar5 ^ bVar6) & 1) != 0;
    if (bVar13) {
      fVar1 = (cylinder->top_y - (triangle->vertex1).y) /
              ((triangle->vertex2).y - (triangle->vertex1).y);
      local_7c[0] = ((triangle->vertex2).x - (triangle->vertex1).x) * fVar1 + (triangle->vertex1).x;
      local_58[0] = ((triangle->vertex2).z - (triangle->vertex1).z) * fVar1 + (triangle->vertex1).z;
    }
    uVar9 = (uint)bVar13;
    uVar8 = uVar9;
    if (((bVar6 ^ bVar7) & 1) != 0) {
      fVar1 = (cylinder->top_y - (triangle->vertex2).y) /
              ((triangle->vertex3).y - (triangle->vertex2).y);
      local_7c[uVar9] =
           ((triangle->vertex3).x - (triangle->vertex2).x) * fVar1 + (triangle->vertex2).x;
      uVar8 = uVar9 + 1;
      local_7c[uVar9 + 9] =
           ((triangle->vertex3).z - (triangle->vertex2).z) * fVar1 + (triangle->vertex2).z;
    }
    uVar9 = uVar8;
    if (((bVar7 ^ bVar5) & 1) != 0) {
      fVar1 = (cylinder->top_y - (triangle->vertex3).y) /
              ((triangle->vertex1).y - (triangle->vertex3).y);
      local_7c[uVar8] =
           ((triangle->vertex1).x - (triangle->vertex3).x) * fVar1 + (triangle->vertex3).x;
      uVar9 = uVar8 + 1;
      local_7c[uVar8 + 9] =
           ((triangle->vertex1).z - (triangle->vertex3).z) * fVar1 + (triangle->vertex3).z;
    }
    if (1 < uVar9) {
      cylinder->edge_x1 = local_7c[0];
      cylinder->edge_z1 = local_58[0];
      cylinder->edge_x2 = local_7c[1];
      cylinder->edge_z2 = local_58[1];
      iVar10 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
      if (iVar10 != 0) goto LAB_0049b0c8;
    }
  }
  if ((triangle->normal).y <= 0.0) {
    bVar13 = ((local_38 ^ local_30) & 2) != 0;
    if (bVar13) {
      fVar1 = (cylinder->bottom_y - (triangle->vertex1).y) /
              ((triangle->vertex2).y - (triangle->vertex1).y);
      local_7c[3] = ((triangle->vertex2).x - (triangle->vertex1).x) * fVar1 + (triangle->vertex1).x;
      local_64[0] = ((triangle->vertex2).z - (triangle->vertex1).z) * fVar1 + (triangle->vertex1).z;
    }
    uVar9 = (uint)bVar13;
    uVar8 = uVar9;
    if (((local_30 ^ local_34) & 2) != 0) {
      fVar1 = (cylinder->bottom_y - (triangle->vertex2).y) /
              ((triangle->vertex3).y - (triangle->vertex2).y);
      local_7c[uVar9 + 3] =
           ((triangle->vertex3).x - (triangle->vertex2).x) * fVar1 + (triangle->vertex2).x;
      uVar8 = uVar9 + 1;
      local_7c[uVar9 + 6] =
           ((triangle->vertex3).z - (triangle->vertex2).z) * fVar1 + (triangle->vertex2).z;
    }
    uVar9 = uVar8;
    if (((local_34 ^ local_38) & 2) != 0) {
      fVar1 = (cylinder->bottom_y - (triangle->vertex3).y) /
              ((triangle->vertex1).y - (triangle->vertex3).y);
      local_7c[uVar8 + 3] =
           ((triangle->vertex1).x - (triangle->vertex3).x) * fVar1 + (triangle->vertex3).x;
      uVar9 = uVar8 + 1;
      local_7c[uVar8 + 6] =
           ((triangle->vertex1).z - (triangle->vertex3).z) * fVar1 + (triangle->vertex3).z;
    }
    if (1 < uVar9) {
      cylinder->edge_x1 = local_7c[3];
      cylinder->edge_z1 = local_64[0];
      cylinder->edge_x2 = local_7c[4];
      cylinder->edge_z2 = local_64[1];
      iVar10 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
      if (iVar10 != 0) {
LAB_0049b0c8:
        (cylinder->push_normal).y = 0.0;
        fVar1 = cylinder->dir_x;
        fVar2 = cylinder->param_t;
        cylinder->closest_t = cylinder->param_t;
        fVar3 = cylinder->center_x;
        fVar4 = cylinder->intersect_x;
        (cylinder->push_normal).z =
             (cylinder->dir_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
        (cylinder->push_normal).x = (fVar1 * fVar2 + fVar3) - fVar4;
        return;
      }
    }
  }
  core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
            (cylinder,&pCVar12->vertex1,&vertex2->vertex1);
  core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
            (cylinder,&pCVar12->vertex1,&local_40->vertex1);
  return;
}
