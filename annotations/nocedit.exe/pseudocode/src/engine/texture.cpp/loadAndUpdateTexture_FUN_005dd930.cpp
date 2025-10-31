// Name: engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930
// Address: 005dd930
// Address Range: [[005dd930, 005dd951]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930(SMRGLTextureBasic * tex_to_load, SMRGLTextureBasic * tex_to_update, SRGBColorPalette * palette_data)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30 (0048dc30) at 0048dc3a [UNCONDITIONAL_CALL]
// Function calls:
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   wincore_windll.cpp_updateTexture_FUN_005b7380

#include "nocturne.h"

void __cdecl
engine_texture_cpp_loadAndUpdateTexture_FUN_005dd930
          (SMRGLTextureBasic *tex_to_load,SMRGLTextureBasic *tex_to_update,
          SRGBColorPalette *palette_data)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(tex_to_load);
  wincore_windll_cpp_updateTexture_FUN_005b7380(tex_to_update,palette_data);
  return;
}


// Assembly code:
// 005dd930: PUSH EBX
//   Label: engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930
// 005dd931: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dd935: PUSH EDX
// 005dd936: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 005dd93b: ADD ESP,0x4
// 005dd93e: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dd942: PUSH ECX
// 005dd943: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005dd947: PUSH EBX
// 005dd948: CALL wincore_windll.cpp_updateTexture_FUN_005b7380
//   XREF to: 005b7380 (UNCONDITIONAL_CALL)
// 005dd94d: ADD ESP,0x8
// 005dd950: POP EBX
// 005dd951: RET
