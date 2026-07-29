// Name: core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
// Address: 0046c620
// Address Range: [[0046c620, 0046c81e]]
// Convention: __cdecl
// Signature: float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_0046c620(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

#include "nocturne.h"

float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_0046c620(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  fVar4 = (triangle->normal).z * rayDirection->z +
          (triangle->normal).x * rayDirection->x + (triangle->normal).y * rayDirection->y;
  if (fVar4 <= 0.0) {
    return -1.0;
  }
  fVar5 = -((triangle->normal).z * rayOrigin->z +
           (triangle->normal).y * rayOrigin->y +
           (triangle->normal).x * rayOrigin->x + triangle->plane_distance);
  if (fVar5 < 0.0) {
    return -1.0;
  }
  if (fVar4 < fVar5) {
    return -1.0;
  }
  fVar5 = fVar5 / fVar4;
  fVar4 = fVar5 * rayDirection->x + rayOrigin->x;
  fVar6 = fVar5 * rayDirection->y + rayOrigin->y;
  uVar3 = triangle->dominant_axis;
  if (uVar3 == 0) {
    fVar1 = (triangle->vertex2).z;
    fVar2 = (triangle->vertex3).z;
    local_14 = fVar6 - (triangle->vertex1).y;
    local_24 = (triangle->vertex2).y - (triangle->vertex1).y;
    local_28 = (triangle->vertex3).y - (triangle->vertex1).y;
  }
  else {
    if (1 < uVar3) {
      if (uVar3 == 2) {
        local_14 = fVar4 - (triangle->vertex1).x;
        local_24 = (triangle->vertex2).x - (triangle->vertex1).x;
        local_28 = (triangle->vertex3).x - (triangle->vertex1).x;
        local_2c = fVar6 - (triangle->vertex1).y;
        local_1c = (triangle->vertex2).y - (triangle->vertex1).y;
        local_20 = (triangle->vertex3).y - (triangle->vertex1).y;
      }
      goto LAB_0046c72b;
    }
    fVar1 = (triangle->vertex2).z;
    fVar2 = (triangle->vertex3).z;
    local_14 = fVar4 - (triangle->vertex1).x;
    local_24 = (triangle->vertex2).x - (triangle->vertex1).x;
    local_28 = (triangle->vertex3).x - (triangle->vertex1).x;
  }
  local_2c = (fVar5 * rayDirection->z + rayOrigin->z) - (triangle->vertex1).z;
  local_1c = fVar1 - (triangle->vertex1).z;
  local_20 = fVar2 - (triangle->vertex1).z;
LAB_0046c72b:
  fVar6 = 1.0 / (local_24 * local_20 - local_1c * local_28);
  fVar4 = (local_14 * local_20 - local_28 * local_2c) * fVar6;
  if (((0.0 <= fVar4) && (fVar6 = (local_24 * local_2c - local_1c * local_14) * fVar6, 0.0 <= fVar6)
      ) && (fVar4 + fVar6 <= 1.0)) {
    return fVar5;
  }
  return -1.0;
}
