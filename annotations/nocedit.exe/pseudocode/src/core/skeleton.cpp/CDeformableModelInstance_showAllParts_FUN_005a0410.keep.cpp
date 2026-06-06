// Name: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
// Address: 005a0410
// MANUAL RECONSTRUCTION
// Address Range: [[005a0410, 005a042a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance *this_ptr)

{
  int i;

  for (i = 0; i < 30; i = i + 1) {
    (this_ptr->part_data).visibility_flags[i] = 1;
  }
  return;
}
