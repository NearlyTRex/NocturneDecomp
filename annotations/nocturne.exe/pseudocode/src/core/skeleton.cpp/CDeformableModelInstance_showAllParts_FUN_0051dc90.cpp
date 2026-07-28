// Name: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90
// Address: 0051dc90
// Address Range: [[0051dc90, 0051dcaa]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int *piVar2;
  
  pCVar1 = this_ptr;
  do {
    piVar2 = &(pCVar1->motion_controller).current_motion_index;
    (pCVar1->part_data).visibility_flags[0] = 1;
    pCVar1 = (CDeformableModelInstance *)piVar2;
  } while ((float *)piVar2 != &this_ptr->transformed_vertices[2].z);
  return;
}
