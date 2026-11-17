// Name: engine_mini3d.cpp_free32_FUN_00514cf0
// Address: 00514cf0
// Address Range: [[00514cf0, 00514d32]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_free32_FUN_00514cf0(void *ptr)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_free32_FUN_00514cf0(void *ptr)

{
  if (ptr == (void *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\mini3d.cpp";
    g_INT_01d1d404 = 0xdfe;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CMini3D::free32 - NULL pointer being freed");
  }
  debugFree((void *)((int)ptr - (uint)*(byte *)((int)ptr + -1)));
  return;
}
