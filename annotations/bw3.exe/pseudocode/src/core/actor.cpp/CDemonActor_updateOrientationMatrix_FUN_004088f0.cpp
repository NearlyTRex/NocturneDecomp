// Name: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
// Address: 004088f0
// Address Range: [[004088f0, 0040894e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor *this_ptr)

{
  uint uVar1;
  
  uVar1 = core_actor_cpp_FUN_0040cfa0(*(uint *)&this_ptr->field_0x30);
  *(uint *)&this_ptr->field_0x30 = uVar1;
  uVar1 = core_actor_cpp_FUN_0040cfa0(*(uint *)&this_ptr->field_0x38);
  *(uint *)&this_ptr->field_0x38 = uVar1;
  uVar1 = core_actor_cpp_FUN_0040cfa0(*(uint *)&this_ptr->field_0x34);
  *(uint *)&this_ptr->field_0x34 = uVar1;
  core_dirmat_cpp_FUN_0045b550
            ((CMatrix3x3f *)&this_ptr->field_0x3c,(CVector3f *)&this_ptr->field_0x30);
  return;
}
