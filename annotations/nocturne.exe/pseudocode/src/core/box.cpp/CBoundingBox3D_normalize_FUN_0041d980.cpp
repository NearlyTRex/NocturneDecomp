// Name: core_box.cpp_CBoundingBox3D_normalize_FUN_0041d980
// Address: 0041d980
// Address Range: [[0041d980, 0041d9cf]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_normalize_FUN_0041d980(CBoundingBox3D *this_ptr)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_normalize_FUN_0041d980(CBoundingBox3D *this_ptr)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  if ((this_ptr->max).x < (this_ptr->min).x) {
    fVar3 = (this_ptr->min).x;
    (this_ptr->min).x = (this_ptr->max).x;
    (this_ptr->max).x = fVar3;
  }
  if ((this_ptr->max).y < (this_ptr->min).y) {
    pfVar1 = &(this_ptr->min).y;
    pfVar2 = &(this_ptr->max).y;
    fVar3 = *pfVar1;
    *pfVar1 = *pfVar2;
    *pfVar2 = fVar3;
  }
  if ((this_ptr->min).z <= (this_ptr->max).z) {
    return;
  }
  pfVar1 = &(this_ptr->min).z;
  fVar3 = *pfVar1;
  *pfVar1 = (this_ptr->max).z;
  (this_ptr->max).z = fVar3;
  return;
}
