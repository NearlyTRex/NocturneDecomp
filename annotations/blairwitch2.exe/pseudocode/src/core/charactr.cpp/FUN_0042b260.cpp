// Name: core_charactr.cpp_FUN_0042b260
// Address: 0042b260
// Address Range: [[0042b260, 0042b290]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042b260(CCharacter *this_ptr,char *sound_name)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_0042b260(CCharacter *this_ptr,char *sound_name)

{
  if (0.0 < *(float *)&this_ptr->field_0x3050) {
    return;
  }
  *(uint *)&this_ptr->field_0x3050 = 0x3dcccccd;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,sound_name);
  return;
}
