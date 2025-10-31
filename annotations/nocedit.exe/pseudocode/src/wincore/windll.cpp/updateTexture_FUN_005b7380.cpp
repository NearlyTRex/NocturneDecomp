// Name: wincore_windll.cpp_updateTexture_FUN_005b7380
// Address: 005b7380
// Address Range: [[005b7380, 005b73bd]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic * tex, SRGBColorPalette * palette_data)
// Cross-references:
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 (005dd800) at 005dd89e [UNCONDITIONAL_CALL]
//   engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930 (005dd930) at 005dd948 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_updateTextureWithPalette_FUN_005dd900 (005dd900) at 005dd91a [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentTextureDimension = 0x100
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   int g_UseExternalRenderer
//   APIDLL_updateTexture* g_APIDLL_updateTexture

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_updateTexture)
                    (tex,g_CurrentTextureDimension,g_CurrentTextureData,palette_data,
                     g_CurrentTextureOpacityData);
  return iVar1;
}


// Assembly code:
// 005b7380: PUSH EBP
//   Label: wincore_windll.cpp_updateTexture_FUN_005b7380
// 005b7381: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7388: JNZ 0x005b738e
//   XREF to: 005b738e (CONDITIONAL_JUMP)
// 005b738a: XOR EAX,EAX
// 005b738c: POP EBP
// 005b738d: RET
// 005b738e: PUSH EDI
//   Label: LAB_005b738e
// 005b738f: PUSH ESI
// 005b7390: PUSH EBX
// 005b7391: MOV ECX,dword ptr [0x02d03e84]
//   XREF to: 02d03e84 (READ)
// 005b7397: PUSH ECX
// 005b7398: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005b739c: PUSH EBX
// 005b739d: MOV ESI,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b73a3: PUSH ESI
// 005b73a4: MOV EDI,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 005b73aa: PUSH EDI
// 005b73ab: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005b73af: PUSH EBP
// 005b73b0: CALL dword ptr [g_APIDLL_updateTexture]
//   XREF to: 03f6b8b8 (READ)
// 005b73b6: ADD ESP,0x14
// 005b73b9: POP EBX
// 005b73ba: POP ESI
// 005b73bb: POP EDI
// 005b73bc: POP EBP
// 005b73bd: RET
