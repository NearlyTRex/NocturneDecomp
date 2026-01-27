// Name: core_charactr.cpp_CCharacter_FUN_0042ca30
// Address: 0042ca30
// Address Range: [[0042ca30, 0042ca5f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042ca30(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca30(CCharacter *this_ptr)

{
  if ((*(int *)this_ptr->unk2 != 0) &&
     ((*(int *)(this_ptr->unk2 + 0x10) != 0 || (*(int *)(this_ptr->unk2 + 0x14) != 0)))) {
    return 0;
  }
  return 1;
}
