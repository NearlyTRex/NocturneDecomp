// Name: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460
// Address: 0046c460
// Address Range: [[0046c460, 0046c5ab]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0046c460(CDemonTriangle *this_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0046c460(CDemonTriangle *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_c;
  
  fVar2 = (this_ptr->vertex2).y - (this_ptr->vertex1).y;
  fVar1 = (this_ptr->vertex3).z - (this_ptr->vertex2).z;
  fVar4 = (this_ptr->vertex2).z - (this_ptr->vertex1).z;
  fVar7 = (this_ptr->vertex3).x - (this_ptr->vertex2).x;
  fVar6 = (this_ptr->vertex2).x - (this_ptr->vertex1).x;
  fVar5 = (this_ptr->vertex3).y - (this_ptr->vertex2).y;
  fVar3 = fVar2 * fVar1 - fVar5 * fVar4;
  fVar4 = fVar7 * fVar4 - fVar6 * fVar1;
  (this_ptr->normal).x = fVar3;
  (this_ptr->normal).y = fVar4;
  fVar1 = fVar6 * fVar5 - fVar7 * fVar2;
  (this_ptr->normal).z = fVar1;
  local_c = SQRT(fVar1 * (this_ptr->normal).z +
                 fVar4 * (this_ptr->normal).y + fVar3 * (this_ptr->normal).x);
  if (ABS(local_c) == 0.0) {
    local_c = 1.0;
  }
  local_c = 1.0 / local_c;
  fVar4 = -(this_ptr->normal).y * local_c;
  (this_ptr->normal).y = fVar4;
  fVar3 = -(this_ptr->normal).x * local_c;
  (this_ptr->normal).x = fVar3;
  fVar3 = ABS(fVar3);
  fVar1 = (this_ptr->vertex1).y;
  fVar2 = (this_ptr->vertex1).x;
  (this_ptr->normal).z = -(this_ptr->normal).z * local_c;
  this_ptr->plane_distance =
       (-(fVar2 * (this_ptr->normal).x) - fVar1 * (this_ptr->normal).y) -
       (this_ptr->vertex1).z * (this_ptr->normal).z;
  if ((ABS(fVar4) < fVar3) && (ABS((this_ptr->normal).z) < fVar3)) {
    this_ptr->dominant_axis = 0;
    return;
  }
  fVar1 = ABS((this_ptr->normal).y);
  if ((ABS((this_ptr->normal).x) < fVar1) && (ABS((this_ptr->normal).z) < fVar1)) {
    this_ptr->dominant_axis = 1;
    return;
  }
  this_ptr->dominant_axis = 2;
  return;
}
