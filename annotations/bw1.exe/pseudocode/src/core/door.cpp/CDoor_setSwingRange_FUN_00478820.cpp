// Name: core_door.cpp_CDoor_setSwingRange_FUN_00478820
// Address: 00478820
// Address Range: [[00478820, 0047882e]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00478820(CDoor *this_ptr,float swing_range)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00478820(CDoor *this_ptr,float swing_range)

{
  *(float *)&this_ptr->field_0x9cc = swing_range;
  return;
}
