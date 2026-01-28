// Name: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
// Address: 0049a640
// Address Range: [[0049a640, 0049a78b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *triangle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *triangle)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_c;
  
  fVar2 = (triangle->vertex2).y - (triangle->vertex1).y;
  fVar1 = (triangle->vertex3).z - (triangle->vertex2).z;
  fVar4 = (triangle->vertex2).z - (triangle->vertex1).z;
  fVar7 = (triangle->vertex3).x - (triangle->vertex2).x;
  fVar6 = (triangle->vertex2).x - (triangle->vertex1).x;
  fVar5 = (triangle->vertex3).y - (triangle->vertex2).y;
  fVar3 = fVar2 * fVar1 - fVar5 * fVar4;
  fVar4 = fVar7 * fVar4 - fVar6 * fVar1;
  (triangle->normal).x = fVar3;
  (triangle->normal).y = fVar4;
  fVar1 = fVar6 * fVar5 - fVar7 * fVar2;
  (triangle->normal).z = fVar1;
  local_c = SQRT(fVar1 * (triangle->normal).z +
                 fVar4 * (triangle->normal).y + fVar3 * (triangle->normal).x);
  if (ABS(local_c) == 0.0) {
    local_c = 1.0;
  }
  local_c = 1.0 / local_c;
  fVar4 = -(triangle->normal).y * local_c;
  (triangle->normal).y = fVar4;
  fVar3 = -(triangle->normal).x * local_c;
  (triangle->normal).x = fVar3;
  fVar3 = ABS(fVar3);
  fVar1 = (triangle->vertex1).y;
  fVar2 = (triangle->vertex1).x;
  (triangle->normal).z = -(triangle->normal).z * local_c;
  triangle->plane_distance =
       (-(fVar2 * (triangle->normal).x) - fVar1 * (triangle->normal).y) -
       (triangle->vertex1).z * (triangle->normal).z;
  if ((ABS(fVar4) < fVar3) && (ABS((triangle->normal).z) < fVar3)) {
    triangle->area = 0.0;
    return;
  }
  fVar1 = ABS((triangle->normal).y);
  if ((ABS((triangle->normal).x) < fVar1) && (ABS((triangle->normal).z) < fVar1)) {
    triangle->area = 1.4013e-45;
    return;
  }
  triangle->area = 2.8026e-45;
  return;
}
