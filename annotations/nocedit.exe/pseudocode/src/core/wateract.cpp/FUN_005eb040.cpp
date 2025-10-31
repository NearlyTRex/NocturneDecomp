// Name: core_wateract.cpp_FUN_005eb040
// Address: 005eb040
// Address Range: [[005eb040, 005eb0eb]]
// Convention: unknown
// Signature: undefined core_wateract.cpp_FUN_005eb040()
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

void core_wateract_cpp_FUN_005eb040(void)

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
  if (0 < *(int *)(in_stack_00000004 + 0x298)) {
    local_14 = in_stack_00000004 + 0x29c;
    local_18 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
    pfVar2 = (float *)(in_stack_00000004 + 0x2a8);
    do {
      local_30.x = *pfVar2 - *(float *)(in_stack_00000004 + 0x20);
      pCVar3 = (CVector3f *)(iVar4 * 0x20 + local_14);
      local_30.y = pfVar2[1] - *(float *)(in_stack_00000004 + 0x24);
      local_30.z = pfVar2[2] - *(float *)(in_stack_00000004 + 0x28);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (local_18,&local_24,&local_30);
      if (pCVar3 != pCVar1) {
        pCVar3->x = pCVar1->x;
        pCVar3->y = pCVar1->y;
        pCVar3->z = pCVar1->z;
      }
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 8;
    } while (iVar4 < *(int *)(in_stack_00000008 + 0x298));
  }
  return;
}


// Assembly code:
// 005eb040: PUSH EBX
//   Label: core_wateract.cpp_FUN_005eb040
// 005eb041: PUSH ESI
// 005eb042: PUSH EDI
// 005eb043: PUSH EBP
// 005eb044: SUB ESP,0x20
// 005eb047: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005eb04b: MOV EDX,dword ptr [EAX + 0x298]
// 005eb051: XOR EDI,EDI
// 005eb053: TEST EDX,EDX
// 005eb055: JLE 0x005eb0d2
//   XREF to: 005eb0d2 (CONDITIONAL_JUMP)
// 005eb05b: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005eb05f: ADD EAX,0x29c
// 005eb064: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005eb068: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005eb06c: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005eb070: ADD EBP,0x20
// 005eb073: ADD EAX,0x3c
// 005eb076: ADD EBX,0x2a8
// 005eb07c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005eb080: FLD float ptr [EBX]
//   Label: LAB_005eb080
// 005eb082: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005eb086: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005eb08a: MOV ESI,EDI
// 005eb08c: FSUB float ptr [EBP]
// 005eb08f: SHL ESI,0x5
// 005eb092: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005eb095: FLD float ptr [EBX + 0x4]
// 005eb098: ADD ESI,EAX
// 005eb09a: FSUB float ptr [EBP + 0x4]
// 005eb09d: MOV EAX,ESP
// 005eb09f: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 005eb0a3: PUSH EAX
// 005eb0a4: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x24] (DATA)
// 005eb0a8: FLD float ptr [EBX + 0x8]
// 005eb0ab: PUSH EAX
// 005eb0ac: FSUB float ptr [EBP + 0x8]
// 005eb0af: PUSH EDX
// 005eb0b0: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (WRITE)
// 005eb0b4: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 005eb0b9: ADD ESP,0xc
// 005eb0bc: CMP ESI,EAX
// 005eb0be: JNZ 0x005eb0da
//   XREF to: 005eb0da (CONDITIONAL_JUMP)
// 005eb0c0: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_005eb0c0
//   XREF to: Stack[0x4] (READ)
// 005eb0c4: INC EDI
// 005eb0c5: MOV ECX,dword ptr [EAX + 0x298]
// 005eb0cb: ADD EBX,0x20
// 005eb0ce: CMP EDI,ECX
// 005eb0d0: JL 0x005eb080
//   XREF to: 005eb080 (CONDITIONAL_JUMP)
// 005eb0d2: ADD ESP,0x20
//   Label: LAB_005eb0d2
// 005eb0d5: POP EBP
// 005eb0d6: POP EDI
// 005eb0d7: POP ESI
// 005eb0d8: POP EBX
// 005eb0d9: RET
// 005eb0da: MOV EDX,dword ptr [EAX]
//   Label: LAB_005eb0da
// 005eb0dc: MOV dword ptr [ESI],EDX
// 005eb0de: MOV EDX,dword ptr [EAX + 0x4]
// 005eb0e1: MOV dword ptr [ESI + 0x4],EDX
// 005eb0e4: MOV EDX,dword ptr [EAX + 0x8]
// 005eb0e7: MOV dword ptr [ESI + 0x8],EDX
// 005eb0ea: JMP 0x005eb0c0
//   XREF to: 005eb0c0 (UNCONDITIONAL_JUMP)
