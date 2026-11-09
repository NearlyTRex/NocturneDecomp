// Name: core_charactr.cpp_CCharacter_setDoorTarget_FUN_00432550
// Address: 00432550
// Address Range: [[00432550, 0043255e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setDoorTarget_FUN_00432550(CCharacter *this_ptr,CDoor *door_target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setDoorTarget_FUN_00432550(CCharacter *this_ptr,CDoor *door_target)

{
  *(CDoor **)&this_ptr->field_0x2740 = door_target;
  return;
}
