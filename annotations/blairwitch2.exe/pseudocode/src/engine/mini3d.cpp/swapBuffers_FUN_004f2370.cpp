// Name: engine_mini3d.cpp_swapBuffers_FUN_004f2370
// Address: 004f2370
// Address Range: [[004f2370, 004f23a2]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_swapBuffers_FUN_004f2370(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_swapBuffers_FUN_004f2370(void)

{
  if (g_INT_01c37788 != 0) {
    engine_special_cpp_presentToExternalRenderer_FUN_0055ff40(1);
    wincore_winrun_cpp_processWindowMessages_FUN_0058f270();
    g_FLOAT_01d0d2d4 = 3.0f;
    return;
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  g_FLOAT_01d0d2d4 = 3.0f;
  return;
}
