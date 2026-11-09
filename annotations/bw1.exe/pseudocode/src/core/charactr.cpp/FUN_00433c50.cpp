// Name: core_charactr.cpp_FUN_00433c50
// Address: 00433c50
// Address Range: [[00433c50, 00433c5e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00433c50(CCharacter *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00433c50(CCharacter *this_ptr,CDemonActor *target)

{
  *(CDemonActor **)&this_ptr->field_0x2764 = target;
  return;
}
