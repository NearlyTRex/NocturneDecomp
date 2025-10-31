// Name: wincore_windll.cpp_unlockTexture_FUN_005b7e4b
// Address: 005b7e4b
// Address Range: [[005b7e4b, 005b7e62]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_unlockTexture_FUN_005b7e4b(void)
// Globals:
//   APIDLL_unlockTexture* g_APIDLL_unlockTexture

#include "nocturne.h"

int __cdecl wincore_windll_cpp_unlockTexture_FUN_005b7e4b(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockTexture == (APIDLL_unlockTexture *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_unlockTexture)();
  return iVar1;
}


// Assembly code:
// 005b7e4b: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_unlockTexture_FUN_005b7e4b
// 005b7e4e: MOV ECX,ECX
// 005b7e50: CMP dword ptr [0x03f6b92c],0x0
//   XREF to: 03f6b92c (READ)
// 005b7e57: JNZ 0x005b7e5c
//   XREF to: 005b7e5c (CONDITIONAL_JUMP)
// 005b7e59: XOR EAX,EAX
// 005b7e5b: RET
// 005b7e5c: CALL dword ptr [g_APIDLL_unlockTexture]
//   Label: LAB_005b7e5c
//   XREF to: 03f6b92c (READ)
// 005b7e62: RET
