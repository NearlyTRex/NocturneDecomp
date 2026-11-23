// Name: engine_mini3d.cpp_free32_FUN_004f04c0
// Address: 004f04c0
// Address Range: [[004f04c0, 004f0502]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_free32_FUN_004f04c0(void *ptr)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_free32_FUN_004f04c0(void *ptr)

{
  if (ptr == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 3582;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CMini3D::free32 - NULL pointer being freed");
  }
  debugFree((void *)((int)ptr - (uint)*(byte *)((int)ptr + -1)));
  return;
}
