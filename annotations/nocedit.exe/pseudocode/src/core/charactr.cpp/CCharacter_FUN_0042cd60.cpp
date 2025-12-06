// Name: core_charactr.cpp_CCharacter_FUN_0042cd60
// Address: 0042cd60
// Address Range: [[0042cd60, 0042cd85]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042cd60(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd60(CCharacter *this_ptr)

{
  if (*(int *)(this_ptr->field11_0x25a0 + 0x14) == 0) {
    return;
  }
  core_door_cpp_FUN_0047fcf0();
  this_ptr->field11_0x25a0[0x14] = '\0';
  this_ptr->field11_0x25a0[0x15] = '\0';
  this_ptr->field11_0x25a0[0x16] = '\0';
  this_ptr->field11_0x25a0[0x17] = '\0';
  return;
}
