// Name: APIDLLupdateTexture
// Address: 10003ed0
// Address Range: [[10003ed0, 10003eff]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLupdateTexture(SMRGLTextureBasic *texture_info,int texture_dimension,void *texture_data,void *palette_data,void *opacity_data)

#include "nocturne.h"

int __cdecl APIDLLupdateTexture(SMRGLTextureBasic *texture_info,int texture_dimension,void *texture_data,void *palette_data,void *opacity_data)

{
                    /* 0x3ed0  37  APIDLLupdateTexture */
  DAT_1020de38 = texture_data;
  DAT_10138fb0 = palette_data;
  DAT_1024061c = opacity_data;
  FUN_100015d0(texture_info);
  return 1;
}
