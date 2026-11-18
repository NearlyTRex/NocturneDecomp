// Name: core_prye.cpp_CPrye_processWeaponTick_FUN_00526dc0
// Address: 00526dc0
// Address Range: [[00526dc0, 00526de2]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_processWeaponTick_FUN_00526dc0(CPrye *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_processWeaponTick_FUN_00526dc0(CPrye *this_ptr,float delta_time)

{
  CWeapon *this_ptr_00;
  
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    return;
  }
  (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
  return;
}
