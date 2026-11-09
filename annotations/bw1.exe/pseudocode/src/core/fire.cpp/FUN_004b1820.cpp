// Name: core_fire.cpp_FUN_004b1820
// Address: 004b1820
// Address Range: [[004b1820, 004b1864]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b1820(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_004b1820(CExplosion *this_ptr)

{
  float fVar1;
  
  if ((0.0 < *(float *)&this_ptr->field_0xc) &&
     (fVar1 = *(float *)&this_ptr->field_0xc - *(float *)&g_CGamePtr->field_0x294,
     *(float *)&this_ptr->field_0xc = fVar1, fVar1 < 0.0)) {
    *(uint *)&this_ptr->field_0xc = 0;
    return;
  }
  return;
}
