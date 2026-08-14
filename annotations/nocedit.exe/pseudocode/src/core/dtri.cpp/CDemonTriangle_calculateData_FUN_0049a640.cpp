// Name: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
// Address: 0049a640
// Address Range: [[0049a640, 0049a78b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *this_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *this_ptr)

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
  
  fVar9 = (this_ptr->vertex2).y - (this_ptr->vertex1).y;
  fVar8 = (this_ptr->vertex3).z - (this_ptr->vertex2).z;
  fVar10 = (this_ptr->vertex2).z - (this_ptr->vertex1).z;
  fVar7 = (this_ptr->vertex3).x - (this_ptr->vertex2).x;
  fVar6 = (this_ptr->vertex2).x - (this_ptr->vertex1).x;
  fVar5 = (this_ptr->vertex3).y - (this_ptr->vertex2).y;
  fVar3 = fVar9 * fVar8 - fVar5 * fVar10;
  fVar4 = fVar7 * fVar10 - fVar6 * fVar8;
  (this_ptr->normal).x = fVar3;
  (this_ptr->normal).y = fVar4;
  fVar8 = fVar6 * fVar5 - fVar7 * fVar9;
  (this_ptr->normal).z = fVar8;
  local_c = SQRT(fVar8 * (this_ptr->normal).z +
                 fVar4 * (this_ptr->normal).y + fVar3 * (this_ptr->normal).x);
  if (ABS(local_c) == 0.0) {
    local_c = 1.0;
  }
  fVar10 = 1.0 / local_c;
  fVar9 = -(this_ptr->normal).y * fVar10;
  (this_ptr->normal).y = fVar9;
  fVar8 = -(this_ptr->normal).x * fVar10;
  (this_ptr->normal).x = fVar8;
  fVar8 = ABS(fVar8);
  fVar1 = (this_ptr->vertex1).y;
  fVar2 = (this_ptr->vertex1).x;
  (this_ptr->normal).z = -(this_ptr->normal).z * fVar10;
  this_ptr->plane_distance =
       (-(fVar2 * (this_ptr->normal).x) - fVar1 * (this_ptr->normal).y) -
       (this_ptr->vertex1).z * (this_ptr->normal).z;
  if ((ABS(fVar9) < fVar8) && (ABS((this_ptr->normal).z) < fVar8)) {
    this_ptr->dominant_axis = 0;
    return;
  }
  fVar8 = ABS((this_ptr->normal).y);
  if ((ABS((this_ptr->normal).x) < fVar8) && (ABS((this_ptr->normal).z) < fVar8)) {
    this_ptr->dominant_axis = 1;
    return;
  }
  this_ptr->dominant_axis = 2;
  return;
}
