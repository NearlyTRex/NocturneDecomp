// Name: core_setdir.cpp_testOBBIntersection_FUN_005763a0
// Address: 005763a0
// MANUAL RECONSTRUCTION
// Address Range: [[005763a0, 0057670e]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_testOBBIntersection_FUN_005763a0(SVDBox *obb_a,SVDBox *obb_b)

#include "nocturne.h"

int __cdecl core_setdir_cpp_testOBBIntersection_FUN_005763a0(SVDBox *obb_a,SVDBox *obb_b)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar6;
  CVector3f local_128 [8];
  CBoundingBox3D local_c8;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CBoundingBox3D local_74;
  CVector3f local_5c;
  CVector3f local_50;
  float local_20;
  float local_1c;
  float local_18;

  local_74.min.x = -(obb_b->extents).x;
  local_74.min.y = -(obb_b->extents).y;
  local_74.min.z = -(obb_b->extents).z;
  if (&local_c8 != &local_74) {
    local_c8.min = local_74.min;
  }
  if (&local_c8.max != &obb_b->extents) {
    local_c8.max = obb_b->extents;
  }
  __arrinit(local_128,8,&g_CVectorTypeInfo);
  uVar3 = 0;
  do {
    local_20 = (obb_a->extents).x;
    pCVar6 = local_128 + uVar3;
    while( true ) {
      local_74.max.x = local_20;
      if ((uVar3 & 2) == 0) {
        local_1c = (obb_a->extents).y;
      }
      else {
        local_1c = -(obb_a->extents).y;
      }
      local_74.max.y = local_1c;
      if ((uVar3 & 4) == 0) {
        local_18 = (obb_a->extents).z;
      }
      else {
        local_18 = -(obb_a->extents).z;
      }
      local_74.max.z = local_18;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&obb_a->rotation_matrix,&local_5c,&local_74.max);
      local_8c.x = pCVar1->x + (obb_a->position).x;
      local_8c.y = pCVar1->y + (obb_a->position).y;
      local_8c.z = pCVar1->z + (obb_a->position).z;
      if (&local_74.max != &local_8c) {
        local_74.max = local_8c;
      }
      local_80.x = local_74.max.x - (obb_b->position).x;
      local_80.y = local_74.max.y - (obb_b->position).y;
      local_80.z = local_74.max.z - (obb_b->position).z;
      pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&obb_b->rotation_matrix,&local_98,&local_80);
      if (&local_74.max != pCVar2) {
        local_74.max = *pCVar2;
      }
      if (((((local_c8.min.x <= local_74.max.x) && (local_c8.min.y <= local_74.max.y)) &&
           (local_c8.min.z <= local_74.max.z)) &&
          ((local_74.max.x <= local_c8.max.x && (local_74.max.y <= local_c8.max.y)))) &&
         (local_74.max.z <= local_c8.max.z)) {
        return 1;
      }
      if (pCVar6 != &local_74.max) {
        *pCVar6 = local_74.max;
      }
      uVar3 = uVar3 + 1;
      pCVar6 = pCVar6 + 1;
      if (7 < (int)uVar3) {
        pCVar4 = local_128;
        uVar5 = 0;
        while( true ) {
          uVar4 = uVar5 ^ 1;
          local_50.x = local_128[uVar4].x - pCVar4->x;
          local_50.y = local_128[uVar4].y - pCVar4->y;
          local_50.z = local_128[uVar4].z - pCVar4->z;
          fVar3 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                            (&local_c8,pCVar4,&local_50,(CVector3f *)0x0);
          if ((0.0 <= fVar3) && (fVar3 <= 1.0)) {
            return 1;
          }
          uVar2 = uVar5 ^ 2;
          local_a4.x = local_128[uVar2].x - pCVar4->x;
          local_a4.y = local_128[uVar2].y - pCVar4->y;
          local_a4.z = local_128[uVar2].z - pCVar4->z;
          fVar3 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                            (&local_c8,pCVar4,&local_a4,(CVector3f *)0x0);
          if ((0.0 <= fVar3) && (fVar3 <= 1.0)) break;
          uVar4 = uVar5 ^ 4;
          local_b0.x = local_128[uVar4].x - pCVar4->x;
          local_b0.y = local_128[uVar4].y - pCVar4->y;
          local_b0.z = local_128[uVar4].z - pCVar4->z;
          fVar3 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                            (&local_c8,pCVar4,&local_b0,(CVector3f *)0x0);
          if ((0.0 <= fVar3) && (fVar3 <= 1.0)) {
            return 1;
          }
          uVar5 = uVar5 + 1;
          pCVar4 = pCVar4 + 1;
          if (7 < (int)uVar5) {
            return 0;
          }
        }
        return 1;
      }
      if ((uVar3 & 1) == 0) break;
      local_20 = -(obb_a->extents).x;
    }
  } while( true );
}
