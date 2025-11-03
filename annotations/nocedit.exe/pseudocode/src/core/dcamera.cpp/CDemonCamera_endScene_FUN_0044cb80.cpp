// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
// Address: 0044cb80
// Address Range: [[0044cb80, 0044cc61]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
// Cross-references:
//   core_msnedit.cpp_BeginAndEndScene_FUN_0053c970 (0053c970) at 0053c9ec [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053bb1c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539702 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c6b9 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a79c [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b4a2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581e15 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583add [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057aad8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fe95 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dd6a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcamera_cpp_0061a013
//   TerminatedCString s_CDemonCamera_endScene_Sc_0061a027
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   int g_UseExternalRenderer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_FullscreenMode
// Function calls:
//   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
//   core_event.cpp_FUN_004b1a78
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   wincore_windll.cpp_endScene_FUN_005b72a0
//   wincore_windll.cpp_masterZBuffer_FUN_005b7d00

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera *this_ptr,int skip_zbuffer_copy)

{
  int iVar1;
  int in_stack_0000000c;
  
  if (this_ptr->scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x3e9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::endScene - Scene not open!");
  }
  else {
    this_ptr->scene_open_flag = 0;
  }
  if (g_FullscreenMode != 0) {
    wincore_windll_cpp_endScene_FUN_005b72a0();
  }
  if ((this_ptr->skip_clear_buffer_flag == 0) && (in_stack_0000000c == 0)) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_masterZBuffer_FUN_005b7d00(0);
    }
    iVar1 = 0;
    if (0 < this_ptr->framebuffer_height) {
      do {
        iVar1 = iVar1 + 1;
        core_event_cpp_FUN_004b1a78();
      } while (iVar1 < this_ptr->framebuffer_height);
    }
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(this_ptr);
  return;
}


// Assembly code:
// 0044cb80: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
// 0044cb81: PUSH ESI
// 0044cb82: PUSH EBP
// 0044cb83: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0044cb87: CMP dword ptr [EBX + 0x11e4],0x0
// 0044cb8e: JZ 0x0044cc2c
//   XREF to: 0044cc2c (CONDITIONAL_JUMP)
// 0044cb94: MOV dword ptr [EBX + 0x11e4],0x0
// 0044cb9e: CMP dword ptr [0x03f6b878],0x0
//   Label: LAB_0044cb9e
//   XREF to: 03f6b878 (READ)
// 0044cba5: JZ 0x0044cbac
//   XREF to: 0044cbac (CONDITIONAL_JUMP)
// 0044cba7: CALL wincore_windll.cpp_endScene_FUN_005b72a0
//   XREF to: 005b72a0 (UNCONDITIONAL_CALL)
// 0044cbac: MOV EBP,dword ptr [EBX + 0x168]
//   Label: LAB_0044cbac
// 0044cbb2: TEST EBP,EBP
// 0044cbb4: JNZ 0x0044cc11
//   XREF to: 0044cc11 (CONDITIONAL_JUMP)
// 0044cbb6: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0x8] (READ)
// 0044cbbb: JNZ 0x0044cc11
//   XREF to: 0044cc11 (CONDITIONAL_JUMP)
// 0044cbbd: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 0044cbc4: JNZ 0x0044cc54
//   XREF to: 0044cc54 (CONDITIONAL_JUMP)
// 0044cbca: MOV ECX,dword ptr [EBX + 0x148]
//   Label: LAB_0044cbca
// 0044cbd0: XOR ESI,ESI
// 0044cbd2: TEST ECX,ECX
// 0044cbd4: JLE 0x0044cc11
//   XREF to: 0044cc11 (CONDITIONAL_JUMP)
// 0044cbd6: PUSH EDI
// 0044cbd7: XOR EDI,EDI
// 0044cbd9: MOV ECX,dword ptr [EBX + 0x144]
//   Label: LAB_0044cbd9
// 0044cbdf: IMUL ECX,ESI
// 0044cbe2: MOV EDX,dword ptr [EBX + 0x144]
// 0044cbe8: SHL EDX,0x2
// 0044cbeb: MOV EAX,dword ptr [EBX + 0x15c]
// 0044cbf1: PUSH EDX
// 0044cbf2: SHL ECX,0x2
// 0044cbf5: MOV EDX,dword ptr [EDI + 0x2cf7d5c]
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 0044cbfb: ADD ECX,EAX
// 0044cbfd: INC ESI
// 0044cbfe: CALL core_event.cpp_FUN_004b1a78
//   XREF to: 004b1a78 (UNCONDITIONAL_CALL)
// 0044cc03: MOV EBP,dword ptr [EBX + 0x148]
// 0044cc09: ADD EDI,0x4
// 0044cc0c: CMP ESI,EBP
// 0044cc0e: JL 0x0044cbd9
//   XREF to: 0044cbd9 (CONDITIONAL_JUMP)
// 0044cc10: POP EDI
// 0044cc11: MOV EAX,[0x006703ec]
//   Label: LAB_0044cc11
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044cc16: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0044cc17: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 0044cc1c: ADD ESP,0x4
// 0044cc1f: PUSH EBX
// 0044cc20: CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
//   XREF to: 0044c410 (UNCONDITIONAL_CALL)
// 0044cc25: ADD ESP,0x4
// 0044cc28: POP EBP
// 0044cc29: POP ESI
// 0044cc2a: POP EBX
// 0044cc2b: RET
// 0044cc2c: MOV ECX,0x61a013
//   Label: LAB_0044cc2c
//   XREF to: 0061a013 (PARAM)
// 0044cc31: MOV ESI,0x3e9
// 0044cc36: PUSH 0x61a027
//   XREF to: 0061a027 (DATA)
// 0044cc3b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0044cc41: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0044cc47: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044cc4c: ADD ESP,0x4
// 0044cc4f: JMP 0x0044cb9e
//   XREF to: 0044cb9e (UNCONDITIONAL_JUMP)
// 0044cc54: PUSH EBP
//   Label: LAB_0044cc54
// 0044cc55: CALL wincore_windll.cpp_masterZBuffer_FUN_005b7d00
//   XREF to: 005b7d00 (UNCONDITIONAL_CALL)
// 0044cc5a: ADD ESP,0x4
// 0044cc5d: JMP 0x0044cbca
//   XREF to: 0044cbca (UNCONDITIONAL_JUMP)
