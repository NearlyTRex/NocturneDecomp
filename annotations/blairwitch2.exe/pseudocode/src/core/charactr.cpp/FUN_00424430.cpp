// Name: core_charactr.cpp_FUN_00424430
// Address: 00424430
// Address Range: [[00424430, 0042446b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_00424430(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_FUN_00424430(CCharacter *this_ptr)

{
  int iVar1;
  
  if (((*(int *)&this_ptr->field_0xdc == 0) &&
      (*(float *)&this_ptr->field_0x24 == *(float *)&this_ptr->field_0x2574)) &&
     (*(int *)&this_ptr->field_0x2570 != 0)) {
    iVar1 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 100))(this_ptr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
