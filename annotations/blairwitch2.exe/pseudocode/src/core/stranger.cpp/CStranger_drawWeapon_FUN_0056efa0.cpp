// Name: core_stranger.cpp_CStranger_drawWeapon_FUN_0056efa0
// Address: 0056efa0
// Address Range: [[0056efa0, 0056efdd]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_0056efa0(CStranger *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_0056efa0(CStranger *this_ptr,int drawn)

{
  this_ptr->guns_drawn = drawn;
  if ((drawn == 0) && (g_CGamePtr->flashlight_active != 0)) {
    g_CGamePtr->flashlight_active = 0;
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"?flashlit.wav" + 1);
    return;
  }
  return;
}
