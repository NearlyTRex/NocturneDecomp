// Name: wincore_windll.cpp_beginScene_FUN_005b7280
// Address: 005b7280
// Address Range: [[005b7280, 005b7292]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_beginScene_FUN_005b7280(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c64e [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 (004511c0) at 00451247 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f32a [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_beginScene* g_APIDLL_beginScene

#include "nocturne.h"

int __cdecl wincore_windll_cpp_beginScene_FUN_005b7280(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_beginScene)();
  return iVar1;
}


// Assembly code:
// 005b7280: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_beginScene_FUN_005b7280
//   XREF to: 02d03e94 (READ)
// 005b7287: JNZ 0x005b728c
//   XREF to: 005b728c (CONDITIONAL_JUMP)
// 005b7289: XOR EAX,EAX
// 005b728b: RET
// 005b728c: CALL dword ptr [g_APIDLL_beginScene]
//   Label: LAB_005b728c
//   XREF to: 03f6b8a4 (READ)
// 005b7292: RET
