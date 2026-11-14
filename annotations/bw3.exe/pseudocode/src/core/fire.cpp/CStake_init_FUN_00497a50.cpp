// Name: core_fire.cpp_CStake_init_FUN_00497a50
// Address: 00497a50
// Address Range: [[00497a50, 00497ab0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_init_FUN_00497a50(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_init_FUN_00497a50(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

{
  CVector3f *pCVar1;
  
  if (&this_ptr->physics_box != (CBox *)position) {
    (this_ptr->physics_box).position.x = position->x;
    (this_ptr->physics_box).position.y = position->y;
    (this_ptr->physics_box).position.z = position->z;
  }
  pCVar1 = &(this_ptr->physics_box).orientation;
  if (pCVar1 != orientation) {
    pCVar1->x = orientation->x;
    (this_ptr->physics_box).orientation.y = orientation->y;
    (this_ptr->physics_box).orientation.z = orientation->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            (&(this_ptr->physics_box).rotation_matrix,&(this_ptr->physics_box).orientation);
  this_ptr->active = 0;
  (this_ptr->physics_box).is_valid = 0;
  return;
}
