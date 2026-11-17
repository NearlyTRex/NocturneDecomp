// Name: engine_mini3d.cpp_resetTextureCache_FUN_00512250
// Address: 00512250
// Address Range: [[00512250, 0051226e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_00512250(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_00512250(void)

{
  engine_texture_cpp_clearTextureCache_FUN_00597c30();
  if ((g_PTR_02c8348c != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c8348c)();
    return;
  }
  return;
}
