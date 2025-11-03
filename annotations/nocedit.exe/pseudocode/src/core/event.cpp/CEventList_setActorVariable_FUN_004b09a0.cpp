// Name: core_event.cpp_CEventList_setActorVariable_FUN_004b09a0
// Address: 004b09a0
// Address Range: [[004b09a0, 004b0b7a]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c3da [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_event_cpp_00625bf9
//   TerminatedCString s_Tried_to_assign_actor_va_00625c0b
//   TerminatedCString s_core_event_cpp_00625c49
//   TerminatedCString s_CEventList_setActorVaria_00625c5b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_event.cpp_CEventList_FUN_004b0bf0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  void *unaff_EBX;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *in_stack_00000008;
  CDemonActor *in_stack_0000000c;
  
  if ((in_stack_0000000c != (CDemonActor *)0x0) && (in_stack_0000000c->actor_name[0] == '\0')) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xb2b;
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(in_stack_0000000c);
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to assign actor var %s an actor of type %s with no name");
  }
  iVar2 = core_event_cpp_CEventList_FUN_004b0bf0(this_ptr);
  if (iVar2 < 0) {
    if (in_stack_0000000c != (CDemonActor *)0x0) {
      if (0x18 < this_ptr->actor_var_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xb38;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setActorVariable - already too many actor variables.  Max is %d.",0x19);
      }
      pcVar3 = this_ptr->variablesVarName1 + this_ptr->actor_var_count * 0x1e;
      do {
        cVar1 = *in_stack_00000008;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      pcVar3 = this_ptr->variablesActorName1 + this_ptr->actor_var_count * 0x1e;
      do {
        cVar1 = in_stack_0000000c->actor_name[0];
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_0000000c->actor_name[1];
        in_stack_0000000c = (CDemonActor *)(in_stack_0000000c->actor_name + 2);
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      this_ptr->actor_var_count = this_ptr->actor_var_count + 1;
      return;
    }
  }
  else {
    pcVar4 = this_ptr->variablesActorName1 + iVar2 * 0x1e;
    pcVar3 = this_ptr->variablesVarName1 + iVar2 * 0x1e;
    if (in_stack_0000000c == (CDemonActor *)0x0) {
      iVar5 = this_ptr->actor_var_count + -1;
      this_ptr->actor_var_count = iVar5;
      crt_string_c_memmove_FUN_005fe5e0
                (pcVar3,this_ptr->variablesVarName2 + iVar2 * 0x1e,(iVar5 - iVar2) * 0x1e);
      crt_string_c_memmove_FUN_005fe5e0
                (unaff_EBX,pcVar4 + iVar2 * 0x1e + 0x1e,(this_ptr->actor_var_count - iVar2) * 0x1e);
      return;
    }
    do {
      cVar1 = *in_stack_00000008;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000008[1];
      in_stack_00000008 = in_stack_00000008 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    do {
      cVar1 = in_stack_0000000c->actor_name[0];
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = in_stack_0000000c->actor_name[1];
      in_stack_0000000c = (CDemonActor *)(in_stack_0000000c->actor_name + 2);
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  return;
}


// Assembly code:
// 004b09a0: PUSH EBX
//   Label: core_event.cpp_CEventList_setActorVariable_FUN_004b09a0
// 004b09a1: PUSH ESI
// 004b09a2: PUSH EDI
// 004b09a3: PUSH EBP
// 004b09a4: SUB ESP,0x8
// 004b09a7: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004b09ab: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004b09af: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004b09b3: TEST EBP,EBP
// 004b09b5: JZ 0x004b09eb
//   XREF to: 004b09eb (CONDITIONAL_JUMP)
// 004b09b7: CMP byte ptr [EBP],0x0
// 004b09bb: JNZ 0x004b09eb
//   XREF to: 004b09eb (CONDITIONAL_JUMP)
// 004b09bd: MOV EDX,0x625bf9
//   XREF to: 00625bf9 (PARAM)
// 004b09c2: MOV ECX,0xb2b
// 004b09c7: PUSH EBP
// 004b09c8: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b09ce: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b09d4: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004b09d9: ADD ESP,0x4
// 004b09dc: PUSH EAX
// 004b09dd: PUSH EDI
// 004b09de: PUSH 0x625c0b
//   XREF to: 00625c0b (DATA)
// 004b09e3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b09e8: ADD ESP,0xc
// 004b09eb: PUSH EDI
//   Label: LAB_004b09eb
// 004b09ec: PUSH EBX
// 004b09ed: CALL core_event.cpp_CEventList_FUN_004b0bf0
//   XREF to: 004b0bf0 (UNCONDITIONAL_CALL)
// 004b09f2: MOV ESI,EAX
// 004b09f4: ADD ESP,0x8
// 004b09f7: TEST EAX,EAX
// 004b09f9: JL 0x004b0a6f
//   XREF to: 004b0a6f (CONDITIONAL_JUMP)
// 004b09fb: LEA EAX,[EBX + 0x37da]
// 004b0a01: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004b0a04: MOV EAX,ESI
// 004b0a06: ADD EAX,EAX
// 004b0a08: MOV EDX,EAX
// 004b0a0a: SHL EAX,0x4
// 004b0a0d: SUB EAX,EDX
// 004b0a0f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004b0a12: ADD EDX,EAX
// 004b0a14: LEA ECX,[EBX + 0x34ec]
// 004b0a1a: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004b0a1e: LEA EDX,[ECX + EAX*0x1]
// 004b0a21: TEST EBP,EBP
// 004b0a23: JZ 0x004b0b19
//   XREF to: 004b0b19 (CONDITIONAL_JUMP)
// 004b0a29: MOV ESI,EDI
// 004b0a2b: MOV EDI,EDX
// 004b0a2d: PUSH EDI
// 004b0a2e: MOV AL,byte ptr [ESI]
//   Label: LAB_004b0a2e
// 004b0a30: MOV byte ptr [EDI],AL
// 004b0a32: CMP AL,0x0
// 004b0a34: JZ 0x004b0a46
//   XREF to: 004b0a46 (CONDITIONAL_JUMP)
// 004b0a36: MOV AL,byte ptr [ESI + 0x1]
// 004b0a39: ADD ESI,0x2
// 004b0a3c: MOV byte ptr [EDI + 0x1],AL
// 004b0a3f: ADD EDI,0x2
// 004b0a42: CMP AL,0x0
// 004b0a44: JNZ 0x004b0a2e
//   XREF to: 004b0a2e (CONDITIONAL_JUMP)
// 004b0a46: POP EDI
//   Label: LAB_004b0a46
// 004b0a47: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004b0a4b: MOV ESI,EBP
// 004b0a4d: PUSH EDI
// 004b0a4e: MOV AL,byte ptr [ESI]
//   Label: LAB_004b0a4e
// 004b0a50: MOV byte ptr [EDI],AL
// 004b0a52: CMP AL,0x0
// 004b0a54: JZ 0x004b0a66
//   XREF to: 004b0a66 (CONDITIONAL_JUMP)
// 004b0a56: MOV AL,byte ptr [ESI + 0x1]
// 004b0a59: ADD ESI,0x2
// 004b0a5c: MOV byte ptr [EDI + 0x1],AL
// 004b0a5f: ADD EDI,0x2
// 004b0a62: CMP AL,0x0
// 004b0a64: JNZ 0x004b0a4e
//   XREF to: 004b0a4e (CONDITIONAL_JUMP)
// 004b0a66: POP EDI
//   Label: LAB_004b0a66
// 004b0a67: ADD ESP,0x8
//   Label: LAB_004b0a67
// 004b0a6a: POP EBP
// 004b0a6b: POP EDI
// 004b0a6c: POP ESI
// 004b0a6d: POP EBX
// 004b0a6e: RET
// 004b0a6f: TEST EBP,EBP
//   Label: LAB_004b0a6f
// 004b0a71: JZ 0x004b0a67
//   XREF to: 004b0a67 (CONDITIONAL_JUMP)
// 004b0a73: CMP dword ptr [EBX + 0x34e8],0x19
// 004b0a7a: JL 0x004b0aa1
//   XREF to: 004b0aa1 (CONDITIONAL_JUMP)
// 004b0a7c: PUSH 0x19
// 004b0a7e: MOV ECX,0x625c49
//   XREF to: 00625c49 (PARAM)
// 004b0a83: MOV ESI,0xb38
// 004b0a88: PUSH 0x625c5b
//   XREF to: 00625c5b (DATA)
// 004b0a8d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b0a93: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004b0a99: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b0a9e: ADD ESP,0x8
// 004b0aa1: MOV EAX,dword ptr [EBX + 0x34e8]
//   Label: LAB_004b0aa1
// 004b0aa7: ADD EAX,EAX
// 004b0aa9: MOV EDX,EAX
// 004b0aab: SHL EAX,0x4
// 004b0aae: SUB EAX,EDX
// 004b0ab0: MOV EDX,EAX
// 004b0ab2: LEA EAX,[EBX + 0x34ec]
// 004b0ab8: ADD EAX,EDX
// 004b0aba: MOV ESI,EDI
// 004b0abc: MOV EDI,EAX
// 004b0abe: PUSH EDI
// 004b0abf: MOV AL,byte ptr [ESI]
//   Label: LAB_004b0abf
// 004b0ac1: MOV byte ptr [EDI],AL
// 004b0ac3: CMP AL,0x0
// 004b0ac5: JZ 0x004b0ad7
//   XREF to: 004b0ad7 (CONDITIONAL_JUMP)
// 004b0ac7: MOV AL,byte ptr [ESI + 0x1]
// 004b0aca: ADD ESI,0x2
// 004b0acd: MOV byte ptr [EDI + 0x1],AL
// 004b0ad0: ADD EDI,0x2
// 004b0ad3: CMP AL,0x0
// 004b0ad5: JNZ 0x004b0abf
//   XREF to: 004b0abf (CONDITIONAL_JUMP)
// 004b0ad7: POP EDI
//   Label: LAB_004b0ad7
// 004b0ad8: MOV EAX,dword ptr [EBX + 0x34e8]
// 004b0ade: ADD EAX,EAX
// 004b0ae0: MOV EDX,EAX
// 004b0ae2: SHL EAX,0x4
// 004b0ae5: LEA EDI,[EBX + 0x37da]
// 004b0aeb: SUB EAX,EDX
// 004b0aed: MOV ESI,EBP
// 004b0aef: ADD EDI,EAX
// 004b0af1: PUSH EDI
// 004b0af2: MOV AL,byte ptr [ESI]
//   Label: LAB_004b0af2
// 004b0af4: MOV byte ptr [EDI],AL
// 004b0af6: CMP AL,0x0
// 004b0af8: JZ 0x004b0b0a
//   XREF to: 004b0b0a (CONDITIONAL_JUMP)
// 004b0afa: MOV AL,byte ptr [ESI + 0x1]
// 004b0afd: ADD ESI,0x2
// 004b0b00: MOV byte ptr [EDI + 0x1],AL
// 004b0b03: ADD EDI,0x2
// 004b0b06: CMP AL,0x0
// 004b0b08: JNZ 0x004b0af2
//   XREF to: 004b0af2 (CONDITIONAL_JUMP)
// 004b0b0a: POP EDI
//   Label: LAB_004b0b0a
// 004b0b0b: INC dword ptr [EBX + 0x34e8]
// 004b0b11: ADD ESP,0x8
// 004b0b14: POP EBP
// 004b0b15: POP EDI
// 004b0b16: POP ESI
// 004b0b17: POP EBX
// 004b0b18: RET
// 004b0b19: MOV EDI,dword ptr [EBX + 0x34e8]
//   Label: LAB_004b0b19
// 004b0b1f: DEC EDI
// 004b0b20: MOV EAX,EDI
// 004b0b22: SUB EAX,ESI
// 004b0b24: ADD EAX,EAX
// 004b0b26: MOV dword ptr [EBX + 0x34e8],EDI
// 004b0b2c: MOV EDI,EAX
// 004b0b2e: SHL EAX,0x4
// 004b0b31: SUB EAX,EDI
// 004b0b33: PUSH EAX
// 004b0b34: LEA EAX,[ESI + 0x1]
// 004b0b37: ADD EAX,EAX
// 004b0b39: MOV EDI,EAX
// 004b0b3b: SHL EAX,0x4
// 004b0b3e: SUB EAX,EDI
// 004b0b40: ADD ECX,EAX
// 004b0b42: PUSH ECX
// 004b0b43: PUSH EDX
// 004b0b44: MOV EDI,EAX
// 004b0b46: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b0b4b: MOV EAX,dword ptr [EBX + 0x34e8]
// 004b0b51: SUB EAX,ESI
// 004b0b53: ADD EAX,EAX
// 004b0b55: MOV EDX,EAX
// 004b0b57: SHL EAX,0x4
// 004b0b5a: ADD ESP,0xc
// 004b0b5d: SUB EAX,EDX
// 004b0b5f: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004b0b62: PUSH EAX
// 004b0b63: ADD EDI,EBP
// 004b0b65: PUSH EDI
// 004b0b66: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004b0b6a: PUSH EAX
// 004b0b6b: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b0b70: ADD ESP,0xc
// 004b0b73: ADD ESP,0x8
// 004b0b76: POP EBP
// 004b0b77: POP EDI
// 004b0b78: POP ESI
// 004b0b79: POP EBX
// 004b0b7a: RET
