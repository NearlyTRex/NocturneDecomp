// Name: engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0
// Address: 005dd8c0
// Address Range: [[005dd8c0, 005dd8d4]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0(SMRGLTextureBasic * texture_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_texture_cpp_loadTextureAndGetData_FUN_005dd8c0(SMRGLTextureBasic *texture_info)

{
  int in_stack_00000008;
  
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture_info);
  return (SMRGLHeaderExtended *)(in_stack_00000008 + 0x48);
}
