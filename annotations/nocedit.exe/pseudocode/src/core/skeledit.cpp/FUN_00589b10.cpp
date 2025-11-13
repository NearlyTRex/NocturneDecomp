// Name: core_skeledit.cpp_FUN_00589b10
// Address: 00589b10
// Address Range: [[00589b10, 00589baf]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589b10()
// Globals:
//   TerminatedCString s_dixie_wav_00649df5
//   TerminatedCString s_LOD_generation_complete_00649dff
//   TerminatedCString s_LOD_generation_complete_00649e18
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   sound_sndmain.cpp_FUN_005aaef0
//   sound_sndmain.cpp_FUN_005ab130
//   sound_sndmain.cpp_startSfx_FUN_005a8e90
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589b10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000014;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  sound_sndmain_cpp_FUN_005aaef0();
  sound_sndmain_cpp_startSfx_FUN_005a8e90();
  if (in_stack_00000014 == 0) {
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(g_CEditorToolsPtr,(char *)0x0)
    ;
    shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
              (g_CEditorToolsPtr,"LOD generation complete!");
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar3 = 0;
    do {
      iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      if (0 < iVar2 - iVar1) {
        iVar3 = iVar3 + (iVar2 - iVar1);
      }
      iVar1 = iVar2;
    } while (iVar3 < 0x360000);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    sound_sndmain_cpp_FUN_005ab130();
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"LOD generation complete!");
  sound_sndmain_cpp_FUN_005ab130();
  return;
}


// Assembly code:
// 00589b10: PUSH 0x10
//   Label: core_skeledit.cpp_FUN_00589b10
// 00589b15: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00589b1a: PUSH ESI
// 00589b1b: CALL sound_sndmain.cpp_FUN_005aaef0
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 00589b20: PUSH 0x649df5
//   XREF to: 00649df5 (DATA)
// 00589b25: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 00589b2a: ADD ESP,0x4
// 00589b2d: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00589b31: TEST EDX,EDX
// 00589b33: JNZ 0x00589b95
//   XREF to: 00589b95 (CONDITIONAL_JUMP)
// 00589b35: PUSH EDI
// 00589b36: PUSH EBX
// 00589b37: PUSH EDX
// 00589b38: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589b3e: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00589b3f: CALL shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
//   XREF to: 0049e940 (UNCONDITIONAL_CALL)
// 00589b44: ADD ESP,0x8
// 00589b47: PUSH 0x649e18
//   XREF to: 00649e18 (DATA)
// 00589b4c: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589b52: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00589b53: CALL shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
//   XREF to: 0049e870 (UNCONDITIONAL_CALL)
// 00589b58: ADD ESP,0x8
// 00589b5b: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00589b60: XOR EBX,EBX
// 00589b62: MOV ESI,EAX
// 00589b64: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_00589b64
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00589b69: MOV EDX,EAX
// 00589b6b: SUB EAX,ESI
// 00589b6d: TEST EAX,EAX
// 00589b6f: JLE 0x00589b73
//   XREF to: 00589b73 (CONDITIONAL_JUMP)
// 00589b71: ADD EBX,EAX
// 00589b73: MOV ESI,EDX
//   Label: LAB_00589b73
// 00589b75: CMP EBX,0x360000
// 00589b7b: JL 0x00589b64
//   XREF to: 00589b64 (CONDITIONAL_JUMP)
// 00589b7d: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589b83: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00589b84: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 00589b89: ADD ESP,0x4
// 00589b8c: POP EBX
// 00589b8d: POP EDI
// 00589b8e: CALL sound_sndmain.cpp_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 00589b93: POP ESI
// 00589b94: RET
// 00589b95: PUSH 0x649dff
//   Label: LAB_00589b95
//   XREF to: 00649dff (DATA)
// 00589b9a: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589ba0: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00589ba1: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00589ba6: ADD ESP,0x8
// 00589ba9: CALL sound_sndmain.cpp_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 00589bae: POP ESI
// 00589baf: RET
