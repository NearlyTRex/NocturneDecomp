// Name: core_dimage.cpp_CDemonImage_freeMemory_FUN_0045f100
// Address: 0045f100
// Address Range: [[0045f100, 0045f125]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_freeMemory_FUN_0045f100(CDemonImage *this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_freeMemory_FUN_0045f100(CDemonImage *this_ptr)

{
  if (this_ptr->data == (void *)0x0) {
    return;
  }
  FUN_005c09f0(this_ptr->data);
  this_ptr->data = (void *)0x0;
  return;
}
