// Name: core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
// Address: 0058adb0
// Address Range: [[0058adb0, 0058aea1]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058a3d0 (0058a3d0) at 0058a467 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059549d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeledit_cpp_0064a4d8
//   TerminatedCString s_CBoneStructure_fixupMatr_0064a4ed
//   TerminatedCString s_core_skeledit_cpp_0064a51d
//   TerminatedCString s_CBoneStructure_fixupMatr_0064a532
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058ac80
//   core_xform.cpp_determinant_FUN_005f61c0
//   core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_CBoneStructure_fixupMatrices(int* param_1, undefined4 param_2)
    */

void core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(void)

{
  int iVar1;
  float *matrix;
  double dVar2;
  int *in_stack_0000000c;
  int iVar3;
  undefined4 uStack_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x30);
  iVar1 = 0;
  if (0 < *in_stack_0000000c) {
    matrix = (float *)(in_stack_0000000c + 0x16);
    do {
      dVar2 = core_xform_cpp_determinant_FUN_005f61c0((CMatrix3x4f *)matrix);
      iVar3 = SUB84(dVar2,0);
      if (dVar2 < 0.0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x3b2;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::fixupMatrices - %s is mirrored.",uStack_14);
      }
      if ((((ulonglong)dVar2 & 0x7fffffff00000000) == 0) && (iVar3 == 0)) {
        g_CurrentLineNumber = 0x3b6;
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("CBoneStructure::fixupMatrices - %s is singular.","CBoneStructure::fixupMatrices - %s is singular.",
                   in_stack_0000000c + iVar1 * 0x21 + 1);
      }
      core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,0);
      iVar1 = iVar1 + 1;
      matrix = matrix + 0x21;
    } while (iVar1 < *in_stack_0000000c);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}


// Assembly code:
// 0058adb0: PUSH 0x30
//   Label: core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
// 0058adb5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058adba: PUSH EBX
// 0058adbb: PUSH ESI
// 0058adbc: PUSH EDI
// 0058adbd: PUSH EBP
// 0058adbe: MOV EBP,ESP
// 0058adc0: SUB ESP,0x14
// 0058adc3: AND ESP,0xfffffff8
// 0058adc6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058adc9: MOV EDX,dword ptr [EAX]
// 0058adcb: XOR EBX,EBX
// 0058adcd: TEST EDX,EDX
// 0058adcf: JLE 0x0058ae8f
//   XREF to: 0058ae8f (CONDITIONAL_JUMP)
// 0058add5: LEA EDI,[EAX + 0x4]
// 0058add8: LEA ESI,[EDI + 0x54]
// 0058addb: IMUL EAX,EBX,0x84
//   Label: LAB_0058addb
// 0058ade1: LEA EDX,[EDI + EAX*0x1]
// 0058ade4: PUSH ESI
// 0058ade5: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0058ade9: CALL core_xform.cpp_determinant_FUN_005f61c0
//   XREF to: 005f61c0 (UNCONDITIONAL_CALL)
// 0058adee: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058adf2: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058adf6: FLD double ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0058adfa: ADD ESP,0x4
// 0058adfd: FLDZ
// 0058adff: FXCH
// 0058ae01: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0058ae04: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0058ae07: FNSTSW AX
// 0058ae09: SAHF
// 0058ae0a: JBE 0x0058ae33
//   XREF to: 0058ae33 (CONDITIONAL_JUMP)
// 0058ae0c: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0058ae10: PUSH ECX
// 0058ae11: MOV EAX,0x64a4d8
//   XREF to: 0064a4d8 (PARAM)
// 0058ae16: MOV EDX,0x3b2
// 0058ae1b: PUSH 0x64a4ed
//   XREF to: 0064a4ed (DATA)
// 0058ae20: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0058ae25: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0058ae2b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058ae30: ADD ESP,0x8
// 0058ae33: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0058ae33
//   XREF to: Stack[-0x24] (READ)
// 0058ae37: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0058ae3a: TEST EAX,0x7fffffff
// 0058ae3f: JNZ 0x0058ae70
//   XREF to: 0058ae70 (CONDITIONAL_JUMP)
// 0058ae41: TEST EDX,EDX
// 0058ae43: JNZ 0x0058ae70
//   XREF to: 0058ae70 (CONDITIONAL_JUMP)
// 0058ae45: MOV dword ptr [0x02f0ca4c],0x3b6
//   XREF to: 02f0ca4c (WRITE)
// 0058ae4f: IMUL EAX,EBX,0x84
// 0058ae55: ADD EAX,EDI
// 0058ae57: PUSH EAX
// 0058ae58: MOV ECX,0x64a51d
//   XREF to: 0064a51d (PARAM)
// 0058ae5d: PUSH 0x64a532
//   XREF to: 0064a532 (DATA)
// 0058ae62: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0058ae68: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058ae6d: ADD ESP,0x8
// 0058ae70: PUSH 0x0
//   Label: LAB_0058ae70
// 0058ae72: PUSH ESI
// 0058ae73: CALL core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
//   XREF to: 005f6690 (UNCONDITIONAL_CALL)
// 0058ae78: ADD ESP,0x8
// 0058ae7b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058ae7e: INC EBX
// 0058ae7f: MOV ECX,dword ptr [EAX]
// 0058ae81: ADD ESI,0x84
// 0058ae87: CMP EBX,ECX
// 0058ae89: JL 0x0058addb
//   XREF to: 0058addb (CONDITIONAL_JUMP)
// 0058ae8f: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0058ae8f
//   XREF to: Stack[0x4] (READ)
// 0058ae92: PUSH EDX
// 0058ae93: CALL core_skeledit.cpp_FUN_0058ac80
//   XREF to: 0058ac80 (UNCONDITIONAL_CALL)
// 0058ae98: ADD ESP,0x4
// 0058ae9b: MOV ESP,EBP
// 0058ae9d: POP EBP
// 0058ae9e: POP EDI
// 0058ae9f: POP ESI
// 0058aea0: POP EBX
// 0058aea1: RET
