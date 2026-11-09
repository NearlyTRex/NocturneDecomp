// Name: core_fire.cpp_FUN_004a0630
// Address: 004a0630
// Address Range: [[004a0630, 004a067a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004a0630(CTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_004a0630(CTrail *this_ptr)

{
  if (0.0 < *(float *)&this_ptr->field_0x10) {
    *(float *)&this_ptr->field_0x10 =
         *(float *)&this_ptr->field_0x10 - *(float *)&g_CGamePtr->field_0x314;
    if (0.0 <= *(float *)&this_ptr->field_0x10) {
      *(float *)&this_ptr->field_0x14 =
           (1.0 - (*(float *)&this_ptr->field_0x18 - *(float *)&this_ptr->field_0x10) /
                  *(float *)&this_ptr->field_0x18) * *(float *)&this_ptr->field_0x1c;
      return;
    }
    *(uint *)&this_ptr->field_0x10 = 0;
  }
  return;
}
