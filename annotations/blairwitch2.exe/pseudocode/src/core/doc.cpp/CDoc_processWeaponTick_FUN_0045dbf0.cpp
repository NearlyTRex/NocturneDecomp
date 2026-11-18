// Name: core_doc.cpp_CDoc_processWeaponTick_FUN_0045dbf0
// Address: 0045dbf0
// Address Range: [[0045dbf0, 0045dc12]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processWeaponTick_FUN_0045dbf0(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_processWeaponTick_FUN_0045dbf0(CDoc *this_ptr,float delta_time)

{
  CWeapon *this_ptr_00;
  
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    return;
  }
  (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
  return;
}
