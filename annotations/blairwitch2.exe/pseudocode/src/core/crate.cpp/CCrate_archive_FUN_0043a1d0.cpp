// Name: core_crate.cpp_CCrate_archive_FUN_0043a1d0
// Address: 0043a1d0
// Address Range: [[0043a1d0, 0043a214]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_archive_FUN_0043a1d0(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_archive_FUN_0043a1d0(CCrate *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName");
  if (g_CCrateClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->last_platform,"lastPlatform");
  return;
}
