// Name: core_morph.cpp_CMorphModel_animate_FUN_0052a920
// Address: 0052a920
// Address Range: [[0052a920, 0052a9f4]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_animate_FUN_0052a920(CMorphModel * this_ptr)
// Cross-references:
//   core_morph.cpp_CMorphModel_FUN_0052a710 (0052a710) at 0052a801 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_FUN_0052aa00 (0052aa00) at 0052aa1d [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580 (0052a580) at 0052a69b [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052aa30 (0052aa30) at 0052aa71 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052aa80 (0052aa80) at 0052aaa8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_morph_cpp_0063a229
//   TerminatedCString s_CMorphModel_animate_inva_0063a23b
//   TerminatedCString s_core_morph_cpp_0063a265
//   TerminatedCString s_CMorphModel_animate_inva_0063a277
//   float FLOAT_00661b48 = 0.00390625
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animate_FUN_0052a920(CMorphModel *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  int *in_stack_00000010;
  int in_stack_00000014;
  
  if ((in_stack_00000008 < 0) || (*(int *)this_ptr->field0_0x0 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x112;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::animate - invalid part index");
  }
  iVar1 = *(int *)(in_stack_00000008 * 0x11 + 0xc);
  iVar3 = (int)in_stack_00000010 + iVar1;
  if (iVar1 + *(int *)(in_stack_00000008 * 0x11 + 4) < iVar3 + in_stack_00000014) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x119;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::animate - invalid vertex range");
  }
  iVar1 = 0;
  if (0 < in_stack_00000014) {
    iVar3 = iVar3 * 0x10;
    do {
      iVar2 = *(int *)(in_stack_00000008 + 0x58) + iVar3;
      iVar1 = iVar1 + 1;
      *(float *)(iVar2 + 4) = (float)*in_stack_00000010 * FLOAT_00661b48;
      *(float *)(iVar2 + 8) = (float)in_stack_00000010[1] * FLOAT_00661b48;
      *(float *)(iVar2 + 0xc) = (float)in_stack_00000010[2] * FLOAT_00661b48;
      iVar3 = iVar3 + 0x10;
      in_stack_00000010 = in_stack_00000010 + 3;
    } while (iVar1 < in_stack_00000014);
  }
  return;
}


// Assembly code:
// 0052a920: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_animate_FUN_0052a920
// 0052a921: PUSH ESI
// 0052a922: PUSH EDI
// 0052a923: PUSH EBP
// 0052a924: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052a928: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052a92c: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0052a930: TEST EBX,EBX
// 0052a932: JL 0x0052a93c
//   XREF to: 0052a93c (CONDITIONAL_JUMP)
// 0052a934: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052a938: CMP EBX,dword ptr [EDX]
// 0052a93a: JL 0x0052a95e
//   XREF to: 0052a95e (CONDITIONAL_JUMP)
// 0052a93c: MOV ESI,0x63a229
//   Label: LAB_0052a93c
//   XREF to: 0063a229 (DATA)
// 0052a941: MOV EAX,0x112
// 0052a946: PUSH 0x63a23b
//   XREF to: 0063a23b (DATA)
// 0052a94b: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0052a951: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052a956: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052a95b: ADD ESP,0x4
// 0052a95e: MOV ECX,EBX
//   Label: LAB_0052a95e
// 0052a960: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052a964: SHL ECX,0x4
// 0052a967: ADD ECX,EDX
// 0052a969: MOV EBX,dword ptr [ECX + 0xc]
// 0052a96c: MOV ESI,dword ptr [ECX + 0x4]
// 0052a96f: ADD EDI,EBX
// 0052a971: LEA EDX,[EBX + ESI*0x1]
// 0052a974: LEA ECX,[EDI + EBP*0x1]
// 0052a977: CMP ECX,EDX
// 0052a979: JLE 0x0052a99d
//   XREF to: 0052a99d (CONDITIONAL_JUMP)
// 0052a97b: MOV EAX,0x63a265
//   XREF to: 0063a265 (PARAM)
// 0052a980: MOV EDX,0x119
// 0052a985: PUSH 0x63a277
//   XREF to: 0063a277 (DATA)
// 0052a98a: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0052a98f: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0052a995: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052a99a: ADD ESP,0x4
// 0052a99d: XOR ECX,ECX
//   Label: LAB_0052a99d
// 0052a99f: TEST EBP,EBP
// 0052a9a1: JLE 0x0052a9f0
//   XREF to: 0052a9f0 (CONDITIONAL_JUMP)
// 0052a9a3: MOV ESI,EDI
// 0052a9a5: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052a9a9: SHL ESI,0x4
// 0052a9ac: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_0052a9ac
//   XREF to: Stack[0x4] (READ)
// 0052a9b0: MOV EAX,EDX
// 0052a9b2: MOV EBX,dword ptr [EBX + 0x58]
// 0052a9b5: INC EDI
// 0052a9b6: ADD EBX,ESI
// 0052a9b8: INC ECX
// 0052a9b9: ADD EBX,0x4
// 0052a9bc: ADD EDX,0xc
// 0052a9bf: FILD dword ptr [EAX]
// 0052a9c1: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052a9c7: FSTP float ptr [EBX]
// 0052a9c9: FILD dword ptr [EAX + 0x4]
// 0052a9cc: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052a9d2: FSTP float ptr [EBX + 0x4]
// 0052a9d5: FILD dword ptr [EAX + 0x8]
// 0052a9d8: FMUL float ptr [0x00661b48]
//   XREF to: 00661b48 (READ)
// 0052a9de: FSTP float ptr [EBX + 0x8]
// 0052a9e1: ADD ESI,0x10
// 0052a9e4: CMP ECX,EBP
// 0052a9e6: JL 0x0052a9ac
//   XREF to: 0052a9ac (CONDITIONAL_JUMP)
// 0052a9e8: LEA EAX,[EAX]
// 0052a9ee: MOV EDX,EDX
// 0052a9f0: POP EBP
//   Label: LAB_0052a9f0
// 0052a9f1: POP EDI
// 0052a9f2: POP ESI
// 0052a9f3: POP EBX
// 0052a9f4: RET
