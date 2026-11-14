// Name: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_00569ae0
// Address: 00569ae0
// Address Range: [[00569ae0, 00569afd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00569ae0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00569ae0(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int *piVar2;
  
  pCVar1 = this_ptr;
  do {
    piVar2 = &(pCVar1->base).current_motion_index;
    (pCVar1->part_data).visibility_flags[0] = 1;
    pCVar1 = (CDeformableModelInstance *)piVar2;
  } while ((float *)piVar2 != &this_ptr->bone_origins[0xc].z);
  return;
}
