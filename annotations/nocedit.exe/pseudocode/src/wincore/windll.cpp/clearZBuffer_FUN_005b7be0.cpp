// Name: wincore_windll.cpp_clearZBuffer_FUN_005b7be0
// Address: 005b7be0
// Address Range: [[005b7be0, 005b7bf2]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_clearZBuffer_FUN_005b7be0(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c66b [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f33f [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_clearZBuffer* g_APIDLL_clearZBuffer

#include "nocturne.h"

int __cdecl wincore_windll_cpp_clearZBuffer_FUN_005b7be0(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_clearZBuffer)();
  return iVar1;
}


// Assembly code:
// 005b7be0: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_clearZBuffer_FUN_005b7be0
//   XREF to: 02d03e94 (READ)
// 005b7be7: JNZ 0x005b7bec
//   XREF to: 005b7bec (CONDITIONAL_JUMP)
// 005b7be9: XOR EAX,EAX
// 005b7beb: RET
// 005b7bec: CALL dword ptr [g_APIDLL_clearZBuffer]
//   Label: LAB_005b7bec
//   XREF to: 03f6b8f8 (READ)
// 005b7bf2: RET
