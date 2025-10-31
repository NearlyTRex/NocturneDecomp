// Name: core_wateract.cpp_FUN_005eafa0
// Address: 005eafa0
// Address Range: [[005eafa0, 005eb03a]]
// Convention: unknown
// Signature: undefined core_wateract.cpp_FUN_005eafa0()
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0

#include "nocturne.h"

void core_wateract_cpp_FUN_005eafa0(void)

{
  CVector3f *pCVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int in_stack_00000004;
  float local_30 [2];
  float local_28;
  CVector3f local_24;
  int local_18;
  CMatrix3x3f *local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x298)) {
    local_18 = in_stack_00000004 + 0x29c;
    local_14 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
    pfVar2 = (float *)(in_stack_00000004 + 0x2a8);
    do {
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (local_14,&local_24,(CVector3f *)(iVar3 * 0x20 + local_18));
      local_30[0] = pCVar1->x + *(float *)(in_stack_00000004 + 0x20);
      local_28 = pCVar1->y + *(float *)(in_stack_00000004 + 0x24);
      local_24.x = pCVar1->z + *(float *)(in_stack_00000004 + 0x28);
      if (pfVar2 != local_30) {
        *pfVar2 = local_30[0];
        pfVar2[1] = local_28;
        pfVar2[2] = local_24.x;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 8;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x298));
  }
  return;
}


// Assembly code:
// 005eafa0: PUSH EBX
//   Label: core_wateract.cpp_FUN_005eafa0
// 005eafa1: PUSH ESI
// 005eafa2: PUSH EDI
// 005eafa3: PUSH EBP
// 005eafa4: SUB ESP,0x20
// 005eafa7: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005eafab: MOV EDX,dword ptr [EBP + 0x298]
// 005eafb1: XOR ESI,ESI
// 005eafb3: TEST EDX,EDX
// 005eafb5: JLE 0x005eb01e
//   XREF to: 005eb01e (CONDITIONAL_JUMP)
// 005eafb7: LEA EAX,[EBP + 0x29c]
// 005eafbd: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005eafc1: LEA EAX,[EBP + 0x3c]
// 005eafc4: LEA EDI,[EBP + 0x20]
// 005eafc7: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005eafcb: LEA EBX,[EBP + 0x2a8]
// 005eafd1: MOV EAX,ESI
//   Label: LAB_005eafd1
// 005eafd3: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005eafd7: SHL EAX,0x5
// 005eafda: ADD EAX,EDX
// 005eafdc: PUSH EAX
// 005eafdd: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x24] (DATA)
// 005eafe1: PUSH EAX
// 005eafe2: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 005eafe6: PUSH ECX
// 005eafe7: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005eafec: FLD float ptr [EAX]
// 005eafee: FADD float ptr [EDI]
// 005eaff0: ADD ESP,0xc
// 005eaff3: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005eaff6: FLD float ptr [EAX + 0x4]
// 005eaff9: FADD float ptr [EDI + 0x4]
// 005eaffc: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 005eb000: FLD float ptr [EAX + 0x8]
// 005eb003: FADD float ptr [EDI + 0x8]
// 005eb006: MOV EAX,ESP
// 005eb008: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 005eb00c: CMP EBX,EAX
// 005eb00e: JNZ 0x005eb026
//   XREF to: 005eb026 (CONDITIONAL_JUMP)
// 005eb010: INC ESI
//   Label: LAB_005eb010
// 005eb011: MOV ECX,dword ptr [EBP + 0x298]
// 005eb017: ADD EBX,0x20
// 005eb01a: CMP ESI,ECX
// 005eb01c: JL 0x005eafd1
//   XREF to: 005eafd1 (CONDITIONAL_JUMP)
// 005eb01e: ADD ESP,0x20
//   Label: LAB_005eb01e
// 005eb021: POP EBP
// 005eb022: POP EDI
// 005eb023: POP ESI
// 005eb024: POP EBX
// 005eb025: RET
// 005eb026: MOV EAX,dword ptr [ESP]
//   Label: LAB_005eb026
//   XREF to: Stack[-0x30] (DATA)
// 005eb029: MOV dword ptr [EBX],EAX
// 005eb02b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005eb02f: MOV dword ptr [EBX + 0x4],EAX
// 005eb032: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005eb036: MOV dword ptr [EBX + 0x8],EAX
// 005eb039: JMP 0x005eb010
//   XREF to: 005eb010 (UNCONDITIONAL_JUMP)
