// Name: core_setdir.cpp_CZThumb_free_FUN_005386a0
// Address: 005386a0
// Address Range: [[005386a0, 005386d7]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_free_FUN_005386a0(CZThumb *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_free_FUN_005386a0(CZThumb *this_ptr)

{
  if (this_ptr->zbuffer_data == (void *)0x0) {
    this_ptr->height = 0;
    this_ptr->width = this_ptr->height;
    return;
  }
  FUN_005b86a0(this_ptr->zbuffer_data);
  this_ptr->zbuffer_data = (void *)0x0;
  this_ptr->height = 0;
  this_ptr->width = this_ptr->height;
  return;
}
