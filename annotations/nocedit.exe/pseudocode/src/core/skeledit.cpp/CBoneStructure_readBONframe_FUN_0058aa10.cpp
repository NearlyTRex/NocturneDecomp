// Name: core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
// Address: 0058aa10
// Address Range: [[0058aa10, 0058aba8]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure * this_ptr)
// Cross-references:
//   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 (0058a3d0) at 0058a44b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c245 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059548b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_0064a3db
//   TerminatedCString s_core_skeledit_cpp_0064a3e5
//   TerminatedCString s_CBoneStructure_readBONfr_0064a3fa
//   TerminatedCString s_f_f_f_0064a42a
//   TerminatedCString s_f_f_f_0064a434
//   TerminatedCString s_f_f_f_0064a43e
//   TerminatedCString s_core_skeledit_cpp_0064a448
//   TerminatedCString s_CBoneStructure_readBONfr_0064a45d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058ac80
//   core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0
//   core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure *this_ptr)

{
  CMatrix3x4f *matrix;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_stack_0000000c;
  FILE *in_stack_00000010;
  int in_stack_00000024;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x28);
  for (iVar4 = 0; iVar4 < *in_stack_0000000c; iVar4 = iVar4 + 1) {
    iVar2 = in_stack_0000000c[iVar4 + 0xce5];
    iVar3 = iVar2 * 0x84;
    matrix = (CMatrix3x4f *)(in_stack_0000000c + iVar2 * 0x21 + 0x16);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (in_stack_00000010,"%f,%f,%f\n",matrix,
                       in_stack_0000000c + iVar2 * 0x21 + 0x1a,
                       in_stack_0000000c + iVar2 * 0x21 + 0x1e);
    if (iVar1 == 3) goto LAB_0058aa88;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x310;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONframe - file is corrupt!");
LAB_0058aa88:
          iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (in_stack_00000010,"%f,%f,%f\n",
                             in_stack_0000000c + iVar2 * 0x21 + 0x17,
                             in_stack_0000000c + iVar2 * 0x21 + 0x1b,
                             in_stack_0000000c + iVar2 * 0x21 + 0x1f);
        } while (iVar1 != 3);
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (in_stack_00000010,"%f,%f,%f\n",
                           in_stack_0000000c + iVar2 * 0x21 + 0x18,
                           in_stack_0000000c + iVar2 * 0x21 + 0x1c,
                           in_stack_0000000c + iVar2 * 0x21 + 0x20);
      } while (iVar1 != 3);
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000010,"%f,%f,%f\n",in_stack_0000000c + iVar2 * 0x21 + 0x19,
                         in_stack_0000000c + iVar2 * 0x21 + 0x1d);
    } while (iVar1 != 3);
    if (in_stack_00000024 != 0) {
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x5b) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x5b) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 99) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 99) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x7b) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x7b) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x5f) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x5f) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x67) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x67) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x83) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x83) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x7f) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x7f) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x87) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x87) ^ 0x80;
    }
    iVar2 = core_xform_cpp_hasNegativeDeterminant_FUN_005f6be0(matrix);
    if (iVar2 != 0) {
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x5b) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x5b) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 99) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 99) ^ 0x80;
      *(byte *)((int)in_stack_0000000c + iVar3 + 0x5f) =
           *(byte *)((int)in_stack_0000000c + iVar3 + 0x5f) ^ 0x80;
    }
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,1);
  }
  core_skeledit_cpp_FUN_0058ac80();
  if ((in_stack_00000010->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\core\\skeledit.cpp";
  g_CurrentLineNumber = 0x33b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONframe - error reading file!");
  return;
}


// Assembly code:
// 0058aa10: PUSH 0x28
//   Label: core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
// 0058aa15: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058aa1a: PUSH EBX
// 0058aa1b: PUSH ESI
// 0058aa1c: PUSH EDI
// 0058aa1d: PUSH EBP
// 0058aa1e: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058aa22: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058aa26: XOR ESI,ESI
// 0058aa28: CMP ESI,dword ptr [EBP]
//   Label: LAB_0058aa28
// 0058aa2b: JGE 0x0058ab6b
//   XREF to: 0058ab6b (CONDITIONAL_JUMP)
// 0058aa31: MOV EAX,dword ptr [EBP + ESI*0x4 + 0x3394]
// 0058aa38: MOV EBX,EAX
// 0058aa3a: SHL EBX,0x5
// 0058aa3d: ADD EBX,EAX
// 0058aa3f: SHL EBX,0x2
// 0058aa42: LEA EAX,[EBP + 0x4]
// 0058aa45: ADD EAX,EBX
// 0058aa47: LEA EBX,[EAX + 0x54]
// 0058aa4a: LEA EDX,[EAX + 0x74]
// 0058aa4d: PUSH EDX
// 0058aa4e: ADD EAX,0x64
// 0058aa51: PUSH EAX
// 0058aa52: PUSH EBX
// 0058aa53: PUSH 0x64a3db
//   XREF to: 0064a3db (DATA)
// 0058aa58: PUSH EDI
// 0058aa59: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058aa5e: ADD ESP,0x14
// 0058aa61: CMP EAX,0x3
// 0058aa64: JZ 0x0058aa88
//   XREF to: 0058aa88 (CONDITIONAL_JUMP)
// 0058aa66: MOV EAX,0x64a3e5
//   Label: LAB_0058aa66
//   XREF to: 0064a3e5 (PARAM)
// 0058aa6b: MOV EDX,0x310
// 0058aa70: PUSH 0x64a3fa
//   XREF to: 0064a3fa (DATA)
// 0058aa75: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0058aa7a: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0058aa80: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058aa85: ADD ESP,0x4
// 0058aa88: LEA EAX,[EBX + 0x24]
//   Label: LAB_0058aa88
// 0058aa8b: PUSH EAX
// 0058aa8c: LEA EAX,[EBX + 0x14]
// 0058aa8f: PUSH EAX
// 0058aa90: LEA EAX,[EBX + 0x4]
// 0058aa93: PUSH EAX
// 0058aa94: PUSH 0x64a42a
//   XREF to: 0064a42a (DATA)
// 0058aa99: PUSH EDI
// 0058aa9a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058aa9f: ADD ESP,0x14
// 0058aaa2: CMP EAX,0x3
// 0058aaa5: JNZ 0x0058aa66
//   XREF to: 0058aa66 (CONDITIONAL_JUMP)
// 0058aaa7: LEA EAX,[EBX + 0x28]
// 0058aaaa: PUSH EAX
// 0058aaab: LEA EAX,[EBX + 0x18]
// 0058aaae: PUSH EAX
// 0058aaaf: LEA EAX,[EBX + 0x8]
// 0058aab2: PUSH EAX
// 0058aab3: PUSH 0x64a434
//   XREF to: 0064a434 (DATA)
// 0058aab8: PUSH EDI
// 0058aab9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058aabe: ADD ESP,0x14
// 0058aac1: CMP EAX,0x3
// 0058aac4: JNZ 0x0058aa66
//   XREF to: 0058aa66 (CONDITIONAL_JUMP)
// 0058aac6: LEA EAX,[EBX + 0x2c]
// 0058aac9: PUSH EAX
// 0058aaca: LEA EAX,[EBX + 0x1c]
// 0058aacd: PUSH EAX
// 0058aace: LEA EAX,[EBX + 0xc]
// 0058aad1: PUSH EAX
// 0058aad2: PUSH 0x64a43e
//   XREF to: 0064a43e (DATA)
// 0058aad7: PUSH EDI
// 0058aad8: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058aadd: ADD ESP,0x14
// 0058aae0: CMP EAX,0x3
// 0058aae3: JNZ 0x0058aa66
//   XREF to: 0058aa66 (CONDITIONAL_JUMP)
// 0058aae5: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 0058aaea: JZ 0x0058ab33
//   XREF to: 0058ab33 (CONDITIONAL_JUMP)
// 0058aaec: MOV DL,byte ptr [EBX + 0x3]
// 0058aaef: XOR DL,0x80
// 0058aaf2: MOV CL,byte ptr [EBX + 0xb]
// 0058aaf5: MOV byte ptr [EBX + 0x3],DL
// 0058aaf8: XOR CL,0x80
// 0058aafb: MOV AL,byte ptr [EBX + 0x23]
// 0058aafe: MOV byte ptr [EBX + 0xb],CL
// 0058ab01: XOR AL,0x80
// 0058ab03: MOV DH,byte ptr [EBX + 0x7]
// 0058ab06: MOV byte ptr [EBX + 0x23],AL
// 0058ab09: XOR DH,0x80
// 0058ab0c: MOV CH,byte ptr [EBX + 0xf]
// 0058ab0f: MOV byte ptr [EBX + 0x7],DH
// 0058ab12: XOR CH,0x80
// 0058ab15: MOV DL,byte ptr [EBX + 0x2b]
// 0058ab18: MOV byte ptr [EBX + 0xf],CH
// 0058ab1b: XOR DL,0x80
// 0058ab1e: MOV AH,byte ptr [EBX + 0x27]
// 0058ab21: MOV byte ptr [EBX + 0x2b],DL
// 0058ab24: XOR AH,0x80
// 0058ab27: MOV DH,byte ptr [EBX + 0x2f]
// 0058ab2a: MOV byte ptr [EBX + 0x27],AH
// 0058ab2d: XOR DH,0x80
// 0058ab30: MOV byte ptr [EBX + 0x2f],DH
// 0058ab33: PUSH EBX
//   Label: LAB_0058ab33
// 0058ab34: CALL core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0
//   XREF to: 005f6be0 (UNCONDITIONAL_CALL)
// 0058ab39: ADD ESP,0x4
// 0058ab3c: TEST EAX,EAX
// 0058ab3e: JZ 0x0058ab5a
//   XREF to: 0058ab5a (CONDITIONAL_JUMP)
// 0058ab40: MOV CL,byte ptr [EBX + 0x3]
// 0058ab43: XOR CL,0x80
// 0058ab46: MOV AL,byte ptr [EBX + 0xb]
// 0058ab49: MOV byte ptr [EBX + 0x3],CL
// 0058ab4c: XOR AL,0x80
// 0058ab4e: MOV CH,byte ptr [EBX + 0x7]
// 0058ab51: MOV byte ptr [EBX + 0xb],AL
// 0058ab54: XOR CH,0x80
// 0058ab57: MOV byte ptr [EBX + 0x7],CH
// 0058ab5a: PUSH 0x1
//   Label: LAB_0058ab5a
// 0058ab5c: PUSH EBX
// 0058ab5d: INC ESI
// 0058ab5e: CALL core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
//   XREF to: 005f6690 (UNCONDITIONAL_CALL)
// 0058ab63: ADD ESP,0x8
// 0058ab66: JMP 0x0058aa28
//   XREF to: 0058aa28 (UNCONDITIONAL_JUMP)
// 0058ab6b: PUSH EBP
//   Label: LAB_0058ab6b
// 0058ab6c: CALL core_skeledit.cpp_FUN_0058ac80
//   XREF to: 0058ac80 (UNCONDITIONAL_CALL)
// 0058ab71: MOV AH,byte ptr [EDI + 0xc]
// 0058ab74: ADD ESP,0x4
// 0058ab77: TEST AH,0x20
// 0058ab7a: JNZ 0x0058ab81
//   XREF to: 0058ab81 (CONDITIONAL_JUMP)
// 0058ab7c: POP EBP
// 0058ab7d: POP EDI
// 0058ab7e: POP ESI
// 0058ab7f: POP EBX
// 0058ab80: RET
// 0058ab81: MOV ECX,0x64a448
//   Label: LAB_0058ab81
//   XREF to: 0064a448 (PARAM)
// 0058ab86: MOV EBX,0x33b
// 0058ab8b: PUSH 0x64a45d
//   XREF to: 0064a45d (DATA)
// 0058ab90: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0058ab96: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0058ab9c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058aba1: ADD ESP,0x4
// 0058aba4: POP EBP
// 0058aba5: POP EDI
// 0058aba6: POP ESI
// 0058aba7: POP EBX
// 0058aba8: RET
