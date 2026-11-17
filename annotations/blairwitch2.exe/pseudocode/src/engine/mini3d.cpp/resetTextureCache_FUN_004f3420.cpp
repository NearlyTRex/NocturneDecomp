// Name: engine_mini3d.cpp_resetTextureCache_FUN_004f3420
// Address: 004f3420
// Address Range: [[004f3420, 004f343e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_004f3420(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_004f3420(void)

{
  engine_texture_cpp_clearTextureCache_FUN_00575010();
  if ((g_PTR_0264bcbc != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_PTR_0264bcbc)();
    return;
  }
  return;
}
