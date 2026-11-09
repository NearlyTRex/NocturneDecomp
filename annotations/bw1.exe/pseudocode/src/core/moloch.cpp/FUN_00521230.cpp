// Name: core_moloch.cpp_FUN_00521230
// Address: 00521230
// Address Range: [[00521230, 00521277]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_FUN_00521230(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_FUN_00521230(CMoloch *this_ptr)

{
  *(uint *)&this_ptr->field_0x22358 = 0;
  *(uint *)&this_ptr->field_0x22354 = 1;
  if (*(int *)&this_ptr->field_0x22350 != 0) {
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
              (this_ptr,"moloch-morph-todemon.wav");
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"moloch-morph-tohuman.wav")
  ;
  return;
}
