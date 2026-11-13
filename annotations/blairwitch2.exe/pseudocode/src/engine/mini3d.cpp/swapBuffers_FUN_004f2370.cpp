// Name: engine_mini3d.cpp_swapBuffers_FUN_004f2370
// Address: 004f2370
// Address Range: [[004f2370, 004f23a2]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_swapBuffers_FUN_004f2370(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_swapBuffers_FUN_004f2370(void)

{
  if (_DAT_01c37788 != 0) {
    engine_special_cpp_presentToExternalRenderer_FUN_0055ff40(1);
    wincore_winrun_cpp_processWindowMessages_FUN_0058f270();
    _DAT_01d0d2d4 = _DAT_005fa164;
    return;
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  _DAT_01d0d2d4 = _DAT_005fa164;
  return;
}
