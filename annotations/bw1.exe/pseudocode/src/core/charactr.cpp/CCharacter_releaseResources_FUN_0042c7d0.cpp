// Name: core_charactr.cpp_CCharacter_releaseResources_FUN_0042c7d0
// Address: 0042c7d0
// Address Range: [[0042c7d0, 0042c7ef]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_0042c7d0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_0042c7d0(CCharacter *this_ptr)

{
  core_motion_cpp_CMotionController_detachMotionList_FUN_005249b0(&(this_ptr->model).base);
  core_actor_cpp_CDemonActor_markResourcesInUse_FUN_00408890(&this_ptr->base);
  return;
}
