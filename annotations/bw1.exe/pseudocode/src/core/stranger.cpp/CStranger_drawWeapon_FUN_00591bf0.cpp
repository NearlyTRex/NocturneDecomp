// Name: core_stranger.cpp_CStranger_drawWeapon_FUN_00591bf0
// Address: 00591bf0
// Address Range: [[00591bf0, 00591c2d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_00591bf0(CStranger *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_00591bf0(CStranger *this_ptr,int drawn)

{
  this_ptr->guns_drawn = drawn;
  if ((drawn == 0) && (*(int *)&g_CGamePtr->field_0x264 != 0)) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"?flashlit.wav" + 1);
    return;
  }
  return;
}
