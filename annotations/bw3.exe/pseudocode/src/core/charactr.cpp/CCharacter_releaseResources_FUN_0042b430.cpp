// Name: core_charactr.cpp_CCharacter_releaseResources_FUN_0042b430
// Address: 0042b430
// Address Range: [[0042b430, 0042b44f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_0042b430(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_0042b430(CCharacter *this_ptr)

{
  core_motion_cpp_CMotionController_detachMotionList_FUN_004fc2c0(&(this_ptr->model).base);
  core_actor_cpp_CDemonActor_markResourcesInUse_FUN_004088d0(&this_ptr->base);
  return;
}
