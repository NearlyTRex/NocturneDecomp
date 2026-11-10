// Name: core_crate.cpp_CCrate_archive_FUN_00446040
// Address: 00446040
// Address Range: [[00446040, 00446084]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_archive_FUN_00446040(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_archive_FUN_00446040(CCrate *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"modelName");
  if (g_CCrateClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->last_platform,"lastPlatform");
  return;
}
