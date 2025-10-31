// Name: core_skeledit.cpp_FUN_0058ad30
// Address: 0058ad30
// Address Range: [[0058ad30, 0058adac]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ad30()
// Function calls:
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058ad30(void)

{
  int iVar1;
  int *piVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  int *in_stack_0000000c;
  CMatrix3x4f *in_stack_ffffffc4;
  int aiStack_38 [11];
  int *piStack_c;
  
  bVar6 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x50);
  iVar3 = 0;
  if (0 < *in_stack_0000000c) {
    piVar2 = in_stack_0000000c + 1;
    piStack_c = piVar2;
    do {
      if (piVar2[8] < 0) {
        iVar1 = 0xc;
        piVar4 = piVar2 + 9;
        piVar5 = piVar2 + 0x15;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(piVar2 + 9),(CMatrix3x4f *)(piStack_c + piVar2[8] * 0x21 + 0x15),
                   in_stack_ffffffc4);
        iVar1 = 0xc;
        piVar4 = aiStack_38;
        piVar5 = piVar2 + 0x15;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar3 < *in_stack_0000000c);
  }
  return;
}


// Assembly code:
// 0058ad30: PUSH 0x50
//   Label: core_skeledit.cpp_FUN_0058ad30
// 0058ad35: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058ad3a: PUSH EBX
// 0058ad3b: PUSH ESI
// 0058ad3c: PUSH EDI
// 0058ad3d: PUSH EBP
// 0058ad3e: SUB ESP,0x34
// 0058ad41: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0058ad45: MOV EDX,dword ptr [EBX]
// 0058ad47: XOR EBP,EBP
// 0058ad49: TEST EDX,EDX
// 0058ad4b: JLE 0x0058ad79
//   XREF to: 0058ad79 (CONDITIONAL_JUMP)
// 0058ad4d: ADD EBX,0x4
// 0058ad50: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0058ad54: MOV ESI,dword ptr [EBX + 0x20]
//   Label: LAB_0058ad54
// 0058ad57: TEST ESI,ESI
// 0058ad59: JGE 0x0058ad81
//   XREF to: 0058ad81 (CONDITIONAL_JUMP)
// 0058ad5b: MOV ECX,0xc
// 0058ad60: LEA EDI,[EBX + 0x54]
// 0058ad63: LEA ESI,[EBX + 0x24]
// 0058ad66: MOVSD.REP ES:EDI,ESI
//   Label: LAB_0058ad66
// 0058ad68: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0058ad6c: INC EBP
// 0058ad6d: MOV ECX,dword ptr [ESI]
// 0058ad6f: ADD EBX,0x84
// 0058ad75: CMP EBP,ECX
// 0058ad77: JL 0x0058ad54
//   XREF to: 0058ad54 (CONDITIONAL_JUMP)
// 0058ad79: ADD ESP,0x34
//   Label: LAB_0058ad79
// 0058ad7c: POP EBP
// 0058ad7d: POP EDI
// 0058ad7e: POP ESI
// 0058ad7f: POP EBX
// 0058ad80: RET
// 0058ad81: IMUL ESI,ESI,0x84
//   Label: LAB_0058ad81
// 0058ad87: ADD ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x14] (READ)
// 0058ad8b: ADD ESI,0x54
// 0058ad8e: PUSH ESI
// 0058ad8f: LEA ESI,[EBX + 0x24]
// 0058ad92: PUSH ESI
// 0058ad93: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x44] (DATA)
// 0058ad97: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0058ad9c: MOV ECX,0xc
// 0058ada1: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x44] (DATA)
// 0058ada5: LEA EDI,[EBX + 0x54]
// 0058ada8: ADD ESP,0x8
// 0058adab: JMP 0x0058ad66
//   XREF to: 0058ad66 (UNCONDITIONAL_JUMP)
