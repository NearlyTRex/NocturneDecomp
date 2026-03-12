// Name: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
// Address: 00455460
// Address Range: [[00455460, 004556a5]]
// Convention: __cdecl
// Signature: float __cdecl core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

float __cdecl core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  CVector3f *pCVar8;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  CVector3f *pCVar4;
  uint uVar3;
  float fVar2;
  float fVar1;
  float fVar7;
  float fVar6;
  CVector3f *pCVar5;
  
  fVar4 = (this_ptr->triangle).normal.z * ray_direction->z +
          (this_ptr->triangle).normal.x * ray_direction->x +
          (this_ptr->triangle).normal.y * ray_direction->y;
  if (fVar4 <= 0.0) {
    return -1.0;
  }
  fVar6 = -((this_ptr->triangle).normal.z * ray_origin->z +
           (this_ptr->triangle).normal.y * ray_origin->y +
           (this_ptr->triangle).normal.x * ray_origin->x + (this_ptr->triangle).plane_distance);
  if (fVar6 < 0.0) {
    return -1.0;
  }
  if (fVar4 < fVar6) {
    return -1.0;
  }
  fVar4 = fVar6 / fVar4;
  fVar5 = fVar4 * ray_direction->x + ray_origin->x;
  fVar7 = fVar4 * ray_direction->y + ray_origin->y;
  uVar3 = this_ptr->dominant_axis;
  if (uVar3 == 0) {
    pCVar4 = (this_ptr->triangle).vertices[1];
    pCVar8 = (this_ptr->triangle).vertices[0];
    pCVar5 = (this_ptr->triangle).vertices[2];
    fVar1 = pCVar5->z;
    local_14 = fVar7 - pCVar8->y;
    fVar2 = pCVar8->z;
    local_1c = pCVar4->y - pCVar8->y;
    local_28 = pCVar4->z - pCVar8->z;
    local_18 = pCVar5->y - pCVar8->y;
  }
  else {
    if (1 < uVar3) {
      if (uVar3 == 2) {
        pCVar1 = (this_ptr->triangle).vertices[1];
        pCVar2 = (this_ptr->triangle).vertices[0];
        pCVar3 = (this_ptr->triangle).vertices[2];
        local_14 = fVar5 - pCVar2->x;
        local_20 = fVar7 - pCVar2->y;
        local_1c = pCVar1->x - pCVar2->x;
        local_28 = pCVar1->y - pCVar2->y;
        local_18 = pCVar3->x - pCVar2->x;
        local_24 = pCVar3->y - pCVar2->y;
      }
      goto LAB_0045556e;
    }
    pCVar1 = (this_ptr->triangle).vertices[1];
    pCVar8 = (this_ptr->triangle).vertices[0];
    pCVar2 = (this_ptr->triangle).vertices[2];
    fVar1 = pCVar2->z;
    local_14 = fVar5 - pCVar8->x;
    fVar2 = pCVar8->z;
    local_1c = pCVar1->x - pCVar8->x;
    local_28 = pCVar1->z - pCVar8->z;
    local_18 = pCVar2->x - pCVar8->x;
  }
  local_20 = (fVar4 * ray_direction->z + ray_origin->z) - fVar2;
  local_24 = fVar1 - pCVar8->z;
LAB_0045556e:
  fVar8 = 1.0 / (local_1c * local_24 - local_28 * local_18);
  fVar5 = (local_14 * local_24 - local_18 * local_20) * fVar8;
  if (((0.0 <= fVar5) && (fVar8 = (local_1c * local_20 - local_28 * local_14) * fVar8, 0.0 <= fVar8)
      ) && (fVar5 + fVar8 <= 1.0)) {
    return fVar4;
  }
  return -1.0;
}
