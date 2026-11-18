// Name: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0045edf0
// Address: 0045edf0
// Address Range: [[0045edf0, 0045eef9]]
// Convention: __cdecl
// Signature: int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0045edf0(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0045edf0(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)

{
  byte bVar1;
  float afStackY_1028 [1016];
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  CVector3f local_1c;
  
  bVar1 = 0;
  local_28 = (this_ptr->position).x - reference_position->x;
  local_24 = (this_ptr->position).y - reference_position->y;
  local_20 = (this_ptr->position).z - reference_position->z;
  local_1c.x = local_28;
  local_1c.y = local_24;
  local_1c.z = local_20;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
            (rotation_matrix,&local_1c,&local_34);
  local_40.x = local_34.x;
  *(uint *)((int)&local_40 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&local_34 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&local_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&local_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&local_1c != &local_40) {
    local_1c.x = local_40.x;
    local_1c.y = local_40.y;
    local_1c.z = local_40.z;
  }
  if ((((aabb_min->x <= local_1c.x + this_ptr->radius) &&
       (aabb_min->y <= local_1c.y + this_ptr->radius)) &&
      (aabb_min->z <= local_1c.z + this_ptr->radius)) &&
     (((local_1c.x - this_ptr->radius <= aabb_max->x &&
       (local_1c.y - this_ptr->radius <= aabb_max->y)) &&
      (local_1c.z - this_ptr->radius <= aabb_max->z)))) {
    return 1;
  }
  return 0;
}
