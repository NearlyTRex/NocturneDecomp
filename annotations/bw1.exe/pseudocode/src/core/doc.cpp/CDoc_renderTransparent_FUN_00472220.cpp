// Name: core_doc.cpp_CDoc_renderTransparent_FUN_00472220
// Address: 00472220
// Address Range: [[00472220, 00472254]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00472220(CDoc *this_ptr)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00472220(CDoc *this_ptr)

{
  CWeapon *this_ptr_00;
  
  core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0((CCharacter *)this_ptr);
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    return 1;
  }
  (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  return 1;
}
