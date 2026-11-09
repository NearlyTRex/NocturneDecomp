// Name: core_flies.cpp_CFlies_archive_FUN_004a6b90
// Address: 004a6b90
// Address Range: [[004a6b90, 004a6c24]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_archive_FUN_004a6b90(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_archive_FUN_004a6b90(CFlies *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2c0,"count");
  if (g_CFliesClassVersion < 2) {
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x2b64,"followActor");
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x2b68,"gatherCount");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x2b70,"gatherTime");
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x2b4,"boxSize");
  return;
}
