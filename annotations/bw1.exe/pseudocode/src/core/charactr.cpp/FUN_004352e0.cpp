// Name: core_charactr.cpp_FUN_004352e0
// Address: 004352e0
// Address Range: [[004352e0, 00435310]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_004352e0(CCharacter *this_ptr,char *sound_name)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_004352e0(CCharacter *this_ptr,char *sound_name)

{
  if (0.0 < *(float *)&this_ptr->field_0x2fe4) {
    return;
  }
  *(uint *)&this_ptr->field_0x2fe4 = 0x3dcccccd;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,sound_name);
  return;
}
