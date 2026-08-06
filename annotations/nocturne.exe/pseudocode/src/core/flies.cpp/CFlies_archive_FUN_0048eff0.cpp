// Name: core_flies.cpp_CFlies_archive_FUN_0048eff0
// Address: 0048eff0
// Address Range: [[0048eff0, 0048f084]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_archive_FUN_0048eff0(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_archive_FUN_0048eff0(CFlies *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->fly_count,"count");
  if (g_INT_005b9210 < 2) {
    if (g_INT_005b9210 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->follow_actor,"followActor");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->gather_count,"gatherCount");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->gather_time,"gatherTime");
    if (g_INT_005b9210 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->box_size,"boxSize");
  return;
}
