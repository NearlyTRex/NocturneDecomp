// Name: core_vampboss.cpp_CVampireBoss_getTargetPoints_FUN_005e7280
// Address: 005e7280
// Address Range: [[005e7280, 005e7310]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_getTargetPoints_FUN_005e7280 (CVampireBoss *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl
core_vampboss_cpp_CVampireBoss_getTargetPoints_FUN_005e7280
          (CVampireBoss *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D aCStack_34 [2];
  
  pCVar3 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                     ((CDemonActor *)this_ptr,aCStack_34);
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
