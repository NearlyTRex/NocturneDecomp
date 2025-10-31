// Name: core_cloth.cpp_FUN_0043dcc0
// Address: 0043dcc0
// Address Range: [[0043dcc0, 0043ddd2]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043dcc0()
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043e08e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065bb44
//   float FLOAT_0065bb54 = 0.125
//   float FLOAT_0065bb58 = 32
//   float FLOAT_0065bb5c = 0.9000000
//   float FLOAT_0065bb60 = 0.005000000
//   float FLOAT_0065bb64 = 0.5
//   float FLOAT_0065bb68 = 0.5
//   float FLOAT_0065bb6c = 0.05000000
//   undefined4 DAT_0065bb70
// Function calls:
//   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
//   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_cloth.cpp_FUN_0043dcc0(undefined4 param_1, undefined4 param_2) */

void core_cloth_cpp_FUN_0043dcc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  CCloth *in_stack_00000004;
  char *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0
            ((CKeyFramedModel *)in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190((CKeyFramedModel *)in_stack_00000004)
  ;
  fVar4 = FLOAT_0065bb60;
  fVar3 = FLOAT_0065bb5c;
  fVar2 = FLOAT_0065bb58;
  fVar1 = FLOAT_0065bb54;
  in_stack_00000004->padding_0x0[0x3ce88] = '\0';
  fVar5 = FLOAT_0065bb64;
  in_stack_00000004->padding_0x0[0x3ce89] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8a] = -0x80;
  in_stack_00000004->padding_0x0[0x3ce8b] = '?';
  in_stack_00000004->padding_0x0[0x3ce84] = '\x01';
  fVar6 = FLOAT_0065bb68;
  in_stack_00000004->padding_0x0[0x3ce85] = '\0';
  in_stack_00000004->padding_0x0[0x3ce86] = '\0';
  in_stack_00000004->padding_0x0[0x3ce87] = '\0';
  in_stack_00000004->padding_0x0[0x3f028] = '\0';
  fVar7 = FLOAT_0065bb6c;
  in_stack_00000004->padding_0x0[0x3f029] = '\0';
  in_stack_00000004->padding_0x0[0x3f02a] = '\0';
  in_stack_00000004->padding_0x0[0x3f02b] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8c] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8d] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8e] = '\0';
  in_stack_00000004->padding_0x0[0x3ce8f] = '\0';
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce58) = fVar1;
  uVar8 = _DAT_0065bb70;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce5c) = fVar2;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce60) = fVar3;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce64) = fVar4;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce68) = fVar5;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce6c) = fVar6;
  *(float *)(in_stack_00000004->padding_0x0 + 0x3ce70) = fVar7;
  *(undefined4 *)(in_stack_00000004->padding_0x0 + 0x3ce74) = uVar8;
  core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(in_stack_00000004);
  iVar10 = 0;
  if (0 < *(int *)(in_stack_00000004->padding_0x0 + 0x104)) {
    pcVar11 = in_stack_00000004->padding_0x0 + 0x5798;
    iVar12 = 0;
    do {
      piVar9 = (int *)(*(int *)(in_stack_00000004->padding_0x0 + 0x10c) + iVar12);
      iVar10 = iVar10 + 1;
      *(float *)pcVar11 = (float)*piVar9 * _DAT_0065bb44;
      *(float *)(pcVar11 + 4) = (float)piVar9[1] * _DAT_0065bb44;
      *(float *)(pcVar11 + 8) = (float)piVar9[2] * _DAT_0065bb44;
      pcVar11 = pcVar11 + 0x11c;
      iVar12 = iVar12 + 0xc;
    } while (iVar10 < *(int *)(in_stack_00000004->padding_0x0 + 0x104));
  }
  return;
}


// Assembly code:
// 0043dcc0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043dcc0
// 0043dcc1: PUSH EDI
// 0043dcc2: PUSH EBP
// 0043dcc3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043dcc7: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043dccb: PUSH EDX
// 0043dccc: PUSH EDI
// 0043dccd: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 0043dcd2: ADD ESP,0x8
// 0043dcd5: PUSH EDI
// 0043dcd6: CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
//   XREF to: 00478190 (UNCONDITIONAL_CALL)
// 0043dcdb: FLD float ptr [0x0065bb54]
//   XREF to: 0065bb54 (READ)
// 0043dce1: FLD float ptr [0x0065bb58]
//   XREF to: 0065bb58 (READ)
// 0043dce7: FLD float ptr [0x0065bb5c]
//   XREF to: 0065bb5c (READ)
// 0043dced: FLD float ptr [0x0065bb60]
//   XREF to: 0065bb60 (READ)
// 0043dcf3: MOV dword ptr [EDI + 0x3ce88],0x3f800000
// 0043dcfd: FLD float ptr [0x0065bb64]
//   XREF to: 0065bb64 (READ)
// 0043dd03: MOV dword ptr [EDI + 0x3ce84],0x1
// 0043dd0d: FLD float ptr [0x0065bb68]
//   XREF to: 0065bb68 (READ)
// 0043dd13: MOV dword ptr [EDI + 0x3f028],0x0
// 0043dd1d: FLD float ptr [0x0065bb6c]
//   XREF to: 0065bb6c (READ)
// 0043dd23: MOV dword ptr [EDI + 0x3ce8c],0x0
// 0043dd2d: ADD ESP,0x4
// 0043dd30: FXCH ST6
// 0043dd32: FSTP float ptr [EDI + 0x3ce58]
// 0043dd38: FLD float ptr [0x0065bb70]
//   XREF to: 0065bb70 (READ)
// 0043dd3e: FXCH ST5
// 0043dd40: FSTP float ptr [EDI + 0x3ce5c]
// 0043dd46: FXCH ST3
// 0043dd48: FSTP float ptr [EDI + 0x3ce60]
// 0043dd4e: FXCH
// 0043dd50: FSTP float ptr [EDI + 0x3ce64]
// 0043dd56: FSTP float ptr [EDI + 0x3ce68]
// 0043dd5c: FSTP float ptr [EDI + 0x3ce6c]
// 0043dd62: FXCH
// 0043dd64: FSTP float ptr [EDI + 0x3ce70]
// 0043dd6a: PUSH EDI
// 0043dd6b: FSTP float ptr [EDI + 0x3ce74]
// 0043dd71: CALL core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
//   XREF to: 00438c50 (UNCONDITIONAL_CALL)
// 0043dd76: ADD ESP,0x4
// 0043dd79: MOV EBX,dword ptr [EDI + 0x104]
// 0043dd7f: XOR ECX,ECX
// 0043dd81: TEST EBX,EBX
// 0043dd83: JLE 0x0043ddcf
//   XREF to: 0043ddcf (CONDITIONAL_JUMP)
// 0043dd85: PUSH ESI
// 0043dd86: LEA EDX,[EDI + 0x5798]
// 0043dd8c: XOR ESI,ESI
// 0043dd8e: MOV EAX,dword ptr [EDI + 0x10c]
//   Label: LAB_0043dd8e
// 0043dd94: MOV EBX,EDX
// 0043dd96: ADD EAX,ESI
// 0043dd98: INC ECX
// 0043dd99: FILD dword ptr [EAX]
// 0043dd9b: FMUL float ptr [0x0065bb44]
//   XREF to: 0065bb44 (READ)
// 0043dda1: FSTP float ptr [EBX]
// 0043dda3: FILD dword ptr [EAX + 0x4]
// 0043dda6: FMUL float ptr [0x0065bb44]
//   XREF to: 0065bb44 (READ)
// 0043ddac: FSTP float ptr [EBX + 0x4]
// 0043ddaf: FILD dword ptr [EAX + 0x8]
// 0043ddb2: FMUL float ptr [0x0065bb44]
//   XREF to: 0065bb44 (READ)
// 0043ddb8: FSTP float ptr [EBX + 0x8]
// 0043ddbb: ADD EDX,0x11c
// 0043ddc1: MOV EBP,dword ptr [EDI + 0x104]
// 0043ddc7: ADD ESI,0xc
// 0043ddca: CMP ECX,EBP
// 0043ddcc: JL 0x0043dd8e
//   XREF to: 0043dd8e (CONDITIONAL_JUMP)
// 0043ddce: POP ESI
// 0043ddcf: POP EBP
//   Label: LAB_0043ddcf
// 0043ddd0: POP EDI
// 0043ddd1: POP EBX
// 0043ddd2: RET
