// Name: engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40
// Address: 00545a40
// Address Range: [[00545a40, 00545a61]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00545a40(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00545a40(uint param_1,uint param_2)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(param_1);
  engine_special_cpp_updateTexture_FUN_00532440(param_1,param_2);
  return;
}
