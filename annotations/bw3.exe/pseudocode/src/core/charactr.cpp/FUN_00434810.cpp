// Name: core_charactr.cpp_FUN_00434810
// Address: 00434810
// Address Range: [[00434810, 00434840]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00434810(CCharacter *this_ptr,char *sound_name)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00434810(CCharacter *this_ptr,char *sound_name)

{
  if (0.0 < *(float *)&this_ptr->field_0x324c) {
    return;
  }
  *(uint *)&this_ptr->field_0x324c = 0x3dcccccd;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,sound_name);
  return;
}
