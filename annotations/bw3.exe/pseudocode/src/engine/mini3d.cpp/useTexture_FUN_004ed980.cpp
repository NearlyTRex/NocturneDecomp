// Name: engine_mini3d.cpp_useTexture_FUN_004ed980
// Address: 004ed980
// Address Range: [[004ed980, 004ed997]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_useTexture_FUN_004ed980(int texture)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_useTexture_FUN_004ed980(int texture)

{
  if (g_INT_01d7a694 != 0) {
    return;
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10((SMRGLTextureBasic *)texture);
  return;
}
