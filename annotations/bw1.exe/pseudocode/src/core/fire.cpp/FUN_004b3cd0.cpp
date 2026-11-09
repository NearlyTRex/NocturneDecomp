// Name: core_fire.cpp_FUN_004b3cd0
// Address: 004b3cd0
// Address Range: [[004b3cd0, 004b3d1a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b3cd0(CTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_004b3cd0(CTrail *this_ptr)

{
  if (0.0 < *(float *)&this_ptr->field_0x10) {
    *(float *)&this_ptr->field_0x10 =
         *(float *)&this_ptr->field_0x10 - *(float *)&g_CGamePtr->field_0x294;
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
