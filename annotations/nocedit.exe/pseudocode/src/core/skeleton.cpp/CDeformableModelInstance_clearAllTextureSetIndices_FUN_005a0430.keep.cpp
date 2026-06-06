// Name: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
// Address: 005a0430
// MANUAL RECONSTRUCTION
// Address Range: [[005a0430, 005a044a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(CDeformableModelInstance *this_ptr)

{
  int i;

  for (i = 0; i < 30; i = i + 1) {
    (this_ptr->part_data).texture_set_indices[i] = 0;
  }
  return;
}
