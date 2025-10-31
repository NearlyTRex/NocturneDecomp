// Name: wincore_windll.cpp_kill_FUN_005b71e0
// Address: 005b71e0
// Address Range: [[005b71e0, 005b71ff]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_kill_FUN_005b71e0(void)
// Cross-references:
//   core_menu.cpp_GraphicsOptions_FUN_00510c80 (00510c80) at 00510e03 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90 (005ecd90) at 005ecdc6 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_switchRenderer_FUN_005b8140 (005b8140) at 005b8142 [UNCONDITIONAL_CALL]
// Globals:
//   APIDLL_kill* g_APIDLL_kill
//   int g_ExternalRendererActive
// Function calls:
//   wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20

#include "nocturne.h"

int __cdecl wincore_windll_cpp_kill_FUN_005b71e0(void)

{
  if (g_ExternalRendererActive == 0) {
    return 1;
  }
  (*g_APIDLL_kill)();
  wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20();
  return 1;
}


// Assembly code:
// 005b71e0: CMP dword ptr [0x03f6b978],0x0
//   Label: wincore_windll.cpp_kill_FUN_005b71e0
//   XREF to: 03f6b978 (READ)
// 005b71e7: JNZ 0x005b71ef
//   XREF to: 005b71ef (CONDITIONAL_JUMP)
// 005b71e9: MOV EAX,0x1
// 005b71ee: RET
// 005b71ef: CALL dword ptr [g_APIDLL_kill]
//   Label: LAB_005b71ef
//   XREF to: 03f6b890 (READ)
// 005b71f5: CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
//   XREF to: 005b5d20 (UNCONDITIONAL_CALL)
// 005b71fa: MOV EAX,0x1
// 005b71ff: RET
