// Name: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0045af60
// Address: 0045af60
// Address Range: [[0045af60, 0045b069]]
// Convention: __cdecl
// Signature: int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0045af60(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0045af60(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)

{
  byte bVar1;
  float afStackY_1028 [1016];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = 0;
  local_28 = (this_ptr->position).x - reference_position->x;
  local_24 = (this_ptr->position).y - reference_position->y;
  local_20 = (this_ptr->position).z - reference_position->z;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  core_dirmat_cpp_FUN_0045b870(rotation_matrix,&local_1c);
  local_40 = local_34;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&local_1c != &stack0xffffffc0) {
    local_1c = local_40;
    local_18 = local_3c;
    local_14 = local_38;
  }
  if ((((aabb_min->x <= local_1c + this_ptr->radius) && (aabb_min->y <= local_18 + this_ptr->radius)
       ) && (aabb_min->z <= local_14 + this_ptr->radius)) &&
     (((local_1c - this_ptr->radius <= aabb_max->x && (local_18 - this_ptr->radius <= aabb_max->y))
      && (local_14 - this_ptr->radius <= aabb_max->z)))) {
    return 1;
  }
  return 0;
}
