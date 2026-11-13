// Name: engine_mini3d.cpp_free32_FUN_004f5f70
// Address: 004f5f70
// Address Range: [[004f5f70, 004f5fb2]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_free32_FUN_004f5f70(void *ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_free32_FUN_004f5f70(void *ptr)

{
  if (ptr == (void *)0x0) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0xe11;
    core_main_c_FUN_004e4500("CMini3D::free32 - NULL pointer being freed");
  }
  FUN_005b86a0((int)ptr - (uint)*(byte *)((int)ptr + -1));
  return;
}
