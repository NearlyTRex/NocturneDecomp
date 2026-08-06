// Name: core_dimage.cpp_CDemonImage_freeMemory_FUN_0044d4c0
// Address: 0044d4c0
// Address Range: [[0044d4c0, 0044d4e5]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_freeMemory_FUN_0044d4c0(CDemonImage *this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_freeMemory_FUN_0044d4c0(CDemonImage *this_ptr)

{
  if (this_ptr->data == (void *)0x0) {
    return;
  }
  free(this_ptr->data);
  this_ptr->data = (void *)0x0;
  return;
}
