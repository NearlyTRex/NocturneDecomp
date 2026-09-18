// Name: core_stranger.cpp_CStranger_drawWeapon_FUN_005c6660
// Address: 005c6660
// MANUAL RECONSTRUCTION
// Address Range: [[005c6660, 005c669d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_005c6660(CStranger *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_005c6660(CStranger *this_ptr,int drawn)

{
  this_ptr->guns_drawn = drawn;
  if ((drawn == 0) && (g_CGamePtr->flashlight_active != 0)) {
    g_CGamePtr->flashlight_active = 0;
#if NOCTURNE_AUTHENTIC_FLASHLIGHT_DRAW
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"flashlit.wav");
#endif
    return;
  }
  return;
}
