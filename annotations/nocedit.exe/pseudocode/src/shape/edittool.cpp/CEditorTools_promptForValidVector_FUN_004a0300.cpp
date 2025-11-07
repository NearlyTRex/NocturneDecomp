// Name: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
// Address: 004a0300
// Address Range: [[004a0300, 004a03ca]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300(CEditorTools * editor_tools, char * prompt_text, CVector3f * result_ptr, bool show_current_value)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f065 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 0044336f [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e0fe [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00597c63 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_g_g_g_006232b5
//   TerminatedCString s_f_f_f_006232be
//   TerminatedCString s_Please_enter_a_valid_vec_006232d1
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
          (CEditorTools *editor_tools,char *prompt_text,CVector3f *result_ptr,
          bool show_current_value)

{
  int iVar1;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_EDI;
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffffc0,"%g,%g,%g",(double)result_ptr->x,(double)result_ptr->y,
               (double)result_ptr->z);
  }
  while( true ) {
    iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (editor_tools,prompt_text,&stack0xffffffc4,0x28,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffffc8,"%f%*[ ,]%f%*[ ,]%f");
    if (iVar1 == 3) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (editor_tools,"Please enter a valid vector.");
  }
  if (result_ptr != (CVector3f *)&stack0xfffffff4) {
    result_ptr->x = unaff_EDI;
    result_ptr->y = unaff_ESI;
    result_ptr->z = unaff_EBX;
  }
  return 1;
}


// Assembly code:
// 004a0300: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
// 004a0301: PUSH ESI
// 004a0302: PUSH EDI
// 004a0303: SUB ESP,0x34
// 004a0306: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004a030a: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 004a030e: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 004a0312: TEST byte ptr [ESP + 0x50],0x1
//   XREF to: Stack[0x10] (READ)
// 004a0317: JNZ 0x004a033c
//   XREF to: 004a033c (CONDITIONAL_JUMP)
// 004a0319: XOR DL,DL
// 004a031b: MOV byte ptr [ESP],DL
//   XREF to: Stack[-0x40] (DATA)
// 004a031e: PUSH 0x1
//   Label: LAB_004a031e
// 004a0320: PUSH 0x28
// 004a0322: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 004a0326: PUSH EAX
// 004a0327: PUSH ESI
// 004a0328: PUSH EBX
// 004a0329: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004a032e: ADD ESP,0x14
// 004a0331: TEST EAX,EAX
// 004a0333: JNZ 0x004a036a
//   XREF to: 004a036a (CONDITIONAL_JUMP)
// 004a0335: ADD ESP,0x34
// 004a0338: POP EDI
// 004a0339: POP ESI
// 004a033a: POP EBX
// 004a033b: RET
// 004a033c: SUB ESP,0x8
//   Label: LAB_004a033c
// 004a033f: FLD float ptr [EDI + 0x8]
// 004a0342: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004a0345: SUB ESP,0x8
// 004a0348: FLD float ptr [EDI + 0x4]
// 004a034b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 004a034e: SUB ESP,0x8
// 004a0351: FLD float ptr [EDI]
// 004a0353: FSTP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 004a0356: PUSH 0x6232b5
//   XREF to: 006232b5 (DATA)
// 004a035b: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x40] (DATA)
// 004a035f: PUSH EAX
// 004a0360: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a0365: ADD ESP,0x20
// 004a0368: JMP 0x004a031e
//   XREF to: 004a031e (UNCONDITIONAL_JUMP)
// 004a036a: LEA EAX,[ESP + 0x30]
//   Label: LAB_004a036a
//   XREF to: Stack[-0x10] (DATA)
// 004a036e: PUSH EAX
// 004a036f: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x14] (DATA)
// 004a0373: PUSH EAX
// 004a0374: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x18] (DATA)
// 004a0378: PUSH EAX
// 004a0379: PUSH 0x6232be
//   XREF to: 006232be (DATA)
// 004a037e: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x40] (DATA)
// 004a0382: PUSH EAX
// 004a0383: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004a0388: ADD ESP,0x14
// 004a038b: CMP EAX,0x3
// 004a038e: JNZ 0x004a03b8
//   XREF to: 004a03b8 (CONDITIONAL_JUMP)
// 004a0390: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x18] (DATA)
// 004a0394: CMP EDI,EAX
// 004a0396: JZ 0x004a03ac
//   XREF to: 004a03ac (CONDITIONAL_JUMP)
// 004a0398: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (DATA)
// 004a039c: MOV dword ptr [EDI],EAX
// 004a039e: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004a03a2: MOV dword ptr [EDI + 0x4],EAX
// 004a03a5: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (READ)
// 004a03a9: MOV dword ptr [EDI + 0x8],EAX
// 004a03ac: MOV EAX,0x1
//   Label: LAB_004a03ac
// 004a03b1: ADD ESP,0x34
// 004a03b4: POP EDI
// 004a03b5: POP ESI
// 004a03b6: POP EBX
// 004a03b7: RET
// 004a03b8: PUSH 0x6232d1
//   Label: LAB_004a03b8
//   XREF to: 006232d1 (DATA)
// 004a03bd: PUSH EBX
// 004a03be: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004a03c3: ADD ESP,0x8
// 004a03c6: JMP 0x004a031e
//   XREF to: 004a031e (UNCONDITIONAL_JUMP)
