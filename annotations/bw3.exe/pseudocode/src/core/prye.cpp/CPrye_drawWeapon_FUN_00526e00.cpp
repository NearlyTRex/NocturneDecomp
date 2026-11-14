// Name: core_prye.cpp_CPrye_drawWeapon_FUN_00526e00
// Address: 00526e00
// Address Range: [[00526e00, 00526e2b]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_drawWeapon_FUN_00526e00(CPrye *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_drawWeapon_FUN_00526e00(CPrye *this_ptr,int drawn)

{
  this_ptr->guns_drawn = drawn;
  if ((drawn == 0) && (g_CGamePtr->flashlight_active != 0)) {
    g_CGamePtr->flashlight_active = 0;
    return;
  }
  return;
}
