// Name: wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
// Address: 005b75b0
// Address Range: [[005b75b0, 005b75d7]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_restoreVideoMode_FUN_005b75b0(void)
// Cross-references:
//   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0 (005ed4b0) at 005ed4c8 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50 (005edc50) at 005edc64 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode

#include "nocturne.h"

int __cdecl wincore_windll_cpp_restoreVideoMode_FUN_005b75b0(void)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) &&
     (g_UseExternalRenderer = 0, g_APIDLL_restoreVideoMode != (APIDLL_restoreVideoMode *)0x0)) {
    iVar1 = (*g_APIDLL_restoreVideoMode)();
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 005b75b0: PUSH EBX
//   Label: wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
// 005b75b1: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b75b8: JZ 0x005b75cc
//   XREF to: 005b75cc (CONDITIONAL_JUMP)
// 005b75ba: XOR ECX,ECX
// 005b75bc: MOV EBX,dword ptr [0x03f6b8a0]
//   XREF to: 03f6b8a0 (READ)
// 005b75c2: MOV dword ptr [0x02d03e94],ECX
//   XREF to: 02d03e94 (WRITE)
// 005b75c8: TEST EBX,EBX
// 005b75ca: JNZ 0x005b75d0
//   XREF to: 005b75d0 (CONDITIONAL_JUMP)
// 005b75cc: XOR EAX,EAX
//   Label: LAB_005b75cc
// 005b75ce: POP EBX
// 005b75cf: RET
// 005b75d0: CALL dword ptr [g_APIDLL_restoreVideoMode]
//   Label: LAB_005b75d0
//   XREF to: 03f6b8a0 (READ)
// 005b75d6: POP EBX
// 005b75d7: RET
