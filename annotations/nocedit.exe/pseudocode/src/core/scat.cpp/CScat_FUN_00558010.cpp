// Name: core_scat.cpp_CScat_FUN_00558010
// Address: 00558010
// Address Range: [[00558010, 00558036]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_FUN_00558010(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_CScat_FUN_00558010(CScat *this_ptr)

{
  if (((this_ptr->guns_drawn != 0) && (this_ptr->unk4 != 0)) &&
     (*(int *)(this_ptr->unk4 + 0x2e0) == 8)) {
    return 1;
  }
  return 0;
}
