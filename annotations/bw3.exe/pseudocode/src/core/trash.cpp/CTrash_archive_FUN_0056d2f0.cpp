// Name: core_trash.cpp_CTrash_archive_FUN_0056d2f0
// Address: 0056d2f0
// Address Range: [[0056d2f0, 0056d327]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_archive_FUN_0056d2f0(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_archive_FUN_0056d2f0(CTrash *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x2d4,"homePos");
  return;
}
