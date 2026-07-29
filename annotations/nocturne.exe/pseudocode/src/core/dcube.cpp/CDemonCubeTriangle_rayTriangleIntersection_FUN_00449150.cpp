// Name: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
// Address: 00449150
// Address Range: [[00449150, 00449395]]
// Convention: __cdecl
// Signature: float __cdecl core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

float __cdecl core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  float fVar7;
  CVector3f *pCVar8;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = (this_ptr->triangle).normal.z * ray_direction->z +
          (this_ptr->triangle).normal.x * ray_direction->x +
          (this_ptr->triangle).normal.y * ray_direction->y;
  if (fVar2 <= 0.0) {
    return -1.0;
  }
  fVar6 = -((this_ptr->triangle).normal.z * ray_origin->z +
           (this_ptr->triangle).normal.y * ray_origin->y +
           (this_ptr->triangle).normal.x * ray_origin->x + (this_ptr->triangle).plane_distance);
  if (fVar6 < 0.0) {
    return -1.0;
  }
  if (fVar2 < fVar6) {
    return -1.0;
  }
  fVar6 = fVar6 / fVar2;
  fVar2 = fVar6 * ray_direction->x + ray_origin->x;
  fVar7 = fVar6 * ray_direction->y + ray_origin->y;
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
        pCVar8 = (this_ptr->triangle).vertices[1];
        pCVar4 = (this_ptr->triangle).vertices[0];
        pCVar5 = (this_ptr->triangle).vertices[2];
        local_14 = fVar2 - pCVar4->x;
        local_20 = fVar7 - pCVar4->y;
        local_1c = pCVar8->x - pCVar4->x;
        local_28 = pCVar8->y - pCVar4->y;
        local_18 = pCVar5->x - pCVar4->x;
        local_24 = pCVar5->y - pCVar4->y;
      }
      goto LAB_0044925e;
    }
    pCVar4 = (this_ptr->triangle).vertices[1];
    pCVar8 = (this_ptr->triangle).vertices[0];
    pCVar5 = (this_ptr->triangle).vertices[2];
    fVar1 = pCVar5->z;
    local_14 = fVar2 - pCVar8->x;
    fVar2 = pCVar8->z;
    local_1c = pCVar4->x - pCVar8->x;
    local_28 = pCVar4->z - pCVar8->z;
    local_18 = pCVar5->x - pCVar8->x;
  }
  local_20 = (fVar6 * ray_direction->z + ray_origin->z) - fVar2;
  local_24 = fVar1 - pCVar8->z;
LAB_0044925e:
  fVar7 = 1.0 / (local_1c * local_24 - local_28 * local_18);
  fVar2 = (local_14 * local_24 - local_18 * local_20) * fVar7;
  if (((0.0 <= fVar2) && (fVar7 = (local_1c * local_20 - local_28 * local_14) * fVar7, 0.0 <= fVar7)
      ) && (fVar2 + fVar7 <= 1.0)) {
    return fVar6;
  }
  return -1.0;
}
