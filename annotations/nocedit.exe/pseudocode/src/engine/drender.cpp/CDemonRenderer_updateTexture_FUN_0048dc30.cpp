// Name: engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
// Address: 0048dc30
// Address Range: [[0048dc30, 0048dc42]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044face [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310 (0044f310) at 0044f3d2 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930

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


// Assembly code:
// 0048dc30: MOV EDX,dword ptr [ESP + 0xc]
//   Label: engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
//   XREF to: Stack[0xc] (READ)
// 0048dc34: PUSH EDX
// 0048dc35: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048dc39: PUSH ECX
// 0048dc3a: CALL engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930
//   XREF to: 005dd930 (UNCONDITIONAL_CALL)
// 0048dc3f: ADD ESP,0x8
// 0048dc42: RET
