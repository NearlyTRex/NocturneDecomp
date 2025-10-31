// Name: wincore_windll.cpp_selectTexture_FUN_005b72b3
// Address: 005b72b3
// Address Range: [[005b72b3, 005b72fa]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_selectTexture_FUN_005b72b3(SMRGLTextureBasic * texture_info)
// Globals:
//   int g_CurrentTextureDimension = 0x100
//   char[768] g_SourcePaletteData
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   int g_UseExternalRenderer
//   APIDLL_selectTexture* g_APIDLL_selectTexture

#include "nocturne.h"

int __cdecl wincore_windll_cpp_selectTexture_FUN_005b72b3(SMRGLTextureBasic *texture_info)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_selectTexture)
                    (texture_info,g_CurrentTextureDimension,g_CurrentTextureData,g_SourcePaletteData
                     ,g_CurrentTextureOpacityData);
  return iVar1;
}


// Assembly code:
// 005b72b3: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_selectTexture_FUN_005b72b3
// 005b72b9: LEA EDX,[EDX]
// 005b72bf: NOP
// 005b72c0: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b72c7: JNZ 0x005b72cc
//   XREF to: 005b72cc (CONDITIONAL_JUMP)
// 005b72c9: XOR EAX,EAX
// 005b72cb: RET
// 005b72cc: PUSH EDI
//   Label: LAB_005b72cc
// 005b72cd: PUSH ESI
// 005b72ce: PUSH EBX
// 005b72cf: MOV ECX,dword ptr [0x02d03e84]
//   XREF to: 02d03e84 (READ)
// 005b72d5: PUSH ECX
// 005b72d6: PUSH 0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 005b72db: MOV EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 005b72e1: PUSH EBX
// 005b72e2: MOV ESI,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 005b72e8: PUSH ESI
// 005b72e9: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005b72ed: PUSH EDI
// 005b72ee: CALL dword ptr [g_APIDLL_selectTexture]
//   XREF to: 03f6b8b4 (READ)
// 005b72f4: ADD ESP,0x14
// 005b72f7: POP EBX
// 005b72f8: POP ESI
// 005b72f9: POP EDI
// 005b72fa: RET
