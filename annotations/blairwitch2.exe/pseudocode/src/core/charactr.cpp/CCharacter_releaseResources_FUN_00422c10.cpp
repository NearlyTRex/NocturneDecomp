// Name: core_charactr.cpp_CCharacter_releaseResources_FUN_00422c10
// Address: 00422c10
// Address Range: [[00422c10, 00422c2f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_00422c10(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_00422c10(CCharacter *this_ptr)

{
  core_motion_cpp_CMotionController_detachMotionList_FUN_00503810(&(this_ptr->model).base);
  core_actor_cpp_CDemonActor_markResourcesInUse_FUN_00408ac0(&this_ptr->base);
  return;
}
