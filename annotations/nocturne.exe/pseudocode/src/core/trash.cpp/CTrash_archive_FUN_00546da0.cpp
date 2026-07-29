// Name: core_trash.cpp_CTrash_archive_FUN_00546da0
// Address: 00546da0
// Address Range: [[00546da0, 00546dd7]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_archive_FUN_00546da0(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_archive_FUN_00546da0(CTrash *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->home_pos,"homePos");
  return;
}
