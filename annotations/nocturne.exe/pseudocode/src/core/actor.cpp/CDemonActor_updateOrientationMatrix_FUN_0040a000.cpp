// Name: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
// Address: 0040a000
// Address Range: [[0040a000, 0040a05e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor *this_ptr)

{
  float fVar1;
  
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((this_ptr->orient).vec.x);
  (this_ptr->orient).vec.x = fVar1;
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((this_ptr->orient).vec.z);
  (this_ptr->orient).vec.z = fVar1;
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((this_ptr->orient).vec.y);
  (this_ptr->orient).vec.y = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&this_ptr->orient_matrix,&(this_ptr->orient).vec);
  return;
}
