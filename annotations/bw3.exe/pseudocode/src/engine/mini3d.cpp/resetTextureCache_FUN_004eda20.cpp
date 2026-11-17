// Name: engine_mini3d.cpp_resetTextureCache_FUN_004eda20
// Address: 004eda20
// Address Range: [[004eda20, 004eda3e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_004eda20(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_004eda20(void)

{
  engine_texture_cpp_clearTextureCache_FUN_0056ac20();
  if ((g_PTR_02cf60e8 != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_PTR_02cf60e8)();
    return;
  }
  return;
}
