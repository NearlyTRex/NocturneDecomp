// Name: core_flies.cpp_CFlies_archive_FUN_004bfb60
// Address: 004bfb60
// Address Range: [[004bfb60, 004bfbf4]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_archive_FUN_004bfb60(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_archive_FUN_004bfb60(CFlies *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->fly_count,"count");
  if (g_CFliesClassVersion < 2) {
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->follow_actor,"followActor");
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->gather_count,"gatherCount");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->gather_time,"gatherTime");
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->box_size,"boxSize");
  return;
}
