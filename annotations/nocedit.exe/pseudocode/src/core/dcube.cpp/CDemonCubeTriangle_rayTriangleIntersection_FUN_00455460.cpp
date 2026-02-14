// Name: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
// Address: 00455460
// Address Range: [[00455460, 004556a5]]
// Convention: __cdecl
// Signature: float __cdecl core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

float __cdecl core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = (this_ptr->normal).z * ray_direction->z +
          (this_ptr->normal).x * ray_direction->x + (this_ptr->normal).y * ray_direction->y;
  if (fVar2 <= 0.0) {
    return -1.0;
  }
  fVar4 = -((this_ptr->normal).z * ray_origin->z +
           (this_ptr->normal).y * ray_origin->y +
           (this_ptr->normal).x * ray_origin->x + this_ptr->plane_distance);
  if (fVar4 < 0.0) {
    return -1.0;
  }
  if (fVar2 < fVar4) {
    return -1.0;
  }
  fVar4 = fVar4 / fVar2;
  fVar2 = fVar4 * ray_direction->x + ray_origin->x;
  fVar5 = fVar4 * ray_direction->y + ray_origin->y;
  uVar3 = this_ptr->dominant_axis;
  if (uVar3 == 0) {
    pCVar6 = this_ptr->vertices[0];
    fVar1 = this_ptr->vertices[2]->z;
    local_14 = fVar5 - pCVar6->y;
    fVar2 = pCVar6->z;
    local_1c = this_ptr->vertices[1]->y - pCVar6->y;
    local_28 = this_ptr->vertices[1]->z - pCVar6->z;
    local_18 = this_ptr->vertices[2]->y - pCVar6->y;
  }
  else {
    if (1 < uVar3) {
      if (uVar3 == 2) {
        pCVar6 = this_ptr->vertices[0];
        local_14 = fVar2 - pCVar6->x;
        local_20 = fVar5 - pCVar6->y;
        local_1c = this_ptr->vertices[1]->x - pCVar6->x;
        local_28 = this_ptr->vertices[1]->y - pCVar6->y;
        local_18 = this_ptr->vertices[2]->x - pCVar6->x;
        local_24 = this_ptr->vertices[2]->y - pCVar6->y;
      }
      goto LAB_0045556e;
    }
    pCVar6 = this_ptr->vertices[0];
    fVar1 = this_ptr->vertices[2]->z;
    local_14 = fVar2 - pCVar6->x;
    fVar2 = pCVar6->z;
    local_1c = this_ptr->vertices[1]->x - pCVar6->x;
    local_28 = this_ptr->vertices[1]->z - pCVar6->z;
    local_18 = this_ptr->vertices[2]->x - pCVar6->x;
  }
  local_20 = (fVar4 * ray_direction->z + ray_origin->z) - fVar2;
  local_24 = fVar1 - pCVar6->z;
LAB_0045556e:
  fVar5 = 1.0 / (local_1c * local_24 - local_28 * local_18);
  fVar2 = (local_14 * local_24 - local_18 * local_20) * fVar5;
  if (((0.0 <= fVar2) && (fVar5 = (local_1c * local_20 - local_28 * local_14) * fVar5, 0.0 <= fVar5)
      ) && (fVar2 + fVar5 <= 1.0)) {
    return fVar4;
  }
  return -1.0;
}
