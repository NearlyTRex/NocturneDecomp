// Name: core_flies.cpp_CFlies_archive_FUN_004cbe60
// Address: 004cbe60
// Address Range: [[004cbe60, 004cbef4]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_archive_FUN_004cbe60(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_archive_FUN_004cbe60(CFlies *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->fly_count,"count");
  if (g_CFliesClassVersion < 2) {
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->follow_actor,"followActor");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->gather_count,"gatherCount");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->gather_time,"gatherTime");
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->box_size,"boxSize");
  return;
}
