// Name: core_charactr.cpp_CCharacter_setDoorTarget_FUN_00431970
// Address: 00431970
// Address Range: [[00431970, 0043197e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setDoorTarget_FUN_00431970(CCharacter *this_ptr,CDoor *door_target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setDoorTarget_FUN_00431970(CCharacter *this_ptr,CDoor *door_target)

{
  *(CDoor **)&this_ptr->field_0x2740 = door_target;
  return;
}
