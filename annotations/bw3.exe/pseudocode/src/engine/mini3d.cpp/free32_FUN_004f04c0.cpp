// Name: engine_mini3d.cpp_free32_FUN_004f04c0
// Address: 004f04c0
// Address Range: [[004f04c0, 004f0502]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_free32_FUN_004f04c0(void *ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_free32_FUN_004f04c0(void *ptr)

{
  if (ptr == (void *)0x0) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0xdfe;
    core_main_c_FUN_004e4330("CMini3D::free32 - NULL pointer being freed");
  }
  FUN_005a3770((int)ptr - (uint)*(byte *)((int)ptr + -1));
  return;
}
