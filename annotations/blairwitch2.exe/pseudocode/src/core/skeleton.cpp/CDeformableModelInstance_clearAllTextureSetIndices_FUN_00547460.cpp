// Name: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460
// Address: 00547460
// Address Range: [[00547460, 0054747a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  byte *puVar2;
  
  pCVar1 = this_ptr;
  do {
    puVar2 = &pCVar1->field_0x4;
    *(uint *)&pCVar1->field_0x21b8 = 0;
    pCVar1 = (CDeformableModelInstance *)puVar2;
  } while (puVar2 != &this_ptr->field_0x78);
  return;
}
