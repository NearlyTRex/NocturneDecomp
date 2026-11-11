// Name: core_dimage.cpp_FUN_00448f40
// Address: 00448f40
// Address Range: [[00448f40, 00448f96]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_FUN_00448f40(CDemonImage *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dimage_cpp_FUN_00448f40(CDemonImage *this_ptr)

{
  void *pvVar1;
  
  core_dimage_cpp_FUN_00448fa0(this_ptr);
  pvVar1 = malloc(this_ptr->width * this_ptr->height);
  this_ptr->data = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dimage.cpp";
  _DAT_01d046a4 = 0x31;
  core_main_c_FUN_004e4500("CDemonImage::allocMemory - Out of memory!");
  return;
}
