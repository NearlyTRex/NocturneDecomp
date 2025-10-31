// Name: engine_matrix.c_integerSquareRoot_FUN_0050d890
// Address: 0050d890
// Address Range: [[0050d890, 0050d960]]
// Convention: __cdecl
// Signature: int engine_matrix.c_integerSquareRoot_FUN_0050d890(int value)
// Cross-references:
//   engine_matrix.c_normalizeVector3DFixed_FUN_0050d970 (0050d970) at 0050d992 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_matrix_c_00635aba
//   TerminatedCString s_sqrt_out_of_domain_00635acd
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl engine_matrix_c_integerSquareRoot_FUN_0050d890(int value)

{
  int iVar1;
  
  if (value < 1) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 0x391;
    core_main_c_displayErrorAndQuit_FUN_00506f10("sqrt out of domain!");
  }
  iVar1 = value / 200 + 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  return (value / iVar1 + iVar1) / 2;
}


// Assembly code:
// 0050d890: PUSH EBX
//   Label: engine_matrix.c_integerSquareRoot_FUN_0050d890
// 0050d891: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050d895: CMP EBX,0x1
// 0050d898: JL 0x0050d939
//   XREF to: 0050d939 (CONDITIONAL_JUMP)
// 0050d89e: MOV ECX,0xc8
//   Label: LAB_0050d89e
// 0050d8a3: MOV EDX,EBX
// 0050d8a5: MOV EAX,EBX
// 0050d8a7: SAR EDX,0x1f
// 0050d8aa: IDIV ECX
// 0050d8ac: LEA ECX,[EAX + 0x2]
// 0050d8af: MOV EDX,EBX
// 0050d8b1: MOV EAX,EBX
// 0050d8b3: SAR EDX,0x1f
// 0050d8b6: IDIV ECX
// 0050d8b8: LEA EDX,[EAX + ECX*0x1]
// 0050d8bb: MOV EAX,EDX
// 0050d8bd: SAR EDX,0x1f
// 0050d8c0: SUB EAX,EDX
// 0050d8c2: SAR EAX,0x1
// 0050d8c4: MOV ECX,EAX
// 0050d8c6: MOV EDX,EBX
// 0050d8c8: MOV EAX,EBX
// 0050d8ca: SAR EDX,0x1f
// 0050d8cd: IDIV ECX
// 0050d8cf: LEA EDX,[EAX + ECX*0x1]
// 0050d8d2: MOV EAX,EDX
// 0050d8d4: SAR EDX,0x1f
// 0050d8d7: SUB EAX,EDX
// 0050d8d9: SAR EAX,0x1
// 0050d8db: MOV ECX,EAX
// 0050d8dd: MOV EDX,EBX
// 0050d8df: MOV EAX,EBX
// 0050d8e1: SAR EDX,0x1f
// 0050d8e4: IDIV ECX
// 0050d8e6: LEA EDX,[EAX + ECX*0x1]
// 0050d8e9: MOV EAX,EDX
// 0050d8eb: SAR EDX,0x1f
// 0050d8ee: SUB EAX,EDX
// 0050d8f0: SAR EAX,0x1
// 0050d8f2: MOV ECX,EAX
// 0050d8f4: MOV EDX,EBX
// 0050d8f6: MOV EAX,EBX
// 0050d8f8: SAR EDX,0x1f
// 0050d8fb: IDIV ECX
// 0050d8fd: LEA EDX,[EAX + ECX*0x1]
// 0050d900: MOV EAX,EDX
// 0050d902: SAR EDX,0x1f
// 0050d905: SUB EAX,EDX
// 0050d907: SAR EAX,0x1
// 0050d909: MOV ECX,EAX
// 0050d90b: MOV EDX,EBX
// 0050d90d: MOV EAX,EBX
// 0050d90f: SAR EDX,0x1f
// 0050d912: IDIV ECX
// 0050d914: LEA EDX,[EAX + ECX*0x1]
// 0050d917: MOV EAX,EDX
// 0050d919: SAR EDX,0x1f
// 0050d91c: SUB EAX,EDX
// 0050d91e: SAR EAX,0x1
// 0050d920: MOV ECX,EAX
// 0050d922: MOV EDX,EBX
// 0050d924: MOV EAX,EBX
// 0050d926: SAR EDX,0x1f
// 0050d929: IDIV ECX
// 0050d92b: LEA EDX,[EAX + ECX*0x1]
// 0050d92e: MOV EAX,EDX
// 0050d930: SAR EDX,0x1f
// 0050d933: SUB EAX,EDX
// 0050d935: SAR EAX,0x1
// 0050d937: POP EBX
// 0050d938: RET
// 0050d939: MOV EDX,0x635aba
//   Label: LAB_0050d939
//   XREF to: 00635aba (DATA)
// 0050d93e: MOV ECX,0x391
// 0050d943: PUSH 0x635acd
//   XREF to: 00635acd (DATA)
// 0050d948: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0050d94e: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0050d954: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050d959: ADD ESP,0x4
// 0050d95c: JMP 0x0050d89e
//   XREF to: 0050d89e (UNCONDITIONAL_JUMP)
