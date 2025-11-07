// Name: core_skeledit.cpp_FUN_0058ac80
// Address: 0058ac80
// Address Range: [[0058ac80, 0058ad2e]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ac80()
// Cross-references:
//   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 (0058adb0) at 0058ae93 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 (0058aa10) at 0058ab6c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058aeb0 (0058aeb0) at 0058af28 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058af40 (0058af40) at 0058afc3 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005954e6 [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058ac80(void)

{
  int iVar1;
  int *piVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte bVar8;
  int *in_stack_0000000c;
  CMatrix3x4f *in_stack_ffffff64;
  CMatrix3x4f *in_stack_ffffff68;
  int aiStack_94 [10];
  undefined4 uStack_6c;
  CMatrix3x4f CStack_68;
  undefined4 auStack_38 [11];
  int *piStack_c;
  
  bVar8 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xb0);
  iVar3 = 0;
  if (0 < *in_stack_0000000c) {
    piVar2 = in_stack_0000000c + 1;
    piStack_c = piVar2;
    do {
      if (piVar2[8] < 0) {
        iVar1 = 0xc;
        piVar4 = piVar2 + 0x15;
        piVar6 = piVar2 + 9;
      }
      else {
        core_xform_cpp_inverse_FUN_005f6210
                  ((CMatrix3x4f *)(piStack_c + piVar2[8] * 0x21 + 0x15),in_stack_ffffff64);
        puVar5 = auStack_38;
        puVar7 = &uStack_6c;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        in_stack_ffffff64 = &CStack_68;
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(piVar2 + 0x15),in_stack_ffffff64,in_stack_ffffff68);
        iVar1 = 0xc;
        piVar4 = aiStack_94;
        piVar6 = piVar2 + 9;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + (uint)bVar8 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar3 < *in_stack_0000000c);
  }
  return;
}


// Assembly code:
// 0058ac80: PUSH 0xb0
//   Label: core_skeledit.cpp_FUN_0058ac80
// 0058ac85: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058ac8a: PUSH EBX
// 0058ac8b: PUSH ESI
// 0058ac8c: PUSH EDI
// 0058ac8d: PUSH EBP
// 0058ac8e: SUB ESP,0x94
// 0058ac94: MOV EBX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 0058ac9b: MOV EDX,dword ptr [EBX]
// 0058ac9d: XOR EBP,EBP
// 0058ac9f: TEST EDX,EDX
// 0058aca1: JLE 0x0058acd5
//   XREF to: 0058acd5 (CONDITIONAL_JUMP)
// 0058aca3: ADD EBX,0x4
// 0058aca6: MOV dword ptr [ESP + 0x90],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0058acad: MOV ESI,dword ptr [EBX + 0x20]
//   Label: LAB_0058acad
// 0058acb0: TEST ESI,ESI
// 0058acb2: JGE 0x0058ace0
//   XREF to: 0058ace0 (CONDITIONAL_JUMP)
// 0058acb4: MOV ECX,0xc
// 0058acb9: LEA EDI,[EBX + 0x24]
// 0058acbc: LEA ESI,[EBX + 0x54]
// 0058acbf: MOVSD.REP ES:EDI,ESI
//   Label: LAB_0058acbf
// 0058acc1: MOV ESI,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 0058acc8: INC EBP
// 0058acc9: MOV ECX,dword ptr [ESI]
// 0058accb: ADD EBX,0x84
// 0058acd1: CMP EBP,ECX
// 0058acd3: JL 0x0058acad
//   XREF to: 0058acad (CONDITIONAL_JUMP)
// 0058acd5: ADD ESP,0x94
//   Label: LAB_0058acd5
// 0058acdb: POP EBP
// 0058acdc: POP EDI
// 0058acdd: POP ESI
// 0058acde: POP EBX
// 0058acdf: RET
// 0058ace0: IMUL ESI,ESI,0x84
//   Label: LAB_0058ace0
// 0058ace6: ADD ESI,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x14] (READ)
// 0058aced: ADD ESI,0x54
// 0058acf0: PUSH ESI
// 0058acf1: LEA ESI,[ESP + 0x64]
//   XREF to: Stack[-0x44] (DATA)
// 0058acf5: LEA EDI,[ESP + 0x34]
//   XREF to: Stack[-0x74] (DATA)
// 0058acf9: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 0058acfe: MOV ECX,0xc
// 0058ad03: LEA ESI,[ESP + 0x64]
//   XREF to: Stack[-0x44] (DATA)
// 0058ad07: ADD ESP,0x4
// 0058ad0a: MOVSD.REP ES:EDI,ESI
// 0058ad0c: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x74] (DATA)
// 0058ad10: PUSH ESI
// 0058ad11: LEA ESI,[EBX + 0x54]
// 0058ad14: PUSH ESI
// 0058ad15: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xa4] (DATA)
// 0058ad19: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0058ad1e: MOV ECX,0xc
// 0058ad23: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xa4] (DATA)
// 0058ad27: LEA EDI,[EBX + 0x24]
// 0058ad2a: ADD ESP,0x8
// 0058ad2d: JMP 0x0058acbf
//   XREF to: 0058acbf (UNCONDITIONAL_JUMP)
