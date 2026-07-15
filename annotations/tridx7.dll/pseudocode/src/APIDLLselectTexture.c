// Name: APIDLLselectTexture
// Address: 10003e90
// Address Range: [[10003e90, 10003ec4]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLselectTexture(SMRGLTextureBasic *texture_info,int texture_dimension,void *texture_data,void *palette_data,void *opacity_data)

#include "nocturne.h"

int __cdecl APIDLLselectTexture(SMRGLTextureBasic *texture_info,int texture_dimension,void *texture_data,void *palette_data,void *opacity_data)

{
                    /* 0x3e90  27  APIDLLselectTexture */
  DAT_1020de38 = texture_data;
  DAT_10138fb0 = palette_data;
  DAT_1024061c = opacity_data;
  DAT_10014138 = FUN_10001470(texture_info);
  return 1;
}
