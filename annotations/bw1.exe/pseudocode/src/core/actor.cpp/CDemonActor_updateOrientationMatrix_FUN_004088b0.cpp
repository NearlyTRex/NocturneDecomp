// Name: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
// Address: 004088b0
// Address Range: [[004088b0, 0040890e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor *this_ptr)

{
  float fVar1;
  
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((this_ptr->orient).vec.x);
  (this_ptr->orient).vec.x = fVar1;
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((this_ptr->orient).vec.z);
  (this_ptr->orient).vec.z = fVar1;
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((this_ptr->orient).vec.y);
  (this_ptr->orient).vec.y = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            (&this_ptr->orient_matrix,&(this_ptr->orient).vec);
  return;
}
