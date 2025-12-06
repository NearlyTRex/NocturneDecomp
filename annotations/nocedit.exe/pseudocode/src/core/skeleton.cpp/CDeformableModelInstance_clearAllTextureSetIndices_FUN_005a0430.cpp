// Name: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
// Address: 005a0430
// Address Range: [[005a0430, 005a044a]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int *piVar2;
  
  pCVar1 = this_ptr;
  do {
    piVar2 = &(pCVar1->motion_controller).current_motion_index;
    pCVar1->texture_set_indices[0] = 0;
    pCVar1 = (CDeformableModelInstance *)piVar2;
  } while ((float *)piVar2 != &this_ptr->transformed_vertices[2].z);
  return;
}
