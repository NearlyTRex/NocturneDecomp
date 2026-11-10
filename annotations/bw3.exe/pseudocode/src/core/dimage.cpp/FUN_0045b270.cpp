// Name: core_dimage.cpp_FUN_0045b270
// Address: 0045b270
// Address Range: [[0045b270, 0045b295]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_FUN_0045b270(CDemonImage *this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_FUN_0045b270(CDemonImage *this_ptr)

{
  if (*(int *)(this_ptr + 0x300) == 0) {
    return;
  }
  FUN_005a3770(*(int *)(this_ptr + 0x300));
  *(uint *)(this_ptr + 0x300) = 0;
  return;
}
