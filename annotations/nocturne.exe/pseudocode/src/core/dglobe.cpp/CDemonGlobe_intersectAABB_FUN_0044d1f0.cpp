// Name: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0
// Address: 0044d1f0
// Address Range: [[0044d1f0, 0044d2c2]]
// Convention: __cdecl
// Signature: int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)

{
  float *pfVar1;
  float local_24;
  float local_20;
  float local_1c;
  byte local_18 [12];
  
  local_24 = (this_ptr->position).x - reference_position->x;
  local_20 = (this_ptr->position).y - reference_position->y;
  local_1c = (this_ptr->position).z - reference_position->z;
  pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                              (rotation_matrix,local_18,&local_24);
  if (&local_24 != pfVar1) {
    local_24 = *pfVar1;
    local_20 = pfVar1[1];
    local_1c = pfVar1[2];
  }
  if ((((aabb_min->x <= local_24 + this_ptr->radius) && (aabb_min->y <= local_20 + this_ptr->radius)
       ) && (aabb_min->z <= local_1c + this_ptr->radius)) &&
     (((local_24 - this_ptr->radius <= aabb_max->x && (local_20 - this_ptr->radius <= aabb_max->y))
      && (local_1c - this_ptr->radius <= aabb_max->z)))) {
    return 1;
  }
  return 0;
}
