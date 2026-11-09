// Name: core_charactr.cpp_FUN_0042e120
// Address: 0042e120
// Address Range: [[0042e120, 0042e15b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_0042e120(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_FUN_0042e120(CCharacter *this_ptr)

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
