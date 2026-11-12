// Name: engine_texture.cpp_loadTextureAndGetData_FUN_00574e80
// Address: 00574e80
// Address Range: [[00574e80, 00574e94]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_00574e80(SMRGLTextureBasic *texture_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_00574e80(SMRGLTextureBasic *texture_info)

{
  engine_texture_cpp_FUN_00574e00(texture_info);
  return (SMRGLHeaderExtended *)(texture_info + 3);
}
