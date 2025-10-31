// Name: core_curtain.cpp_FUN_00449f10
// Address: 00449f10
// Address Range: [[00449f10, 00449fb5]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_00449f10()
// Cross-references:
//   core_curtain.cpp_FUN_0044a920 (0044a920) at 0044ad89 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_00449f10(undefined4 param_1) */

void core_curtain_cpp_FUN_00449f10(void)

{
  CVector3f *pCVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x3f *local_18;
  int local_14;
  
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x204)) {
    local_14 = in_stack_00000004 + 0x208;
    local_18 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
    pfVar2 = (float *)(in_stack_00000004 + 0x228);
    do {
      local_30.x = *pfVar2 - *(float *)(in_stack_00000004 + 0x20);
      local_30.y = pfVar2[1] - *(float *)(in_stack_00000004 + 0x24);
      pCVar3 = (CVector3f *)(iVar4 * 0x74 + local_14);
      local_30.z = pfVar2[2] - *(float *)(in_stack_00000004 + 0x28);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (local_18,&local_24,&local_30);
      if (pCVar3 != pCVar1) {
        pCVar3->x = pCVar1->x;
        pCVar3->y = pCVar1->y;
        pCVar3->z = pCVar1->z;
      }
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 0x1d;
    } while (iVar4 < *(int *)(in_stack_00000008 + 0x204));
  }
  return;
}


// Assembly code:
// 00449f10: PUSH EBX
//   Label: core_curtain.cpp_FUN_00449f10
// 00449f11: PUSH ESI
// 00449f12: PUSH EDI
// 00449f13: PUSH EBP
// 00449f14: SUB ESP,0x20
// 00449f17: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00449f1b: MOV EDX,dword ptr [EAX + 0x204]
// 00449f21: XOR EDI,EDI
// 00449f23: TEST EDX,EDX
// 00449f25: JLE 0x00449f9c
//   XREF to: 00449f9c (CONDITIONAL_JUMP)
// 00449f27: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00449f2b: ADD EAX,0x208
// 00449f30: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00449f34: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00449f38: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00449f3c: ADD EBP,0x20
// 00449f3f: ADD EAX,0x3c
// 00449f42: ADD EBX,0x228
// 00449f48: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00449f4c: IMUL ESI,EDI,0x74
//   Label: LAB_00449f4c
// 00449f4f: FLD float ptr [EBX]
// 00449f51: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00449f55: FSUB float ptr [EBP]
// 00449f58: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00449f5c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00449f5f: FLD float ptr [EBX + 0x4]
// 00449f62: FSUB float ptr [EBP + 0x4]
// 00449f65: ADD ESI,EAX
// 00449f67: MOV EAX,ESP
// 00449f69: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 00449f6d: PUSH EAX
// 00449f6e: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x24] (DATA)
// 00449f72: FLD float ptr [EBX + 0x8]
// 00449f75: PUSH EAX
// 00449f76: FSUB float ptr [EBP + 0x8]
// 00449f79: PUSH EDX
// 00449f7a: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (WRITE)
// 00449f7e: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00449f83: ADD ESP,0xc
// 00449f86: CMP ESI,EAX
// 00449f88: JNZ 0x00449fa4
//   XREF to: 00449fa4 (CONDITIONAL_JUMP)
// 00449f8a: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_00449f8a
//   XREF to: Stack[0x4] (READ)
// 00449f8e: INC EDI
// 00449f8f: MOV ECX,dword ptr [EAX + 0x204]
// 00449f95: ADD EBX,0x74
// 00449f98: CMP EDI,ECX
// 00449f9a: JL 0x00449f4c
//   XREF to: 00449f4c (CONDITIONAL_JUMP)
// 00449f9c: ADD ESP,0x20
//   Label: LAB_00449f9c
// 00449f9f: POP EBP
// 00449fa0: POP EDI
// 00449fa1: POP ESI
// 00449fa2: POP EBX
// 00449fa3: RET
// 00449fa4: MOV EDX,dword ptr [EAX]
//   Label: LAB_00449fa4
// 00449fa6: MOV dword ptr [ESI],EDX
// 00449fa8: MOV EDX,dword ptr [EAX + 0x4]
// 00449fab: MOV dword ptr [ESI + 0x4],EDX
// 00449fae: MOV EDX,dword ptr [EAX + 0x8]
// 00449fb1: MOV dword ptr [ESI + 0x8],EDX
// 00449fb4: JMP 0x00449f8a
//   XREF to: 00449f8a (UNCONDITIONAL_JUMP)
