// Name: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
// Address: 00585970
// Address Range: [[00585970, 00585a36]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970 (C3DSCamera *this_ptr,CVector3f *world_position,float radius)

#include "nocturne.h"

int __cdecl
core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
          (C3DSCamera *this_ptr,CVector3f *world_position,float radius)

{
  CVector3f local_1c;
  CVector3f local_10;
  
  local_1c.x = world_position->x - (this_ptr->position).x;
  local_1c.y = world_position->y - (this_ptr->position).y;
  local_1c.z = world_position->z - (this_ptr->position).z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&this_ptr->rotation_matrix,&local_10,&local_1c);
  if (((((this_ptr->box_min).x <= local_10.x + radius) &&
       ((this_ptr->box_min).y <= local_10.y + radius)) &&
      ((this_ptr->box_min).z <= local_10.z + radius)) &&
     (((local_10.x - radius <= (this_ptr->box_max).x &&
       (local_10.y - radius <= (this_ptr->box_max).y)) &&
      (local_10.z - radius <= (this_ptr->box_max).z)))) {
    return 1;
  }
  return 0;
}
