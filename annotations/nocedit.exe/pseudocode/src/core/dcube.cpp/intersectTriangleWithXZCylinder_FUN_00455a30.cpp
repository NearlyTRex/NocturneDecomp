// Name: core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00455a30
// Address: 00455a30
// Address Range: [[00455a30, 00455ec5]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00455a30(STriangleRef *triangle,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00455a30(STriangleRef *triangle,SIntersectXZCylinder *cylinder)

{
  float fVar7;
  CVector3f *pCVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar12;
  uint uVar13;
  int iVar14;
  CVector3f *pCVar13;
  CVector3f *pCVar14;
  CVector3f *pCVar16;
  CVector3f *pCVar15;
  bool bVar16;
  bool bVar17;
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
  float fVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  float fVar3;
  float fVar4;
  byte bVar9;
  byte bVar7;
  byte bVar8;
  
  if ((triangle->normal).z * cylinder->dir_z + (triangle->normal).x * cylinder->dir_x <= 0.0) {
    return 0;
  }
  pCVar8 = triangle->vertices[0];
  pCVar16 = triangle->vertices[1];
  local_34 = triangle->vertices[2];
  fVar7 = pCVar8->x * cylinder->dir_x + pCVar8->z * cylinder->dir_z;
  local_20 = pCVar16->x * cylinder->dir_x + pCVar16->z * cylinder->dir_z;
  fVar9 = local_34->x * cylinder->dir_x + local_34->z * cylinder->dir_z;
  pCVar13 = pCVar8;
  local_30 = fVar7;
  if (local_20 < fVar7) {
    pCVar13 = pCVar16;
    pCVar16 = pCVar8;
    local_30 = local_20;
    local_20 = fVar7;
  }
  pCVar15 = pCVar16;
  local_38 = fVar9;
  if (fVar9 < local_20) {
    local_38 = local_20;
    pCVar15 = local_34;
    local_34 = pCVar16;
    local_20 = fVar9;
  }
  pCVar14 = pCVar13;
  if (local_20 < local_30) {
    local_30 = local_20;
    pCVar14 = pCVar15;
    pCVar15 = pCVar13;
  }
  if (local_38 < cylinder->sweep_slab_near) {
    return 0;
  }
  if (cylinder->sweep_slab_far < local_30) {
    return 0;
  }
  bVar7 = cylinder->top_y <= triangle->vertices[0]->y;
  if (triangle->vertices[0]->y <= cylinder->bottom_y) {
    bVar7 = bVar7 | 2;
  }
  bVar8 = cylinder->top_y <= triangle->vertices[1]->y;
  if (triangle->vertices[1]->y <= cylinder->bottom_y) {
    bVar8 = bVar8 | 2;
  }
  bVar9 = cylinder->top_y <= triangle->vertices[2]->y;
  if (triangle->vertices[2]->y <= cylinder->bottom_y) {
    bVar9 = bVar9 | 2;
  }
  if ((bVar7 & bVar8 & bVar9) != 0) {
    return 0;
  }
  if (0.0 <= (triangle->normal).y) {
    bVar16 = ((bVar7 ^ bVar8) & 1) != 0;
    if (bVar16) {
      pCVar8 = triangle->vertices[0];
      fVar7 = (cylinder->top_y - pCVar8->y) / (triangle->vertices[1]->y - pCVar8->y);
      local_6c[0] = (triangle->vertices[1]->x - pCVar8->x) * fVar7 + pCVar8->x;
      local_84[3] = (triangle->vertices[1]->z - triangle->vertices[0]->z) * fVar7 +
                    triangle->vertices[0]->z;
    }
    uVar12 = (uint)bVar16;
    uVar10 = uVar12;
    if (((bVar8 ^ bVar9) & 1) != 0) {
      pCVar8 = triangle->vertices[1];
      fVar7 = (cylinder->top_y - pCVar8->y) / (triangle->vertices[2]->y - pCVar8->y);
      local_6c[uVar12] = (triangle->vertices[2]->x - pCVar8->x) * fVar7 + pCVar8->x;
      uVar10 = uVar12 + 1;
      local_84[uVar12 + 3] =
           (triangle->vertices[2]->z - triangle->vertices[1]->z) * fVar7 + triangle->vertices[1]->z;
    }
    uVar11 = uVar10;
    if (((bVar9 ^ bVar7) & 1) != 0) {
      pCVar8 = triangle->vertices[2];
      fVar7 = (cylinder->top_y - pCVar8->y) / (triangle->vertices[0]->y - pCVar8->y);
      local_6c[uVar10] = (triangle->vertices[0]->x - pCVar8->x) * fVar7 + pCVar8->x;
      uVar11 = uVar10 + 1;
      local_84[uVar10 + 3] =
           (triangle->vertices[0]->z - triangle->vertices[2]->z) * fVar7 + triangle->vertices[2]->z;
    }
    if (1 < uVar11) {
      cylinder->edge_x1 = local_6c[0];
      cylinder->edge_z1 = local_84[3];
      cylinder->edge_x2 = local_6c[1];
      cylinder->edge_z2 = local_84[4];
      iVar12 = core_dcube_cpp_intersectXZCylinder_FUN_004556b0(cylinder);
      if (iVar12 != 0) goto LAB_00455df4;
    }
  }
  if ((triangle->normal).y <= 0.0) {
    bVar17 = ((bVar7 ^ bVar8) & 2) != 0;
    if (bVar17) {
      pCVar8 = triangle->vertices[0];
      fVar7 = (cylinder->bottom_y - pCVar8->y) / (triangle->vertices[1]->y - pCVar8->y);
      local_60[0] = (triangle->vertices[1]->x - pCVar8->x) * fVar7 + pCVar8->x;
      local_84[0] = (triangle->vertices[1]->z - triangle->vertices[0]->z) * fVar7 +
                    triangle->vertices[0]->z;
    }
    uVar13 = (uint)bVar17;
    uVar12 = uVar13;
    if (((bVar8 ^ bVar9) & 2) != 0) {
      pCVar8 = triangle->vertices[1];
      fVar7 = (cylinder->bottom_y - pCVar8->y) / (triangle->vertices[2]->y - pCVar8->y);
      local_60[uVar13] = (triangle->vertices[2]->x - pCVar8->x) * fVar7 + pCVar8->x;
      uVar12 = uVar13 + 1;
      local_84[uVar13] =
           (triangle->vertices[2]->z - triangle->vertices[1]->z) * fVar7 + triangle->vertices[1]->z;
    }
    uVar13 = uVar12;
    if (((bVar9 ^ bVar7) & 2) != 0) {
      pCVar8 = triangle->vertices[2];
      fVar7 = (cylinder->bottom_y - pCVar8->y) / (triangle->vertices[0]->y - pCVar8->y);
      local_60[uVar12] = (triangle->vertices[0]->x - pCVar8->x) * fVar7 + pCVar8->x;
      uVar13 = uVar12 + 1;
      local_84[uVar12] =
           (triangle->vertices[0]->z - triangle->vertices[2]->z) * fVar7 + triangle->vertices[2]->z;
    }
    if (1 < uVar13) {
      cylinder->edge_x1 = local_60[0];
      cylinder->edge_z1 = local_84[0];
      cylinder->edge_x2 = local_60[1];
      cylinder->edge_z2 = local_84[1];
      iVar14 = core_dcube_cpp_intersectXZCylinder_FUN_004556b0(cylinder);
      if (iVar14 != 0) {
LAB_00455df4:
        fVar1 = cylinder->dir_x;
        fVar2 = cylinder->param_t;
        fVar3 = cylinder->dir_z;
        fVar4 = cylinder->param_t;
        fVar5 = cylinder->param_t;
        (cylinder->push_normal).y = 0.0;
        cylinder->closest_t = fVar5;
        fVar7 = cylinder->center_x;
        fVar6 = cylinder->intersect_x;
        (cylinder->push_normal).z = (fVar3 * fVar4 + cylinder->center_z) - cylinder->intersect_z;
        (cylinder->push_normal).x = (fVar1 * fVar2 + fVar7) - fVar6;
        return 1;
      }
    }
  }
  uVar12 = core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00455990(cylinder,pCVar14,pCVar15);
  uVar13 = core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00455990(cylinder,pCVar14,local_34);
  return uVar13 | uVar12;
}
