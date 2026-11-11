// Name: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460
// Address: 00547460
// Address Range: [[00547460, 0054747a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int *piVar2;
  
  pCVar1 = this_ptr;
  do {
    piVar2 = &(pCVar1->base).current_motion_index;
    (pCVar1->part_data).texture_set_indices[0] = 0;
    pCVar1 = (CDeformableModelInstance *)piVar2;
  } while ((float *)piVar2 != &this_ptr->bone_origins[2].z);
  return;
}
