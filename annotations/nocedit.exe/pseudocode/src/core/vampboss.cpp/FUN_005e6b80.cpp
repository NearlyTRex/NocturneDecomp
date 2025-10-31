// Name: core_vampboss.cpp_FUN_005e6b80
// Address: 005e6b80
// Address Range: [[005e6b80, 005e6c95]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_FUN_005e6b80()
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_vampboss.cpp_FUN_005e6b80(undefined4 param_1, undefined4
   param_2) */

void core_vampboss_cpp_FUN_005e6b80(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  byte bVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_ffffff5c;
  undefined4 auStack_a0 [10];
  undefined1 local_78 [60];
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24ac);
  local_30.x = 0.0;
  local_30.y = 0.128;
  local_30.z = 4.14;
  if (&local_3c != &local_30) {
    local_3c.z = 4.14;
    local_3c.x = 0.0;
    local_3c.y = 0.128;
  }
  local_18.z = 0.0;
  local_18.x = 0.0;
  local_18.y = 3.14;
  if (&local_24 != &local_18) {
    local_24.y = 3.14;
    local_24.z = 0.0;
    local_24.x = 0.0;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(local_78 + 4),(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000008 + 0xfd8)
             ,in_stack_ffffff5c);
  puVar2 = auStack_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005e6b80: PUSH EBX
//   Label: core_vampboss.cpp_FUN_005e6b80
// 005e6b81: PUSH EDI
// 005e6b82: PUSH EBP
// 005e6b83: SUB ESP,0x9c
// 005e6b89: MOV EBX,ESI
// 005e6b8b: MOV ESI,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x8] (READ)
// 005e6b92: MOV EAX,ESI
// 005e6b94: SHL EAX,0x4
// 005e6b97: ADD EAX,ESI
// 005e6b99: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 005e6ba0: SHL EAX,0x2
// 005e6ba3: MOV EBP,0x40847ae1
// 005e6ba8: ADD EAX,EDX
// 005e6baa: XOR ECX,ECX
// 005e6bac: MOV ESI,0x3e03126f
// 005e6bb1: MOV EDI,dword ptr [EAX + 0x24ac]
// 005e6bb7: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x30] (DATA)
// 005e6bbb: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005e6bbf: MOV dword ptr [ESP + 0x7c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 005e6bc3: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x3c] (DATA)
// 005e6bc7: MOV dword ptr [ESP + 0x80],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 005e6bce: CMP ESI,EAX
// 005e6bd0: JNZ 0x005e6c80
//   XREF to: 005e6c80 (CONDITIONAL_JUMP)
// 005e6bd6: XOR ESI,ESI
//   Label: LAB_005e6bd6
// 005e6bd8: MOV EAX,0x4048f5c3
// 005e6bdd: MOV dword ptr [ESP + 0x98],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005e6be4: MOV dword ptr [ESP + 0x90],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005e6beb: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005e6bf2: LEA ESI,[ESP + 0x90]
//   XREF to: Stack[-0x18] (DATA)
// 005e6bf9: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x24] (DATA)
// 005e6c00: CMP EAX,ESI
// 005e6c02: JZ 0x005e6c20
//   XREF to: 005e6c20 (CONDITIONAL_JUMP)
// 005e6c04: MOV ECX,0x4048f5c3
// 005e6c09: XOR EDX,EDX
// 005e6c0b: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005e6c12: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005e6c19: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005e6c20: LEA EAX,[ESP + 0x84]
//   Label: LAB_005e6c20
//   XREF to: Stack[-0x24] (DATA)
// 005e6c27: PUSH EAX
// 005e6c28: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x3c] (DATA)
// 005e6c2c: PUSH EAX
// 005e6c2d: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x78] (DATA)
// 005e6c31: PUSH EAX
// 005e6c32: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005e6c37: LEA EAX,[EDI*0x4 + 0x0]
// 005e6c3e: ADD ESP,0xc
// 005e6c41: SUB EAX,EDI
// 005e6c43: MOV ESI,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 005e6c4a: SHL EAX,0x4
// 005e6c4d: ADD ESI,0xfd8
// 005e6c53: ADD EAX,ESI
// 005e6c55: PUSH EAX
// 005e6c56: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x78] (DATA)
// 005e6c5a: PUSH EAX
// 005e6c5b: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xa8] (DATA)
// 005e6c5f: MOV EDI,EBX
// 005e6c61: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005e6c66: MOV ECX,0xc
// 005e6c6b: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0xa8] (DATA)
// 005e6c6f: ADD ESP,0x8
// 005e6c72: MOVSD.REP ES:EDI,ESI
// 005e6c74: MOV EAX,EBX
// 005e6c76: ADD ESP,0x9c
// 005e6c7c: POP EBP
// 005e6c7d: POP EDI
// 005e6c7e: POP EBX
// 005e6c7f: RET
// 005e6c80: MOV EDX,0x3e03126f
//   Label: LAB_005e6c80
// 005e6c85: MOV dword ptr [ESP + 0x74],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 005e6c89: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 005e6c8d: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 005e6c91: JMP 0x005e6bd6
//   XREF to: 005e6bd6 (UNCONDITIONAL_JUMP)
