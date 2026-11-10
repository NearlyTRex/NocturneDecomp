// Name: core_stranger.cpp_CStranger_drawWeapon_FUN_0056efa0
// Address: 0056efa0
// Address Range: [[0056efa0, 0056efdd]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_0056efa0(CStranger *this_ptr,int drawn)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_drawWeapon_FUN_0056efa0(CStranger *this_ptr,int drawn)

{
  this_ptr->guns_drawn = drawn;
  if ((drawn == 0) && (*(int *)&g_CGamePtr->field_0x264 != 0)) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"?flashlit.wav" + 1);
    return;
  }
  return;
}
