// Name: engine_texture.cpp_loadTextureAndGetData_FUN_005459d0
// Address: 005459d0
// Address Range: [[005459d0, 005459e4]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_005459d0(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_005459d0(SMRGLTextureBasic *texture_info)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(texture_info);
  return (SMRGLHeaderExtended *)(texture_info + 3);
}
