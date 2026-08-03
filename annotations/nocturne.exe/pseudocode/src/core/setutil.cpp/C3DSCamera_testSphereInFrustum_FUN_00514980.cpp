// Name: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
// Address: 00514980
// Address Range: [[00514980, 00514a46]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980(C3DSCamera *this_ptr,CVector3f *world_position,float radius)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980(C3DSCamera *this_ptr,CVector3f *world_position,float radius)

{
  CVector3f local_1c;
  CVector3f local_10;
  
  local_1c.x = world_position->x - (this_ptr->position).x;
  local_1c.y = world_position->y - (this_ptr->position).y;
  local_1c.z = world_position->z - (this_ptr->position).z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
            (&this_ptr->rotation_matrix,&local_10,&local_1c);
  if (((((this_ptr->box).min.x <= local_10.x + radius) &&
       ((this_ptr->box).min.y <= local_10.y + radius)) &&
      ((this_ptr->box).min.z <= local_10.z + radius)) &&
     (((local_10.x - radius <= (this_ptr->box).max.x &&
       (local_10.y - radius <= (this_ptr->box).max.y)) &&
      (local_10.z - radius <= (this_ptr->box).max.z)))) {
    return 1;
  }
  return 0;
}
