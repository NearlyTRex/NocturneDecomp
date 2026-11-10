// Name: core_cross.cpp_CCross_renderOpaque_FUN_005a6ba0
// Address: 005a6ba0
// Address Range: [[005a6ba0, 005a6bb7]]
// Convention: __cdecl
// Signature: int __cdecl core_cross_cpp_CCross_renderOpaque_FUN_005a6ba0(CCross *this_ptr)

#include "nocturne.h"

int __cdecl core_cross_cpp_CCross_renderOpaque_FUN_005a6ba0(CCross *this_ptr)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_00589b90((CWeapon *)this_ptr);
  return (uint)(iVar1 != 0);
}
