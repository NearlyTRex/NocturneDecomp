// Name: core_flamecan.cpp_CFlameCan_archive_FUN_004cb620
// Address: 004cb620
// Address Range: [[004cb620, 004cb67f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_004cb620(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_004cb620(CFlameCan *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->on_fire,"onFire");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->time_to_explode,"timeToExplode");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->on_fire_condition,"onFireCondition");
  return;
}
