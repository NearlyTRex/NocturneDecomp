// Name: core_flamecan.cpp_CFlameCan_archive_FUN_0048e830
// Address: 0048e830
// Address Range: [[0048e830, 0048e88f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_0048e830(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_0048e830(CFlameCan *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->on_fire,"onFire");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->time_to_explode,"timeToExplode");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->on_fire_condition,"onFireCondition");
  return;
}
