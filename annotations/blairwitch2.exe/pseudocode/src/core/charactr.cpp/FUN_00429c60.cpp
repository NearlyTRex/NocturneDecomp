// Name: core_charactr.cpp_FUN_00429c60
// Address: 00429c60
// Address Range: [[00429c60, 00429c6e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00429c60(CCharacter *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00429c60(CCharacter *this_ptr,CDemonActor *target)

{
  *(CDemonActor **)&this_ptr->field_0x27d0 = target;
  return;
}
