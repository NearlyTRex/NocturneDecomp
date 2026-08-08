// Name: engine_special.cpp_updateTexture_FUN_005323c0
// Address: 005323c0
// Address Range: [[005323c0, 005323fa]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTexture_FUN_005323c0(SMRGLTextureBasic *texture_info,int texture_dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_updateTexture_FUN_005323c0(SMRGLTextureBasic *texture_info,int texture_dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_updateTexture)
                    (texture_info,DAT_005b762c,_DAT_01c02580,g_SourcePaletteData,_DAT_01c02584);
  return iVar1;
}
