// Name: core_event.cpp_CRuleList_remove_FUN_004b17c0
// Address: 004b17c0
// Address Range: [[004b17c0, 004b1884]]
// Convention: __cdecl
// Signature: void core_event.cpp_CRuleList_remove_FUN_004b17c0(CRuleList * this_ptr)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040fe51 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_event_cpp_00625fc1
//   TerminatedCString s_CRuleList_remove_invalid_00625fd3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_remove_FUN_004b17c0(CRuleList *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (this_ptr->list_size <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xcef;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::remove - invalid index");
  }
  iVar1 = this_ptr->list_size + -1;
  this_ptr->list_size = iVar1;
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr + in_stack_00000008 * 0x19 + 1,this_ptr + (in_stack_00000008 + 1) * 0x19 + 1,
             (iVar1 - in_stack_00000008) * 100);
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr + in_stack_00000008 * 0x19 + 0x7e,
             this_ptr + (in_stack_00000008 + 1) * 0x19 + 0x7e,
             (this_ptr->list_size - in_stack_00000008) * 100);
  return;
}


// Assembly code:
// 004b17c0: PUSH EBX
//   Label: core_event.cpp_CRuleList_remove_FUN_004b17c0
// 004b17c1: PUSH ESI
// 004b17c2: PUSH EDI
// 004b17c3: PUSH EBP
// 004b17c4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b17c8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b17cc: TEST ESI,ESI
// 004b17ce: JL 0x004b185d
//   XREF to: 004b185d (CONDITIONAL_JUMP)
// 004b17d4: CMP ESI,dword ptr [EBX]
// 004b17d6: JGE 0x004b185d
//   XREF to: 004b185d (CONDITIONAL_JUMP)
// 004b17dc: MOV EBP,dword ptr [EBX]
//   Label: LAB_004b17dc
// 004b17de: DEC EBP
// 004b17df: MOV EDX,EBP
// 004b17e1: SUB EDX,ESI
// 004b17e3: LEA EAX,[EDX*0x4 + 0x0]
// 004b17ea: SUB EAX,EDX
// 004b17ec: LEA ECX,[EBX + 0x4]
// 004b17ef: SHL EAX,0x3
// 004b17f2: MOV dword ptr [EBX],EBP
// 004b17f4: ADD EAX,EDX
// 004b17f6: LEA EDX,[ESI + 0x1]
// 004b17f9: SHL EAX,0x2
// 004b17fc: LEA EDI,[EDX*0x4 + 0x0]
// 004b1803: PUSH EAX
// 004b1804: SUB EDI,EDX
// 004b1806: LEA EBP,[ESI*0x4 + 0x0]
// 004b180d: SHL EDI,0x3
// 004b1810: SUB EBP,ESI
// 004b1812: ADD EDI,EDX
// 004b1814: SHL EBP,0x3
// 004b1817: SHL EDI,0x2
// 004b181a: ADD EBP,ESI
// 004b181c: LEA EAX,[ECX + EDI*0x1]
// 004b181f: SHL EBP,0x2
// 004b1822: PUSH EAX
// 004b1823: ADD ECX,EBP
// 004b1825: PUSH ECX
// 004b1826: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b182b: MOV EDX,dword ptr [EBX]
// 004b182d: SUB EDX,ESI
// 004b182f: LEA EAX,[EDX*0x4 + 0x0]
// 004b1836: SUB EAX,EDX
// 004b1838: SHL EAX,0x3
// 004b183b: ADD EAX,EDX
// 004b183d: ADD ESP,0xc
// 004b1840: SHL EAX,0x2
// 004b1843: ADD EBX,0x1f8
// 004b1849: PUSH EAX
// 004b184a: ADD EDI,EBX
// 004b184c: PUSH EDI
// 004b184d: ADD EBX,EBP
// 004b184f: PUSH EBX
// 004b1850: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b1855: ADD ESP,0xc
// 004b1858: POP EBP
// 004b1859: POP EDI
// 004b185a: POP ESI
// 004b185b: POP EBX
// 004b185c: RET
// 004b185d: MOV ECX,0x625fc1
//   Label: LAB_004b185d
//   XREF to: 00625fc1 (PARAM)
// 004b1862: MOV EDI,0xcef
// 004b1867: PUSH 0x625fd3
//   XREF to: 00625fd3 (DATA)
// 004b186c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b1872: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b1878: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b187d: ADD ESP,0x4
// 004b1880: JMP 0x004b17dc
//   XREF to: 004b17dc (UNCONDITIONAL_JUMP)
