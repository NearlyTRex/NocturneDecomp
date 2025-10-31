// Name: wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10
// Address: 005b7e10
// Address Range: [[005b7e10, 005b7e22]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 (004511c0) at 004511ee [UNCONDITIONAL_CALL]
// Globals:
//   APIDLL_unlockHoldBuffer* g_APIDLL_unlockHoldBuffer

#include "nocturne.h"

int __cdecl wincore_windll_cpp_unlockHoldBuffer_FUN_005b7e10(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockHoldBuffer == (APIDLL_unlockHoldBuffer *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_unlockHoldBuffer)();
  return iVar1;
}


// Assembly code:
// 005b7e10: CMP dword ptr [0x03f6b924],0x0
//   Label: wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10
//   XREF to: 03f6b924 (READ)
// 005b7e17: JNZ 0x005b7e1c
//   XREF to: 005b7e1c (CONDITIONAL_JUMP)
// 005b7e19: XOR EAX,EAX
// 005b7e1b: RET
// 005b7e1c: CALL dword ptr [g_APIDLL_unlockHoldBuffer]
//   Label: LAB_005b7e1c
//   XREF to: 03f6b924 (READ)
// 005b7e22: RET
