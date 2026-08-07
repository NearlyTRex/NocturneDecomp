// Name: engine_special.cpp_updateTexture_FUN_00532440
// Address: 00532440
// Address Range: [[00532440, 0053247d]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_updateTexture_FUN_00532440(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_updateTexture_FUN_00532440(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9da0)(tex,DAT_005b762c,_DAT_01c02580,palette_data,_DAT_01c02584);
  return iVar1;
}
