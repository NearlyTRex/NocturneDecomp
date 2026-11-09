// Name: core_door.cpp_CDoor_setSwingRange_FUN_00465060
// Address: 00465060
// Address Range: [[00465060, 0046506e]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00465060(CDoor *this_ptr,float swing_range)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00465060(CDoor *this_ptr,float swing_range)

{
  *(float *)&this_ptr->field_0x9cc = swing_range;
  return;
}
