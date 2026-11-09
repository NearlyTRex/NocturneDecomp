// Name: core_skeleton.cpp_FUN_00569b00
// Address: 00569b00
// Address Range: [[00569b00, 00569b1d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00569b00(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_00569b00(CDeformableModelInstance *this_ptr)

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
