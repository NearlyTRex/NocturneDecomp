// Name: dll_dx7.cpp_loadTexture_FUN_100030e0
// Address: 100030e0
// Address Range: [[100030e0, 100030f2]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_loadTexture_FUN_100030e0(int texture_index)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_loadTexture_FUN_100030e0(int texture_index)

{
  g_DX7CurrentTextureIndex = texture_index;
  dll_dx7_cpp_uploadCurrentTexture_FUN_10003a80();
  return;
}
