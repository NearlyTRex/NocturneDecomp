// Name: wincore_windll.cpp_endScene_FUN_005b72a0
// Address: 005b72a0
// Address Range: [[005b72a0, 005b72b2]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_endScene_FUN_005b72a0(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 (0044cb80) at 0044cba7 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f548 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_endScene* g_APIDLL_endScene

#include "nocturne.h"

int __cdecl wincore_windll_cpp_endScene_FUN_005b72a0(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_endScene)();
  return iVar1;
}


// Assembly code:
// 005b72a0: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_endScene_FUN_005b72a0
//   XREF to: 02d03e94 (READ)
// 005b72a7: JNZ 0x005b72ac
//   XREF to: 005b72ac (CONDITIONAL_JUMP)
// 005b72a9: XOR EAX,EAX
// 005b72ab: RET
// 005b72ac: CALL dword ptr [g_APIDLL_endScene]
//   Label: LAB_005b72ac
//   XREF to: 03f6b8a8 (READ)
// 005b72b2: RET
