// Name: wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
// Address: 005f30c0
// Address Range: [[005f30c0, 005f30c8]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0(void)
// Cross-references:
//   engine_2d.c_clearInputAndWait_FUN_00403260 (00403260) at 00403265 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c6d6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MouseButtonFlags

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0(void)

{
  g_MouseButtonFlags = 0;
  return;
}


// Assembly code:
// 005f30c0: XOR EDX,EDX
//   Label: wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
// 005f30c2: MOV dword ptr [0x02cf6a94],EDX
//   XREF to: 02cf6a94 (WRITE)
// 005f30c8: RET
