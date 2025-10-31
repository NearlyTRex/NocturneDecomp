// Name: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
// Address: 0042e5d0
// Address Range: [[0042e5d0, 0042e665]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr)
// Cross-references:
//   core_scat.cpp_CScat_ctor_FUN_00556ed0 (00556ed0) at 00556f83 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_ctor_FUN_005bb120 (005bb120) at 005bb343 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_charactr_cpp_0061752d
//   TerminatedCString s_CCharacter_addLayerActio_00617542
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  char *in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if (0x13 < *(int *)(this_ptr->field13_0x2620 + 8)) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xf42;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::addLayerAction - too many");
  }
  iVar2 = *(int *)(this_ptr->field13_0x2620 + 8);
  *(int *)(this_ptr->field13_0x2620 + 8) = *(int *)(this_ptr->field13_0x2620 + 8) + 1;
  pcVar3 = this_ptr->field13_0x2620 + iVar2 * 0x38 + 0xc;
  *(undefined4 *)pcVar3 = in_stack_0000000c;
  pcVar4 = pcVar3 + 8;
  *(undefined4 *)(pcVar3 + 4) = in_stack_00000010;
  do {
    cVar1 = *in_stack_00000014;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000014[1];
    in_stack_00000014 = in_stack_00000014 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar3 + 0x28) = in_stack_00000018;
  return;
}


// Assembly code:
// 0042e5d0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
// 0042e5d1: PUSH ESI
// 0042e5d2: PUSH EDI
// 0042e5d3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0042e5d7: CMP dword ptr [EBX + 0x2628],0x14
// 0042e5de: JGE 0x0042e63e
//   XREF to: 0042e63e (CONDITIONAL_JUMP)
// 0042e5e0: MOV EAX,dword ptr [EBX + 0x2628]
//   Label: LAB_0042e5e0
// 0042e5e6: SHL EAX,0x3
// 0042e5e9: MOV EDI,dword ptr [EBX + 0x2628]
// 0042e5ef: MOV EDX,EAX
// 0042e5f1: SHL EAX,0x3
// 0042e5f4: INC EDI
// 0042e5f5: SUB EAX,EDX
// 0042e5f7: LEA EDX,[EBX + 0x262c]
// 0042e5fd: MOV dword ptr [EBX + 0x2628],EDI
// 0042e603: ADD EDX,EAX
// 0042e605: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042e609: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0042e60d: MOV dword ptr [EDX],EAX
// 0042e60f: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0042e613: LEA EDI,[EDX + 0x8]
// 0042e616: MOV dword ptr [EDX + 0x4],EAX
// 0042e619: PUSH EDI
// 0042e61a: MOV AL,byte ptr [ESI]
//   Label: LAB_0042e61a
// 0042e61c: MOV byte ptr [EDI],AL
// 0042e61e: CMP AL,0x0
// 0042e620: JZ 0x0042e632
//   XREF to: 0042e632 (CONDITIONAL_JUMP)
// 0042e622: MOV AL,byte ptr [ESI + 0x1]
// 0042e625: ADD ESI,0x2
// 0042e628: MOV byte ptr [EDI + 0x1],AL
// 0042e62b: ADD EDI,0x2
// 0042e62e: CMP AL,0x0
// 0042e630: JNZ 0x0042e61a
//   XREF to: 0042e61a (CONDITIONAL_JUMP)
// 0042e632: POP EDI
//   Label: LAB_0042e632
// 0042e633: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0042e637: MOV dword ptr [EDX + 0x28],EAX
// 0042e63a: POP EDI
// 0042e63b: POP ESI
// 0042e63c: POP EBX
// 0042e63d: RET
// 0042e63e: MOV ECX,0x61752d
//   Label: LAB_0042e63e
//   XREF to: 0061752d (DATA)
// 0042e643: MOV ESI,0xf42
// 0042e648: PUSH 0x617542
//   XREF to: 00617542 (DATA)
// 0042e64d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0042e653: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0042e659: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042e65e: ADD ESP,0x4
// 0042e661: JMP 0x0042e5e0
//   XREF to: 0042e5e0 (UNCONDITIONAL_JUMP)
