// Name: core_succubus.cpp_CSuccubus_archive_FUN_005c7710
// Address: 005c7710
// Address Range: [[005c7710, 005c7757]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_005c7710(CSuccubus *this_ptr)

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_005c7710(CSuccubus *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}
