// Name: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0
// Address: 004511c0
// Address Range: [[004511c0, 0045124e]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(CDemonCamera * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c437 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcamera_cpp_0061a2d2
//   TerminatedCString s_Unable_to_lock_hold_buff_0061a2e6
//   int g_WindowHeight = 0xc8
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_FullscreenMode
// Function calls:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   wincore_windll.cpp_beginScene_FUN_005b7280
//   wincore_windll.cpp_lockFrame_FUN_005b7210
//   wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0
//   wincore_windll.cpp_unlockFrame_FUN_005b7250
//   wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(CDemonCamera *this_ptr)

{
  int iVar1;
  int extraout_EAX;
  CDemonCamera *in_stack_0000000c;
  
  if (g_WindowHeight < 0x1e1) {
    wincore_windll_cpp_lockFrame_FUN_005b7210();
  }
  else {
    iVar1 = wincore_windll_cpp_lockHoldBuffer_FUN_005b7df0();
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\dcamera.cpp";
      g_CurrentLineNumber = 0xe37;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
  }
  core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(in_stack_0000000c);
  if (g_WindowHeight < 0x1e1) {
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    if (g_FullscreenMode == 0) {
      return extraout_EAX;
    }
  }
  else {
    iVar1 = wincore_windll_cpp_unlockHoldBuffer_FUN_005b7e10();
    if (g_FullscreenMode == 0) {
      return iVar1;
    }
  }
  iVar1 = wincore_windll_cpp_beginScene_FUN_005b7280();
  return iVar1;
}


// Assembly code:
// 004511c0: PUSH ESI
//   Label: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0
// 004511c1: PUSH EDI
// 004511c2: CMP dword ptr [0x00679398],0x1e0
//   XREF to: 00679398 (READ)
// 004511cc: JG 0x00451201
//   XREF to: 00451201 (CONDITIONAL_JUMP)
// 004511ce: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 004511d3: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_004511d3
//   XREF to: Stack[0x4] (READ)
// 004511d7: PUSH ESI
// 004511d8: CALL core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
//   XREF to: 00453270 (UNCONDITIONAL_CALL)
// 004511dd: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004511e3: ADD ESP,0x4
// 004511e6: CMP EDI,0x1e0
// 004511ec: JLE 0x00451231
//   XREF to: 00451231 (CONDITIONAL_JUMP)
// 004511ee: CALL wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10
//   XREF to: 005b7e10 (UNCONDITIONAL_CALL)
// 004511f3: CMP dword ptr [0x03f6b878],0x0
//   XREF to: 03f6b878 (READ)
// 004511fa: JNZ 0x00451247
//   XREF to: 00451247 (CONDITIONAL_JUMP)
// 004511fc: POP EDI
// 004511fd: POP ESI
// 004511fe: MOV EAX,EAX
// 00451200: RET
// 00451201: CALL wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0
//   Label: LAB_00451201
//   XREF to: 005b7df0 (UNCONDITIONAL_CALL)
// 00451206: TEST EAX,EAX
// 00451208: JNZ 0x004511d3
//   XREF to: 004511d3 (CONDITIONAL_JUMP)
// 0045120a: PUSH EBX
// 0045120b: MOV ECX,0x61a2d2
//   XREF to: 0061a2d2 (PARAM)
// 00451210: MOV EBX,0xe37
// 00451215: PUSH 0x61a2e6
//   XREF to: 0061a2e6 (DATA)
// 0045121a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00451220: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00451226: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0045122b: ADD ESP,0x4
// 0045122e: POP EBX
// 0045122f: JMP 0x004511d3
//   XREF to: 004511d3 (UNCONDITIONAL_JUMP)
// 00451231: PUSH 0x0
//   Label: LAB_00451231
// 00451233: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 00451238: ADD ESP,0x4
// 0045123b: CMP dword ptr [0x03f6b878],0x0
//   XREF to: 03f6b878 (READ)
// 00451242: JNZ 0x00451247
//   XREF to: 00451247 (CONDITIONAL_JUMP)
// 00451244: POP EDI
// 00451245: POP ESI
// 00451246: RET
// 00451247: CALL wincore_windll.cpp_beginScene_FUN_005b7280
//   Label: LAB_00451247
//   XREF to: 005b7280 (UNCONDITIONAL_CALL)
// 0045124c: POP EDI
// 0045124d: POP ESI
// 0045124e: RET
