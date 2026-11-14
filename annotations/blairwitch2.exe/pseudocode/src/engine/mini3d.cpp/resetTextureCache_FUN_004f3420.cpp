// Name: engine_mini3d.cpp_resetTextureCache_FUN_004f3420
// Address: 004f3420
// Address Range: [[004f3420, 004f343e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_004f3420(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_004f3420(void)

{
  engine_texture_cpp_FUN_00575010();
  if ((_DAT_0264bcbc != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bcbc)();
    return;
  }
  return;
}
