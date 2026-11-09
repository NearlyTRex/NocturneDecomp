// Name: core_scat.cpp_FUN_00541de0
// Address: 00541de0
// Address Range: [[00540a54, 00540a59] [00541de0, 00541e06]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_FUN_00541de0(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_FUN_00541de0(CScat *this_ptr)

{
  if (((*(int *)&this_ptr->field_0x1ffac != 0) && (*(int *)&this_ptr->field_0x1ffc0 != 0)) &&
     (*(int *)(*(int *)&this_ptr->field_0x1ffc0 + 0x2e0) == 8)) {
    return 1;
  }
  return 0;
}
