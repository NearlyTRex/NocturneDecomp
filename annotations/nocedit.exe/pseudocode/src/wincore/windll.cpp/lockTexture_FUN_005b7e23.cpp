// Name: wincore_windll.cpp_lockTexture_FUN_005b7e23
// Address: 005b7e23
// Address Range: [[005b7e23, 005b7e4a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_lockTexture_FUN_005b7e23(int texture_id)
// Globals:
//   APIDLL_lockTexture* g_APIDLL_lockTexture

#include "nocturne.h"

int __cdecl wincore_windll_cpp_lockTexture_FUN_005b7e23(int texture_id)

{
  int iVar1;
  
  if (g_APIDLL_lockTexture == (APIDLL_lockTexture *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_lockTexture)(texture_id);
  return iVar1;
}


// Assembly code:
// 005b7e23: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_lockTexture_FUN_005b7e23
// 005b7e29: LEA EDX,[EDX]
// 005b7e2f: NOP
// 005b7e30: CMP dword ptr [0x03f6b928],0x0
//   XREF to: 03f6b928 (READ)
// 005b7e37: JNZ 0x005b7e3c
//   XREF to: 005b7e3c (CONDITIONAL_JUMP)
// 005b7e39: XOR EAX,EAX
// 005b7e3b: RET
// 005b7e3c: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005b7e3c
//   XREF to: Stack[0x4] (READ)
// 005b7e40: PUSH ECX
// 005b7e41: CALL dword ptr [g_APIDLL_lockTexture]
//   XREF to: 03f6b928 (READ)
// 005b7e47: ADD ESP,0x4
// 005b7e4a: RET
