// Name: core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
// Address: 0049ad80
// Address Range: [[0049ad80, 0049b17c]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)

{
  float fVar5;
  float fVar6;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar7;
  uint uVar10;
  int iVar11;
  CDemonTriangle *pCVar11;
  CDemonTriangle *pCVar12;
  CDemonTriangle *pCVar13;
  CDemonTriangle *vertex2;
  bool bVar13;
  bool bVar14;
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
  float fVar1;
  float fVar2;
  byte bVar7;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  
  if ((triangle->normal).z * cylinder->dir_z + (triangle->normal).x * cylinder->dir_x <= 0.0) {
    return;
  }
  pCVar13 = (CDemonTriangle *)&triangle->vertex2;
  local_40 = (CDemonTriangle *)&triangle->vertex3;
  fVar5 = (triangle->vertex1).x * cylinder->dir_x + (triangle->vertex1).z * cylinder->dir_z;
  local_2c = ((CVector3f *)pCVar13)->x * cylinder->dir_x + (triangle->vertex2).z * cylinder->dir_z;
  fVar6 = (triangle->vertex3).z * cylinder->dir_z + ((CVector3f *)local_40)->x * cylinder->dir_x;
  pCVar11 = triangle;
  local_3c = fVar5;
  if (local_2c < fVar5) {
    pCVar11 = pCVar13;
    pCVar13 = triangle;
    local_3c = local_2c;
    local_2c = fVar5;
  }
  vertex2 = pCVar13;
  local_44 = fVar6;
  if (fVar6 < local_2c) {
    local_44 = local_2c;
    vertex2 = local_40;
    local_40 = pCVar13;
    local_2c = fVar6;
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
  bVar6 = cylinder->top_y <= (triangle->vertex2).y;
  if ((triangle->vertex2).y <= cylinder->bottom_y) {
    bVar6 = bVar6 | 2;
  }
  bVar7 = cylinder->top_y <= (triangle->vertex3).y;
  if ((triangle->vertex3).y <= cylinder->bottom_y) {
    bVar7 = bVar7 | 2;
  }
  if ((bVar5 & bVar6 & bVar7) != 0) {
    return;
  }
  if (0.0 <= (triangle->normal).y) {
    bVar13 = ((bVar5 ^ bVar6) & 1) != 0;
    if (bVar13) {
      fVar5 = (cylinder->top_y - (triangle->vertex1).y) /
              ((triangle->vertex2).y - (triangle->vertex1).y);
      local_7c[0] = ((triangle->vertex2).x - (triangle->vertex1).x) * fVar5 + (triangle->vertex1).x;
      local_58[0] = ((triangle->vertex2).z - (triangle->vertex1).z) * fVar5 + (triangle->vertex1).z;
    }
    uVar7 = (uint)bVar13;
    uVar8 = uVar7;
    if (((bVar6 ^ bVar7) & 1) != 0) {
      fVar5 = (cylinder->top_y - (triangle->vertex2).y) /
              ((triangle->vertex3).y - (triangle->vertex2).y);
      local_7c[uVar7] =
           ((triangle->vertex3).x - (triangle->vertex2).x) * fVar5 + (triangle->vertex2).x;
      uVar8 = uVar7 + 1;
      local_64[uVar7 + 3] =
           ((triangle->vertex3).z - (triangle->vertex2).z) * fVar5 + (triangle->vertex2).z;
    }
    uVar9 = uVar8;
    if (((bVar7 ^ bVar5) & 1) != 0) {
      fVar5 = (cylinder->top_y - (triangle->vertex3).y) /
              ((triangle->vertex1).y - (triangle->vertex3).y);
      local_7c[uVar8] =
           ((triangle->vertex1).x - (triangle->vertex3).x) * fVar5 + (triangle->vertex3).x;
      uVar9 = uVar8 + 1;
      local_64[uVar8 + 3] =
           ((triangle->vertex1).z - (triangle->vertex3).z) * fVar5 + (triangle->vertex3).z;
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
    bVar14 = ((bVar5 ^ bVar6) & 2) != 0;
    if (bVar14) {
      fVar5 = (cylinder->bottom_y - (triangle->vertex1).y) /
              ((triangle->vertex2).y - (triangle->vertex1).y);
      local_7c[3] = ((triangle->vertex2).x - (triangle->vertex1).x) * fVar5 + (triangle->vertex1).x;
      local_64[0] = ((triangle->vertex2).z - (triangle->vertex1).z) * fVar5 + (triangle->vertex1).z;
    }
    uVar10 = (uint)bVar14;
    uVar7 = uVar10;
    if (((bVar6 ^ bVar7) & 2) != 0) {
      fVar5 = (cylinder->bottom_y - (triangle->vertex2).y) /
              ((triangle->vertex3).y - (triangle->vertex2).y);
      local_7c[uVar10 + 3] =
           ((triangle->vertex3).x - (triangle->vertex2).x) * fVar5 + (triangle->vertex2).x;
      uVar7 = uVar10 + 1;
      local_7c[uVar10 + 6] =
           ((triangle->vertex3).z - (triangle->vertex2).z) * fVar5 + (triangle->vertex2).z;
    }
    uVar10 = uVar7;
    if (((bVar7 ^ bVar5) & 2) != 0) {
      fVar5 = (cylinder->bottom_y - (triangle->vertex3).y) /
              ((triangle->vertex1).y - (triangle->vertex3).y);
      local_7c[uVar7 + 3] =
           ((triangle->vertex1).x - (triangle->vertex3).x) * fVar5 + (triangle->vertex3).x;
      uVar10 = uVar7 + 1;
      local_7c[uVar7 + 6] =
           ((triangle->vertex1).z - (triangle->vertex3).z) * fVar5 + (triangle->vertex3).z;
    }
    if (1 < uVar10) {
      cylinder->edge_x1 = local_7c[3];
      cylinder->edge_z1 = local_64[0];
      cylinder->edge_x2 = local_7c[4];
      cylinder->edge_z2 = local_64[1];
      iVar11 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
      if (iVar11 != 0) {
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
