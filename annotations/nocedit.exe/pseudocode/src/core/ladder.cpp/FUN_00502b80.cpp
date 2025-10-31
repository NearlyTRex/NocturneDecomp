// Name: core_ladder.cpp_FUN_00502b80
// Address: 00502b80
// Address Range: [[00502b80, 00502c89]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502b80()
// Cross-references:
//   core_ladder.cpp_CLadder_load_FUN_005029c0 (005029c0) at 00502a0b [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502b80(undefined4 param_1) */

void core_ladder_cpp_FUN_00502b80(void)

{
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff24;
  undefined1 auStack_b0 [52];
  undefined4 uStack_7c;
  CVector3f local_78;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 auStack_48 [12];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar5 = 0;
  if (*(int *)(in_stack_00000004 + 0x2e0) != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xffffff1c,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)auStack_b0,(CVector3f *)(*(int *)(in_stack_00000004 + 0x2e0) + 0x20),
               (CVector3f *)(*(int *)(in_stack_00000004 + 0x2e0) + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)&stack0xffffff24,(CMatrix3x4f *)(auStack_b0 + 4),in_stack_ffffff24);
    puVar3 = auStack_48;
    puVar4 = &uStack_7c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    local_18 = uStack_6c;
    uStack_14 = uStack_5c;
    uStack_10 = uStack_4c;
    if ((undefined4 *)(in_stack_00000004 + 0x2e4) != &local_18) {
      *(undefined4 *)(in_stack_00000004 + 0x2e4) = uStack_6c;
      *(undefined4 *)(in_stack_00000004 + 0x2e8) = uStack_5c;
      *(undefined4 *)(in_stack_00000004 + 0x2ec) = uStack_4c;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       (&local_78,(CMatrix3x3f *)&stack0xfffffff4);
    if ((CVector3f *)(in_stack_00000004 + 0x2f0) != pCVar1) {
      ((CVector3f *)(in_stack_00000004 + 0x2f0))->x = pCVar1->x;
      *(float *)(in_stack_00000004 + 0x2f4) = pCVar1->y;
      *(float *)(in_stack_00000004 + 0x2f8) = pCVar1->z;
      return;
    }
  }
  return;
}


// Assembly code:
// 00502b80: PUSH EBX
//   Label: core_ladder.cpp_FUN_00502b80
// 00502b81: PUSH ESI
// 00502b82: PUSH EDI
// 00502b83: SUB ESP,0xd8
// 00502b89: MOV EBX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x4] (READ)
// 00502b90: CMP dword ptr [EBX + 0x2e0],0x0
// 00502b97: JNZ 0x00502ba3
//   XREF to: 00502ba3 (CONDITIONAL_JUMP)
// 00502b99: ADD ESP,0xd8
//   Label: LAB_00502b99
// 00502b9f: POP EDI
// 00502ba0: POP ESI
// 00502ba1: POP EBX
// 00502ba2: RET
// 00502ba3: LEA EAX,[EBX + 0x30]
//   Label: LAB_00502ba3
// 00502ba6: PUSH EAX
// 00502ba7: LEA EAX,[EBX + 0x20]
// 00502baa: PUSH EAX
// 00502bab: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xe4] (DATA)
// 00502baf: PUSH EAX
// 00502bb0: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 00502bb5: MOV EAX,dword ptr [EBX + 0x2e0]
// 00502bbb: ADD ESP,0xc
// 00502bbe: LEA EDX,[EAX + 0x30]
// 00502bc1: PUSH EDX
// 00502bc2: ADD EAX,0x20
// 00502bc5: PUSH EAX
// 00502bc6: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xb4] (DATA)
// 00502bca: PUSH EAX
// 00502bcb: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 00502bd0: ADD ESP,0xc
// 00502bd3: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0xb4] (DATA)
// 00502bd7: PUSH EAX
// 00502bd8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xe4] (DATA)
// 00502bdc: PUSH EAX
// 00502bdd: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0x54] (DATA)
// 00502be4: LEA EDI,[ESP + 0x68]
//   XREF to: Stack[-0x84] (DATA)
// 00502be8: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 00502bed: MOV ECX,0xc
// 00502bf2: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0x54] (DATA)
// 00502bf9: ADD ESP,0x8
// 00502bfc: MOVSD.REP ES:EDI,ESI
// 00502bfe: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x78] (READ)
// 00502c02: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00502c09: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x68] (READ)
// 00502c0d: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00502c14: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x58] (READ)
// 00502c1b: LEA EDX,[EBX + 0x2e4]
// 00502c21: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00502c28: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x24] (DATA)
// 00502c2f: CMP EDX,EAX
// 00502c31: JZ 0x00502c4d
//   XREF to: 00502c4d (CONDITIONAL_JUMP)
// 00502c33: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x78] (READ)
// 00502c37: MOV dword ptr [EDX],EAX
// 00502c39: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x20] (READ)
// 00502c40: MOV dword ptr [EDX + 0x4],EAX
// 00502c43: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x1c] (READ)
// 00502c4a: MOV dword ptr [EDX + 0x8],EAX
// 00502c4d: LEA EAX,[ESP + 0xcc]
//   Label: LAB_00502c4d
//   XREF to: Stack[-0x18] (DATA)
// 00502c54: PUSH EAX
// 00502c55: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x84] (DATA)
// 00502c59: PUSH EAX
// 00502c5a: ADD EBX,0x2f0
// 00502c60: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 00502c65: ADD ESP,0x8
// 00502c68: CMP EBX,EAX
// 00502c6a: JZ 0x00502b99
//   XREF to: 00502b99 (CONDITIONAL_JUMP)
// 00502c70: MOV EDX,dword ptr [EAX]
// 00502c72: MOV dword ptr [EBX],EDX
// 00502c74: MOV EDX,dword ptr [EAX + 0x4]
// 00502c77: MOV dword ptr [EBX + 0x4],EDX
// 00502c7a: MOV EDX,dword ptr [EAX + 0x8]
// 00502c7d: MOV dword ptr [EBX + 0x8],EDX
// 00502c80: ADD ESP,0xd8
// 00502c86: POP EDI
// 00502c87: POP ESI
// 00502c88: POP EBX
// 00502c89: RET
