// Name: dll_dx7.cpp_APIDLLupdateTexture_FUN_10003ed0
// Address: 10003ed0
// Address Range: [[10003ed0, 10003eff]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLupdateTexture_FUN_10003ed0(SMRGLTextureBasic *texture_info,int texture_dimension,void *texture_data,void *palette_data,void *opacity_data)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLupdateTexture_FUN_10003ed0(SMRGLTextureBasic *texture_info,int texture_dimension,void *texture_data,void *palette_data,void *opacity_data)

{
                    /* 0x3ed0  37  APIDLLupdateTexture */
  g_TextureData = texture_data;
  g_TexturePalette = palette_data;
  g_TextureOpacity = opacity_data;
  dll_dx7_cpp_FUN_100015d0(texture_info);
  return 1;
}
