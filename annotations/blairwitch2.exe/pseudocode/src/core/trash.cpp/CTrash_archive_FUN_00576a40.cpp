// Name: core_trash.cpp_CTrash_archive_FUN_00576a40
// Address: 00576a40
// Address Range: [[00576a40, 00576a77]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_archive_FUN_00576a40(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_archive_FUN_00576a40(CTrash *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->home_pos,"homePos");
  return;
}
