// Name: core_skeledit.cpp_FUN_0058aeb0
// Address: 0058aeb0
// Address Range: [[0058aeb0, 0058af34]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058aeb0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c37c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005929b5 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeledit.cpp_FUN_0058ac80
//   core_xform.cpp_clearTranslation_FUN_005f5370
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058aeb0(undefined4 param_1,undefined4 param_2,CMatrix3x4f *unaff_EBX)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *output_matrix;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  int *in_stack_0000000c;
  CMatrix3x4f *in_stack_00000010;
  int *in_stack_00000018;
  float fStack_2c;
  int *piStack_28;
  undefined4 local_8;
  
  bVar4 = 0;
  local_8 = 0x58aeba;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x40);
  if (0 < *in_stack_0000000c) {
    output_matrix = (float *)(in_stack_0000000c + 0x16);
    do {
      core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)output_matrix,unaff_EBX);
      pfVar2 = &fStack_2c;
      pCVar3 = in_stack_00000010;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3->m[0].w = *pfVar2;
        pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
      }
      core_xform_cpp_clearTranslation_FUN_005f5370(in_stack_00000010);
      unaff_EBX = (CMatrix3x4f *)0x58af01;
      core_xform_cpp_setRotationScaleIdentity_FUN_005f5190((CMatrix3x4f *)output_matrix);
      in_stack_00000010 = in_stack_00000010 + 1;
      output_matrix = output_matrix + 0x21;
      in_stack_0000000c = (int *)((int)in_stack_0000000c + 1);
    } while ((int)in_stack_0000000c < *in_stack_00000018);
  }
  piStack_28 = in_stack_00000018;
  fStack_2c = 8.144365e-39;
  core_skeledit_cpp_FUN_0058ac80();
  return;
}


// Assembly code:
// 0058aeb0: PUSH 0x40
//   Label: core_skeledit.cpp_FUN_0058aeb0
// 0058aeb5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058aeba: PUSH EBP
// 0058aebb: SUB ESP,0x34
// 0058aebe: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0058aec2: XOR EDX,EDX
// 0058aec4: MOV ECX,dword ptr [EAX]
// 0058aec6: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 0058aeca: TEST ECX,ECX
// 0058aecc: JLE 0x0058af23
//   XREF to: 0058af23 (CONDITIONAL_JUMP)
// 0058aece: PUSH EDI
// 0058aecf: PUSH ESI
// 0058aed0: PUSH EBX
// 0058aed1: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058aed5: LEA EBP,[EAX + 0x58]
// 0058aed8: PUSH EBP
//   Label: LAB_0058aed8
// 0058aed9: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x38] (DATA)
// 0058aedd: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 0058aee2: MOV EDI,EBX
// 0058aee4: ADD ESP,0x4
// 0058aee7: MOV ECX,0xc
// 0058aeec: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x38] (DATA)
// 0058aef0: PUSH EBX
// 0058aef1: MOVSD.REP ES:EDI,ESI
// 0058aef3: CALL core_xform.cpp_clearTranslation_FUN_005f5370
//   XREF to: 005f5370 (UNCONDITIONAL_CALL)
// 0058aef8: ADD ESP,0x4
// 0058aefb: PUSH EBP
// 0058aefc: CALL core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
//   XREF to: 005f5190 (UNCONDITIONAL_CALL)
// 0058af01: ADD ESP,0x4
// 0058af04: ADD EBX,0x30
// 0058af07: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x8] (READ)
// 0058af0b: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0058af0f: ADD EBP,0x84
// 0058af15: INC ESI
// 0058af16: MOV EDI,dword ptr [EAX]
// 0058af18: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x8] (WRITE)
// 0058af1c: CMP ESI,EDI
// 0058af1e: JL 0x0058aed8
//   XREF to: 0058aed8 (CONDITIONAL_JUMP)
// 0058af20: POP EBX
// 0058af21: POP ESI
// 0058af22: POP EDI
// 0058af23: MOV EBP,dword ptr [ESP + 0x3c]
//   Label: LAB_0058af23
//   XREF to: Stack[0x4] (READ)
// 0058af27: PUSH EBP
// 0058af28: CALL core_skeledit.cpp_FUN_0058ac80
//   XREF to: 0058ac80 (UNCONDITIONAL_CALL)
// 0058af2d: ADD ESP,0x4
// 0058af30: ADD ESP,0x34
// 0058af33: POP EBP
// 0058af34: RET
