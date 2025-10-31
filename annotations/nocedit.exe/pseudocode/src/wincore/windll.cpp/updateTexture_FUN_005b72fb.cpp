// Name: wincore_windll.cpp_updateTexture_FUN_005b72fb
// Address: 005b72fb
// Address Range: [[005b72fb, 005b733a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_updateTexture_FUN_005b72fb(SMRGLTextureBasic * texture_info)
// Globals:
//   int g_CurrentTextureDimension = 0x100
//   char[768] g_SourcePaletteData
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   int g_UseExternalRenderer
//   APIDLL_updateTexture* g_APIDLL_updateTexture

#include "nocturne.h"

int __cdecl wincore_windll_cpp_updateTexture_FUN_005b72fb(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_updateTexture)
                    (texture_info,g_CurrentTextureDimension,g_CurrentTextureData,g_SourcePaletteData
                     ,g_CurrentTextureOpacityData);
  return iVar1;
}


// Assembly code:
// 005b72fb: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_updateTexture_FUN_005b72fb
// 005b72fe: MOV ECX,ECX
// 005b7300: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7307: JNZ 0x005b730c
//   XREF to: 005b730c (CONDITIONAL_JUMP)
// 005b7309: XOR EAX,EAX
// 005b730b: RET
// 005b730c: PUSH EDI
//   Label: LAB_005b730c
// 005b730d: PUSH ESI
// 005b730e: PUSH EBX
// 005b730f: MOV ECX,dword ptr [0x02d03e84]
//   XREF to: 02d03e84 (READ)
// 005b7315: PUSH ECX
// 005b7316: PUSH 0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 005b731b: MOV EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b7321: PUSH EBX
// 005b7322: MOV ESI,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 005b7328: PUSH ESI
// 005b7329: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005b732d: PUSH EDI
// 005b732e: CALL dword ptr [g_APIDLL_updateTexture]
//   XREF to: 03f6b8b8 (READ)
// 005b7334: ADD ESP,0x14
// 005b7337: POP EBX
// 005b7338: POP ESI
// 005b7339: POP EDI
// 005b733a: RET
