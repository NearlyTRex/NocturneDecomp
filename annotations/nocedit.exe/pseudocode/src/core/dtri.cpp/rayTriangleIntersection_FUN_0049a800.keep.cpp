// Name: core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
// Address: 0049a800
// MANUAL RECONSTRUCTION
// Address Range: [[0049a800, 0049a9fe]]
// Convention: __cdecl
// Signature: float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

#include "nocturne.h"

float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)

{
  float fVar6;
  float fVar7;
  float fVar8;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float fVar1;
  int fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  local_2c = 0.0f;
  local_28 = 0.0f;
  local_24 = 0.0f;
  local_20 = 0.0f;
  local_1c = 0.0f;
  local_14 = 0.0f;
  fVar7 = (triangle->normal).z * rayDirection->z +
          (triangle->normal).x * rayDirection->x + (triangle->normal).y * rayDirection->y;
  if (fVar7 <= 0.0) {
    return -1.0;
  }
  fVar3 = -((triangle->normal).z * rayOrigin->z +
           (triangle->normal).y * rayOrigin->y +
           (triangle->normal).x * rayOrigin->x + triangle->plane_distance);
  if (fVar3 < 0.0) {
    return -1.0;
  }
  if (fVar7 < fVar3) {
    return -1.0;
  }
  fVar7 = fVar3 / fVar7;
  fVar4 = fVar7 * rayDirection->x + rayOrigin->x;
  fVar5 = fVar7 * rayDirection->y + rayOrigin->y;
  fVar2 = triangle->dominant_axis;
  if (fVar2 == 0) {
    fVar6 = (triangle->vertex2).z;
    fVar1 = (triangle->vertex3).z;
    local_14 = fVar5 - (triangle->vertex1).y;
    local_24 = (triangle->vertex2).y - (triangle->vertex1).y;
    local_28 = (triangle->vertex3).y - (triangle->vertex1).y;
  }
  else {
    if (1 < fVar2) {
      if (fVar2 == 2) {
        local_14 = fVar4 - (triangle->vertex1).x;
        local_24 = (triangle->vertex2).x - (triangle->vertex1).x;
        local_28 = (triangle->vertex3).x - (triangle->vertex1).x;
        local_2c = fVar5 - (triangle->vertex1).y;
        local_1c = (triangle->vertex2).y - (triangle->vertex1).y;
        local_20 = (triangle->vertex3).y - (triangle->vertex1).y;
      }
      goto LAB_0049a90b;
    }
    fVar6 = (triangle->vertex2).z;
    fVar1 = (triangle->vertex3).z;
    local_14 = fVar4 - (triangle->vertex1).x;
    local_24 = (triangle->vertex2).x - (triangle->vertex1).x;
    local_28 = (triangle->vertex3).x - (triangle->vertex1).x;
  }
  local_2c = (fVar7 * rayDirection->z + rayOrigin->z) - (triangle->vertex1).z;
  local_1c = fVar6 - (triangle->vertex1).z;
  local_20 = fVar1 - (triangle->vertex1).z;
LAB_0049a90b:
  fVar8 = 1.0 / (local_24 * local_20 - local_1c * local_28);
  fVar6 = (local_14 * local_20 - local_28 * local_2c) * fVar8;
  if (((0.0 <= fVar6) && (fVar8 = (local_24 * local_2c - local_1c * local_14) * fVar8, 0.0 <= fVar8)
      ) && (fVar6 + fVar8 <= 1.0)) {
    return fVar7;
  }
  return -1.0;
}
