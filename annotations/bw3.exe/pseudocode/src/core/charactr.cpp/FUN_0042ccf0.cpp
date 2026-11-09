// Name: core_charactr.cpp_FUN_0042ccf0
// Address: 0042ccf0
// Address Range: [[0042ccf0, 0042cd2b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_0042ccf0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_FUN_0042ccf0(CCharacter *this_ptr)

{
  int iVar1;
  
  if (((*(int *)&this_ptr->field_0xdc == 0) &&
      (*(float *)&this_ptr->field_0x24 == *(float *)&this_ptr->field_0x2504)) &&
     (*(int *)&this_ptr->field_0x2500 != 0)) {
    iVar1 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x5c))(this_ptr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
