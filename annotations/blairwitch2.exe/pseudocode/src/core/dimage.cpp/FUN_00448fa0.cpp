// Name: core_dimage.cpp_FUN_00448fa0
// Address: 00448fa0
// Address Range: [[00448fa0, 00448fc5]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_FUN_00448fa0(CDemonImage *this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_FUN_00448fa0(CDemonImage *this_ptr)

{
  if (*(int *)(this_ptr + 0x300) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(this_ptr + 0x300));
  *(uint *)(this_ptr + 0x300) = 0;
  return;
}
