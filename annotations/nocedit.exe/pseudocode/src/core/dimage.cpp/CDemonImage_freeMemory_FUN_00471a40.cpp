// Name: core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
// Address: 00471a40
// Address Range: [[00471a40, 00471a6c]]
// Convention: __cdecl
// Signature: void core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40(CDemonImage * this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_freeMemory_FUN_00471a40(CDemonImage *this_ptr)

{
  if (this_ptr->data == (void *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->data,"..\\core\\dimage.cpp",0x36);
  this_ptr->data = (void *)0x0;
  return;
}
