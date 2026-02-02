// Name: core_scat.cpp_CScat_FUN_00558010
// Address: 00558010
// Address Range: [[00558010, 00558036]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_FUN_00558010(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_CScat_FUN_00558010(CScat *this_ptr)

{
  if (((*(int *)this_ptr->unk != 0) && (*(int *)(this_ptr->unk + 0x14) != 0)) &&
     (*(int *)(*(int *)(this_ptr->unk + 0x14) + 0x2e0) == 8)) {
    return 1;
  }
  return 0;
}
