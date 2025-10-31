// Name: core_netgame.cpp_CNetGame_FUN_00542370
// Address: 00542370
// Address Range: [[00542370, 00542461]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_00542370()
// Cross-references:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540b6a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40 (00541e40) at 00541f6c [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   int g_ChatHistoryCount
//   SChatHistory[400] g_ChatHistory
//   undefined4 DAT_02f7c8d8
//   undefined4 DAT_02f7c8dc
//   undefined4 DAT_02f7c8dd
//   undefined4 DAT_02f7c8de
//   undefined4 DAT_02f7c8df
//   undefined4 DAT_02f7c8f0
//   undefined4 DAT_02f7c8f1
//   undefined4 DAT_02f7c8f2
//   undefined4 DAT_02f7c8f3
//   undefined4 DAT_02f7c9f0
// Function calls:
//   core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_FUN_00542370(undefined1 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void core_netgame_cpp_CNetGame_FUN_00542370(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  char *in_stack_00000014;
  
  bVar6 = 0;
  if (399 < g_ChatHistoryCount) {
    g_ChatHistoryCount = g_ChatHistoryCount + -1;
    crt_string_c_memmove_FUN_005fe5e0(g_ChatHistory,g_ChatHistory + 1,g_ChatHistoryCount * 0x120);
  }
  iVar2 = g_ChatHistoryCount;
  iVar3 = g_ChatHistoryCount * 0x120;
  *(undefined4 *)g_ChatHistory[g_ChatHistoryCount].field0_0x0 = *in_stack_0000000c;
  *(undefined4 *)(iVar3 + 0x2f7c8d4 + (uint)bVar6 * -8) = in_stack_0000000c[(uint)bVar6 * -2 + 1];
  *(undefined4 *)(g_ChatHistory[iVar2].field0_0x0 + 8) = in_stack_00000010;
  pcVar5 = g_ChatHistory[iVar2].field0_0x0 + 0xc;
  pcVar4 = in_stack_00000014;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = g_ChatHistory[g_ChatHistoryCount].field0_0x0 + 0x20;
  pcVar5 = in_stack_00000014;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  g_ChatHistoryCount = g_ChatHistoryCount + 1;
  core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,in_stack_00000014,5.0);
  return;
}


// Assembly code:
// 00542370: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_FUN_00542370
// 00542371: PUSH ESI
// 00542372: PUSH EDI
// 00542373: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 00542377: MOV EDX,dword ptr [0x02f7c8cc]
//   XREF to: 02f7c8cc (READ)
// 0054237d: CMP EDX,0x190
// 00542383: JGE 0x00542435
//   XREF to: 00542435 (CONDITIONAL_JUMP)
// 00542389: MOV EDX,dword ptr [0x02f7c8cc]
//   Label: LAB_00542389
//   XREF to: 02f7c8cc (READ)
// 0054238f: LEA EAX,[EDX*0x8 + 0x0]
// 00542396: ADD EAX,EDX
// 00542398: SHL EAX,0x5
// 0054239b: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0054239f: LEA EDI,[EAX + 0x2f7c8d0]
//   XREF to: 02f7c8d0 (DATA)
// 005423a5: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005423a9: MOVSD ES:EDI,ESI
//   XREF to: 02f7c8d0 (DATA)
// 005423aa: MOVSD ES:EDI,ESI
//   XREF to: 02f7c8d4 (DATA)
// 005423ab: MOV dword ptr [EAX + 0x2f7c8d8],EDX
//   XREF to: 02f7c8d8 (DATA)
// 005423b1: ADD EAX,0x2f7c8d0
//   XREF to: 02f7c8d0 (DATA)
// 005423b6: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 005423ba: LEA EDI,[EAX + 0xc]
// 005423bd: PUSH EDI
// 005423be: MOV AL,byte ptr [ESI]
//   Label: LAB_005423be
// 005423c0: MOV byte ptr [EDI],AL
//   XREF to: 02f7c8dc (DATA)
//   XREF to: 02f7c8de (DATA)
// 005423c2: CMP AL,0x0
// 005423c4: JZ 0x005423d6
//   XREF to: 005423d6 (CONDITIONAL_JUMP)
// 005423c6: MOV AL,byte ptr [ESI + 0x1]
// 005423c9: ADD ESI,0x2
// 005423cc: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f7c8dd (DATA)
//   XREF to: 02f7c8df (DATA)
// 005423cf: ADD EDI,0x2
// 005423d2: CMP AL,0x0
// 005423d4: JNZ 0x005423be
//   XREF to: 005423be (CONDITIONAL_JUMP)
// 005423d6: POP EDI
//   Label: LAB_005423d6
// 005423d7: MOV EDX,dword ptr [0x02f7c8cc]
//   XREF to: 02f7c8cc (READ)
// 005423dd: LEA EAX,[EDX*0x8 + 0x0]
// 005423e4: ADD EAX,EDX
// 005423e6: MOV EDI,0x2f7c8d0
//   XREF to: 02f7c8d0 (DATA)
// 005423eb: SHL EAX,0x5
// 005423ee: ADD EDI,EAX
// 005423f0: MOV ESI,EBX
// 005423f2: ADD EDI,0x20
// 005423f5: PUSH EDI
// 005423f6: MOV AL,byte ptr [ESI]
//   Label: LAB_005423f6
// 005423f8: MOV byte ptr [EDI],AL
//   XREF to: 02f7c8f0 (DATA)
//   XREF to: 02f7c8f2 (DATA)
// 005423fa: CMP AL,0x0
// 005423fc: JZ 0x0054240e
//   XREF to: 0054240e (CONDITIONAL_JUMP)
// 005423fe: MOV AL,byte ptr [ESI + 0x1]
// 00542401: ADD ESI,0x2
// 00542404: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f7c8f1 (DATA)
//   XREF to: 02f7c8f3 (DATA)
// 00542407: ADD EDI,0x2
// 0054240a: CMP AL,0x0
// 0054240c: JNZ 0x005423f6
//   XREF to: 005423f6 (CONDITIONAL_JUMP)
// 0054240e: POP EDI
//   Label: LAB_0054240e
// 0054240f: PUSH 0x40a00000
// 00542414: MOV ESI,dword ptr [0x02f7c8cc]
//   XREF to: 02f7c8cc (READ)
// 0054241a: PUSH EBX
// 0054241b: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00542421: INC ESI
// 00542422: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 00542423: MOV dword ptr [0x02f7c8cc],ESI
//   XREF to: 02f7c8cc (WRITE)
// 00542429: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 0054242e: ADD ESP,0xc
// 00542431: POP EDI
// 00542432: POP ESI
// 00542433: POP EBX
// 00542434: RET
// 00542435: LEA ECX,[EDX + -0x1]
//   Label: LAB_00542435
// 00542438: MOV dword ptr [0x02f7c8cc],ECX
//   XREF to: 02f7c8cc (WRITE)
// 0054243e: LEA EAX,[ECX*0x8 + 0x0]
// 00542445: ADD EAX,ECX
// 00542447: SHL EAX,0x5
// 0054244a: PUSH EAX
// 0054244b: PUSH 0x2f7c9f0
//   XREF to: 02f7c9f0 (DATA)
// 00542450: PUSH 0x2f7c8d0
//   XREF to: 02f7c8d0 (DATA)
// 00542455: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0054245a: ADD ESP,0xc
// 0054245d: JMP 0x00542389
//   XREF to: 00542389 (UNCONDITIONAL_JUMP)
