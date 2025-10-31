// Name: core_skeledit.cpp_FUN_0058af40
// Address: 0058af40
// Address Range: [[0058af40, 0058afd0]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058af40()
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005954fc [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeledit.cpp_FUN_0058ac80
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_FUN_0058af40(int* param_1, int param_2, undefined4 param_3) */

void core_skeledit_cpp_FUN_0058af40(void)

{
  int iVar1;
  CMatrix3x4f *output_matrix;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *matrix_a;
  CMatrix3x4f *unaff_ESI;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int *in_stack_0000000c;
  CMatrix3x4f *in_stack_00000010;
  undefined4 auStack_34 [11];
  undefined4 uStack_8;
  
  bVar4 = 0;
  uStack_8 = 0x58af4a;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4c);
  uStack_8 = 0;
  if (0 < *in_stack_0000000c) {
    matrix_a = (float *)(in_stack_0000000c + 0x16);
    output_matrix = in_stack_00000010;
    do {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(output_matrix,(CMatrix3x4f *)matrix_a,unaff_ESI)
      ;
      puVar2 = auStack_34;
      puVar3 = (undefined4 *)(unaff_EBP + 0x58);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      unaff_EBP = unaff_EBP + 0x84;
      in_stack_0000000c = (int *)((int)in_stack_0000000c + 1);
      matrix_a = matrix_a + 0x21;
      output_matrix = output_matrix + 1;
    } while ((int)in_stack_0000000c < (int)in_stack_00000010->m[0].w);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}


// Assembly code:
// 0058af40: PUSH 0x4c
//   Label: core_skeledit.cpp_FUN_0058af40
// 0058af45: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058af4a: PUSH EBX
// 0058af4b: PUSH EBP
// 0058af4c: SUB ESP,0x38
// 0058af4f: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0058af53: XOR EDX,EDX
// 0058af55: MOV ECX,dword ptr [EBX]
// 0058af57: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0058af5b: TEST ECX,ECX
// 0058af5d: JLE 0x0058afbe
//   XREF to: 0058afbe (CONDITIONAL_JUMP)
// 0058af5f: PUSH EDI
// 0058af60: PUSH ESI
// 0058af61: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0058af65: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 0058af69: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0058af6d: ADD EBP,0x58
// 0058af70: PUSH EBP
//   Label: LAB_0058af70
// 0058af71: PUSH EBX
// 0058af72: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x40] (DATA)
// 0058af76: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0058af7b: ADD ESP,0x8
// 0058af7e: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0xc] (READ)
// 0058af82: MOV ECX,0xc
// 0058af87: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 0058af8b: LEA EDI,[EDI + 0x58]
// 0058af8e: MOVSD.REP ES:EDI,ESI
// 0058af90: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0xc] (READ)
// 0058af94: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x10] (READ)
// 0058af98: ADD ESI,0x84
// 0058af9e: INC EDI
// 0058af9f: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0xc] (WRITE)
// 0058afa3: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 0058afa7: MOV ESI,EDI
// 0058afa9: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0058afad: ADD EBP,0x84
// 0058afb3: MOV EAX,dword ptr [EDI]
// 0058afb5: ADD EBX,0x30
// 0058afb8: CMP ESI,EAX
// 0058afba: JL 0x0058af70
//   XREF to: 0058af70 (CONDITIONAL_JUMP)
// 0058afbc: POP ESI
// 0058afbd: POP EDI
// 0058afbe: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_0058afbe
//   XREF to: Stack[0x4] (READ)
// 0058afc2: PUSH EDX
// 0058afc3: CALL core_skeledit.cpp_FUN_0058ac80
//   XREF to: 0058ac80 (UNCONDITIONAL_CALL)
// 0058afc8: ADD ESP,0x4
// 0058afcb: ADD ESP,0x38
// 0058afce: POP EBP
// 0058afcf: POP EBX
// 0058afd0: RET
