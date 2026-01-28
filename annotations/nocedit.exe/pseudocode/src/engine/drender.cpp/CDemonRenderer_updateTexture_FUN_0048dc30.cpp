// Name: engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
// Address: 0048dc30
// Address Range: [[0048dc30, 0048dc42]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0048dc30 (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0048dc30
          (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette)

{
  SRGBColorPalette *unaff_retaddr;
  
  engine_texture_cpp_loadAndUpdateTexture_FUN_005dd930
            (texture,(SMRGLTextureBasic *)palette,unaff_retaddr);
  return;
}
