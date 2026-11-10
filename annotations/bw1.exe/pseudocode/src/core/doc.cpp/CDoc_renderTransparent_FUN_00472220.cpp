// Name: core_doc.cpp_CDoc_renderTransparent_FUN_00472220
// Address: 00472220
// Address Range: [[00472220, 00472254]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00472220(CDoc *this_ptr)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00472220(CDoc *this_ptr)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0((CCharacter *)this_ptr);
  iVar1 = *(int *)&this_ptr->field_0x20004;
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
  return 1;
}
