// Name: core_moloch.cpp_FUN_00502280
// Address: 00502280
// Address Range: [[00502280, 005022c7]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_FUN_00502280(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_FUN_00502280(CMoloch *this_ptr)

{
  *(uint *)&this_ptr->field_0x278fc = 0;
  *(uint *)&this_ptr->field_0x278f8 = 1;
  if (*(int *)&this_ptr->field_0x278f4 != 0) {
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
              (this_ptr,"moloch-morph-todemon.wav");
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"moloch-morph-tohuman.wav")
  ;
  return;
}
