// Name: core_fire.cpp_CStake_init_FUN_004bfe20
// Address: 004bfe20
// MANUAL RECONSTRUCTION
// Address Range: [[004bfe20, 004bfe80]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_init_FUN_004bfe20(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_init_FUN_004bfe20(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

{
  CVector3f *pCVar1;
  
  if (&this_ptr->physics_box != (CBox *)position) {
    (this_ptr->physics_box).position = *position;
  }
  pCVar1 = &(this_ptr->physics_box).orientation;
  if (pCVar1 != orientation) {
    *pCVar1 = *orientation;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&(this_ptr->physics_box).rotation_matrix,&(this_ptr->physics_box).orientation);
  this_ptr->active = 0;
  (this_ptr->physics_box).is_valid = 0;
  return;
}
