// Name: core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
// Address: 0042ce80
// Address Range: [[0042ce80, 0042cfdb]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429870 (00429870) at 00429a53 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800 (0042f800) at 0042f88a [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 (0042cdb0) at 0042ce6c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_charactr_cpp_00617329
//   TerminatedCString s_CCharacter_computePickup_0061733e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter *this_ptr)

{
  int iVar1;
  SCarryHand *pSVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000008;
  float in_stack_0000000c;
  CMatrix3x4f *in_stack_fffffea4;
  CMatrix3x4f *in_stack_fffffea8;
  CMatrix3x4f *in_stack_fffffeac;
  int aiStack_148 [10];
  undefined4 auStack_120 [9];
  undefined1 auStack_fc [52];
  undefined1 auStack_c8 [52];
  undefined4 uStack_94;
  CMatrix3x4f CStack_90;
  undefined4 uStack_60;
  CMatrix3x4f CStack_5c;
  undefined4 auStack_2c [7];
  
  bVar7 = 0;
  pSVar2 = this_ptr->carry_hands + in_stack_00000008;
  if (*(int *)pSVar2->field0_0x0 < 0) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xc00;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::computePickup - invalid bone!");
  }
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_fc,&(pSVar2->carry_actor->location).position,
             (CVector3f *)&pSVar2->carry_actor->orient);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_c8,&(this_ptr->base_actor).location.position,
             (CVector3f *)&(this_ptr->base_actor).orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_c8 + 4),(CMatrix3x4f *)(auStack_fc + 8),in_stack_fffffea4);
  puVar3 = auStack_120;
  puVar5 = &uStack_94;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((this_ptr->model).bone_world_matrices + *(int *)pSVar2->field0_0x0,&CStack_90,
             in_stack_fffffea8);
  puVar3 = auStack_2c;
  puVar5 = &uStack_60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_inverse_FUN_005f6210(&CStack_5c,in_stack_fffffeac);
  piVar4 = aiStack_148;
  pcVar6 = pSVar2->field2_0xc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pcVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if (0.0 < in_stack_0000000c) {
    pSVar2->field2_0xc[0x34] = '\0';
    pSVar2->field2_0xc[0x35] = '\0';
    pSVar2->field2_0xc[0x36] = '\0';
    pSVar2->field2_0xc[0x37] = '\0';
    *(float *)(pSVar2->field2_0xc + 0x30) = 1.0 / in_stack_0000000c;
    return;
  }
  pSVar2->field2_0xc[0x34] = '\0';
  pSVar2->field2_0xc[0x35] = '\0';
  pSVar2->field2_0xc[0x36] = -0x80;
  pSVar2->field2_0xc[0x37] = '?';
  pSVar2->field2_0xc[0x30] = '\0';
  pSVar2->field2_0xc[0x31] = '\0';
  pSVar2->field2_0xc[0x32] = '\0';
  pSVar2->field2_0xc[0x33] = '\0';
  return;
}


// Assembly code:
// 0042ce80: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
// 0042ce81: PUSH ESI
// 0042ce82: PUSH EDI
// 0042ce83: PUSH EBP
// 0042ce84: MOV EBP,ESP
// 0042ce86: SUB ESP,0x158
// 0042ce8c: AND ESP,0xfffffff8
// 0042ce8f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042ce92: MOV EAX,EBX
// 0042ce94: SHL EAX,0x4
// 0042ce97: ADD EAX,EBX
// 0042ce99: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042ce9c: SHL EAX,0x2
// 0042ce9f: ADD EBX,0x24ac
// 0042cea5: ADD EBX,EAX
// 0042cea7: CMP dword ptr [EBX],0x0
// 0042ceaa: JL 0x0042cf9f
//   XREF to: 0042cf9f (CONDITIONAL_JUMP)
// 0042ceb0: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_0042ceb0
// 0042ceb3: LEA ESI,[EAX + 0x30]
// 0042ceb6: PUSH ESI
// 0042ceb7: ADD EAX,0x20
// 0042ceba: PUSH EAX
// 0042cebb: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x100] (DATA)
// 0042cebf: PUSH EAX
// 0042cec0: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0042cec5: ADD ESP,0xc
// 0042cec8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042cecb: ADD EAX,0x30
// 0042cece: PUSH EAX
// 0042cecf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042ced2: ADD EAX,0x20
// 0042ced5: PUSH EAX
// 0042ced6: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0xd0] (DATA)
// 0042cedd: PUSH EAX
// 0042cede: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0042cee3: ADD ESP,0xc
// 0042cee6: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x100] (DATA)
// 0042ceea: PUSH EAX
// 0042ceeb: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0xd0] (DATA)
// 0042cef2: PUSH EAX
// 0042cef3: LEA ESI,[ESP + 0x40]
//   XREF to: Stack[-0x130] (DATA)
// 0042cef7: LEA EDI,[ESP + 0xd0]
//   XREF to: Stack[-0xa0] (DATA)
// 0042cefe: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0042cf03: MOV ECX,0xc
// 0042cf08: LEA ESI,[ESP + 0x40]
//   XREF to: Stack[-0x130] (DATA)
// 0042cf0c: ADD ESP,0x8
// 0042cf0f: MOVSD.REP ES:EDI,ESI
// 0042cf11: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0xa0] (DATA)
// 0042cf18: MOV ESI,dword ptr [EBX]
// 0042cf1a: PUSH EAX
// 0042cf1b: LEA EAX,[ESI*0x4 + 0x0]
// 0042cf22: SUB EAX,ESI
// 0042cf24: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042cf27: SHL EAX,0x4
// 0042cf2a: ADD ESI,0xfd8
// 0042cf30: ADD EAX,ESI
// 0042cf32: PUSH EAX
// 0042cf33: LEA ESI,[ESP + 0x130]
//   XREF to: Stack[-0x40] (DATA)
// 0042cf3a: LEA EDI,[ESP + 0x100]
//   XREF to: Stack[-0x70] (DATA)
// 0042cf41: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0042cf46: MOV ECX,0xc
// 0042cf4b: LEA ESI,[ESP + 0x130]
//   XREF to: Stack[-0x40] (DATA)
// 0042cf52: ADD ESP,0x8
// 0042cf55: LEA EAX,[ESP + 0xf8]
//   XREF to: Stack[-0x70] (DATA)
// 0042cf5c: MOVSD.REP ES:EDI,ESI
// 0042cf5e: PUSH EAX
// 0042cf5f: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x160] (DATA)
// 0042cf63: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 0042cf68: FLDZ
// 0042cf6a: MOV ECX,0xc
// 0042cf6f: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x160] (DATA)
// 0042cf73: ADD ESP,0x4
// 0042cf76: LEA EDI,[EBX + 0xc]
// 0042cf79: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042cf7c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x168] (DATA)
// 0042cf7f: MOVSD.REP ES:EDI,ESI
// 0042cf81: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x168] (DATA)
// 0042cf84: FNSTSW AX
// 0042cf86: SAHF
// 0042cf87: JNC 0x0042cfc7
//   XREF to: 0042cfc7 (CONDITIONAL_JUMP)
// 0042cf89: FLD1
// 0042cf8b: FDIV double ptr [ESP]
//   XREF to: Stack[-0x168] (DATA)
// 0042cf8e: MOV dword ptr [EBX + 0x40],0x0
// 0042cf95: FSTP float ptr [EBX + 0x3c]
// 0042cf98: MOV ESP,EBP
// 0042cf9a: POP EBP
// 0042cf9b: POP EDI
// 0042cf9c: POP ESI
// 0042cf9d: POP EBX
// 0042cf9e: RET
// 0042cf9f: MOV ECX,0x617329
//   Label: LAB_0042cf9f
//   XREF to: 00617329 (PARAM)
// 0042cfa4: MOV ESI,0xc00
// 0042cfa9: PUSH 0x61733e
//   XREF to: 0061733e (DATA)
// 0042cfae: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0042cfb4: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0042cfba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042cfbf: ADD ESP,0x4
// 0042cfc2: JMP 0x0042ceb0
//   XREF to: 0042ceb0 (UNCONDITIONAL_JUMP)
// 0042cfc7: MOV dword ptr [EBX + 0x40],0x3f800000
//   Label: LAB_0042cfc7
// 0042cfce: MOV dword ptr [EBX + 0x3c],0x0
// 0042cfd5: MOV ESP,EBP
// 0042cfd7: POP EBP
// 0042cfd8: POP EDI
// 0042cfd9: POP ESI
// 0042cfda: POP EBX
// 0042cfdb: RET
