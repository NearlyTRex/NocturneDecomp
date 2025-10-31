// Name: wincore_windll.cpp_toggleX_FUN_005b7f66
// Address: 005b7f66
// Address Range: [[005b7f66, 005b7f82]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_toggleX_FUN_005b7f66(void)
// Globals:
//   APIDLL_toggleX* g_APIDLL_toggleX

#include "nocturne.h"

int __cdecl wincore_windll_cpp_toggleX_FUN_005b7f66(void)

{
  int iVar1;
  
  if (g_APIDLL_toggleX == (APIDLL_toggleX *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_toggleX)();
  return iVar1;
}


// Assembly code:
// 005b7f66: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_toggleX_FUN_005b7f66
// 005b7f6c: LEA EDX,[EDX]
// 005b7f70: CMP dword ptr [0x03f6b944],0x0
//   XREF to: 03f6b944 (READ)
// 005b7f77: JNZ 0x005b7f7c
//   XREF to: 005b7f7c (CONDITIONAL_JUMP)
// 005b7f79: XOR EAX,EAX
// 005b7f7b: RET
// 005b7f7c: CALL dword ptr [g_APIDLL_toggleX]
//   Label: LAB_005b7f7c
//   XREF to: 03f6b944 (READ)
// 005b7f82: RET
