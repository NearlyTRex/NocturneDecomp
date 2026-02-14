// Name: core_fire.cpp_CStake_init_FUN_004bfe20
// Address: 004bfe20
// Address Range: [[004bfe20, 004bfe80]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_init_FUN_004bfe20(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_init_FUN_004bfe20(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

{
  CVector3f *pCVar1;
  
  if (&this_ptr->box != (CBox *)position) {
    (this_ptr->box).position.x = position->x;
    (this_ptr->box).position.y = position->y;
    (this_ptr->box).position.z = position->z;
  }
  pCVar1 = &(this_ptr->box).orientation;
  if (pCVar1 != orientation) {
    pCVar1->x = orientation->x;
    (this_ptr->box).orientation.y = orientation->y;
    (this_ptr->box).orientation.z = orientation->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&(this_ptr->box).rotation_matrix,&(this_ptr->box).orientation);
  this_ptr->active = 0;
  (this_ptr->box).is_valid = 0;
  return;
}
