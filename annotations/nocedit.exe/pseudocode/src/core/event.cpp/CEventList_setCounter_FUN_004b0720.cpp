// Name: core_event.cpp_CEventList_setCounter_FUN_004b0720
// Address: 004b0720
// Address Range: [[004b0720, 004b0824]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_setCounter_FUN_004b0720(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004abc14 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055d299 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_event_cpp_00625bbb
//   TerminatedCString s_CEventList_setCounter_to_00625bcd
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_event.cpp_CEventList_FUN_004b0950
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setCounter_FUN_004b0720(CEventList *this_ptr)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int in_stack_0000000c;
  char *in_stack_00000010;
  
  iVar3 = core_event_cpp_CEventList_FUN_004b0950(this_ptr);
  if (iVar3 < 0) {
    if (in_stack_0000000c != 0) {
      if (9 < this_ptr->counter_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xab2;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setCounter - too many counters!");
      }
      pcVar5 = this_ptr->field16_0x3380 + this_ptr->counter_count * 0x20;
      do {
        cVar2 = *in_stack_00000010;
        *pcVar5 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = in_stack_00000010[1];
        in_stack_00000010 = in_stack_00000010 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      *(int *)(this_ptr->variablesVarName1 + this_ptr->counter_count * 4 + -0x2c) =
           in_stack_0000000c;
      this_ptr->counter_count = this_ptr->counter_count + 1;
      return;
    }
  }
  else {
    iVar1 = iVar3 * 4;
    if (in_stack_0000000c == 0) {
      iVar4 = this_ptr->counter_count + -1;
      this_ptr->counter_count = iVar4;
      crt_string_c_memmove_FUN_005fe5e0
                (this_ptr->field16_0x3380 + iVar3 * 0x20,
                 this_ptr->field16_0x3380 + iVar3 * 0x20 + 0x20,(iVar4 - iVar3) * 0x20);
      crt_string_c_memmove_FUN_005fe5e0
                (this_ptr->variablesVarName1 + iVar1 + -0x2c,
                 this_ptr->variablesVarName1 + iVar1 + -0x28,(this_ptr->counter_count - iVar3) * 4);
      return;
    }
    *(int *)(this_ptr->variablesVarName1 + iVar1 + -0x2c) = in_stack_0000000c;
  }
  return;
}


// Assembly code:
// 004b0720: PUSH EBX
//   Label: core_event.cpp_CEventList_setCounter_FUN_004b0720
// 004b0721: PUSH ESI
// 004b0722: PUSH EDI
// 004b0723: PUSH EBP
// 004b0724: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0728: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b072c: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b0730: PUSH EDX
// 004b0731: PUSH EBX
// 004b0732: CALL core_event.cpp_CEventList_FUN_004b0950
//   XREF to: 004b0950 (UNCONDITIONAL_CALL)
// 004b0737: MOV ESI,EAX
// 004b0739: ADD ESP,0x8
// 004b073c: TEST EAX,EAX
// 004b073e: JL 0x004b07ae
//   XREF to: 004b07ae (CONDITIONAL_JUMP)
// 004b0740: LEA EDI,[EAX*0x4 + 0x0]
// 004b0747: TEST EBP,EBP
// 004b0749: JZ 0x004b0757
//   XREF to: 004b0757 (CONDITIONAL_JUMP)
// 004b074b: MOV dword ptr [EDI + EBX*0x1 + 0x34c0],EBP
// 004b0752: POP EBP
//   Label: LAB_004b0752
// 004b0753: POP EDI
// 004b0754: POP ESI
// 004b0755: POP EBX
// 004b0756: RET
// 004b0757: MOV EAX,dword ptr [EBX + 0x337c]
//   Label: LAB_004b0757
// 004b075d: DEC EAX
// 004b075e: MOV dword ptr [EBX + 0x337c],EAX
// 004b0764: SUB EAX,ESI
// 004b0766: SHL EAX,0x5
// 004b0769: PUSH EAX
// 004b076a: MOV EAX,ESI
// 004b076c: SHL EAX,0x5
// 004b076f: LEA EBP,[EBX + 0x3380]
// 004b0775: LEA EDX,[EAX + 0x20]
// 004b0778: ADD EDX,EBP
// 004b077a: PUSH EDX
// 004b077b: ADD EAX,EBP
// 004b077d: PUSH EAX
// 004b077e: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b0783: MOV EAX,dword ptr [EBX + 0x337c]
// 004b0789: SUB EAX,ESI
// 004b078b: ADD ESP,0xc
// 004b078e: SHL EAX,0x2
// 004b0791: ADD EBX,0x34c0
// 004b0797: PUSH EAX
// 004b0798: LEA EAX,[EDI + 0x4]
// 004b079b: ADD EAX,EBX
// 004b079d: PUSH EAX
// 004b079e: ADD EBX,EDI
// 004b07a0: PUSH EBX
// 004b07a1: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b07a6: ADD ESP,0xc
// 004b07a9: POP EBP
// 004b07aa: POP EDI
// 004b07ab: POP ESI
// 004b07ac: POP EBX
// 004b07ad: RET
// 004b07ae: TEST EBP,EBP
//   Label: LAB_004b07ae
// 004b07b0: JZ 0x004b0752
//   XREF to: 004b0752 (CONDITIONAL_JUMP)
// 004b07b2: CMP dword ptr [EBX + 0x337c],0xa
// 004b07b9: JL 0x004b07de
//   XREF to: 004b07de (CONDITIONAL_JUMP)
// 004b07bb: MOV ESI,0x625bbb
//   XREF to: 00625bbb (DATA)
// 004b07c0: MOV EDI,0xab2
// 004b07c5: PUSH 0x625bcd
//   XREF to: 00625bcd (DATA)
// 004b07ca: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004b07d0: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b07d6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b07db: ADD ESP,0x4
// 004b07de: MOV EAX,dword ptr [EBX + 0x337c]
//   Label: LAB_004b07de
// 004b07e4: LEA EDI,[EBX + 0x3380]
// 004b07ea: SHL EAX,0x5
// 004b07ed: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b07f1: ADD EDI,EAX
// 004b07f3: PUSH EDI
// 004b07f4: MOV AL,byte ptr [ESI]
//   Label: LAB_004b07f4
// 004b07f6: MOV byte ptr [EDI],AL
// 004b07f8: CMP AL,0x0
// 004b07fa: JZ 0x004b080c
//   XREF to: 004b080c (CONDITIONAL_JUMP)
// 004b07fc: MOV AL,byte ptr [ESI + 0x1]
// 004b07ff: ADD ESI,0x2
// 004b0802: MOV byte ptr [EDI + 0x1],AL
// 004b0805: ADD EDI,0x2
// 004b0808: CMP AL,0x0
// 004b080a: JNZ 0x004b07f4
//   XREF to: 004b07f4 (CONDITIONAL_JUMP)
// 004b080c: POP EDI
//   Label: LAB_004b080c
// 004b080d: MOV EAX,dword ptr [EBX + 0x337c]
// 004b0813: MOV dword ptr [EBX + EAX*0x4 + 0x34c0],EBP
// 004b081a: INC dword ptr [EBX + 0x337c]
// 004b0820: POP EBP
// 004b0821: POP EDI
// 004b0822: POP ESI
// 004b0823: POP EBX
// 004b0824: RET
