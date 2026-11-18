// Name: engine_mini3d.cpp_useTexture_FUN_004f3380
// Address: 004f3380
// Address Range: [[004f3380, 004f3397]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_useTexture_FUN_004f3380(int texture)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_useTexture_FUN_004f3380(int texture)

{
  if (g_INT_01d0d2b4 != 0) {
    return;
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_00574e00((SMRGLTextureBasic *)texture);
  return;
}
