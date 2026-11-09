// Name: core_fire.cpp_FUN_0049b330
// Address: 0049b330
// Address Range: [[0049b330, 0049b37a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049b330(CTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_0049b330(CTrail *this_ptr)

{
  if (0.0 < *(float *)&this_ptr->field_0x10) {
    *(float *)&this_ptr->field_0x10 =
         *(float *)&this_ptr->field_0x10 - *(float *)&g_CGamePtr->field_0x284;
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
