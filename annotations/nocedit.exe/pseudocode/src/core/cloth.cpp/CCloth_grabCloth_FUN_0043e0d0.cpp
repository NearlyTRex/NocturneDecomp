// Name: core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
// Address: 0043e0d0
// Address Range: [[0043e0d0, 0043e164]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c6220 (005c6220) at 005c6442 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_00618ad4
//   TerminatedCString s_CCloth_grabCloth_Can_t_f_00618ae6
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth *this_ptr)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr->padding_0x0 + 0x3ce8c)) {
    pcVar3 = this_ptr->padding_0x0 + 0x3ce90;
    do {
      iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,pcVar3);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xac;
    } while (iVar2 < *(int *)(this_ptr->padding_0x0 + 0x3ce8c));
  }
  if (iVar2 == *(int *)(this_ptr->padding_0x0 + 0x3ce8c)) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0xaa7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::grabCloth - Can't find bone %s");
  }
  pcVar3 = this_ptr->padding_0x0 + in_stack_0000000c * 0x11c + 0x574c;
  pcVar3[0] = '\x01';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  *(int *)(this_ptr->padding_0x0 + in_stack_0000000c * 0x11c + 0x57b0) = iVar2;
  return;
}


// Assembly code:
// 0043e0d0: PUSH EBX
//   Label: core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
// 0043e0d1: PUSH ESI
// 0043e0d2: PUSH EDI
// 0043e0d3: PUSH EBP
// 0043e0d4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043e0d8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043e0dc: MOV EDX,dword ptr [EDI + 0x3ce8c]
// 0043e0e2: XOR EBX,EBX
// 0043e0e4: TEST EDX,EDX
// 0043e0e6: JLE 0x0043e0fc
//   XREF to: 0043e0fc (CONDITIONAL_JUMP)
// 0043e0e8: LEA ESI,[EDI + 0x3ce90]
// 0043e0ee: PUSH ESI
//   Label: LAB_0043e0ee
// 0043e0ef: PUSH EBP
// 0043e0f0: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0043e0f5: ADD ESP,0x8
// 0043e0f8: TEST EAX,EAX
// 0043e0fa: JNZ 0x0043e12d
//   XREF to: 0043e12d (CONDITIONAL_JUMP)
// 0043e0fc: CMP EBX,dword ptr [EDI + 0x3ce8c]
//   Label: LAB_0043e0fc
// 0043e102: JZ 0x0043e140
//   XREF to: 0043e140 (CONDITIONAL_JUMP)
// 0043e104: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_0043e104
//   XREF to: Stack[0xc] (READ)
// 0043e108: LEA EAX,[ESI*0x8 + 0x0]
// 0043e10f: ADD EAX,ESI
// 0043e111: SHL EAX,0x3
// 0043e114: SUB EAX,ESI
// 0043e116: MOV dword ptr [EDI + EAX*0x4 + 0x574c],0x1
// 0043e121: MOV dword ptr [EDI + EAX*0x4 + 0x57b0],EBX
// 0043e128: POP EBP
// 0043e129: POP EDI
// 0043e12a: POP ESI
// 0043e12b: POP EBX
// 0043e12c: RET
// 0043e12d: INC EBX
//   Label: LAB_0043e12d
// 0043e12e: MOV ECX,dword ptr [EDI + 0x3ce8c]
// 0043e134: ADD ESI,0xac
// 0043e13a: CMP EBX,ECX
// 0043e13c: JL 0x0043e0ee
//   XREF to: 0043e0ee (CONDITIONAL_JUMP)
// 0043e13e: JMP 0x0043e0fc
//   XREF to: 0043e0fc (UNCONDITIONAL_JUMP)
// 0043e140: PUSH EBP
//   Label: LAB_0043e140
// 0043e141: MOV EAX,0x618ad4
//   XREF to: 00618ad4 (PARAM)
// 0043e146: MOV EDX,0xaa7
// 0043e14b: PUSH 0x618ae6
//   XREF to: 00618ae6 (DATA)
// 0043e150: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0043e155: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0043e15b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043e160: ADD ESP,0x8
// 0043e163: JMP 0x0043e104
//   XREF to: 0043e104 (UNCONDITIONAL_JUMP)
