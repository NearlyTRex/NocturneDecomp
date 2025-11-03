// Name: core_manpuz.cpp_FUN_00509b20
// Address: 00509b20
// Address Range: [[00509b20, 00509beb]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509b20()
// Cross-references:
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 (0050aba0) at 0050ace6 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 0050924b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00660d8c
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_manpuz.cpp_FUN_00509b20(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_00509b20(void)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CVector3f CStack_24;
  float local_10;
  
  iVar3 = (int)in_stack_00000008 * 100;
  local_10 = in_stack_00000008;
  fVar2 = ((float)(int)in_stack_00000008 +
          *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x1c)) * _DAT_00660d8c;
  pcVar1 = in_stack_00000004[4].create_event + iVar3 + 0x30;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = in_stack_00000004[4].create_event + iVar3 + 0x38;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x34) = fVar2;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(in_stack_00000004[4].create_event + iVar3 + 0x3c),
             (CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x30));
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)(in_stack_00000004[4].create_event + iVar3 + 0x3c),&CStack_24,
                      (CVector3f *)&stack0xffffffd0);
  if ((CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x24) != pCVar4) {
    ((CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x24))->x = pCVar4->x;
    *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x28) = pCVar4->y;
    *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x2c) = pCVar4->z;
  }
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,(CVector3f *)&stack0xffffffec,
                      (CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x24));
  if ((CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x70) == pCVar4) {
    return;
  }
  ((CVector3f *)(in_stack_00000004[4].create_event + iVar3 + 0x70))->x = pCVar4->x;
  *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x74) = pCVar4->y;
  *(float *)(in_stack_00000004[4].create_event + iVar3 + 0x78) = pCVar4->z;
  return;
}


// Assembly code:
// 00509b20: PUSH EBX
//   Label: core_manpuz.cpp_FUN_00509b20
// 00509b21: PUSH ESI
// 00509b22: PUSH EDI
// 00509b23: SUB ESP,0x28
// 00509b26: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00509b2a: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00509b2e: LEA EAX,[ESI*0x4 + 0x0]
// 00509b35: SUB EAX,ESI
// 00509b37: SHL EAX,0x3
// 00509b3a: ADD EAX,ESI
// 00509b3c: LEA EBX,[EDI + 0x5f0]
// 00509b42: SHL EAX,0x2
// 00509b45: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 00509b49: ADD EBX,EAX
// 00509b4b: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 00509b4f: FADD float ptr [EBX + 0x4]
// 00509b52: FMUL float ptr [0x00660d8c]
//   XREF to: 00660d8c (READ)
// 00509b58: LEA EAX,[EBX + 0x18]
// 00509b5b: MOV dword ptr [EBX + 0x18],0x0
// 00509b62: PUSH EAX
// 00509b63: LEA ESI,[EBX + 0x24]
// 00509b66: MOV dword ptr [EBX + 0x20],0x0
// 00509b6d: PUSH ESI
// 00509b6e: FSTP float ptr [EBX + 0x1c]
// 00509b71: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00509b76: ADD ESP,0x8
// 00509b79: MOV EAX,dword ptr [EDI + 0x150c]
// 00509b7f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00509b83: MOV EAX,ESP
// 00509b85: PUSH EAX
// 00509b86: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 00509b8a: PUSH EAX
// 00509b8b: XOR EDX,EDX
// 00509b8d: PUSH ESI
// 00509b8e: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 00509b92: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00509b96: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00509b9b: LEA EDX,[EBX + 0xc]
// 00509b9e: ADD ESP,0xc
// 00509ba1: CMP EDX,EAX
// 00509ba3: JZ 0x00509bb5
//   XREF to: 00509bb5 (CONDITIONAL_JUMP)
// 00509ba5: MOV ECX,dword ptr [EAX]
// 00509ba7: MOV dword ptr [EDX],ECX
// 00509ba9: MOV ECX,dword ptr [EAX + 0x4]
// 00509bac: MOV dword ptr [EDX + 0x4],ECX
// 00509baf: MOV ECX,dword ptr [EAX + 0x8]
// 00509bb2: MOV dword ptr [EDX + 0x8],ECX
// 00509bb5: LEA EAX,[EBX + 0xc]
//   Label: LAB_00509bb5
// 00509bb8: PUSH EAX
// 00509bb9: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x1c] (DATA)
// 00509bbd: PUSH EAX
// 00509bbe: PUSH EDI
// 00509bbf: ADD EBX,0x58
// 00509bc2: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00509bc7: ADD ESP,0xc
// 00509bca: CMP EBX,EAX
// 00509bcc: JNZ 0x00509bd5
//   XREF to: 00509bd5 (CONDITIONAL_JUMP)
// 00509bce: ADD ESP,0x28
// 00509bd1: POP EDI
// 00509bd2: POP ESI
// 00509bd3: POP EBX
// 00509bd4: RET
// 00509bd5: MOV EDX,dword ptr [EAX]
//   Label: LAB_00509bd5
// 00509bd7: MOV dword ptr [EBX],EDX
// 00509bd9: MOV EDX,dword ptr [EAX + 0x4]
// 00509bdc: MOV dword ptr [EBX + 0x4],EDX
// 00509bdf: MOV EDX,dword ptr [EAX + 0x8]
// 00509be2: MOV dword ptr [EBX + 0x8],EDX
// 00509be5: ADD ESP,0x28
// 00509be8: POP EDI
// 00509be9: POP ESI
// 00509bea: POP EBX
// 00509beb: RET
