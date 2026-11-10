// Name: core_succubus.cpp_CSuccubus_archive_FUN_0056fff0
// Address: 0056fff0
// Address Range: [[0056fff0, 00570037]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_0056fff0(CSuccubus *this_ptr)

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_0056fff0(CSuccubus *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  return;
}
