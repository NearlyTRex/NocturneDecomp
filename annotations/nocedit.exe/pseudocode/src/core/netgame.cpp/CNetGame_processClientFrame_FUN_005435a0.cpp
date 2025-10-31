// Name: core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
// Address: 005435a0
// Address Range: [[005435a0, 005437f1]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da169 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063df08
//   TerminatedCString s_CNetGame_processClientFr_0063df1c
//   double DOUBLE_0063df55 = 0.0000152587890625
//   double DOUBLE_0063df5d = 30
//   double DOUBLE_0063df65 = 0.100000000000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   uint g_CurrentGameTime
//   undefined4 DAT_02f7c8c8
//   int g_SimFrameCount
//   undefined4 g_SimFrameHistory
//   undefined4 DAT_02f9c128
//   undefined4 DAT_02f9c18c
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
//   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_processClientFrame(undefined4 param_1) */

void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 *src;
  
  if (((this_ptr->connection_type == 2) && (this_ptr->network_mode == 3)) &&
     (-1 < *(int *)this_ptr->padding)) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x97c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processClientFrame - I'm not in player list!");
    }
    core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,*(int *)this_ptr->padding,10.0);
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
    if (this_ptr->connection_type == 2) {
LAB_00543605:
      iVar2 = 0;
      if (0 < g_SimFrameCount) {
        iVar1 = 0;
        do {
          if (*(int *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 0x10) ==
              *(int *)((int)&g_SimFrameHistory + iVar1)) {
            if (-1 < iVar2) {
              core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800();
              core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970();
              iVar1 = 0;
              iVar2 = *(int *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 0x10);
              if (0 < g_SimFrameCount) {
                iVar3 = 0;
                src = &DAT_02f9c128;
                do {
                  if (*(int *)((int)&g_SimFrameHistory + iVar3) < iVar2) {
                    g_SimFrameCount = g_SimFrameCount + -1;
                    crt_string_c_memmove_FUN_005fe5e0
                              ((void *)((int)&g_SimFrameHistory + iVar3),src,
                               (g_SimFrameCount - iVar1) * 100);
                  }
                  else {
                    iVar1 = iVar1 + 1;
                    src = src + 0x19;
                    iVar3 = iVar3 + 100;
                  }
                } while (iVar1 < g_SimFrameCount);
              }
              iVar2 = this_ptr->local_player_index;
              this_ptr->field7_0x118[0x50] = '\0';
              this_ptr->field7_0x118[0x51] = '\0';
              this_ptr->field7_0x118[0x52] = '\0';
              this_ptr->field7_0x118[0x53] = '\0';
              iVar1 = 0;
              if (g_SimFrameCount < 1) {
                return;
              }
              iVar3 = 0;
              while (*(int *)(this_ptr->players[iVar2].field5_0x38 + 0x10) !=
                     *(int *)((int)&g_SimFrameHistory + iVar3)) {
                iVar3 = iVar3 + 100;
                iVar1 = iVar1 + 1;
                if (g_SimFrameCount * 100 <= iVar3) {
                  return;
                }
              }
              if (iVar1 < 0) {
                return;
              }
              this_ptr->field7_0x118[0x50] = '\x01';
              this_ptr->field7_0x118[0x51] = '\0';
              this_ptr->field7_0x118[0x52] = '\0';
              this_ptr->field7_0x118[0x53] = '\0';
              return;
            }
            break;
          }
          iVar1 = iVar1 + 100;
          iVar2 = iVar2 + 1;
        } while (iVar1 < g_SimFrameCount * 100);
      }
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      if (this_ptr->connection_type == 2) {
        fVar4 = (float)(int)(g_CurrentGameTime - DAT_02f7c8c8) * (float)DOUBLE_0063df55;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        if ((float)DOUBLE_0063df5d < fVar4) {
          fVar4 = 30.0;
        }
        if ((float)DOUBLE_0063df65 < fVar4) {
          core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970();
        }
        goto LAB_00543605;
      }
    }
  }
  return;
}


// Assembly code:
// 005435a0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
// 005435a1: PUSH ESI
// 005435a2: PUSH EDI
// 005435a3: PUSH EBP
// 005435a4: MOV EBP,ESP
// 005435a6: SUB ESP,0x10
// 005435a9: AND ESP,0xfffffff8
// 005435ac: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005435af: CMP dword ptr [ESI],0x2
// 005435b2: JNZ 0x00543720
//   XREF to: 00543720 (CONDITIONAL_JUMP)
// 005435b8: CMP dword ptr [ESI + 0x4],0x3
// 005435bc: JNZ 0x00543720
//   XREF to: 00543720 (CONDITIONAL_JUMP)
// 005435c2: CMP dword ptr [ESI + 0x110],0x0
// 005435c9: JL 0x00543720
//   XREF to: 00543720 (CONDITIONAL_JUMP)
// 005435cf: CMP dword ptr [ESI + 0x114],0x0
// 005435d6: JL 0x00543727
//   XREF to: 00543727 (CONDITIONAL_JUMP)
// 005435dc: MOV ECX,dword ptr [ESI + 0x110]
//   Label: LAB_005435dc
// 005435e2: PUSH 0x41200000
// 005435e7: PUSH ECX
// 005435e8: PUSH ESI
// 005435e9: CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
//   XREF to: 00541c80 (UNCONDITIONAL_CALL)
// 005435ee: ADD ESP,0xc
// 005435f1: PUSH ESI
// 005435f2: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 005435f7: MOV EBX,dword ptr [ESI]
// 005435f9: ADD ESP,0x4
// 005435fc: CMP EBX,0x2
// 005435ff: JNZ 0x00543720
//   XREF to: 00543720 (CONDITIONAL_JUMP)
// 00543605: IMUL EAX,dword ptr [ESI + 0x114],0x78
//   Label: LAB_00543605
// 0054360c: MOV ECX,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 00543612: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x68]
// 00543616: XOR EDX,EDX
// 00543618: TEST ECX,ECX
// 0054361a: JLE 0x0054375a
//   XREF to: 0054375a (CONDITIONAL_JUMP)
// 00543620: XOR EAX,EAX
// 00543622: IMUL ECX,ECX,0x64
// 00543625: CMP EBX,dword ptr [EAX + 0x2f9c0c4]
//   Label: LAB_00543625
//   XREF to: 02f9c0c4 (READ)
//   XREF to: 02f9c128 (READ)
// 0054362b: JNZ 0x0054374e
//   XREF to: 0054374e (CONDITIONAL_JUMP)
// 00543631: TEST EDX,EDX
// 00543633: JL 0x0054375a
//   XREF to: 0054375a (CONDITIONAL_JUMP)
// 00543639: ADD EAX,0x2f9c0c4
//   XREF to: 02f9c128 (PARAM)
//   XREF to: 02f9c0c4 (PARAM)
// 0054363e: PUSH EAX
//   XREF to: 02f9c0c4 (DATA)
//   XREF to: 02f9c128 (DATA)
// 0054363f: PUSH ESI
// 00543640: CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
//   XREF to: 00543800 (UNCONDITIONAL_CALL)
// 00543645: ADD ESP,0x8
// 00543648: PUSH ESI
// 00543649: CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
//   XREF to: 00543970 (UNCONDITIONAL_CALL)
// 0054364e: MOV EAX,dword ptr [ESI + 0x114]
// 00543654: SHL EAX,0x3
// 00543657: MOV EDX,EAX
// 00543659: SHL EAX,0x4
// 0054365c: SUB EAX,EDX
// 0054365e: XOR EDI,EDI
// 00543660: ADD ESP,0x4
// 00543663: MOV EAX,dword ptr [ESI + EAX*0x1 + 0x68]
// 00543667: MOV ECX,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 0054366d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00543671: TEST ECX,ECX
// 00543673: JLE 0x005436c5
//   XREF to: 005436c5 (CONDITIONAL_JUMP)
// 00543675: MOV EAX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 0054367a: ADD EAX,0x64
// 0054367d: XOR EBX,EBX
// 0054367f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 02f9c128 (DATA)
// 00543683: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_00543683
//   XREF to: Stack[-0x1c] (READ)
// 00543687: CMP ECX,dword ptr [EBX + 0x2f9c0c4]
//   XREF to: 02f9c0c4 (READ)
// 0054368d: JLE 0x005437cb
//   XREF to: 005437cb (CONDITIONAL_JUMP)
// 00543693: MOV EDX,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 00543699: DEC EDX
// 0054369a: MOV EAX,EDX
// 0054369c: SUB EAX,EDI
// 0054369e: IMUL EAX,EAX,0x64
// 005436a1: PUSH EAX
// 005436a2: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005436a6: MOV EAX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 005436ab: PUSH ECX
//   XREF to: 02f9c128 (DATA)
// 005436ac: ADD EAX,EBX
// 005436ae: PUSH EAX
//   XREF to: 02f9c0c4 (DATA)
// 005436af: MOV dword ptr [0x02f9c0c0],EDX
//   XREF to: 02f9c0c0 (WRITE)
// 005436b5: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005436ba: ADD ESP,0xc
// 005436bd: CMP EDI,dword ptr [0x02f9c0c0]
//   Label: LAB_005436bd
//   XREF to: 02f9c0c0 (READ)
// 005436c3: JL 0x00543683
//   XREF to: 00543683 (CONDITIONAL_JUMP)
// 005436c5: MOV EAX,dword ptr [ESI + 0x114]
//   Label: LAB_005436c5
// 005436cb: SHL EAX,0x3
// 005436ce: MOV EDX,EAX
// 005436d0: SHL EAX,0x4
// 005436d3: MOV dword ptr [ESI + 0x168],0x0
// 005436dd: SUB EAX,EDX
// 005436df: XOR EBX,EBX
// 005436e1: MOV EDX,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 005436e7: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x68]
// 005436eb: TEST EDX,EDX
// 005436ed: JLE 0x00543720
//   XREF to: 00543720 (CONDITIONAL_JUMP)
// 005436ef: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005436f3: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005436f7: SHL EDX,0x2
// 005436fa: SUB EDX,EDI
// 005436fc: SHL EDX,0x3
// 005436ff: ADD EDX,EDI
// 00543701: XOR EAX,EAX
// 00543703: SHL EDX,0x2
// 00543706: CMP ECX,dword ptr [EAX + 0x2f9c0c4]
//   Label: LAB_00543706
//   XREF to: 02f9c0c4 (READ)
//   XREF to: 02f9c128 (READ)
// 0054370c: JNZ 0x005437df
//   XREF to: 005437df (CONDITIONAL_JUMP)
// 00543712: TEST EBX,EBX
// 00543714: JL 0x00543720
//   XREF to: 00543720 (CONDITIONAL_JUMP)
// 00543716: MOV dword ptr [ESI + 0x168],0x1
// 00543720: MOV ESP,EBP
//   Label: LAB_00543720
// 00543722: POP EBP
// 00543723: POP EDI
// 00543724: POP ESI
// 00543725: POP EBX
// 00543726: RET
// 00543727: MOV EAX,0x63df08
//   Label: LAB_00543727
//   XREF to: 0063df08 (PARAM)
// 0054372c: MOV EDX,0x97c
// 00543731: PUSH 0x63df1c
//   XREF to: 0063df1c (DATA)
// 00543736: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0054373b: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00543741: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00543746: ADD ESP,0x4
// 00543749: JMP 0x005435dc
//   XREF to: 005435dc (UNCONDITIONAL_JUMP)
// 0054374e: ADD EAX,0x64
//   Label: LAB_0054374e
// 00543751: INC EDX
// 00543752: CMP EAX,ECX
// 00543754: JL 0x00543625
//   XREF to: 00543625 (CONDITIONAL_JUMP)
// 0054375a: PUSH ESI
//   Label: LAB_0054375a
// 0054375b: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 00543760: MOV EBX,dword ptr [ESI]
// 00543762: ADD ESP,0x4
// 00543765: CMP EBX,0x2
// 00543768: JNZ 0x00543720
//   XREF to: 00543720 (CONDITIONAL_JUMP)
// 0054376a: MOV EAX,[0x02f7c8c8]
//   XREF to: 02f7c8c8 (READ)
// 0054376f: MOV EDX,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00543775: SUB EDX,EAX
// 00543777: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0054377b: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0054377f: FMUL double ptr [0x0063df55]
//   XREF to: 0063df55 (READ)
// 00543785: FST float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00543788: FLDZ
// 0054378a: FCOMPP
// 0054378c: FNSTSW AX
// 0054378e: SAHF
// 0054378f: JBE 0x00543796
//   XREF to: 00543796 (CONDITIONAL_JUMP)
// 00543791: XOR EAX,EAX
// 00543793: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 00543796: FLD float ptr [ESP]
//   Label: LAB_00543796
//   XREF to: Stack[-0x20] (DATA)
// 00543799: FCOMP double ptr [0x0063df5d]
//   XREF to: 0063df5d (READ)
// 0054379f: FNSTSW AX
// 005437a1: SAHF
// 005437a2: JBE 0x005437ab
//   XREF to: 005437ab (CONDITIONAL_JUMP)
// 005437a4: MOV dword ptr [ESP],0x41f00000
//   XREF to: Stack[-0x20] (DATA)
// 005437ab: FLD float ptr [ESP]
//   Label: LAB_005437ab
//   XREF to: Stack[-0x20] (DATA)
// 005437ae: FCOMP double ptr [0x0063df65]
//   XREF to: 0063df65 (READ)
// 005437b4: FNSTSW AX
// 005437b6: SAHF
// 005437b7: JBE 0x00543605
//   XREF to: 00543605 (CONDITIONAL_JUMP)
// 005437bd: PUSH ESI
// 005437be: CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
//   XREF to: 00543970 (UNCONDITIONAL_CALL)
// 005437c3: ADD ESP,0x4
// 005437c6: JMP 0x00543605
//   XREF to: 00543605 (UNCONDITIONAL_JUMP)
// 005437cb: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005437cb
//   XREF to: Stack[-0x18] (READ)
// 005437cf: INC EDI
// 005437d0: ADD EAX,0x64
// 005437d3: ADD EBX,0x64
// 005437d6: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 02f9c18c (DATA)
// 005437da: JMP 0x005436bd
//   XREF to: 005436bd (UNCONDITIONAL_JUMP)
// 005437df: ADD EAX,0x64
//   Label: LAB_005437df
// 005437e2: INC EBX
// 005437e3: CMP EAX,EDX
// 005437e5: JL 0x00543706
//   XREF to: 00543706 (CONDITIONAL_JUMP)
// 005437eb: MOV ESP,EBP
// 005437ed: POP EBP
// 005437ee: POP EDI
// 005437ef: POP ESI
// 005437f0: POP EBX
// 005437f1: RET
