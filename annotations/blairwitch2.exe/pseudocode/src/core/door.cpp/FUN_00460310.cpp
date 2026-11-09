// Name: core_door.cpp_FUN_00460310
// Address: 00460310
// Address Range: [[00460310, 0046031e]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_FUN_00460310(CDoor *this_ptr,float swing_range)

#include "nocturne.h"

void __cdecl core_door_cpp_FUN_00460310(CDoor *this_ptr,float swing_range)

{
  *(float *)&this_ptr->field_0xb28 = swing_range;
  return;
}
