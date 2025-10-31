// Name: wincore_windll.cpp_sync_FUN_005b7bc0
// Address: 005b7bc0
// Address Range: [[005b7bc0, 005b7bd2]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_sync_FUN_005b7bc0(void)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0 (004990f0) at 0049914a [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_sync* g_APIDLL_sync

#include "nocturne.h"

int __cdecl wincore_windll_cpp_sync_FUN_005b7bc0(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_sync)();
  return iVar1;
}


// Assembly code:
// 005b7bc0: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_sync_FUN_005b7bc0
//   XREF to: 02d03e94 (READ)
// 005b7bc7: JNZ 0x005b7bcc
//   XREF to: 005b7bcc (CONDITIONAL_JUMP)
// 005b7bc9: XOR EAX,EAX
// 005b7bcb: RET
// 005b7bcc: CALL dword ptr [g_APIDLL_sync]
//   Label: LAB_005b7bcc
//   XREF to: 03f6b8f4 (READ)
// 005b7bd2: RET
