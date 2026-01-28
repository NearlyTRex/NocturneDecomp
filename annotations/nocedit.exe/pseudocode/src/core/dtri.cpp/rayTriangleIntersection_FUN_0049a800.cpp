// Name: core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
// Address: 0049a800
// Address Range: [[0049a800, 0049a9fe]]
// Convention: __cdecl
// Signature: float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_0049a800 (CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

#include "nocturne.h"

float __cdecl
core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
          (CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  fVar2 = (triangle->normal).z * rayDirection->z +
          (triangle->normal).x * rayDirection->x + (triangle->normal).y * rayDirection->y;
  if (fVar2 <= 0.0) {
    return -1.0;
  }
  fVar3 = -((triangle->normal).z * rayOrigin->z +
           (triangle->normal).y * rayOrigin->y +
           (triangle->normal).x * rayOrigin->x + triangle->plane_distance);
  if (fVar3 < 0.0) {
    return -1.0;
  }
  if (fVar2 < fVar3) {
    return -1.0;
  }
  fVar3 = fVar3 / fVar2;
  fVar4 = fVar3 * rayDirection->x + rayOrigin->x;
  fVar5 = fVar3 * rayDirection->y + rayOrigin->y;
  fVar2 = triangle->area;
  if (fVar2 == 0.0) {
    fVar2 = (triangle->vertex2).z;
    fVar1 = (triangle->vertex3).z;
    local_14 = fVar5 - (triangle->vertex1).y;
    local_24 = (triangle->vertex2).y - (triangle->vertex1).y;
    local_28 = (triangle->vertex3).y - (triangle->vertex1).y;
  }
  else {
    if (1 < (uint)fVar2) {
      if (fVar2 == 2.8026e-45) {
        local_14 = fVar4 - (triangle->vertex1).x;
        local_24 = (triangle->vertex2).x - (triangle->vertex1).x;
        local_28 = (triangle->vertex3).x - (triangle->vertex1).x;
        local_2c = fVar5 - (triangle->vertex1).y;
        local_1c = (triangle->vertex2).y - (triangle->vertex1).y;
        local_20 = (triangle->vertex3).y - (triangle->vertex1).y;
      }
      goto LAB_0049a90b;
    }
    fVar2 = (triangle->vertex2).z;
    fVar1 = (triangle->vertex3).z;
    local_14 = fVar4 - (triangle->vertex1).x;
    local_24 = (triangle->vertex2).x - (triangle->vertex1).x;
    local_28 = (triangle->vertex3).x - (triangle->vertex1).x;
  }
  local_2c = (fVar3 * rayDirection->z + rayOrigin->z) - (triangle->vertex1).z;
  local_1c = fVar2 - (triangle->vertex1).z;
  local_20 = fVar1 - (triangle->vertex1).z;
LAB_0049a90b:
  fVar4 = 1.0 / (local_24 * local_20 - local_1c * local_28);
  fVar2 = (local_14 * local_20 - local_28 * local_2c) * fVar4;
  if (((0.0 <= fVar2) && (fVar4 = (local_24 * local_2c - local_1c * local_14) * fVar4, 0.0 <= fVar4)
      ) && (fVar2 + fVar4 <= 1.0)) {
    return fVar3;
  }
  return -1.0;
}
