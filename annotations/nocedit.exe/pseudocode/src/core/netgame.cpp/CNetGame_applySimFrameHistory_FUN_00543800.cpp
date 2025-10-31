// Name: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
// Address: 00543800
// Address Range: [[00543800, 005438b7]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800()
// Cross-references:
//   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 (005435a0) at 00543640 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 00543348 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063df6d
//   TerminatedCString s_CNetGame_applySimFrameHi_0063df81
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   CHero*[4] g_HeroActors
//   undefined4 DAT_02db87c4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_game.cpp_CGame_slamDT_FUN_004e3080
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_applySimFrameHistory(CNetGame* param_1,
   undefined4 param_2) */

void core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_0000000c;
  int *in_stack_00000010;
  
  bVar7 = 0;
  if (*(int *)(in_stack_00000004 + 0x114) < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x9cd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applySimFrameHistory - I'm not in the player list!");
  }
  *(undefined4 *)(in_stack_00000004 + 0x16c) = *(undefined4 *)(in_stack_0000000c + 4);
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,*(float *)(in_stack_0000000c + 8));
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x1c)) {
    iVar4 = 0;
    piVar1 = in_stack_00000010;
    do {
      piVar6 = (int *)((int)g_HeroActors + iVar4);
      iVar4 = iVar4 + 4;
      piVar5 = piVar1 + 3;
      piVar6 = (int *)(*piVar6 + 0xbe2c);
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 0xb;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x1c));
  }
  *(int *)(*(int *)(in_stack_00000004 + 0x114) * 0x78 + 0x68 + in_stack_00000004) =
       *in_stack_00000010 + 1;
  return;
}


// Assembly code:
// 00543800: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
// 00543801: PUSH ESI
// 00543802: PUSH EDI
// 00543803: PUSH EBP
// 00543804: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00543808: CMP dword ptr [EBP + 0x114],0x0
// 0054380f: JL 0x00543890
//   XREF to: 00543890 (CONDITIONAL_JUMP)
// 00543815: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00543815
//   XREF to: Stack[0x8] (READ)
// 00543819: MOV EAX,dword ptr [EAX + 0x4]
// 0054381c: MOV dword ptr [EBP + 0x16c],EAX
// 00543822: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00543826: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0054382c: PUSH dword ptr [EAX + 0x8]
// 0054382f: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 00543830: CALL core_game.cpp_CGame_slamDT_FUN_004e3080
//   XREF to: 004e3080 (UNCONDITIONAL_CALL)
// 00543835: ADD ESP,0x8
// 00543838: MOV EDI,dword ptr [EBP + 0x1c]
// 0054383b: XOR EDX,EDX
// 0054383d: TEST EDI,EDI
// 0054383f: JLE 0x00543870
//   XREF to: 00543870 (CONDITIONAL_JUMP)
// 00543841: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00543845: XOR EBX,EBX
// 00543847: MOV ESI,dword ptr [EBX + 0x2db87c0]
//   Label: LAB_00543847
//   XREF to: 02db87c0 (READ)
//   XREF to: 02db87c4 (READ)
// 0054384d: MOV ECX,0xb
// 00543852: LEA EDI,[ESI + 0xbe2c]
// 00543858: LEA ESI,[EAX + 0xc]
// 0054385b: ADD EBX,0x4
// 0054385e: MOVSD.REP ES:EDI,ESI
// 00543860: INC EDX
// 00543861: MOV ECX,dword ptr [EBP + 0x1c]
// 00543864: ADD EAX,0x2c
// 00543867: CMP EDX,ECX
// 00543869: JL 0x00543847
//   XREF to: 00543847 (CONDITIONAL_JUMP)
// 0054386b: LEA EAX,[EAX]
// 0054386e: MOV ECX,ECX
// 00543870: MOV EAX,dword ptr [EBP + 0x114]
//   Label: LAB_00543870
// 00543876: SHL EAX,0x3
// 00543879: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054387d: MOV EDX,EAX
// 0054387f: SHL EAX,0x4
// 00543882: MOV EBX,dword ptr [EBX]
// 00543884: SUB EAX,EDX
// 00543886: INC EBX
// 00543887: MOV dword ptr [EAX + EBP*0x1 + 0x68],EBX
// 0054388b: POP EBP
// 0054388c: POP EDI
// 0054388d: POP ESI
// 0054388e: POP EBX
// 0054388f: RET
// 00543890: MOV ECX,0x63df6d
//   Label: LAB_00543890
//   XREF to: 0063df6d (PARAM)
// 00543895: MOV EBX,0x9cd
// 0054389a: PUSH 0x63df81
//   XREF to: 0063df81 (DATA)
// 0054389f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005438a5: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005438ab: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005438b0: ADD ESP,0x4
// 005438b3: JMP 0x00543815
//   XREF to: 00543815 (UNCONDITIONAL_JUMP)
