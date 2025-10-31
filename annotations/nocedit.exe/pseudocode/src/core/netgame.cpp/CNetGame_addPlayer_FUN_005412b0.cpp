// Name: core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
// Address: 005412b0
// Address Range: [[005412b0, 0054138f]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0()
// Cross-references:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540888 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 (00542470) at 00542abf [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToHost_FUN_0053f860 (0053f860) at 0053f8bf [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053f951 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063d947
//   TerminatedCString s_CNetGame_addPlayer_too_m_0063d95b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   uint g_CurrentGameTime
//   undefined4 DAT_02f7c8c4
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_addPlayer(CNetGame* param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

int core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *dest;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  undefined4 *in_stack_00000010;
  char *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  bVar7 = 0;
  if (1 < *(int *)(in_stack_00000004 + 0x1c)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x5ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::addPlayer - too many players!");
  }
  iVar2 = *(int *)(in_stack_00000004 + 0x1c);
  dest = (char *)(in_stack_00000004 + 0x20 + iVar2 * 0x78);
  *(int *)(in_stack_00000004 + 0x1c) = iVar2 + 1;
  crt_memory_c_memset_FUN_005fde40(dest,0,0x78);
  pcVar6 = dest;
  do {
    cVar1 = *in_stack_00000014;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000014[1];
    in_stack_00000014 = in_stack_00000014 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(dest + 0x1c) = *in_stack_00000010;
  *(undefined4 *)(dest + (uint)bVar7 * -8 + 0x20) = in_stack_00000010[(uint)bVar7 * -2 + 1];
  dest[0x28] = '\0';
  dest[0x29] = '\0';
  dest[0x2a] = -0x80;
  dest[0x2b] = -0x41;
  dest[0x44] = '\0';
  dest[0x45] = '\0';
  dest[0x46] = '\0';
  dest[0x47] = '\0';
  dest[0x40] = '\0';
  dest[0x41] = '\0';
  dest[0x42] = '\0';
  dest[0x43] = '\0';
  dest[0x3c] = '\0';
  dest[0x3d] = '\0';
  dest[0x3e] = '\0';
  dest[0x3f] = '\0';
  *(undefined4 *)(dest + 0x14) = in_stack_00000018;
  *(undefined4 *)(dest + 0x18) = in_stack_0000001c;
  uVar3 = g_CurrentGameTime;
  *(uint *)(dest + 0x24) = g_CurrentGameTime;
  iVar5 = uVar3 - 0x1e0000;
  *(int *)(dest + 0x2c) = iVar5;
  *(int *)(dest + 0x30) = iVar5;
  iVar4 = DAT_02f7c8c4;
  *(int *)(dest + 0x38) = iVar5;
  *(int *)(dest + 0x34) = iVar4 + -1;
  return iVar2;
}


// Assembly code:
// 005412b0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
// 005412b1: PUSH ESI
// 005412b2: PUSH EDI
// 005412b3: PUSH EBP
// 005412b4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005412b8: CMP dword ptr [ESI + 0x1c],0x2
// 005412bc: JGE 0x00541368
//   XREF to: 00541368 (CONDITIONAL_JUMP)
// 005412c2: MOV EBP,dword ptr [ESI + 0x1c]
//   Label: LAB_005412c2
// 005412c5: LEA EBX,[EBP*0x8 + 0x0]
// 005412cc: MOV EAX,EBX
// 005412ce: SHL EBX,0x4
// 005412d1: SUB EBX,EAX
// 005412d3: PUSH 0x78
// 005412d5: MOV EAX,EBX
// 005412d7: LEA EBX,[ESI + 0x20]
// 005412da: PUSH 0x0
// 005412dc: ADD EBX,EAX
// 005412de: LEA EDX,[EBP + 0x1]
// 005412e1: PUSH EBX
// 005412e2: MOV dword ptr [ESI + 0x1c],EDX
// 005412e5: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005412ea: ADD ESP,0xc
// 005412ed: MOV EDI,EBX
// 005412ef: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005412f3: PUSH EDI
// 005412f4: MOV AL,byte ptr [ESI]
//   Label: LAB_005412f4
// 005412f6: MOV byte ptr [EDI],AL
// 005412f8: CMP AL,0x0
// 005412fa: JZ 0x0054130c
//   XREF to: 0054130c (CONDITIONAL_JUMP)
// 005412fc: MOV AL,byte ptr [ESI + 0x1]
// 005412ff: ADD ESI,0x2
// 00541302: MOV byte ptr [EDI + 0x1],AL
// 00541305: ADD EDI,0x2
// 00541308: CMP AL,0x0
// 0054130a: JNZ 0x005412f4
//   XREF to: 005412f4 (CONDITIONAL_JUMP)
// 0054130c: POP EDI
//   Label: LAB_0054130c
// 0054130d: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00541311: LEA EDI,[EBX + 0x1c]
// 00541314: MOVSD ES:EDI,ESI
// 00541315: MOVSD ES:EDI,ESI
// 00541316: MOV dword ptr [EBX + 0x28],0xbf800000
// 0054131d: MOV dword ptr [EBX + 0x44],0x0
// 00541324: MOV dword ptr [EBX + 0x40],0x0
// 0054132b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0054132f: MOV dword ptr [EBX + 0x3c],0x0
// 00541336: MOV dword ptr [EBX + 0x14],EAX
// 00541339: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0054133d: MOV dword ptr [EBX + 0x18],EAX
// 00541340: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00541345: MOV dword ptr [EBX + 0x24],EAX
// 00541348: SUB EAX,0x1e0000
// 0054134d: MOV dword ptr [EBX + 0x2c],EAX
// 00541350: MOV EDX,EAX
// 00541352: MOV dword ptr [EBX + 0x30],EAX
// 00541355: MOV EAX,[0x02f7c8c4]
//   XREF to: 02f7c8c4 (READ)
// 0054135a: MOV dword ptr [EBX + 0x38],EDX
// 0054135d: DEC EAX
// 0054135e: MOV dword ptr [EBX + 0x34],EAX
// 00541361: MOV EAX,EBP
// 00541363: POP EBP
// 00541364: POP EDI
// 00541365: POP ESI
// 00541366: POP EBX
// 00541367: RET
// 00541368: MOV ECX,0x63d947
//   Label: LAB_00541368
//   XREF to: 0063d947 (PARAM)
// 0054136d: MOV EBX,0x5ff
// 00541372: PUSH 0x63d95b
//   XREF to: 0063d95b (DATA)
// 00541377: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054137d: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00541383: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00541388: ADD ESP,0x4
// 0054138b: JMP 0x005412c2
//   XREF to: 005412c2 (UNCONDITIONAL_JUMP)
