// Name: wincore_windll.cpp_updateTextureBGRA_FUN_005b73f6
// Address: 005b73f6
// Address Range: [[005b73f6, 005b7435]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_updateTextureBGRA_FUN_005b73f6(SMRGLTextureBasic * texture_info, int flags)
// Globals:
//   int g_CurrentTextureDimension = 0x100
//   int g_UseExternalRenderer
//   APIDLL_updateTextureBGRA* g_APIDLL_updateTextureBGRA

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_updateTextureBGRA_FUN_005b73f6(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) &&
     (g_APIDLL_updateTextureBGRA != (APIDLL_updateTextureBGRA *)0x0)) {
    iVar1 = (*g_APIDLL_updateTextureBGRA)(texture_info,g_CurrentTextureDimension,flags);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 005b73f6: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_updateTextureBGRA_FUN_005b73f6
// 005b73fc: LEA EDX,[EDX]
// 005b7400: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7407: JZ 0x005b7412
//   XREF to: 005b7412 (CONDITIONAL_JUMP)
// 005b7409: CMP dword ptr [0x03f6b8c0],0x0
//   XREF to: 03f6b8c0 (READ)
// 005b7410: JNZ 0x005b7415
//   XREF to: 005b7415 (CONDITIONAL_JUMP)
// 005b7412: XOR EAX,EAX
//   Label: LAB_005b7412
// 005b7414: RET
// 005b7415: PUSH EDI
//   Label: LAB_005b7415
// 005b7416: PUSH ESI
// 005b7417: PUSH EBX
// 005b7418: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005b741c: PUSH EBX
// 005b741d: MOV ESI,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 005b7423: PUSH ESI
// 005b7424: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005b7428: PUSH EDI
// 005b7429: CALL dword ptr [g_APIDLL_updateTextureBGRA]
//   XREF to: 03f6b8c0 (READ)
// 005b742f: ADD ESP,0xc
// 005b7432: POP EBX
// 005b7433: POP ESI
// 005b7434: POP EDI
// 005b7435: RET
