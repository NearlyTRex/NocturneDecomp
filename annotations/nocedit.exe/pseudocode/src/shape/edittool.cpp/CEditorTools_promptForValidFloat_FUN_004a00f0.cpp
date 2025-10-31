// Name: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
// Address: 004a00f0
// Address Range: [[004a00f0, 004a01e2]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, float min_value, float max_value, bool show_current_value)
// Cross-references:
//   core_actor.cpp_AnotherActorParser_FUN_0040eed0 (0040eed0) at 0040efc4 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_FUN_00423440 (00423440) at 004234ac [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043dffc [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 0044346c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047dcfa [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004de364 [UNCONDITIONAL_CALL]
//   core_game.cpp_PleaseEnterValidInteger_FUN_004d7730 (004d7730) at 004d7761 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 00537027 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537b4a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00562a1e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b29c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c142 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e3b3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cb57 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00597f2b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_g_00623205
//   TerminatedCString s_f_00623208
//   TerminatedCString s_Please_enter_a_valid_num_0062320b
//   TerminatedCString s_Please_enter_a_valid_int_00623228
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
          (CEditorTools *this_ptr,char *prompt_text,float *result_ptr,bool enable_range_check,
          float min_value,float max_value,bool show_current_value)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  undefined3 in_stack_00000011;
  float fStack_34;
  float afStack_30 [8];
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffffc8,"%g",SUB84((double)*result_ptr,0),
               (int)((ulonglong)(double)*result_ptr >> 0x20),min_value,max_value);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,(char *)&fStack_34,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c((char *)afStack_30,"%f",&stack0xfffffff0);
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid number.");
    }
    if ((_enable_range_check == 0) || ((fStack_34 <= unaff_EDI && (unaff_EDI <= afStack_30[0]))))
    break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %g and %g.",SUB84((double)fStack_34,0),
               (int)((ulonglong)(double)fStack_34 >> 0x20),(double)afStack_30[0]);
  }
  *result_ptr = unaff_EDI;
  return 1;
}


// Assembly code:
// 004a00f0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
// 004a00f1: PUSH ESI
// 004a00f2: PUSH EDI
// 004a00f3: PUSH EBP
// 004a00f4: MOV EBP,ESP
// 004a00f6: SUB ESP,0x2c
// 004a00f9: AND ESP,0xfffffff8
// 004a00fc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a00ff: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004a0102: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a0105: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 004a0108: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004a010b: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a010e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004a0112: TEST byte ptr [EBP + 0x2c],0x1
//   XREF to: Stack[0x1c] (READ)
// 004a0116: JNZ 0x004a013c
//   XREF to: 004a013c (CONDITIONAL_JUMP)
// 004a0118: XOR DL,DL
// 004a011a: MOV byte ptr [ESP + 0x8],DL
//   XREF to: Stack[-0x38] (WRITE)
// 004a011e: PUSH 0x1
//   Label: LAB_004a011e
// 004a0120: PUSH 0x1e
// 004a0122: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x38] (DATA)
// 004a0126: PUSH EAX
// 004a0127: PUSH ESI
// 004a0128: PUSH EBX
// 004a0129: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004a012e: ADD ESP,0x14
// 004a0131: TEST EAX,EAX
// 004a0133: JNZ 0x004a015b
//   XREF to: 004a015b (CONDITIONAL_JUMP)
// 004a0135: MOV ESP,EBP
// 004a0137: POP EBP
// 004a0138: POP EDI
// 004a0139: POP ESI
// 004a013a: POP EBX
// 004a013b: RET
// 004a013c: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_004a013c
//   XREF to: Stack[0xc] (READ)
// 004a013f: SUB ESP,0x8
// 004a0142: FLD float ptr [EAX]
// 004a0144: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004a0147: PUSH 0x623205
//   XREF to: 00623205 (DATA)
// 004a014c: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x38] (DATA)
// 004a0150: PUSH EAX
// 004a0151: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a0156: ADD ESP,0x10
// 004a0159: JMP 0x004a011e
//   XREF to: 004a011e (UNCONDITIONAL_JUMP)
// 004a015b: LEA EAX,[ESP + 0x28]
//   Label: LAB_004a015b
//   XREF to: Stack[-0x18] (DATA)
// 004a015f: PUSH EAX
// 004a0160: PUSH 0x623208
//   XREF to: 00623208 (DATA)
// 004a0165: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x38] (DATA)
// 004a0169: PUSH EAX
// 004a016a: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004a016f: ADD ESP,0xc
// 004a0172: CMP EAX,0x1
// 004a0175: JNZ 0x004a01a9
//   XREF to: 004a01a9 (CONDITIONAL_JUMP)
// 004a0177: TEST EDI,EDI
// 004a0179: JZ 0x004a0194
//   XREF to: 004a0194 (CONDITIONAL_JUMP)
// 004a017b: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004a017f: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004a0182: FNSTSW AX
// 004a0184: SAHF
// 004a0185: JC 0x004a01bc
//   XREF to: 004a01bc (CONDITIONAL_JUMP)
// 004a0187: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004a018b: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004a018f: FNSTSW AX
// 004a0191: SAHF
// 004a0192: JA 0x004a01bc
//   XREF to: 004a01bc (CONDITIONAL_JUMP)
// 004a0194: MOV EBX,dword ptr [EBP + 0x1c]
//   Label: LAB_004a0194
//   XREF to: Stack[0xc] (READ)
// 004a0197: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004a019b: MOV dword ptr [EBX],EAX
// 004a019d: MOV EAX,0x1
// 004a01a2: MOV ESP,EBP
// 004a01a4: POP EBP
// 004a01a5: POP EDI
// 004a01a6: POP ESI
// 004a01a7: POP EBX
// 004a01a8: RET
// 004a01a9: PUSH 0x62320b
//   Label: LAB_004a01a9
//   XREF to: 0062320b (DATA)
// 004a01ae: PUSH EBX
// 004a01af: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004a01b4: ADD ESP,0x8
// 004a01b7: JMP 0x004a011e
//   XREF to: 004a011e (UNCONDITIONAL_JUMP)
// 004a01bc: FLD float ptr [ESP + 0x4]
//   Label: LAB_004a01bc
//   XREF to: Stack[-0x3c] (READ)
// 004a01c0: SUB ESP,0x8
// 004a01c3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004a01c6: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 004a01ca: SUB ESP,0x8
// 004a01cd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 004a01d0: PUSH 0x623228
//   XREF to: 00623228 (DATA)
// 004a01d5: PUSH EBX
// 004a01d6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004a01db: ADD ESP,0x18
// 004a01de: JMP 0x004a011e
//   XREF to: 004a011e (UNCONDITIONAL_JUMP)
