// Name: engine_texture.cpp_updateTextureWithPalette_FUN_005dd900
// Address: 005dd900
// Address Range: [[005dd900, 005dd923]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_updateTextureWithPalette_FUN_005dd900(SMRGLTextureBasic * texture_to_load, SMRGLTextureBasic * texture_to_update)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20 (0048dc20) at 0048dc25 [UNCONDITIONAL_CALL]
// Globals:
//   byte* g_CurrentPalette
// Function calls:
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   wincore_windll.cpp_updateTexture_FUN_005b7380

#include "nocturne.h"

void __cdecl
engine_texture_cpp_updateTextureWithPalette_FUN_005dd900
          (SMRGLTextureBasic *texture_to_load,SMRGLTextureBasic *texture_to_update)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture_to_load);
  wincore_windll_cpp_updateTexture_FUN_005b7380
            (texture_to_update,(SRGBColorPalette *)g_CurrentPalette);
  return;
}


// Assembly code:
// 005dd900: PUSH EBX
//   Label: engine_texture.cpp_updateTextureWithPalette_FUN_005dd900
// 005dd901: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dd905: PUSH EDX
// 005dd906: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 005dd90b: ADD ESP,0x4
// 005dd90e: MOV ECX,dword ptr [0x02d01920]
//   XREF to: 02d01920 (READ)
// 005dd914: PUSH ECX
// 005dd915: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005dd919: PUSH EBX
// 005dd91a: CALL wincore_windll.cpp_updateTexture_FUN_005b7380
//   XREF to: 005b7380 (UNCONDITIONAL_CALL)
// 005dd91f: ADD ESP,0x8
// 005dd922: POP EBX
// 005dd923: RET
