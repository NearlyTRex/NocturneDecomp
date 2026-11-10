// Name: core_flamecan.cpp_CFlameCan_archive_FUN_004a0b90
// Address: 004a0b90
// Address Range: [[004a0b90, 004a0bef]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_004a0b90(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_004a0b90(CFlameCan *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,"?modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->on_fire,"onFire");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->time_to_explode,"timeToExplode");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->on_fire_condition,"onFireCondition");
  return;
}
