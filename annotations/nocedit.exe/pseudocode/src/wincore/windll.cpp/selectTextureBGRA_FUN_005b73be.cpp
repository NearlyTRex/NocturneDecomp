// Name: wincore_windll.cpp_selectTextureBGRA_FUN_005b73be
// Address: 005b73be
// Address Range: [[005b73be, 005b73f5]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_selectTextureBGRA_FUN_005b73be(SMRGLTextureBasic * texture_info, int flags)
// Globals:
//   int g_CurrentTextureDimension = 0x100
//   int g_UseExternalRenderer
//   APIDLL_selectTextureBGRA* g_APIDLL_selectTextureBGRA

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_selectTextureBGRA_FUN_005b73be(SMRGLTextureBasic *texture_info,int flags)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) &&
     (g_APIDLL_selectTextureBGRA != (APIDLL_selectTextureBGRA *)0x0)) {
    iVar1 = (*g_APIDLL_selectTextureBGRA)(texture_info,g_CurrentTextureDimension,flags);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 005b73be: MOV EAX,EAX
//   Label: wincore_windll.cpp_selectTextureBGRA_FUN_005b73be
// 005b73c0: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b73c7: JZ 0x005b73d2
//   XREF to: 005b73d2 (CONDITIONAL_JUMP)
// 005b73c9: CMP dword ptr [0x03f6b8bc],0x0
//   XREF to: 03f6b8bc (READ)
// 005b73d0: JNZ 0x005b73d5
//   XREF to: 005b73d5 (CONDITIONAL_JUMP)
// 005b73d2: XOR EAX,EAX
//   Label: LAB_005b73d2
// 005b73d4: RET
// 005b73d5: PUSH EDI
//   Label: LAB_005b73d5
// 005b73d6: PUSH ESI
// 005b73d7: PUSH EBX
// 005b73d8: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005b73dc: PUSH EBX
// 005b73dd: MOV ESI,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 005b73e3: PUSH ESI
// 005b73e4: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005b73e8: PUSH EDI
// 005b73e9: CALL dword ptr [g_APIDLL_selectTextureBGRA]
//   XREF to: 03f6b8bc (READ)
// 005b73ef: ADD ESP,0xc
// 005b73f2: POP EBX
// 005b73f3: POP ESI
// 005b73f4: POP EDI
// 005b73f5: RET
