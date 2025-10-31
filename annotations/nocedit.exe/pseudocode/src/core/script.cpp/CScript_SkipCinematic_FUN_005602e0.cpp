// Name: core_script.cpp_CScript_SkipCinematic_FUN_005602e0
// Address: 005602e0
// Address Range: [[005602e0, 005603b3]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_SkipCinematic_FUN_005602e0()
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db94b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Error_processing_script__006431fd
//   TerminatedCString s_core_script_cpp_0064324c
//   TerminatedCString s_Infinite_loop_detected_t_0064325f
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02d81cc4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_0310eca0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_CScript_step_FUN_0055a810
//   core_script.cpp_FUN_005602b0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_SkipCinematic(undefined4 param_1) */

undefined4 core_script_cpp_CScript_SkipCinematic_FUN_005602e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  
  if (in_stack_00000004[0x116] < 0) {
    return 0;
  }
  core_script_cpp_FUN_005602b0();
  iVar3 = 0;
  in_stack_00000004[0x12] = in_stack_00000004[0x116];
  while ((g_CGamePtr->letterbox_mode != 0 && (*in_stack_00000004 == 0))) {
    iVar1 = in_stack_00000004[0x12];
    iVar2 = core_script_cpp_CScript_step_FUN_0055a810();
    if (iVar2 < 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                 *(undefined4 *)(in_stack_00000004[0xd] + iVar1 * 8),
                 *(undefined4 *)(in_stack_00000004[0xd] + 4 + iVar1 * 8),&DAT_0310eca0);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      g_CurrentLineNumber = 0xea5;
      g_CurrentFilename = "..\\core\\script.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Infinite loop detected trying to skip cinematic, at script line %d","Infinite loop detected trying to skip cinematic, at script line %d",
                 *(undefined4 *)(in_stack_00000004[0xd] + in_stack_00000004[0x12] * 8));
    }
  }
  return 1;
}


// Assembly code:
// 005602e0: PUSH EBX
//   Label: core_script.cpp_CScript_SkipCinematic_FUN_005602e0
// 005602e1: PUSH EBP
// 005602e2: SUB ESP,0x4
// 005602e5: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005602e9: CMP dword ptr [EBX + 0x458],0x0
// 005602f0: JGE 0x005602fa
//   XREF to: 005602fa (CONDITIONAL_JUMP)
// 005602f2: XOR EAX,EAX
// 005602f4: ADD ESP,0x4
// 005602f7: POP EBP
// 005602f8: POP EBX
// 005602f9: RET
// 005602fa: PUSH EDI
//   Label: LAB_005602fa
// 005602fb: PUSH ESI
// 005602fc: PUSH EBX
// 005602fd: CALL core_script.cpp_FUN_005602b0
//   XREF to: 005602b0 (UNCONDITIONAL_CALL)
// 00560302: XOR ESI,ESI
// 00560304: MOV EAX,dword ptr [EBX + 0x458]
// 0056030a: ADD ESP,0x4
// 0056030d: MOV dword ptr [EBX + 0x48],EAX
// 00560310: MOV EAX,[0x0067b654]
//   Label: LAB_00560310
//   XREF to: 0067b654 (READ)
// 00560315: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 0056031c: JZ 0x005603a7
//   XREF to: 005603a7 (CONDITIONAL_JUMP)
// 00560322: CMP dword ptr [EBX],0x0
// 00560325: JNZ 0x005603a7
//   XREF to: 005603a7 (CONDITIONAL_JUMP)
// 0056032b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xc] (DATA)
// 0056032f: MOV EBP,0x3e800000
// 00560334: PUSH EAX
// 00560335: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0xc] (WRITE)
// 00560339: PUSH EBX
// 0056033a: MOV EDI,dword ptr [EBX + 0x48]
// 0056033d: CALL core_script.cpp_CScript_step_FUN_0055a810
//   XREF to: 0055a810 (UNCONDITIONAL_CALL)
// 00560342: ADD ESP,0x8
// 00560345: TEST EAX,EAX
// 00560347: JL 0x00560380
//   XREF to: 00560380 (CONDITIONAL_JUMP)
// 00560349: INC ESI
//   Label: LAB_00560349
// 0056034a: CMP ESI,0x12c
// 00560350: JLE 0x00560310
//   XREF to: 00560310 (CONDITIONAL_JUMP)
// 00560352: MOV EBP,0x64324c
//   XREF to: 0064324c (DATA)
// 00560357: MOV EAX,0xea5
// 0056035c: MOV EDI,dword ptr [EBX + 0x48]
// 0056035f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00560364: MOV EAX,dword ptr [EBX + 0x34]
// 00560367: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0056036d: MOV EDX,dword ptr [EAX + EDI*0x8]
// 00560370: PUSH EDX
// 00560371: PUSH 0x64325f
//   XREF to: 0064325f (DATA)
// 00560376: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056037b: ADD ESP,0x8
// 0056037e: JMP 0x00560310
//   XREF to: 00560310 (UNCONDITIONAL_JUMP)
// 00560380: MOV EAX,dword ptr [EBX + 0x34]
//   Label: LAB_00560380
// 00560383: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 00560388: MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4]
// 0056038c: PUSH EDX
// 0056038d: MOV ECX,dword ptr [EAX + EDI*0x8]
// 00560390: PUSH ECX
// 00560391: PUSH 0x6431fd
//   XREF to: 006431fd (DATA)
// 00560396: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0056039c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0056039d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005603a2: ADD ESP,0x14
// 005603a5: JMP 0x00560349
//   XREF to: 00560349 (UNCONDITIONAL_JUMP)
// 005603a7: MOV EAX,0x1
//   Label: LAB_005603a7
// 005603ac: POP ESI
// 005603ad: POP EDI
// 005603ae: ADD ESP,0x4
// 005603b1: POP EBP
// 005603b2: POP EBX
// 005603b3: RET
