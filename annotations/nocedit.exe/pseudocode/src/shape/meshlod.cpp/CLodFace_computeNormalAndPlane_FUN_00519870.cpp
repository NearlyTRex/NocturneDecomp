// Name: shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870
// Address: 00519870
// Address Range: [[00519870, 00519b49]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870(CLodFace * this_ptr, CVector3f * vertex0_pos, CVector3f * vertex1_pos, CVector3f * vertex2_pos)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodFace_computeNormalAndPlane_FUN_00519870
          (CLodFace *this_ptr,CVector3f *vertex0_pos,CVector3f *vertex1_pos,CVector3f *vertex2_pos)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  CLodFace *pCVar10;
  int iVar11;
  CVector3f *pCVar12;
  int iVar13;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_20;
  CLodFace *local_1c;
  CVector3f *local_18;
  
  local_48 = vertex1_pos->x - vertex0_pos->x;
  local_44 = vertex1_pos->y - vertex0_pos->y;
  local_40 = vertex1_pos->z - vertex0_pos->z;
  local_30 = vertex2_pos->x - vertex1_pos->x;
  local_2c = vertex2_pos->y - vertex1_pos->y;
  local_28 = vertex2_pos->z - vertex1_pos->z;
  local_34 = local_48 * local_2c - local_44 * local_30;
  local_38 = local_40 * local_30 - local_48 * local_28;
  local_3c = local_44 * local_28 - local_40 * local_2c;
  if (&this_ptr->normal != (CVector3f *)&local_3c) {
    (this_ptr->normal).x = local_3c;
    (this_ptr->normal).y = local_38;
    (this_ptr->normal).z = local_34;
  }
  fVar5 = (this_ptr->normal).y;
  fVar6 = (this_ptr->normal).x;
  fVar7 = (this_ptr->normal).z;
  fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  pCVar12 = &this_ptr->normal;
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    pCVar12->x = pCVar12->x * fVar5;
    (this_ptr->normal).y = (this_ptr->normal).y * fVar5;
    (this_ptr->normal).z = (this_ptr->normal).z * fVar5;
    this_ptr->plane_distance =
         (vertex2_pos->z * (this_ptr->normal).z +
          vertex2_pos->x * pCVar12->x + vertex2_pos->y * (this_ptr->normal).y +
         vertex1_pos->z * (this_ptr->normal).z +
         vertex1_pos->x * pCVar12->x + vertex1_pos->y * (this_ptr->normal).y +
         vertex0_pos->z * (this_ptr->normal).z +
         vertex0_pos->x * pCVar12->x + vertex0_pos->y * (this_ptr->normal).y) *
         (float)0.33333333333333298;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_84,3,&g_CVectorTypeInfo);
    if (&local_84 != vertex0_pos) {
      local_84.x = vertex0_pos->x;
      local_84.y = vertex0_pos->y;
      local_84.z = vertex0_pos->z;
    }
    if (&local_78 != vertex1_pos) {
      local_78.x = vertex1_pos->x;
      local_78.y = vertex1_pos->y;
      local_78.z = vertex1_pos->z;
    }
    if (&local_6c != vertex2_pos) {
      local_6c.x = vertex2_pos->x;
      local_6c.y = vertex2_pos->y;
      local_6c.z = vertex2_pos->z;
    }
    local_18 = &local_84;
    iVar13 = 0;
    pCVar12 = this_ptr->edge_perpendiculars;
    local_1c = this_ptr;
    do {
      pCVar10 = local_1c;
      iVar11 = iVar13 + 1;
      if (2 < iVar11) {
        iVar11 = 0;
      }
      local_20 = iVar11 * 0xc;
      local_54 = (&local_84)[iVar11].x - local_18->x;
      local_50 = (&local_84)[iVar11].y - local_18->y;
      local_4c = (&local_84)[iVar11].z - local_18->z;
      local_60 = local_50 * (this_ptr->normal).z - local_4c * (this_ptr->normal).y;
      local_5c = local_4c * (this_ptr->normal).x - local_54 * (this_ptr->normal).z;
      local_58 = local_54 * (this_ptr->normal).y - local_50 * (this_ptr->normal).x;
      if (pCVar12 != (CVector3f *)&local_60) {
        pCVar12->x = local_60;
        pCVar12->y = local_5c;
        pCVar12->z = local_58;
      }
      pfVar1 = &pCVar12->y;
      pfVar2 = &local_18->y;
      pfVar8 = &pCVar12->x;
      pfVar9 = &local_18->x;
      pfVar3 = &pCVar12->z;
      pfVar4 = &local_18->z;
      pCVar12 = pCVar12 + 1;
      local_18 = local_18 + 1;
      iVar13 = iVar13 + 1;
      local_1c = (CLodFace *)(local_1c->attribute_indices + 1);
      pCVar10->edge_dot_products[0] = *pfVar3 * *pfVar4 + *pfVar8 * *pfVar9 + *pfVar1 * *pfVar2;
    } while (iVar13 < 3);
    return 1;
  }
  this_ptr->processed_flag = 1;
  return 0;
}
