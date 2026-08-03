// Name: core_crate.cpp_CCrate_archive_FUN_0043cc50
// Address: 0043cc50
// Address Range: [[0043cc50, 0043cc94]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_archive_FUN_0043cc50(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_archive_FUN_0043cc50(CCrate *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  if (g_INT_005ad3c4 < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->last_platform,"lastPlatform");
  return;
}
