// Name: core_crate.cpp_CCrate_getTargetPoints_FUN_0043cd10
// Address: 0043cd10
// Address Range: [[0043cd10, 0043cda0]]
// Convention: __cdecl
// Signature: int __cdecl core_crate_cpp_CCrate_getTargetPoints_FUN_0043cd10(CCrate *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_crate_cpp_CCrate_getTargetPoints_FUN_0043cd10(CCrate *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D CStack_34;
  CVector3f CStack_10;
  
  pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_34);
  fVar1 = ((pCVar3->min).y + (pCVar3->max).y) * 0.5f;
  fVar2 = ((pCVar3->min).z + (pCVar3->max).z) * 0.5f;
  if (out_points_array == &CStack_10) {
    return 1;
  }
  out_points_array->x = ((pCVar3->min).x + (pCVar3->max).x) * 0.5f;
  out_points_array->y = fVar1;
  out_points_array->z = fVar2;
  return 1;
}
