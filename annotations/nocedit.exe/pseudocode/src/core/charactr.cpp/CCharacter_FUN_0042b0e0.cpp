// Name: core_charactr.cpp_CCharacter_FUN_0042b0e0
// Address: 0042b0e0
// Address Range: [[0042b0e0, 0042b10f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042b0e0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042b0e0(CCharacter *this_ptr)

{
  if ((0 < *(int *)(this_ptr->cloth_data + 0x478)) && (*(int *)this_ptr->field13_0x2620 != 0)) {
    core_charactr_cpp_CCharacter_FUN_0042b110(this_ptr);
    return *(int *)this_ptr->field13_0x2620;
  }
  return *(int *)this_ptr->field13_0x2620;
}
