// Name: wincore_windll.cpp_getTextureInfo_FUN_005b7e70
// Address: 005b7e70
// Address Range: [[005b7e70, 005b7e8a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_getTextureInfo_FUN_005b7e70(int texture_size)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da8e6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_getTextureInfo* g_APIDLL_getTextureInfo

#include "nocturne.h"

int __cdecl wincore_windll_cpp_getTextureInfo_FUN_005b7e70(int texture_size)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_getTextureInfo)(texture_size);
  return iVar1;
}


// Assembly code:
// 005b7e70: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_getTextureInfo_FUN_005b7e70
//   XREF to: 02d03e94 (READ)
// 005b7e77: JNZ 0x005b7e7c
//   XREF to: 005b7e7c (CONDITIONAL_JUMP)
// 005b7e79: XOR EAX,EAX
// 005b7e7b: RET
// 005b7e7c: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005b7e7c
//   XREF to: Stack[0x4] (READ)
// 005b7e80: PUSH ECX
// 005b7e81: CALL dword ptr [g_APIDLL_getTextureInfo]
//   XREF to: 03f6b930 (READ)
// 005b7e87: ADD ESP,0x4
// 005b7e8a: RET
