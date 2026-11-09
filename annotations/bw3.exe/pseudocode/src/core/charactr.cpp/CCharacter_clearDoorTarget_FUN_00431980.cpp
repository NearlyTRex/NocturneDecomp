// Name: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00431980
// Address: 00431980
// Address Range: [[00431980, 004319a5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00431980(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00431980(CCharacter *this_ptr)

{
  if (*(CDoor **)&this_ptr->field_0x2740 == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_CDoor_onOpened_FUN_00463d10(*(CDoor **)&this_ptr->field_0x2740);
  *(uint *)&this_ptr->field_0x2740 = 0;
  return;
}
