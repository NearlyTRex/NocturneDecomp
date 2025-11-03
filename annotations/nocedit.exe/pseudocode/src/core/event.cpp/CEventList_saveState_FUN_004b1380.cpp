// Name: core_event.cpp_CEventList_saveState_FUN_004b1380
// Address: 004b1380
// Address Range: [[004b1380, 004b1667]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_saveState_FUN_004b1380(CEventList * this_ptr, FILE * file_handle)
// Cross-references:
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0e58 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CEventList_version_00625e1d
//   TerminatedCString s_d_00625e34
//   TerminatedCString s_eventCount_list_00625e38
//   TerminatedCString s_d_00625e4d
//   TerminatedCString s_s_00625e51
//   TerminatedCString s_currentEventCount_list_00625e55
//   TerminatedCString s_d_00625e71
//   TerminatedCString s_s_00625e75
//   TerminatedCString s_persistentEventCount_lis_00625e79
//   TerminatedCString s_d_00625e98
//   TerminatedCString s_s_00625e9c
//   TerminatedCString s_timerCount_list_duration_00625ea0
//   TerminatedCString s_d_00625ec5
//   TerminatedCString s_f_s_00625ec9
//   TerminatedCString s_counterCount_list_value__00625ed1
//   TerminatedCString s_d_00625ef5
//   TerminatedCString s_d_s_00625ef9
//   TerminatedCString s_actorVarCount_list_varNa_00625f01
//   TerminatedCString s_d_00625f2d
//   TerminatedCString s_s_s_00625f31
//   TerminatedCString s_gameFlagCount_list_00625f3d
//   TerminatedCString s_d_00625f55
//   TerminatedCString s_s_00625f59
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_004b1380(CEventList *this_ptr,FILE *file_handle)

{
  int iVar1;
  int iVar2;
  CEvent *pCVar3;
  CEvent *pCStack00000020;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// CEventList version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",5);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// eventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->event_count);
  if (0 < this_ptr->event_count) {
    pCVar3 = this_ptr->event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n","%s\n",pCVar3);
      pCVar3 = pCVar3 + 0x20;
    } while (iVar1 < this_ptr->event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// currentEventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->current_event_count);
  if (0 < this_ptr->current_event_count) {
    pCVar3 = this_ptr->current_event_list;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n","%s\n",pCVar3);
      pCVar3 = pCVar3 + 0x20;
    } while (iVar1 < this_ptr->current_event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// persistentEventCount, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->persistent_event_count);
  if (0 < this_ptr->persistent_event_count) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n");
    } while (iVar1 < this_ptr->persistent_event_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// timerCount, list(duration, name)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  iVar1 = 0;
  if (0 < this_ptr->timer_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f, %s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->timer_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// counterCount, list(value, name)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  iVar1 = 0;
  if (0 < this_ptr->counter_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d, %s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->counter_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// actorVarCount, list(varName, actorName)\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  if (0 < this_ptr->actor_var_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\"%s\", \"%s\"\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->actor_var_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// gameFlagCount, list\n");
  iVar2 = 0;
  iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  if (0 < this_ptr->game_flag_count) {
    pCStack00000020 = this_ptr->game_flag_list;
    do {
      iVar2 = iVar2 + 1;
      pCVar3 = pCStack00000020 + 0x20;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n");
      iVar1 = this_ptr->game_flag_count;
      pCStack00000020 = pCVar3;
    } while (iVar2 < iVar1);
  }
  return iVar1;
}


// Assembly code:
// 004b1380: PUSH EBX
//   Label: core_event.cpp_CEventList_saveState_FUN_004b1380
// 004b1381: PUSH ESI
// 004b1382: PUSH EDI
// 004b1383: PUSH EBP
// 004b1384: SUB ESP,0xc
// 004b1387: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004b138b: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004b138f: PUSH 0x625e1d
//   XREF to: 00625e1d (DATA)
// 004b1394: PUSH ESI
// 004b1395: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b139a: ADD ESP,0x8
// 004b139d: PUSH 0x5
// 004b139f: PUSH 0x625e34
//   XREF to: 00625e34 (DATA)
// 004b13a4: PUSH ESI
// 004b13a5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b13aa: ADD ESP,0xc
// 004b13ad: PUSH 0x625e38
//   XREF to: 00625e38 (DATA)
// 004b13b2: PUSH ESI
// 004b13b3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b13b8: ADD ESP,0x8
// 004b13bb: MOV EDX,dword ptr [EBX]
// 004b13bd: PUSH EDX
// 004b13be: PUSH 0x625e4d
//   XREF to: 00625e4d (DATA)
// 004b13c3: PUSH ESI
// 004b13c4: XOR EBP,EBP
// 004b13c6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b13cb: MOV ECX,dword ptr [EBX]
// 004b13cd: ADD ESP,0xc
// 004b13d0: TEST ECX,ECX
// 004b13d2: JLE 0x004b13f0
//   XREF to: 004b13f0 (CONDITIONAL_JUMP)
// 004b13d4: LEA EDI,[EBX + 0x4]
// 004b13d7: PUSH EDI
//   Label: LAB_004b13d7
// 004b13d8: PUSH 0x625e51
//   XREF to: 00625e51 (DATA)
// 004b13dd: PUSH ESI
// 004b13de: INC EBP
// 004b13df: ADD EDI,0x20
// 004b13e2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b13e7: MOV EAX,dword ptr [EBX]
// 004b13e9: ADD ESP,0xc
// 004b13ec: CMP EBP,EAX
// 004b13ee: JL 0x004b13d7
//   XREF to: 004b13d7 (CONDITIONAL_JUMP)
// 004b13f0: PUSH 0x625e55
//   Label: LAB_004b13f0
//   XREF to: 00625e55 (DATA)
// 004b13f5: PUSH ESI
// 004b13f6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b13fb: ADD ESP,0x8
// 004b13fe: MOV EDX,dword ptr [EBX + 0xc84]
// 004b1404: PUSH EDX
// 004b1405: PUSH 0x625e71
//   XREF to: 00625e71 (DATA)
// 004b140a: PUSH ESI
// 004b140b: XOR EDI,EDI
// 004b140d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b1412: MOV ECX,dword ptr [EBX + 0xc84]
// 004b1418: ADD ESP,0xc
// 004b141b: TEST ECX,ECX
// 004b141d: JLE 0x004b1450
//   XREF to: 004b1450 (CONDITIONAL_JUMP)
// 004b141f: LEA EBP,[EBX + 0xc88]
// 004b1425: PUSH EBP
//   Label: LAB_004b1425
// 004b1426: PUSH 0x625e75
//   XREF to: 00625e75 (DATA)
// 004b142b: PUSH ESI
// 004b142c: INC EDI
// 004b142d: ADD EBP,0x20
// 004b1430: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b1435: MOV EAX,dword ptr [EBX + 0xc84]
// 004b143b: ADD ESP,0xc
// 004b143e: CMP EDI,EAX
// 004b1440: JL 0x004b1425
//   XREF to: 004b1425 (CONDITIONAL_JUMP)
// 004b1442: LEA EAX,[EAX]
// 004b1448: LEA EDX,[EDX]
// 004b144e: MOV EAX,EAX
// 004b1450: PUSH 0x625e79
//   Label: LAB_004b1450
//   XREF to: 00625e79 (DATA)
// 004b1455: PUSH ESI
// 004b1456: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b145b: ADD ESP,0x8
// 004b145e: MOV EDX,dword ptr [EBX + 0x258c]
// 004b1464: PUSH EDX
// 004b1465: PUSH 0x625e98
//   XREF to: 00625e98 (DATA)
// 004b146a: PUSH ESI
// 004b146b: XOR EBP,EBP
// 004b146d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b1472: MOV ECX,dword ptr [EBX + 0x258c]
// 004b1478: ADD ESP,0xc
// 004b147b: TEST ECX,ECX
// 004b147d: JLE 0x004b14b0
//   XREF to: 004b14b0 (CONDITIONAL_JUMP)
// 004b147f: LEA EDI,[EBX + 0x2590]
// 004b1485: PUSH EDI
//   Label: LAB_004b1485
// 004b1486: PUSH 0x625e9c
//   XREF to: 00625e9c (DATA)
// 004b148b: PUSH ESI
// 004b148c: INC EBP
// 004b148d: ADD EDI,0x20
// 004b1490: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b1495: MOV EAX,dword ptr [EBX + 0x258c]
// 004b149b: ADD ESP,0xc
// 004b149e: CMP EBP,EAX
// 004b14a0: JL 0x004b1485
//   XREF to: 004b1485 (CONDITIONAL_JUMP)
// 004b14a2: LEA EAX,[EAX]
// 004b14a8: LEA EDX,[EDX]
// 004b14ae: MOV EAX,EAX
// 004b14b0: PUSH 0x625ea0
//   Label: LAB_004b14b0
//   XREF to: 00625ea0 (DATA)
// 004b14b5: PUSH ESI
// 004b14b6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b14bb: ADD ESP,0x8
// 004b14be: MOV EDX,dword ptr [EBX + 0x3210]
// 004b14c4: PUSH EDX
// 004b14c5: PUSH 0x625ec5
//   XREF to: 00625ec5 (DATA)
// 004b14ca: PUSH ESI
// 004b14cb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b14d0: ADD ESP,0xc
// 004b14d3: XOR ECX,ECX
// 004b14d5: MOV EDI,dword ptr [EBX + 0x3210]
// 004b14db: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004b14df: TEST EDI,EDI
// 004b14e1: JLE 0x004b1520
//   XREF to: 004b1520 (CONDITIONAL_JUMP)
// 004b14e3: LEA EBP,[EBX + 0x3214]
// 004b14e9: MOV EDI,EBX
// 004b14eb: PUSH EBP
//   Label: LAB_004b14eb
// 004b14ec: SUB ESP,0x8
// 004b14ef: FLD float ptr [EDI + 0x3354]
// 004b14f5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004b14f8: PUSH 0x625ec9
//   XREF to: 00625ec9 (DATA)
// 004b14fd: PUSH ESI
// 004b14fe: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b1503: ADD ESP,0x14
// 004b1506: ADD EDI,0x4
// 004b1509: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 004b150d: ADD EBP,0x20
// 004b1510: INC EAX
// 004b1511: MOV EDX,dword ptr [EBX + 0x3210]
// 004b1517: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b151b: CMP EAX,EDX
// 004b151d: JL 0x004b14eb
//   XREF to: 004b14eb (CONDITIONAL_JUMP)
// 004b151f: NOP
// 004b1520: PUSH 0x625ed1
//   Label: LAB_004b1520
//   XREF to: 00625ed1 (DATA)
// 004b1525: PUSH ESI
// 004b1526: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b152b: ADD ESP,0x8
// 004b152e: MOV ECX,dword ptr [EBX + 0x337c]
// 004b1534: PUSH ECX
// 004b1535: PUSH 0x625ef5
//   XREF to: 00625ef5 (DATA)
// 004b153a: PUSH ESI
// 004b153b: XOR EDI,EDI
// 004b153d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b1542: ADD ESP,0xc
// 004b1545: MOV EBP,dword ptr [EBX + 0x337c]
// 004b154b: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 004b154f: TEST EBP,EBP
// 004b1551: JLE 0x004b1590
//   XREF to: 004b1590 (CONDITIONAL_JUMP)
// 004b1553: LEA EDI,[EBX + 0x3380]
// 004b1559: MOV EBP,EBX
// 004b155b: PUSH EDI
//   Label: LAB_004b155b
// 004b155c: MOV EAX,dword ptr [EBP + 0x34c0]
// 004b1562: PUSH EAX
// 004b1563: PUSH 0x625ef9
//   XREF to: 00625ef9 (DATA)
// 004b1568: PUSH ESI
// 004b1569: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b156e: ADD ESP,0x10
// 004b1571: ADD EBP,0x4
// 004b1574: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004b1578: ADD EDI,0x20
// 004b157b: INC EDX
// 004b157c: MOV ECX,dword ptr [EBX + 0x337c]
// 004b1582: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004b1586: CMP EDX,ECX
// 004b1588: JL 0x004b155b
//   XREF to: 004b155b (CONDITIONAL_JUMP)
// 004b158a: LEA EAX,[EAX]
// 004b1590: PUSH 0x625f01
//   Label: LAB_004b1590
//   XREF to: 00625f01 (DATA)
// 004b1595: PUSH ESI
// 004b1596: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b159b: ADD ESP,0x8
// 004b159e: MOV EDI,dword ptr [EBX + 0x34e8]
// 004b15a4: PUSH EDI
// 004b15a5: PUSH 0x625f2d
//   XREF to: 00625f2d (DATA)
// 004b15aa: PUSH ESI
// 004b15ab: XOR EBP,EBP
// 004b15ad: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b15b2: MOV EAX,dword ptr [EBX + 0x34e8]
// 004b15b8: ADD ESP,0xc
// 004b15bb: TEST EAX,EAX
// 004b15bd: JLE 0x004b1600
//   XREF to: 004b1600 (CONDITIONAL_JUMP)
// 004b15bf: LEA EAX,[EBX + 0x37da]
// 004b15c5: LEA EDI,[EBX + 0x34ec]
// 004b15cb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 004b15ce: MOV EDX,dword ptr [ESP]
//   Label: LAB_004b15ce
//   XREF to: Stack[-0x1c] (DATA)
// 004b15d1: PUSH EDX
// 004b15d2: PUSH EDI
// 004b15d3: PUSH 0x625f31
//   XREF to: 00625f31 (DATA)
// 004b15d8: PUSH ESI
// 004b15d9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b15de: ADD ESP,0x10
// 004b15e1: INC EBP
// 004b15e2: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004b15e5: ADD EDI,0x1e
// 004b15e8: ADD ECX,0x1e
// 004b15eb: MOV EAX,dword ptr [EBX + 0x34e8]
// 004b15f1: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x1c] (DATA)
// 004b15f4: CMP EBP,EAX
// 004b15f6: JL 0x004b15ce
//   XREF to: 004b15ce (CONDITIONAL_JUMP)
// 004b15f8: LEA EAX,[EAX]
// 004b15fe: MOV EDX,EDX
// 004b1600: PUSH 0x625f3d
//   Label: LAB_004b1600
//   XREF to: 00625f3d (DATA)
// 004b1605: PUSH ESI
// 004b1606: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b160b: ADD ESP,0x8
// 004b160e: MOV EDX,dword ptr [EBX + 0x1908]
// 004b1614: PUSH EDX
// 004b1615: PUSH 0x625f55
//   XREF to: 00625f55 (DATA)
// 004b161a: PUSH ESI
// 004b161b: XOR EBP,EBP
// 004b161d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b1622: MOV ECX,dword ptr [EBX + 0x1908]
// 004b1628: ADD ESP,0xc
// 004b162b: TEST ECX,ECX
// 004b162d: JLE 0x004b1660
//   XREF to: 004b1660 (CONDITIONAL_JUMP)
// 004b162f: LEA EDI,[EBX + 0x190c]
// 004b1635: PUSH EDI
//   Label: LAB_004b1635
// 004b1636: PUSH 0x625f59
//   XREF to: 00625f59 (DATA)
// 004b163b: PUSH ESI
// 004b163c: INC EBP
// 004b163d: ADD EDI,0x20
// 004b1640: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b1645: MOV EAX,dword ptr [EBX + 0x1908]
// 004b164b: ADD ESP,0xc
// 004b164e: CMP EBP,EAX
// 004b1650: JL 0x004b1635
//   XREF to: 004b1635 (CONDITIONAL_JUMP)
// 004b1652: LEA EAX,[EAX]
// 004b1658: LEA EDX,[EDX]
// 004b165e: MOV EAX,EAX
// 004b1660: ADD ESP,0xc
//   Label: LAB_004b1660
// 004b1663: POP EBP
// 004b1664: POP EDI
// 004b1665: POP ESI
// 004b1666: POP EBX
// 004b1667: RET
