// Name: core_trash.cpp_CTrash_archive_FUN_0059a300
// Address: 0059a300
// Address Range: [[0059a300, 0059a337]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_archive_FUN_0059a300(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_archive_FUN_0059a300(CTrash *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x2d4,"homePos");
  return;
}
