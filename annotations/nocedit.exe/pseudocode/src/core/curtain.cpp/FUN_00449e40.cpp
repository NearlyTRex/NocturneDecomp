// Name: core_curtain.cpp_FUN_00449e40
// Address: 00449e40
// Address Range: [[00449e40, 00449f08]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_00449e40()
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0

#include "nocturne.h"

void core_curtain_cpp_FUN_00449e40(void)

{
  CVector3f *pCVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CVector3f *input;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_30;
  float local_20;
  float local_1c;
  float local_18;
  CMatrix3x3f *local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x204)) {
    local_18 = (float)(in_stack_00000004 + 0x208);
    local_14 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
    pfVar2 = (float *)(in_stack_00000004 + 0x228);
    do {
      input = (CVector3f *)(iVar3 * 0x74 + (int)local_18);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(local_14,&local_30,input);
      local_20 = pCVar1->x + *(float *)(in_stack_00000004 + 0x20);
      local_1c = pCVar1->y + *(float *)(in_stack_00000004 + 0x24);
      local_18 = pCVar1->z + *(float *)(in_stack_00000004 + 0x28);
      if (pfVar2 != &local_20) {
        *pfVar2 = local_20;
        pfVar2[1] = local_1c;
        pfVar2[2] = local_18;
      }
      if (&input[4].z != &input[2].z) {
        input[4].z = input[2].z;
        input[5].x = input[3].x;
        input[5].y = input[3].y;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 0x1d;
    } while (iVar3 < *(int *)(in_stack_00000008 + 0x204));
  }
  return;
}


// Assembly code:
// 00449e40: PUSH EBX
//   Label: core_curtain.cpp_FUN_00449e40
// 00449e41: PUSH ESI
// 00449e42: PUSH EDI
// 00449e43: PUSH EBP
// 00449e44: SUB ESP,0x20
// 00449e47: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00449e4b: MOV EDX,dword ptr [EAX + 0x204]
// 00449e51: XOR ESI,ESI
// 00449e53: TEST EDX,EDX
// 00449e55: JLE 0x00449eeb
//   XREF to: 00449eeb (CONDITIONAL_JUMP)
// 00449e5b: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00449e5f: ADD EAX,0x208
// 00449e64: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00449e68: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00449e6c: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00449e70: ADD EBP,0x20
// 00449e73: ADD EAX,0x3c
// 00449e76: ADD EBX,0x228
// 00449e7c: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00449e80: IMUL EDI,ESI,0x74
//   Label: LAB_00449e80
// 00449e83: ADD EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00449e87: PUSH EDI
// 00449e88: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00449e8c: PUSH EAX
// 00449e8d: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00449e91: PUSH EDX
// 00449e92: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00449e97: FLD float ptr [EAX]
// 00449e99: FADD float ptr [EBP]
// 00449e9c: ADD ESP,0xc
// 00449e9f: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 00449ea3: FLD float ptr [EAX + 0x4]
// 00449ea6: FADD float ptr [EBP + 0x4]
// 00449ea9: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00449ead: FLD float ptr [EAX + 0x8]
// 00449eb0: FADD float ptr [EBP + 0x8]
// 00449eb3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 00449eb7: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 00449ebb: CMP EBX,EAX
// 00449ebd: JNZ 0x00449ef3
//   XREF to: 00449ef3 (CONDITIONAL_JUMP)
// 00449ebf: LEA EAX,[EDI + 0x38]
//   Label: LAB_00449ebf
// 00449ec2: LEA EDX,[EDI + 0x20]
// 00449ec5: CMP EAX,EDX
// 00449ec7: JZ 0x00449ed9
//   XREF to: 00449ed9 (CONDITIONAL_JUMP)
// 00449ec9: MOV ECX,dword ptr [EDX]
// 00449ecb: MOV dword ptr [EAX],ECX
// 00449ecd: MOV ECX,dword ptr [EDX + 0x4]
// 00449ed0: MOV dword ptr [EAX + 0x4],ECX
// 00449ed3: MOV ECX,dword ptr [EDX + 0x8]
// 00449ed6: MOV dword ptr [EAX + 0x8],ECX
// 00449ed9: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_00449ed9
//   XREF to: Stack[0x4] (READ)
// 00449edd: INC ESI
// 00449ede: MOV ECX,dword ptr [EAX + 0x204]
// 00449ee4: ADD EBX,0x74
// 00449ee7: CMP ESI,ECX
// 00449ee9: JL 0x00449e80
//   XREF to: 00449e80 (CONDITIONAL_JUMP)
// 00449eeb: ADD ESP,0x20
//   Label: LAB_00449eeb
// 00449eee: POP EBP
// 00449eef: POP EDI
// 00449ef0: POP ESI
// 00449ef1: POP EBX
// 00449ef2: RET
// 00449ef3: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00449ef3
//   XREF to: Stack[-0x24] (DATA)
// 00449ef7: MOV dword ptr [EBX],EAX
// 00449ef9: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00449efd: MOV dword ptr [EBX + 0x4],EAX
// 00449f00: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00449f04: MOV dword ptr [EBX + 0x8],EAX
// 00449f07: JMP 0x00449ebf
//   XREF to: 00449ebf (UNCONDITIONAL_JUMP)
