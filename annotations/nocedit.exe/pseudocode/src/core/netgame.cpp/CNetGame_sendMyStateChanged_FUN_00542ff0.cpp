// Name: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
// Address: 00542ff0
// Address Range: [[00542ff0, 00543144]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0()
// Cross-references:
//   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 (00542470) at 005429e5 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541406 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063dd48
//   TerminatedCString s_CNetGame_sendMyStateChan_0063dd5c
//   undefined4 DAT_00680a04
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LastPingTime
//   uint g_CurrentGameTime
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_send_FUN_005411c0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_sendMyStateChanged(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_EBP;
  int *piVar4;
  undefined4 unaff_EDI;
  char *pcVar5;
  int *in_stack_00000004;
  char acStack_2b [20];
  int local_17;
  undefined4 uStack_13;
  int iStack_f;
  undefined3 uStack_b;
  
  uStack_b = (undefined3)((uint)unaff_EDI >> 8);
  uStack_13._3_1_ = (undefined1)unaff_EBP;
  iStack_f._0_3_ = (undefined3)((uint)unaff_EBP >> 8);
  iStack_f = CONCAT13((char)unaff_EDI,(undefined3)iStack_f);
  if ((*in_stack_00000004 != 2) || (in_stack_00000004[1] != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8d0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  local_17 = in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0x19];
  uStack_13 = in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0xd];
  iStack_f = in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0xe];
  pcVar5 = acStack_2b;
  piVar4 = in_stack_00000004 + in_stack_00000004[0x45] * 0x1e + 8;
  do {
    iVar3 = *piVar4;
    *pcVar5 = (char)iVar3;
    if ((char)iVar3 == '\0') break;
    cVar1 = *(char *)((int)piVar4 + 1);
    piVar4 = (int *)((int)piVar4 + 2);
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  g_LastPingTime = iVar2 / 0x12;
  core_netgame_cpp_CNetGame_send_FUN_005411c0();
  DAT_00680a04 = 1;
  in_stack_00000004[in_stack_00000004[0x45] * 0x1e + 0x18] = g_CurrentGameTime;
  return;
}


// Assembly code:
// 00542ff0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
// 00542ff1: PUSH ESI
// 00542ff2: PUSH EDI
// 00542ff3: PUSH EBP
// 00542ff4: SUB ESP,0x2c
// 00542ff7: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00542ffb: CMP dword ptr [EBX],0x2
// 00542ffe: JNZ 0x00543006
//   XREF to: 00543006 (CONDITIONAL_JUMP)
// 00543000: CMP dword ptr [EBX + 0x4],0x1
// 00543004: JZ 0x00543029
//   XREF to: 00543029 (CONDITIONAL_JUMP)
// 00543006: MOV ESI,0x63dd48
//   Label: LAB_00543006
//   XREF to: 0063dd48 (DATA)
// 0054300b: MOV EDI,0x8d0
// 00543010: PUSH 0x63dd5c
//   XREF to: 0063dd5c (DATA)
// 00543015: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0054301b: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00543021: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00543026: ADD ESP,0x4
// 00543029: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_00543029
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0054302e: MOV EDX,EAX
// 00543030: MOV ESI,0x12
// 00543035: SAR EDX,0x1f
// 00543038: IDIV ESI
// 0054303a: MOV EBP,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00543040: MOV EDX,EAX
// 00543042: SUB EAX,EBP
// 00543044: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 0054304a: TEST EAX,EAX
// 0054304c: JL 0x0054313e
//   XREF to: 0054313e (CONDITIONAL_JUMP)
// 00543052: CMP EAX,0x20000
// 00543057: JLE 0x0054305e
//   XREF to: 0054305e (CONDITIONAL_JUMP)
// 00543059: MOV EAX,0x20000
// 0054305e: MOV EDX,dword ptr [0x02f7c8b8]
//   Label: LAB_0054305e
//   XREF to: 02f7c8b8 (READ)
// 00543064: MOV ECX,0x29
// 00543069: ADD EDX,EAX
// 0054306b: MOV AH,0xa
// 0054306d: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x3c] (DATA)
// 00543070: MOV byte ptr [ESP + 0x4],AH
//   XREF to: Stack[-0x38] (WRITE)
// 00543074: MOV EAX,dword ptr [EBX + 0x114]
// 0054307a: SHL EAX,0x3
// 0054307d: MOV dword ptr [0x02f7c8b8],EDX
//   XREF to: 02f7c8b8 (WRITE)
// 00543083: MOV EDX,EAX
// 00543085: SHL EAX,0x4
// 00543088: SUB EAX,EDX
// 0054308a: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x64]
// 0054308e: MOV dword ptr [ESP + 0x1d],EAX
//   XREF to: Stack[-0x1f] (WRITE)
// 00543092: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00543097: MOV dword ptr [ESP + 0x5],EAX
//   XREF to: Stack[-0x37] (WRITE)
// 0054309b: MOV EAX,dword ptr [EBX + 0x114]
// 005430a1: SHL EAX,0x3
// 005430a4: MOV EDX,EAX
// 005430a6: SHL EAX,0x4
// 005430a9: SUB EAX,EDX
// 005430ab: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34]
// 005430af: MOV dword ptr [ESP + 0x21],EAX
//   XREF to: Stack[-0x1b] (WRITE)
// 005430b3: MOV EAX,dword ptr [EBX + 0x114]
// 005430b9: SHL EAX,0x3
// 005430bc: MOV EDX,EAX
// 005430be: SHL EAX,0x4
// 005430c1: SUB EAX,EDX
// 005430c3: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38]
// 005430c7: MOV dword ptr [ESP + 0x25],EAX
//   XREF to: Stack[-0x17] (WRITE)
// 005430cb: MOV EAX,dword ptr [EBX + 0x114]
// 005430d1: SHL EAX,0x3
// 005430d4: MOV EDX,EAX
// 005430d6: SHL EAX,0x4
// 005430d9: LEA ESI,[EBX + 0x20]
// 005430dc: SUB EAX,EDX
// 005430de: LEA EDI,[ESP + 0x9]
//   XREF to: Stack[-0x33] (DATA)
// 005430e2: ADD ESI,EAX
// 005430e4: PUSH EDI
// 005430e5: MOV AL,byte ptr [ESI]
//   Label: LAB_005430e5
// 005430e7: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x33] (DATA)
// 005430e9: CMP AL,0x0
// 005430eb: JZ 0x005430fd
//   XREF to: 005430fd (CONDITIONAL_JUMP)
// 005430ed: MOV AL,byte ptr [ESI + 0x1]
// 005430f0: ADD ESI,0x2
// 005430f3: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x32] (WRITE)
// 005430f6: ADD EDI,0x2
// 005430f9: CMP AL,0x0
// 005430fb: JNZ 0x005430e5
//   XREF to: 005430e5 (CONDITIONAL_JUMP)
// 005430fd: POP EDI
//   Label: LAB_005430fd
// 005430fe: MOV EAX,ESP
// 00543100: PUSH EAX
// 00543101: MOV ESI,dword ptr [EBX + 0x110]
// 00543107: PUSH ESI
// 00543108: PUSH EBX
// 00543109: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 0054310e: MOV EAX,dword ptr [EBX + 0x114]
// 00543114: SHL EAX,0x3
// 00543117: MOV EDX,EAX
// 00543119: SHL EAX,0x4
// 0054311c: MOV EDI,0x1
// 00543121: SUB EAX,EDX
// 00543123: ADD ESP,0xc
// 00543126: ADD EBX,EAX
// 00543128: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 0054312d: MOV dword ptr [0x00680a04],EDI
//   XREF to: 00680a04 (WRITE)
// 00543133: MOV dword ptr [EBX + 0x60],EAX
// 00543136: ADD ESP,0x2c
// 00543139: POP EBP
// 0054313a: POP EDI
// 0054313b: POP ESI
// 0054313c: POP EBX
// 0054313d: RET
// 0054313e: XOR EAX,EAX
//   Label: LAB_0054313e
// 00543140: JMP 0x0054305e
//   XREF to: 0054305e (UNCONDITIONAL_JUMP)
