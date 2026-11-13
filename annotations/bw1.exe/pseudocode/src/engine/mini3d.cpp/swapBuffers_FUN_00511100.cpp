// Name: engine_mini3d.cpp_swapBuffers_FUN_00511100
// Address: 00511100
// Address Range: [[00511100, 00511132]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_swapBuffers_FUN_00511100(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_swapBuffers_FUN_00511100(void)

{
  if (_DAT_01c50948 != 0) {
    engine_special_cpp_presentToExternalRenderer_FUN_00582990(1);
    wincore_winrun_cpp_FUN_005b2cf0();
    _DAT_01d25f34 = _DAT_00603c94;
    return;
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  _DAT_01d25f34 = _DAT_00603c94;
  return;
}
