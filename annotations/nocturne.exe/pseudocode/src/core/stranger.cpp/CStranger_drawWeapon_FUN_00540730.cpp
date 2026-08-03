// Name: core_stranger.cpp_CStranger_drawWeapon_FUN_00540730
// Address: 00540730
// Address Range: [[00540730, 0054076d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_00540730(CStranger *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_00540730(CStranger *this_ptr,int drawn)

{
  this_ptr->guns_drawn = drawn;
  if ((drawn == 0) && (g_CGame_PTR_005b9354->flashlight_active != 0)) {
    g_CGame_PTR_005b9354->flashlight_active = 0;
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"flashlit.wav");
    return;
  }
  return;
}
