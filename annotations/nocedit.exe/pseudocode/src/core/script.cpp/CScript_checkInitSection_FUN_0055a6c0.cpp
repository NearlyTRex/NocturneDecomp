// Name: core_script.cpp_CScript_checkInitSection_FUN_0055a6c0
// Address: 0055a6c0
// Address Range: [[0055a6c0, 0055a80c]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_checkInitSection_FUN_0055a6c0()
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 00524873 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_initSection_00641a99
//   TerminatedCString s_initSectionEnd_00641aa5
//   TerminatedCString s_core_script_cpp_00641ab4
//   TerminatedCString s_Script_has_initSection_l_00641ac7
//   TerminatedCString s_core_script_cpp_00641b06
//   TerminatedCString s_Error_processing_script__00641b19
//   TerminatedCString s_core_script_cpp_00641b56
//   TerminatedCString s_Infinite_loop_detected_i_00641b69
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_0310ec9c
//   undefined1 DAT_0310eca0
//   undefined4 DAT_0310f4a4
// Function calls:
//   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_CScript_step_FUN_0055a810
//   core_script.cpp_FUN_00560160

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_checkInitSection(undefined4 param_1) */

void core_script_cpp_CScript_checkInitSection_FUN_0055a6c0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  
  DAT_0310ec9c = 0;
  if ((0 < *(int *)(in_stack_00000004 + 0x30)) && (*(int *)(in_stack_00000004 + 0x34) != 0)) {
    iVar3 = core_script_cpp_FUN_00560160();
    if (-1 < iVar3) {
      iVar4 = core_script_cpp_FUN_00560160();
      if (iVar4 < 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x41c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      uVar1 = *(undefined4 *)(in_stack_00000004 + 0x48);
      DAT_0310f4a4 = 0;
      *(int *)(in_stack_00000004 + 0x48) = iVar3;
      iVar3 = 0;
      while( true ) {
        iVar2 = *(int *)(in_stack_00000004 + 0x48);
        iVar5 = core_script_cpp_CScript_step_FUN_0055a810();
        if (iVar5 < 0) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x438;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(undefined4 *)(*(int *)(in_stack_00000004 + 0x34) + iVar2 * 8),
                     *(undefined4 *)(*(int *)(in_stack_00000004 + 0x34) + 4 + iVar2 * 8),
                     &DAT_0310eca0);
        }
        if (iVar4 == *(int *)(in_stack_00000004 + 0x48)) break;
        iVar3 = iVar3 + 1;
        if (10000 < iVar3) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x44a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Infinite loop detected in initSection.\n");
        }
      }
      if (DAT_0310f4a4 != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(g_CGamePtr);
        DAT_0310f4a4 = 0;
      }
      *(undefined4 *)(in_stack_00000004 + 0x48) = uVar1;
      return;
    }
  }
  return;
}


// Assembly code:
// 0055a6c0: PUSH EBX
//   Label: core_script.cpp_CScript_checkInitSection_FUN_0055a6c0
// 0055a6c1: PUSH ESI
// 0055a6c2: PUSH EBP
// 0055a6c3: SUB ESP,0x8
// 0055a6c6: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0055a6ca: XOR EDX,EDX
// 0055a6cc: MOV ECX,dword ptr [EBX + 0x30]
// 0055a6cf: MOV dword ptr [0x0310ec9c],EDX
//   XREF to: 0310ec9c (WRITE)
// 0055a6d5: CMP ECX,0x1
// 0055a6d8: JL 0x0055a6e0
//   XREF to: 0055a6e0 (CONDITIONAL_JUMP)
// 0055a6da: CMP dword ptr [EBX + 0x34],0x0
// 0055a6de: JNZ 0x0055a6e7
//   XREF to: 0055a6e7 (CONDITIONAL_JUMP)
// 0055a6e0: ADD ESP,0x8
//   Label: LAB_0055a6e0
// 0055a6e3: POP EBP
// 0055a6e4: POP ESI
// 0055a6e5: POP EBX
// 0055a6e6: RET
// 0055a6e7: PUSH 0x641a99
//   Label: LAB_0055a6e7
//   XREF to: 00641a99 (DATA)
// 0055a6ec: PUSH EBX
// 0055a6ed: CALL core_script.cpp_FUN_00560160
//   XREF to: 00560160 (UNCONDITIONAL_CALL)
// 0055a6f2: ADD ESP,0x8
// 0055a6f5: MOV ESI,EAX
// 0055a6f7: TEST EAX,EAX
// 0055a6f9: JL 0x0055a6e0
//   XREF to: 0055a6e0 (CONDITIONAL_JUMP)
// 0055a6fb: PUSH EDI
// 0055a6fc: PUSH 0x641aa5
//   XREF to: 00641aa5 (DATA)
// 0055a701: PUSH EBX
// 0055a702: CALL core_script.cpp_FUN_00560160
//   XREF to: 00560160 (UNCONDITIONAL_CALL)
// 0055a707: ADD ESP,0x8
// 0055a70a: MOV EBP,EAX
// 0055a70c: TEST EAX,EAX
// 0055a70e: JL 0x0055a77a
//   XREF to: 0055a77a (CONDITIONAL_JUMP)
// 0055a710: MOV EAX,dword ptr [EBX + 0x48]
//   Label: LAB_0055a710
// 0055a713: XOR EDX,EDX
// 0055a715: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0055a719: MOV dword ptr [0x0310f4a4],EDX
//   XREF to: 0310f4a4 (WRITE)
// 0055a71f: MOV dword ptr [EBX + 0x48],ESI
// 0055a722: XOR ESI,ESI
// 0055a724: LEA EAX,[ESP + 0x4]
//   Label: LAB_0055a724
//   XREF to: Stack[-0x14] (DATA)
// 0055a728: PUSH EAX
// 0055a729: MOV ECX,0x3e800000
// 0055a72e: PUSH EBX
// 0055a72f: MOV EDI,dword ptr [EBX + 0x48]
// 0055a732: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0055a736: CALL core_script.cpp_CScript_step_FUN_0055a810
//   XREF to: 0055a810 (UNCONDITIONAL_CALL)
// 0055a73b: ADD ESP,0x8
// 0055a73e: TEST EAX,EAX
// 0055a740: JL 0x0055a7a1
//   XREF to: 0055a7a1 (CONDITIONAL_JUMP)
// 0055a742: CMP EBP,dword ptr [EBX + 0x48]
//   Label: LAB_0055a742
// 0055a745: JNZ 0x0055a7d9
//   XREF to: 0055a7d9 (CONDITIONAL_JUMP)
// 0055a74b: CMP dword ptr [0x0310f4a4],0x0
//   XREF to: 0310f4a4 (READ)
// 0055a752: JZ 0x0055a76b
//   XREF to: 0055a76b (CONDITIONAL_JUMP)
// 0055a754: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0055a75a: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 0055a75b: XOR ESI,ESI
// 0055a75d: CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   XREF to: 004dce70 (UNCONDITIONAL_CALL)
// 0055a762: ADD ESP,0x4
// 0055a765: MOV dword ptr [0x0310f4a4],ESI
//   XREF to: 0310f4a4 (WRITE)
// 0055a76b: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0055a76b
//   XREF to: Stack[-0x10] (READ)
// 0055a76f: MOV dword ptr [EBX + 0x48],EAX
// 0055a772: POP EDI
// 0055a773: ADD ESP,0x8
// 0055a776: POP EBP
// 0055a777: POP ESI
// 0055a778: POP EBX
// 0055a779: RET
// 0055a77a: MOV EDI,0x641ab4
//   Label: LAB_0055a77a
//   XREF to: 00641ab4 (DATA)
// 0055a77f: MOV EAX,0x41c
// 0055a784: PUSH 0x641ac7
//   XREF to: 00641ac7 (DATA)
// 0055a789: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0055a78f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0055a794: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055a799: ADD ESP,0x4
// 0055a79c: JMP 0x0055a710
//   XREF to: 0055a710 (UNCONDITIONAL_JUMP)
// 0055a7a1: MOV EAX,0x641b06
//   Label: LAB_0055a7a1
//   XREF to: 00641b06 (DATA)
// 0055a7a6: MOV EDX,0x438
// 0055a7ab: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0055a7b0: MOV EAX,dword ptr [EBX + 0x34]
// 0055a7b3: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0055a7b9: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 0055a7be: MOV ECX,dword ptr [EAX + EDI*0x8 + 0x4]
// 0055a7c2: PUSH ECX
// 0055a7c3: MOV EDX,dword ptr [EAX + EDI*0x8]
// 0055a7c6: PUSH EDX
// 0055a7c7: PUSH 0x641b19
//   XREF to: 00641b19 (DATA)
// 0055a7cc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055a7d1: ADD ESP,0x10
// 0055a7d4: JMP 0x0055a742
//   XREF to: 0055a742 (UNCONDITIONAL_JUMP)
// 0055a7d9: INC ESI
//   Label: LAB_0055a7d9
// 0055a7da: CMP ESI,0x2710
// 0055a7e0: JLE 0x0055a724
//   XREF to: 0055a724 (CONDITIONAL_JUMP)
// 0055a7e6: MOV EDI,0x641b56
//   XREF to: 00641b56 (DATA)
// 0055a7eb: MOV EAX,0x44a
// 0055a7f0: PUSH 0x641b69
//   XREF to: 00641b69 (DATA)
// 0055a7f5: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0055a7fb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0055a800: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055a805: ADD ESP,0x4
// 0055a808: JMP 0x0055a724
//   XREF to: 0055a724 (UNCONDITIONAL_JUMP)
