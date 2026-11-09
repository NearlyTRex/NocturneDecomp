// Name: core_flamecan.cpp_CFlameCan_archive_FUN_004a73d0
// Address: 004a73d0
// Address Range: [[004a73d0, 004a742f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_004a73d0(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_004a73d0(CFlameCan *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"?modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d4,"onFire");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2d8,"timeToExplode");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2dc,"onFireCondition");
  return;
}
