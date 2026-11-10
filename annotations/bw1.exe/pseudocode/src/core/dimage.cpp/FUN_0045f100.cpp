// Name: core_dimage.cpp_FUN_0045f100
// Address: 0045f100
// Address Range: [[0045f100, 0045f125]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_FUN_0045f100(CDemonImage *this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_FUN_0045f100(CDemonImage *this_ptr)

{
  if (*(int *)(this_ptr + 0x300) == 0) {
    return;
  }
  FUN_005c09f0(*(int *)(this_ptr + 0x300));
  *(uint *)(this_ptr + 0x300) = 0;
  return;
}
