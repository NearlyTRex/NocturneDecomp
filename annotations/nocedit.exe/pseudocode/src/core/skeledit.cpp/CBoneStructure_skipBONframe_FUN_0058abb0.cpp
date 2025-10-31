// Name: core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0
// Address: 0058abb0
// Address Range: [[0058abb0, 0058ac24]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0()
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005953fa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeledit_cpp_0064a490
//   TerminatedCString s_CBoneStructure_skipBONfr_0064a4a5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_CBoneStructure_skipBONframe(int* param_1, FILE* param_2,
   undefined4 param_3) */

void core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_stack_0000000c;
  FILE *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  iVar3 = 0;
  do {
    if (*in_stack_0000000c * 4 <= iVar3) {
      if ((in_stack_00000010->_flag & 0x20) == 0) {
        return;
      }
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x34a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::skipBONframe - error reading file!");
      return;
    }
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    iVar3 = iVar3 + 1;
  } while( true );
}


// Assembly code:
// 0058abb0: PUSH 0x18
//   Label: core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0
// 0058abb5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058abba: PUSH EBX
// 0058abbb: PUSH ESI
// 0058abbc: PUSH EDI
// 0058abbd: PUSH EBP
// 0058abbe: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058abc2: MOV ESI,EBP
// 0058abc4: XOR EDI,EDI
// 0058abc6: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0058abc6
//   XREF to: Stack[0x4] (READ)
// 0058abca: MOV EAX,dword ptr [EAX]
// 0058abcc: SHL EAX,0x2
// 0058abcf: CMP EDI,EAX
// 0058abd1: JGE 0x0058abf2
//   XREF to: 0058abf2 (CONDITIONAL_JUMP)
// 0058abd3: MOV EBX,0x1
// 0058abd8: PUSH ESI
//   Label: LAB_0058abd8
// 0058abd9: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058abde: ADD ESP,0x4
// 0058abe1: TEST EAX,EAX
// 0058abe3: JL 0x0058abef
//   XREF to: 0058abef (CONDITIONAL_JUMP)
// 0058abe5: CMP EAX,0xa
// 0058abe8: JNZ 0x0058abd8
//   XREF to: 0058abd8 (CONDITIONAL_JUMP)
// 0058abea: DEC EBX
// 0058abeb: TEST EBX,EBX
// 0058abed: JG 0x0058abd8
//   XREF to: 0058abd8 (CONDITIONAL_JUMP)
// 0058abef: INC EDI
//   Label: LAB_0058abef
// 0058abf0: JMP 0x0058abc6
//   XREF to: 0058abc6 (UNCONDITIONAL_JUMP)
// 0058abf2: TEST byte ptr [EBP + 0xc],0x20
//   Label: LAB_0058abf2
// 0058abf6: JNZ 0x0058abfd
//   XREF to: 0058abfd (CONDITIONAL_JUMP)
// 0058abf8: POP EBP
// 0058abf9: POP EDI
// 0058abfa: POP ESI
// 0058abfb: POP EBX
// 0058abfc: RET
// 0058abfd: MOV EDX,0x64a490
//   Label: LAB_0058abfd
//   XREF to: 0064a490 (PARAM)
// 0058ac02: MOV ECX,0x34a
// 0058ac07: PUSH 0x64a4a5
//   XREF to: 0064a4a5 (DATA)
// 0058ac0c: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0058ac12: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0058ac18: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058ac1d: ADD ESP,0x4
// 0058ac20: POP EBP
// 0058ac21: POP EDI
// 0058ac22: POP ESI
// 0058ac23: POP EBX
// 0058ac24: RET
