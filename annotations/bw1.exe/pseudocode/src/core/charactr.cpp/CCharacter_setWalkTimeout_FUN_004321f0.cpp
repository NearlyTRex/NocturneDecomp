// Name: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_004321f0
// Address: 004321f0
// Address Range: [[004321f0, 004321fe]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_004321f0(CCharacter *this_ptr,float timeout)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_004321f0(CCharacter *this_ptr,float timeout)

{
  *(float *)&this_ptr->field_0x2710 = timeout;
  return;
}
