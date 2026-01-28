// Name: core_setdir.cpp_CZThumb_free_FUN_00574b50
// Address: 00574b50
// Address Range: [[00574b50, 00574b91]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_free_FUN_00574b50(CZThumb *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_free_FUN_00574b50(CZThumb *this_ptr)

{
  if (this_ptr->zbuffer_data == (void *)0x0) {
    this_ptr->height = 0;
    this_ptr->width = this_ptr->height;
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->zbuffer_data,"..\\core\\setdir.cpp",0xbb);
  this_ptr->zbuffer_data = (void *)0x0;
  this_ptr->height = 0;
  this_ptr->width = this_ptr->height;
  return;
}
