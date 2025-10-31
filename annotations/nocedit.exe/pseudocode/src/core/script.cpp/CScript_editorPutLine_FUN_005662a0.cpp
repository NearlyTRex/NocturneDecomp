// Name: core_script.cpp_CScript_editorPutLine_FUN_005662a0
// Address: 005662a0
// Address Range: [[005662a0, 00566323]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_editorPutLine_FUN_005662a0()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565a04 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00565007 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330 (00566330) at 00566381 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565c01 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 00566023 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566390 (00566390) at 0056645d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_00643f95
//   TerminatedCString s_CScript_editorPutLine_in_00643fa8
//   undefined4 DAT_00643fd5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_031101c0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_FUN_00566800
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_editorPutLine(undefined4 param_1, undefined4
   param_2) */

void core_script_cpp_CScript_editorPutLine_FUN_005662a0(void)

{
  CBitFont *font_ptr;
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (-1 < in_stack_00000008) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_00000008 < iVar1 + 10) goto LAB_005662c2;
  }
  g_CurrentFilename = "..\\core\\script.cpp";
  g_CurrentLineNumber = 0x1a83;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorPutLine - invalid line number");
LAB_005662c2:
  font_ptr = (CBitFont *)(in_stack_00000004 + 0x38);
  while( true ) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
    if (in_stack_00000008 < iVar1) break;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)font_ptr,&DAT_00643fd5);
  }
  shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
            ((CStrList *)font_ptr,in_stack_00000008,&DAT_031101c0);
  core_script_cpp_FUN_00566800();
  return;
}


// Assembly code:
// 005662a0: PUSH EBX
//   Label: core_script.cpp_CScript_editorPutLine_FUN_005662a0
// 005662a1: PUSH ESI
// 005662a2: PUSH EDI
// 005662a3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005662a7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005662ab: TEST ESI,ESI
// 005662ad: JL 0x005662ef
//   XREF to: 005662ef (CONDITIONAL_JUMP)
// 005662af: LEA EAX,[EDI + 0x38]
// 005662b2: PUSH EAX
// 005662b3: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005662b8: ADD EAX,0xa
// 005662bb: ADD ESP,0x4
// 005662be: CMP ESI,EAX
// 005662c0: JGE 0x005662ef
//   XREF to: 005662ef (CONDITIONAL_JUMP)
// 005662c2: LEA EBX,[EDI + 0x38]
//   Label: LAB_005662c2
// 005662c5: PUSH EBX
//   Label: LAB_005662c5
// 005662c6: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005662cb: ADD ESP,0x4
// 005662ce: CMP ESI,EAX
// 005662d0: JGE 0x00566314
//   XREF to: 00566314 (CONDITIONAL_JUMP)
// 005662d2: PUSH 0x31101c0
//   XREF to: 031101c0 (DATA)
// 005662d7: PUSH ESI
// 005662d8: PUSH EBX
// 005662d9: CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
//   XREF to: 004a3120 (UNCONDITIONAL_CALL)
// 005662de: ADD ESP,0xc
// 005662e1: PUSH ESI
// 005662e2: PUSH EDI
// 005662e3: CALL core_script.cpp_FUN_00566800
//   XREF to: 00566800 (UNCONDITIONAL_CALL)
// 005662e8: ADD ESP,0x8
// 005662eb: POP EDI
// 005662ec: POP ESI
// 005662ed: POP EBX
// 005662ee: RET
// 005662ef: MOV EDX,0x643f95
//   Label: LAB_005662ef
//   XREF to: 00643f95 (PARAM)
// 005662f4: MOV ECX,0x1a83
// 005662f9: PUSH 0x643fa8
//   XREF to: 00643fa8 (DATA)
// 005662fe: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00566304: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0056630a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056630f: ADD ESP,0x4
// 00566312: JMP 0x005662c2
//   XREF to: 005662c2 (UNCONDITIONAL_JUMP)
// 00566314: PUSH 0x643fd5
//   Label: LAB_00566314
//   XREF to: 00643fd5 (DATA)
// 00566319: PUSH EBX
// 0056631a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0056631f: ADD ESP,0x8
// 00566322: JMP 0x005662c5
//   XREF to: 005662c5 (UNCONDITIONAL_JUMP)
