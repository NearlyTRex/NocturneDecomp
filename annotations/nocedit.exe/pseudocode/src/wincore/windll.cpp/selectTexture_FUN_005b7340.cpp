// Name: wincore_windll.cpp_selectTexture_FUN_005b7340
// Address: 005b7340
// Address Range: [[005b7340, 005b737d]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_selectTexture_FUN_005b7340(SMRGLTextureBasic * tex, byte * palette_data)
// Cross-references:
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 (005dd800) at 005dd887 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentTextureDimension = 0x100
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   int g_UseExternalRenderer
//   APIDLL_selectTexture* g_APIDLL_selectTexture

#include "nocturne.h"

int __cdecl wincore_windll_cpp_selectTexture_FUN_005b7340(SMRGLTextureBasic *tex,byte *palette_data)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_selectTexture)
                    (tex,g_CurrentTextureDimension,g_CurrentTextureData,palette_data,
                     g_CurrentTextureOpacityData);
  return iVar1;
}


// Assembly code:
// 005b7340: PUSH EBP
//   Label: wincore_windll.cpp_selectTexture_FUN_005b7340
// 005b7341: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7348: JNZ 0x005b734e
//   XREF to: 005b734e (CONDITIONAL_JUMP)
// 005b734a: XOR EAX,EAX
// 005b734c: POP EBP
// 005b734d: RET
// 005b734e: PUSH EDI
//   Label: LAB_005b734e
// 005b734f: PUSH ESI
// 005b7350: PUSH EBX
// 005b7351: MOV ECX,dword ptr [0x02d03e84]
//   XREF to: 02d03e84 (READ)
// 005b7357: PUSH ECX
// 005b7358: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005b735c: PUSH EBX
// 005b735d: MOV ESI,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b7363: PUSH ESI
// 005b7364: MOV EDI,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 005b736a: PUSH EDI
// 005b736b: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005b736f: PUSH EBP
// 005b7370: CALL dword ptr [g_APIDLL_selectTexture]
//   XREF to: 03f6b8b4 (READ)
// 005b7376: ADD ESP,0x14
// 005b7379: POP EBX
// 005b737a: POP ESI
// 005b737b: POP EDI
// 005b737c: POP EBP
// 005b737d: RET
