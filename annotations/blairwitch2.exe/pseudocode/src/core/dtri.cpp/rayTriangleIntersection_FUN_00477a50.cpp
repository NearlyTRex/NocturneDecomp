// Name: core_dtri.cpp_rayTriangleIntersection_FUN_00477a50
// Address: 00477a50
// Address Range: [[00477a50, 00477c53]]
// Convention: __cdecl
// Signature: float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_00477a50(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

#include "nocturne.h"

float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_00477a50(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

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
  float local_14;
  float local_10;
  
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
  uVar3 = triangle->dominant_axis;
  fVar4 = fVar5 * rayDirection->x + rayOrigin->x;
  fVar6 = fVar5 * rayDirection->y + rayOrigin->y;
  if (uVar3 == 0) {
    fVar1 = (triangle->vertex2).z;
    fVar2 = (triangle->vertex3).z;
    local_20 = fVar6 - (triangle->vertex1).y;
    local_28 = (triangle->vertex2).y - (triangle->vertex1).y;
    local_24 = (triangle->vertex3).y - (triangle->vertex1).y;
  }
  else {
    if (1 < uVar3) {
      if (uVar3 == 2) {
        local_20 = fVar4 - (triangle->vertex1).x;
        local_28 = (triangle->vertex2).x - (triangle->vertex1).x;
        local_24 = (triangle->vertex3).x - (triangle->vertex1).x;
        local_10 = fVar6 - (triangle->vertex1).y;
        local_14 = (triangle->vertex2).y - (triangle->vertex1).y;
        local_2c = (triangle->vertex3).y - (triangle->vertex1).y;
      }
      goto LAB_00477b5e;
    }
    fVar1 = (triangle->vertex2).z;
    fVar2 = (triangle->vertex3).z;
    local_20 = fVar4 - (triangle->vertex1).x;
    local_28 = (triangle->vertex2).x - (triangle->vertex1).x;
    local_24 = (triangle->vertex3).x - (triangle->vertex1).x;
  }
  local_10 = (fVar5 * rayDirection->z + rayOrigin->z) - (triangle->vertex1).z;
  local_14 = fVar1 - (triangle->vertex1).z;
  local_2c = fVar2 - (triangle->vertex1).z;
LAB_00477b5e:
  fVar6 = 1.0 / (local_28 * local_2c - local_14 * local_24);
  fVar4 = (local_20 * local_2c - local_24 * local_10) * fVar6;
  if (((0.0 <= fVar4) && (fVar6 = (local_28 * local_10 - local_14 * local_20) * fVar6, 0.0 <= fVar6)
      ) && (fVar4 + fVar6 <= 1.0)) {
    return fVar5;
  }
  return -1.0;
}
