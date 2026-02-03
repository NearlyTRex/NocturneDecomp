// Name: core_flamecan.cpp_CFlameCan_getTargetPoints_FUN_004cb580
// Address: 004cb580
// Address Range: [[004cb580, 004cb610]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_getTargetPoints_FUN_004cb580 (CFlameCan *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl
core_flamecan_cpp_CFlameCan_getTargetPoints_FUN_004cb580
          (CFlameCan *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D aCStack_34 [2];
  
  pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,aCStack_34);
  fVar1 = ((pCVar3->min).y + (pCVar3->max).y) * 0.5f;
  fVar2 = ((pCVar3->min).z + (pCVar3->max).z) * 0.5f;
  if ((CBoundingBox3D *)out_points_array == (CBoundingBox3D *)&aCStack_34[1].max.z) {
    return 1;
  }
  out_points_array->x = ((pCVar3->min).x + (pCVar3->max).x) * 0.5f;
  out_points_array->y = fVar1;
  out_points_array->z = fVar2;
  return 1;
}
