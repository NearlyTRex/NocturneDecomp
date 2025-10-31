// Name: wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0
// Address: 005b7df0
// Address Range: [[005b7df0, 005b7e02]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 (004511c0) at 00451201 [UNCONDITIONAL_CALL]
// Globals:
//   APIDLL_lockHoldBuffer* g_APIDLL_lockHoldBuffer

#include "nocturne.h"

int __cdecl wincore_windll_cpp_lockHoldBuffer_FUN_005b7df0(void)

{
  int iVar1;
  
  if (g_APIDLL_lockHoldBuffer == (APIDLL_lockHoldBuffer *)0x0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_lockHoldBuffer)();
  return iVar1;
}


// Assembly code:
// 005b7df0: CMP dword ptr [0x03f6b920],0x0
//   Label: wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0
//   XREF to: 03f6b920 (READ)
// 005b7df7: JNZ 0x005b7dfc
//   XREF to: 005b7dfc (CONDITIONAL_JUMP)
// 005b7df9: XOR EAX,EAX
// 005b7dfb: RET
// 005b7dfc: CALL dword ptr [g_APIDLL_lockHoldBuffer]
//   Label: LAB_005b7dfc
//   XREF to: 03f6b920 (READ)
// 005b7e02: RET
