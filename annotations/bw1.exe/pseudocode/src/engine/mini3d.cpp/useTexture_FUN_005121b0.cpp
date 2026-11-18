// Name: engine_mini3d.cpp_useTexture_FUN_005121b0
// Address: 005121b0
// Address Range: [[005121b0, 005121c7]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_useTexture_FUN_005121b0(int texture)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_useTexture_FUN_005121b0(int texture)

{
  if (g_INT_01d25f14 != 0) {
    return;
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_00597a20((SMRGLTextureBasic *)texture);
  return;
}
