// Name: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
// Address: 00514980
// Address Range: [[00514980, 00514a46]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980(C3DSCamera *this_ptr,CVector3f *world_position,float radius)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980(C3DSCamera *this_ptr,CVector3f *world_position,float radius)

{
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_1c = world_position->x - (this_ptr->position).x;
  local_18 = world_position->y - (this_ptr->position).y;
  local_14 = world_position->z - (this_ptr->position).z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
            (&this_ptr->rotation_matrix,&local_10,&local_1c);
  if (((((float)this_ptr->reverb_preset <= local_10 + radius) &&
       ((this_ptr->box).min.x <= local_c + radius)) && ((this_ptr->box).min.y <= local_8 + radius))
     && (((local_10 - radius <= (this_ptr->box).min.z && (local_c - radius <= (this_ptr->box).max.x)
          ) && (local_8 - radius <= (this_ptr->box).max.y)))) {
    return 1;
  }
  return 0;
}
