// Name: core_skeleton.cpp_FUN_0054e690
// Address: 0054e690
// Address Range: [[0054e690, 0054e6ad]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054e690(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054e690(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int *piVar2;
  
  pCVar1 = this_ptr;
  do {
    piVar2 = &(pCVar1->base).current_motion_index;
    *(uint *)&pCVar1->field_0x2230 = 0;
    pCVar1 = (CDeformableModelInstance *)piVar2;
  } while ((float *)piVar2 != &this_ptr->bone_origins[0xc].z);
  return;
}
