// Name: core_crate.cpp_CCrate_archive_FUN_00448910
// Address: 00448910
// Address Range: [[00448910, 00448954]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_archive_FUN_00448910(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_archive_FUN_00448910(CCrate *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  if (g_CCrateClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->last_platform,"lastPlatform");
  return;
}
