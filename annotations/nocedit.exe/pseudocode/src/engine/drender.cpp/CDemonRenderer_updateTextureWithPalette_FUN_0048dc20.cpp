// Name: engine_drender.cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20
// Address: 0048dc20
// Address Range: [[0048dc20, 0048dc2d]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture_to_load, SMRGLTextureBasic * texture_to_update)
// Function calls:
//   engine_texture.cpp_updateTextureWithPalette_FUN_005dd900

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20
          (CDemonRenderer *this_ptr,SMRGLTextureBasic *texture_to_load,
          SMRGLTextureBasic *texture_to_update)

{
  SMRGLTextureBasic *unaff_retaddr;
  
  engine_texture_cpp_updateTextureWithPalette_FUN_005dd900(texture_to_load,unaff_retaddr);
  return;
}


// Assembly code:
// 0048dc20: MOV EDX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20
//   XREF to: Stack[0x8] (READ)
// 0048dc24: PUSH EDX
// 0048dc25: CALL engine_texture.cpp_updateTextureWithPalette_FUN_005dd900
//   XREF to: 005dd900 (UNCONDITIONAL_CALL)
// 0048dc2a: ADD ESP,0x4
// 0048dc2d: RET
