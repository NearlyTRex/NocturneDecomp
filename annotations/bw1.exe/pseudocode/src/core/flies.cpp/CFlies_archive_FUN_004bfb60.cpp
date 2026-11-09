// Name: core_flies.cpp_CFlies_archive_FUN_004bfb60
// Address: 004bfb60
// Address Range: [[004bfb60, 004bfbf4]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_archive_FUN_004bfb60(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_archive_FUN_004bfb60(CFlies *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x164,"count");
  if (g_CFliesClassVersion < 2) {
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x2a08,"followActor");
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x2a0c,"gatherCount");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2a14,"gatherTime");
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x158,"boxSize");
  return;
}
