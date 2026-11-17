// Name: engine_mini3d.cpp_swapBuffers_FUN_00511100
// Address: 00511100
// Address Range: [[00511100, 00511132]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_swapBuffers_FUN_00511100(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_swapBuffers_FUN_00511100(void)

{
  if (g_INT_01c50948 != 0) {
    engine_special_cpp_presentToExternalRenderer_FUN_00582990(1);
    wincore_winrun_cpp_processWindowMessages_FUN_005b2cf0();
    g_FLOAT_01d25f34 = 3.0f;
    return;
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  g_FLOAT_01d25f34 = 3.0f;
  return;
}
