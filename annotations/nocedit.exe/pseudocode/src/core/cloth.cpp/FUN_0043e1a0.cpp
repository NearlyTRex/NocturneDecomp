// Name: core_cloth.cpp_FUN_0043e1a0
// Address: 0043e1a0
// Address Range: [[0043e1a0, 0043e297]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e1a0()
// Cross-references:
//   core_cloth.cpp_FUN_0043c3a0 (0043c3a0) at 0043c3c2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043e1a0(undefined4 param_1, undefined4 param_2) */

void core_cloth_cpp_FUN_0043e1a0(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  CVector3f *input;
  int iVar3;
  int in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_00000010;
  undefined1 auStack_54 [36];
  float local_30;
  float local_2c;
  CVector3f CStack_24;
  
  auStack_54._32_4_ = *in_stack_00000008 - *(float *)(in_stack_00000004 + 0x3fe54);
  local_30 = in_stack_00000008[1] - *(float *)(in_stack_00000004 + 0x3fe58);
  local_2c = in_stack_00000008[2] - *(float *)(in_stack_00000004 + 0x3fe5c);
  if ((float *)(in_stack_00000004 + 0x3fe54) != in_stack_00000008) {
    *(float *)(in_stack_00000004 + 0x3fe54) = *in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x3fe58) = in_stack_00000008[1];
    *(float *)(in_stack_00000004 + 0x3fe5c) = in_stack_00000008[2];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffa4,(CVector3f *)(auStack_54 + 0x20));
  iVar3 = 0;
  if (0 < (int)in_stack_00000008[0x41]) {
    pCVar2 = (CVector3f *)(in_stack_00000008 + 0x15bf);
    do {
      input = (CVector3f *)(in_stack_00000008 + iVar3 * 0x47 + 0x15b6);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         ((CMatrix3x3f *)&stack0xffffffa8,&CStack_24,input);
      if (input != pCVar1) {
        input->x = pCVar1->x;
        input->y = pCVar1->y;
        input->z = pCVar1->z;
      }
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         ((CMatrix3x3f *)auStack_54,(CVector3f *)&stack0xffffffec,
                          (CVector3f *)(in_stack_00000008 + iVar3 * 0x47 + 0x15b6));
      if (pCVar2 != pCVar1) {
        pCVar2->x = pCVar1->x;
        pCVar2->y = pCVar1->y;
        pCVar2->z = pCVar1->z;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CVector3f *)&pCVar2[0x17].z;
    } while (iVar3 < *(int *)(in_stack_00000010 + 0x104));
  }
  return;
}


// Assembly code:
// 0043e1a0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043e1a0
// 0043e1a1: PUSH ESI
// 0043e1a2: PUSH EDI
// 0043e1a3: PUSH EBP
// 0043e1a4: SUB ESP,0x4c
// 0043e1a7: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x8] (READ)
// 0043e1ab: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0043e1af: FLD float ptr [EBX]
// 0043e1b1: FSUB float ptr [EAX + 0x3fe54]
// 0043e1b7: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (WRITE)
// 0043e1bb: FLD float ptr [EBX + 0x4]
// 0043e1be: FSUB float ptr [EAX + 0x3fe58]
// 0043e1c4: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (WRITE)
// 0043e1c8: FLD float ptr [EBX + 0x8]
// 0043e1cb: FSUB float ptr [EAX + 0x3fe5c]
// 0043e1d1: ADD EAX,0x3fe54
// 0043e1d6: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (WRITE)
// 0043e1da: CMP EAX,EBX
// 0043e1dc: JZ 0x0043e1ee
//   XREF to: 0043e1ee (CONDITIONAL_JUMP)
// 0043e1de: MOV EDX,dword ptr [EBX]
// 0043e1e0: MOV dword ptr [EAX],EDX
// 0043e1e2: MOV EDX,dword ptr [EBX + 0x4]
// 0043e1e5: MOV dword ptr [EAX + 0x4],EDX
// 0043e1e8: MOV EDX,dword ptr [EBX + 0x8]
// 0043e1eb: MOV dword ptr [EAX + 0x8],EDX
// 0043e1ee: LEA EAX,[ESP + 0x28]
//   Label: LAB_0043e1ee
//   XREF to: Stack[-0x34] (DATA)
// 0043e1f2: PUSH EAX
// 0043e1f3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 0043e1f7: PUSH EAX
// 0043e1f8: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0043e1fd: ADD ESP,0x8
// 0043e200: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0043e204: MOV EDX,dword ptr [EAX + 0x104]
// 0043e20a: XOR EDI,EDI
// 0043e20c: TEST EDX,EDX
// 0043e20e: JLE 0x0043e290
//   XREF to: 0043e290 (CONDITIONAL_JUMP)
// 0043e214: LEA EBP,[EAX + 0x56d8]
// 0043e21a: LEA EBX,[EBP + 0x24]
// 0043e21d: IMUL ESI,EDI,0x11c
//   Label: LAB_0043e21d
// 0043e223: ADD ESI,EBP
// 0043e225: PUSH ESI
// 0043e226: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x28] (DATA)
// 0043e22a: PUSH EAX
// 0043e22b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x5c] (DATA)
// 0043e22f: PUSH EAX
// 0043e230: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0043e235: ADD ESP,0xc
// 0043e238: CMP ESI,EAX
// 0043e23a: JZ 0x0043e24c
//   XREF to: 0043e24c (CONDITIONAL_JUMP)
// 0043e23c: MOV EDX,dword ptr [EAX]
// 0043e23e: MOV dword ptr [ESI],EDX
// 0043e240: MOV EDX,dword ptr [EAX + 0x4]
// 0043e243: MOV dword ptr [ESI + 0x4],EDX
// 0043e246: MOV EDX,dword ptr [EAX + 0x8]
// 0043e249: MOV dword ptr [ESI + 0x8],EDX
// 0043e24c: IMUL EAX,EDI,0x11c
//   Label: LAB_0043e24c
// 0043e252: ADD EAX,EBP
// 0043e254: PUSH EAX
// 0043e255: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x1c] (DATA)
// 0043e259: PUSH EAX
// 0043e25a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x5c] (DATA)
// 0043e25e: PUSH EAX
// 0043e25f: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0043e264: ADD ESP,0xc
// 0043e267: CMP EBX,EAX
// 0043e269: JZ 0x0043e27b
//   XREF to: 0043e27b (CONDITIONAL_JUMP)
// 0043e26b: MOV EDX,dword ptr [EAX]
// 0043e26d: MOV dword ptr [EBX],EDX
// 0043e26f: MOV EDX,dword ptr [EAX + 0x4]
// 0043e272: MOV dword ptr [EBX + 0x4],EDX
// 0043e275: MOV EDX,dword ptr [EAX + 0x8]
// 0043e278: MOV dword ptr [EBX + 0x8],EDX
// 0043e27b: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_0043e27b
//   XREF to: Stack[0x4] (READ)
// 0043e27f: INC EDI
// 0043e280: MOV ECX,dword ptr [EAX + 0x104]
// 0043e286: ADD EBX,0x11c
// 0043e28c: CMP EDI,ECX
// 0043e28e: JL 0x0043e21d
//   XREF to: 0043e21d (CONDITIONAL_JUMP)
// 0043e290: ADD ESP,0x4c
//   Label: LAB_0043e290
// 0043e293: POP EBP
// 0043e294: POP EDI
// 0043e295: POP ESI
// 0043e296: POP EBX
// 0043e297: RET
