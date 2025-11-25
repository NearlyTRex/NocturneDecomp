// Name: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
// Address: 004a0020
// Address Range: [[004a0020, 004a00ea]]
// Convention: __cdecl
// Signature: bool shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, bool enable_range_check, int min_value, int max_value, bool show_current_value)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047db95 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004de38e [UNCONDITIONAL_CALL]
//   core_game.cpp_PleaseEnterValidInteger_FUN_004d7730 (004d7730) at 004d778e [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565442 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 005629a6 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 0059820d [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058cb1a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e148 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_006231b1
//   TerminatedCString s_d_006231b4
//   TerminatedCString s_Please_enter_a_valid_int_006231b7
//   TerminatedCString s_Please_enter_a_valid_int_006231d5
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0

#include "nocturne.h"

bool __cdecl
shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
          (CEditorTools *this_ptr,char *prompt_text,int *result_ptr,bool enable_range_check,
          int min_value,int max_value,bool show_current_value)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  undefined3 in_stack_0000001d;
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffcc,"%d",*result_ptr);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,&stack0xffffffd0,0x1e,1);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffffd4,"%d");
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid integer.");
    }
    if ((_show_current_value == 0) || ((min_value <= unaff_ESI && (unaff_ESI <= max_value)))) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %d and %d.");
  }
  *(int *)max_value = unaff_ESI;
  return true;
}


// Assembly code:
// 004a0020: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
// 004a0021: PUSH ESI
// 004a0022: PUSH EDI
// 004a0023: PUSH EBP
// 004a0024: SUB ESP,0x24
// 004a0027: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 004a002b: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004a002f: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x14] (READ)
// 004a0033: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x18] (READ)
// 004a0037: TEST byte ptr [ESP + 0x50],0x1
//   XREF to: Stack[0x1c] (READ)
// 004a003c: JNZ 0x004a0062
//   XREF to: 004a0062 (CONDITIONAL_JUMP)
// 004a003e: XOR DL,DL
// 004a0040: MOV byte ptr [ESP],DL
//   XREF to: Stack[-0x34] (DATA)
// 004a0043: PUSH 0x1
//   Label: LAB_004a0043
// 004a0045: PUSH 0x1e
// 004a0047: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 004a004b: PUSH EAX
// 004a004c: PUSH EBP
// 004a004d: PUSH EBX
// 004a004e: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004a0053: ADD ESP,0x14
// 004a0056: TEST EAX,EAX
// 004a0058: JNZ 0x004a007d
//   XREF to: 004a007d (CONDITIONAL_JUMP)
// 004a005a: ADD ESP,0x24
// 004a005d: POP EBP
// 004a005e: POP EDI
// 004a005f: POP ESI
// 004a0060: POP EBX
// 004a0061: RET
// 004a0062: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_004a0062
//   XREF to: Stack[0xc] (READ)
// 004a0066: MOV EDX,dword ptr [EAX]
// 004a0068: PUSH EDX
// 004a0069: PUSH 0x6231b1
//   XREF to: 006231b1 (DATA)
// 004a006e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 004a0072: PUSH EAX
// 004a0073: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a0078: ADD ESP,0xc
// 004a007b: JMP 0x004a0043
//   XREF to: 004a0043 (UNCONDITIONAL_JUMP)
// 004a007d: LEA EAX,[ESP + 0x20]
//   Label: LAB_004a007d
//   XREF to: Stack[-0x14] (DATA)
// 004a0081: PUSH EAX
// 004a0082: PUSH 0x6231b4
//   XREF to: 006231b4 (DATA)
// 004a0087: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 004a008b: PUSH EAX
// 004a008c: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004a0091: ADD ESP,0xc
// 004a0094: CMP EAX,0x1
// 004a0097: JNZ 0x004a00c3
//   XREF to: 004a00c3 (CONDITIONAL_JUMP)
// 004a0099: CMP dword ptr [ESP + 0x44],0x0
//   XREF to: Stack[0x10] (READ)
// 004a009e: JZ 0x004a00ac
//   XREF to: 004a00ac (CONDITIONAL_JUMP)
// 004a00a0: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 004a00a4: CMP EDI,EAX
// 004a00a6: JG 0x004a00d6
//   XREF to: 004a00d6 (CONDITIONAL_JUMP)
// 004a00a8: CMP ESI,EAX
// 004a00aa: JL 0x004a00d6
//   XREF to: 004a00d6 (CONDITIONAL_JUMP)
// 004a00ac: MOV EBX,dword ptr [ESP + 0x40]
//   Label: LAB_004a00ac
//   XREF to: Stack[0xc] (READ)
// 004a00b0: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 004a00b4: MOV dword ptr [EBX],EAX
// 004a00b6: MOV EAX,0x1
// 004a00bb: ADD ESP,0x24
// 004a00be: POP EBP
// 004a00bf: POP EDI
// 004a00c0: POP ESI
// 004a00c1: POP EBX
// 004a00c2: RET
// 004a00c3: PUSH 0x6231b7
//   Label: LAB_004a00c3
//   XREF to: 006231b7 (DATA)
// 004a00c8: PUSH EBX
// 004a00c9: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004a00ce: ADD ESP,0x8
// 004a00d1: JMP 0x004a0043
//   XREF to: 004a0043 (UNCONDITIONAL_JUMP)
// 004a00d6: PUSH ESI
//   Label: LAB_004a00d6
// 004a00d7: PUSH EDI
// 004a00d8: PUSH 0x6231d5
//   XREF to: 006231d5 (DATA)
// 004a00dd: PUSH EBX
// 004a00de: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004a00e3: ADD ESP,0x10
// 004a00e6: JMP 0x004a0043
//   XREF to: 004a0043 (UNCONDITIONAL_JUMP)
