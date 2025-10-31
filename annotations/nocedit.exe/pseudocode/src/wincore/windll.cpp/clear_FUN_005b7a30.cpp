// Name: wincore_windll.cpp_clear_FUN_005b7a30
// Address: 005b7a30
// Address Range: [[005b7a30, 005b7a42]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_clear_FUN_005b7a30(void)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c666 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_clearScreen_FUN_005b3e70 (005b3e70) at 005b3e7b [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_clear* g_APIDLL_clear

#include "nocturne.h"

int __cdecl wincore_windll_cpp_clear_FUN_005b7a30(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_clear)();
  return iVar1;
}


// Assembly code:
// 005b7a30: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_clear_FUN_005b7a30
//   XREF to: 02d03e94 (READ)
// 005b7a37: JNZ 0x005b7a3c
//   XREF to: 005b7a3c (CONDITIONAL_JUMP)
// 005b7a39: XOR EAX,EAX
// 005b7a3b: RET
// 005b7a3c: CALL dword ptr [g_APIDLL_clear]
//   Label: LAB_005b7a3c
//   XREF to: 03f6b8ec (READ)
// 005b7a42: RET
