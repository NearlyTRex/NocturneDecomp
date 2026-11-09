// Name: core_fire.cpp_FUN_00498e80
// Address: 00498e80
// Address Range: [[00498e80, 00498ec4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_00498e80(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_00498e80(CExplosion *this_ptr)

{
  float fVar1;
  
  if ((0.0 < *(float *)&this_ptr->field_0xc) &&
     (fVar1 = *(float *)&this_ptr->field_0xc - *(float *)&g_CGamePtr->field_0x284,
     *(float *)&this_ptr->field_0xc = fVar1, fVar1 < 0.0)) {
    *(uint *)&this_ptr->field_0xc = 0;
    return;
  }
  return;
}
