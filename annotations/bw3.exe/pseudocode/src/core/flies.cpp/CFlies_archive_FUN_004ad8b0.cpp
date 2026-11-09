// Name: core_flies.cpp_CFlies_archive_FUN_004ad8b0
// Address: 004ad8b0
// Address Range: [[004ad8b0, 004ad944]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_archive_FUN_004ad8b0(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_archive_FUN_004ad8b0(CFlies *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x164,"count");
  if (g_CFliesClassVersion < 2) {
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x2a08,"followActor");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x2a0c,"gatherCount");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2a14,"gatherTime");
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x158,"boxSize");
  return;
}
