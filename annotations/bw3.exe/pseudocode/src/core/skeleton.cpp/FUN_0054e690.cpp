// Name: core_skeleton.cpp_FUN_0054e690
// Address: 0054e690
// Address Range: [[0054e690, 0054e6ad]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054e690(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054e690(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  byte *puVar2;
  
  pCVar1 = this_ptr;
  do {
    puVar2 = &pCVar1->field_0x4;
    *(uint *)&pCVar1->field_0x2230 = 0;
    pCVar1 = (CDeformableModelInstance *)puVar2;
  } while (puVar2 != &this_ptr->field_0xf0);
  return;
}
