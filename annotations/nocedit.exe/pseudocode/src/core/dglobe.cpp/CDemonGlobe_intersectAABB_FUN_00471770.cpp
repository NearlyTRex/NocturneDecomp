// Name: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
// Address: 00471770
// Address Range: [[00471770, 00471842]]
// Convention: __cdecl
// Signature: int core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, CVector3f * aabb_max)

#include "nocturne.h"

int __cdecl
core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
          (CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,
          CVector3f *aabb_min,CVector3f *aabb_max)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  byte local_24 [8];
  float local_1c;
  CVector3f local_18;
  
  local_24._0_4_ = (this_ptr->position).x - reference_position->x;
  local_24._4_4_ = (this_ptr->position).y - reference_position->y;
  local_1c = (this_ptr->position).z - reference_position->z;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     (rotation_matrix,&local_18,(CVector3f *)local_24);
  if ((CVector3f *)(local_24 + 4) != pCVar1) {
    local_24._4_4_ = pCVar1->x;
    local_1c = pCVar1->y;
    local_18.x = pCVar1->z;
  }
  if ((((aabb_min->x <= (float)local_24._4_4_ + this_ptr->radius) &&
       (aabb_min->y <= local_1c + this_ptr->radius)) &&
      (aabb_min->z <= local_18.x + this_ptr->radius)) &&
     ((((float)local_24._4_4_ - this_ptr->radius <= aabb_max->x &&
       (local_1c - this_ptr->radius <= aabb_max->y)) &&
      (local_18.x - this_ptr->radius <= aabb_max->z)))) {
    return 1;
  }
  return 0;
}
