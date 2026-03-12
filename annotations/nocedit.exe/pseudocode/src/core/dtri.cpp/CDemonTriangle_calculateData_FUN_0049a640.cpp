// Name: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
// Address: 0049a640
// Address Range: [[0049a640, 0049a78b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *triangle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *triangle)

{
  float fVar8;
  float fVar9;
  float fVar10;
  float local_c;
  float fVar6;
  float fVar7;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar9 = (triangle->vertex2).y - (triangle->vertex1).y;
  fVar8 = (triangle->vertex3).z - (triangle->vertex2).z;
  fVar10 = (triangle->vertex2).z - (triangle->vertex1).z;
  fVar7 = (triangle->vertex3).x - (triangle->vertex2).x;
  fVar6 = (triangle->vertex2).x - (triangle->vertex1).x;
  fVar5 = (triangle->vertex3).y - (triangle->vertex2).y;
  fVar3 = fVar9 * fVar8 - fVar5 * fVar10;
  fVar4 = fVar7 * fVar10 - fVar6 * fVar8;
  (triangle->normal).x = fVar3;
  (triangle->normal).y = fVar4;
  fVar8 = fVar6 * fVar5 - fVar7 * fVar9;
  (triangle->normal).z = fVar8;
  local_c = SQRT(fVar8 * (triangle->normal).z +
                 fVar4 * (triangle->normal).y + fVar3 * (triangle->normal).x);
  if (ABS(local_c) == 0.0) {
    local_c = 1.0;
  }
  fVar10 = 1.0 / local_c;
  fVar9 = -(triangle->normal).y * fVar10;
  (triangle->normal).y = fVar9;
  fVar8 = -(triangle->normal).x * fVar10;
  (triangle->normal).x = fVar8;
  fVar8 = ABS(fVar8);
  fVar1 = (triangle->vertex1).y;
  fVar2 = (triangle->vertex1).x;
  (triangle->normal).z = -(triangle->normal).z * fVar10;
  triangle->plane_distance =
       (-(fVar2 * (triangle->normal).x) - fVar1 * (triangle->normal).y) -
       (triangle->vertex1).z * (triangle->normal).z;
  if ((ABS(fVar9) < fVar8) && (ABS((triangle->normal).z) < fVar8)) {
    triangle->area = 0.0;
    return;
  }
  fVar8 = ABS((triangle->normal).y);
  if ((ABS((triangle->normal).x) < fVar8) && (ABS((triangle->normal).z) < fVar8)) {
    triangle->area = 1.4013e-45;
    return;
  }
  triangle->area = 2.8026e-45;
  return;
}
