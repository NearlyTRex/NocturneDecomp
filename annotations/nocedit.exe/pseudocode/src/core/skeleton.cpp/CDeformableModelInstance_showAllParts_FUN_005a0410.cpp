// Name: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
// Address: 005a0410
// Address Range: [[005a0410, 005a042a]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int *piVar2;
  
  pCVar1 = this_ptr;
  do {
    piVar2 = &(pCVar1->motion_controller).current_motion_index;
    pCVar1->part_visibility_flags[0] = 1;
    pCVar1 = (CDeformableModelInstance *)piVar2;
  } while ((float *)piVar2 != &this_ptr->transformed_vertices[2].z);
  return;
}
