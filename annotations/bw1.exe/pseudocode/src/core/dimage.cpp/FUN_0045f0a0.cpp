// Name: core_dimage.cpp_FUN_0045f0a0
// Address: 0045f0a0
// Address Range: [[0045f0a0, 0045f0f6]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_FUN_0045f0a0(CDemonImage *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dimage_cpp_FUN_0045f0a0(CDemonImage *this_ptr)

{
  void *pvVar1;
  
  core_dimage_cpp_FUN_0045f100(this_ptr);
  pvVar1 = FUN_005c08d0(*(int *)(this_ptr + 0x304) * *(int *)(this_ptr + 0x308));
  *(void **)(this_ptr + 0x300) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dimage.cpp";
  _DAT_01d1d404 = 0x31;
  core_main_c_FUN_005030e0("CDemonImage::allocMemory - Out of memory!");
  return;
}
