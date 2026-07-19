// Name: dll_dx7.cpp_APIDLLselectTexture_FUN_10003e90
// Address: 10003e90
// Address Range: [[10003e90, 10003ec4]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLselectTexture_FUN_10003e90(SMRGLTextureBasic *texture_info,int texture_dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLselectTexture_FUN_10003e90(SMRGLTextureBasic *texture_info,int texture_dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

{
                    /* 0x3e90  27  APIDLLselectTexture */
  g_TextureData = texture_data;
  g_TexturePalette = palette_data;
  g_TextureOpacity = opacity_data;
  g_DX7CurrentTextureIndex = dll_dx7_cpp_resolveTextureSlot_FUN_10001470(texture_info);
  return 1;
}
