// Name: core_netgame.cpp_removeChatOut_FUN_0053f4b0
// Address: 0053f4b0
// Address Range: [[0053f4b0, 0053f541]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_removeChatOut_FUN_0053f4b0()
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063d245
//   TerminatedCString s_removeChatOut_invalid_in_0063d259
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f98ad0
//   undefined4 DAT_02f98ad4
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void core_netgame_cpp_removeChatOut_FUN_0053f4b0(void)

{
  int in_stack_00000004;
  
  if ((in_stack_00000004 < 0) || (DAT_02f98ad0 <= in_stack_00000004)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x107;
    core_main_c_displayErrorAndQuit_FUN_00506f10("removeChatOut - invalid index");
  }
  DAT_02f98ad0 = DAT_02f98ad0 + -1;
  crt_string_c_memmove_FUN_005fe5e0
            (&DAT_02f98ad4 + in_stack_00000004 * 0x45,&DAT_02f98ad4 + (in_stack_00000004 + 1) * 0x45
             ,(DAT_02f98ad0 - in_stack_00000004) * 0x114);
  return;
}


// Assembly code:
// 0053f4b0: PUSH EBX
//   Label: core_netgame.cpp_removeChatOut_FUN_0053f4b0
// 0053f4b1: PUSH EDI
// 0053f4b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0053f4b6: TEST EBX,EBX
// 0053f4b8: JL 0x0053f51b
//   XREF to: 0053f51b (CONDITIONAL_JUMP)
// 0053f4ba: CMP EBX,dword ptr [0x02f98ad0]
//   XREF to: 02f98ad0 (READ)
// 0053f4c0: JGE 0x0053f51b
//   XREF to: 0053f51b (CONDITIONAL_JUMP)
// 0053f4c2: MOV EDI,dword ptr [0x02f98ad0]
//   Label: LAB_0053f4c2
//   XREF to: 02f98ad0 (READ)
// 0053f4c8: DEC EDI
// 0053f4c9: MOV EDX,EDI
// 0053f4cb: SUB EDX,EBX
// 0053f4cd: MOV EAX,EDX
// 0053f4cf: SHL EAX,0x4
// 0053f4d2: ADD EAX,EDX
// 0053f4d4: SHL EAX,0x2
// 0053f4d7: ADD EAX,EDX
// 0053f4d9: SHL EAX,0x2
// 0053f4dc: LEA EDX,[EBX + 0x1]
// 0053f4df: PUSH EAX
// 0053f4e0: MOV EAX,EDX
// 0053f4e2: SHL EAX,0x4
// 0053f4e5: ADD EAX,EDX
// 0053f4e7: SHL EAX,0x2
// 0053f4ea: ADD EAX,EDX
// 0053f4ec: SHL EAX,0x2
// 0053f4ef: ADD EAX,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 0053f4f4: PUSH EAX
// 0053f4f5: MOV EAX,EBX
// 0053f4f7: SHL EAX,0x4
// 0053f4fa: ADD EAX,EBX
// 0053f4fc: SHL EAX,0x2
// 0053f4ff: ADD EAX,EBX
// 0053f501: SHL EAX,0x2
// 0053f504: ADD EAX,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 0053f509: PUSH EAX
// 0053f50a: MOV dword ptr [0x02f98ad0],EDI
//   XREF to: 02f98ad0 (WRITE)
// 0053f510: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0053f515: ADD ESP,0xc
// 0053f518: POP EDI
// 0053f519: POP EBX
// 0053f51a: RET
// 0053f51b: PUSH ESI
//   Label: LAB_0053f51b
// 0053f51c: MOV ECX,0x63d245
//   XREF to: 0063d245 (DATA)
// 0053f521: MOV ESI,0x107
// 0053f526: PUSH 0x63d259
//   XREF to: 0063d259 (DATA)
// 0053f52b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0053f531: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0053f537: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053f53c: ADD ESP,0x4
// 0053f53f: POP ESI
// 0053f540: JMP 0x0053f4c2
//   XREF to: 0053f4c2 (UNCONDITIONAL_JUMP)
