// Name: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50
// Address: 005edc50
// Address Range: [[005edc50, 005edc7a]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50(void)
// Cross-references:
//   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 (005f3150) at 005f3282 [UNCONDITIONAL_CALL]
// Globals:
//   ShowWindow* ShowWindow = 00211c06
//   int g_FullscreenMode
//   int g_GraphicsResetFlag
//   HWND g_MainWindowHandle
// Function calls:
//   ShowWindow
//   wincore_windll.cpp_restoreVideoMode_FUN_005b75b0

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005edc50(void)

{
  if ((g_FullscreenMode != 0) && (g_GraphicsResetFlag != 0)) {
    wincore_windll_cpp_restoreVideoMode_FUN_005b75b0();
    (*ShowWindow)(g_MainWindowHandle,6);
    return;
  }
  return;
}


// Assembly code:
// 005edc50: CMP dword ptr [0x03f6b878],0x0
//   Label: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50
//   XREF to: 03f6b878 (READ)
// 005edc57: JZ 0x005edc62
//   XREF to: 005edc62 (CONDITIONAL_JUMP)
// 005edc59: CMP dword ptr [0x03f95938],0x0
//   XREF to: 03f95938 (READ)
// 005edc60: JNZ 0x005edc63
//   XREF to: 005edc63 (CONDITIONAL_JUMP)
// 005edc62: RET
//   Label: LAB_005edc62
// 005edc63: PUSH EBX
//   Label: LAB_005edc63
// 005edc64: CALL wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
//   XREF to: 005b75b0 (UNCONDITIONAL_CALL)
// 005edc69: PUSH 0x6
// 005edc6b: MOV EBX,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005edc71: PUSH EBX
// 005edc72: CALL dword ptr CS:[0x6114f4]
//   XREF to: EXTERNAL:00000049 (COMPUTED_CALL)
//   XREF to: 006114f4 (READ)
// 005edc79: POP EBX
// 005edc7a: RET
