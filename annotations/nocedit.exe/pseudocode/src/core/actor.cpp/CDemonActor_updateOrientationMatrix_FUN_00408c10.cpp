// Name: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
// Address: 00408c10
// Address Range: [[00408c10, 00408c6e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).pitch);
  (this_ptr->orient).pitch = fVar1;
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).heading);
  (this_ptr->orient).heading = fVar1;
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).bank);
  (this_ptr->orient).bank = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->orient_matrix,(CVector3f *)&this_ptr->orient);
  return;
}
