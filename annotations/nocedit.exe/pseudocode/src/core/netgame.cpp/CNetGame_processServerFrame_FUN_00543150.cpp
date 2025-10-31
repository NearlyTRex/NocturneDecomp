// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
// Address: 00543150
// Address Range: [[00543150, 00543594]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da383 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db308 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063d277
//   TerminatedCString s_allocSimFrame_sim_histor_0063d28b
//   TerminatedCString s_core_netgame_cpp_0063dda6
//   TerminatedCString s_CNetGame_processServerFr_0063ddba
//   TerminatedCString s_core_netgame_cpp_0063ddf1
//   TerminatedCString s_CNetGame_processServerFr_0063de05
//   TerminatedCString s_core_netgame_cpp_0063de4b
//   TerminatedCString s_CNetGame_processServerFr_0063de5f
//   TerminatedCString s_core_netgame_cpp_0063dea0
//   TerminatedCString s_CNetGame_processServerFr_0063deb4
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   undefined4 DAT_02f9c060
//   undefined4 DAT_02f9c064
//   undefined4 DAT_02f9c068
//   int g_SimFrameCount
//   undefined4 g_SimFrameHistory
//   undefined4 DAT_02f9c0c8
//   undefined4 DAT_02f9c0cc
//   undefined4 DAT_02f9c0d0
//   undefined4 DAT_02f9c0d4
//   undefined4 DAT_02f9c0f0
//   undefined4 DAT_02f9c0fc
//   undefined4 DAT_02f9c128
//   undefined4 DAT_02f9c12c
//   undefined4 DAT_02f9c130
// Function calls:
//   core_actor.cpp_setRandomSeed_FUN_0040cb90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   core_netgame.cpp_CNetGame_send_FUN_005411c0
//   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdlib.c_rand_FUN_005feb5c
//   crt_string.c_memmove_FUN_005fe5e0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_processServerFrame(undefined4 param_1) */

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  uint seed_value;
  int iVar3;
  CNetGame *pCVar4;
  CNetGame *pCVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int *dest;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  byte bVar14;
  SNetPlayer *pSVar15;
  undefined4 auStack_6b [22];
  
  bVar14 = 0;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  g_LastPingTime = iVar1;
  if (this_ptr->connection_type == 0) {
    seed_value = crt_stdlib_c_rand_FUN_005feb5c();
    *(uint *)(this_ptr->field7_0x118 + 0x54) = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040cb90(seed_value);
    return;
  }
  if ((this_ptr->connection_type == 1) && (this_ptr->network_mode == 3)) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x8f6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (this_ptr->local_player_index != *(int *)this_ptr->padding) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 0x8f7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar1 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar1,10.0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
    iVar1 = 0x7fffffff;
    iVar2 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->player_count) {
      do {
        iVar7 = *(int *)(pCVar5->players[0].field5_0x38 + 0x10);
        if (iVar7 < iVar1) {
          iVar1 = iVar7;
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)(pCVar5->players[0].field5_0x38 + 0x20);
      } while (iVar2 < this_ptr->player_count);
    }
    iVar2 = 0;
    if (0 < g_SimFrameCount) {
      iVar7 = 0;
      puVar11 = &DAT_02f9c128;
      do {
        if (*(int *)((int)&g_SimFrameHistory + iVar7) < iVar1) {
          g_SimFrameCount = g_SimFrameCount + -1;
          crt_string_c_memmove_FUN_005fe5e0
                    ((void *)((int)&g_SimFrameHistory + iVar7),puVar11,
                     (g_SimFrameCount - iVar2) * 100);
        }
        else {
          puVar11 = puVar11 + 0x19;
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 100;
        }
      } while (iVar2 < g_SimFrameCount);
    }
    iVar2 = 0;
    iVar1 = *(int *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 0x10);
    if (0 < g_SimFrameCount) {
      iVar7 = 0;
      do {
        if (iVar1 == *(int *)((int)&g_SimFrameHistory + iVar7)) {
          if (-1 < iVar2) {
            dest = (int *)((int)&g_SimFrameHistory + iVar7);
            goto LAB_005432f5;
          }
          break;
        }
        iVar7 = iVar7 + 100;
        iVar2 = iVar2 + 1;
      } while (iVar7 < g_SimFrameCount * 100);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
    }
    dest = &g_SimFrameHistory + g_SimFrameCount * 0x19;
    g_SimFrameCount = g_SimFrameCount + 1;
    crt_memory_c_memset_FUN_005fde40(dest,0,100);
    *dest = iVar1;
LAB_005432f5:
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    dest[1] = iVar1;
    pCVar5 = (CNetGame *)g_CGamePtr->delta_time_float;
    dest[2] = (int)pCVar5;
    iVar1 = this_ptr->player_count;
    iVar2 = 0;
    pCVar4 = this_ptr;
    piVar8 = dest;
    if (0 < iVar1) {
      do {
        pcVar9 = pCVar4->players[0].field5_0x38 + 0x14;
        piVar12 = piVar8 + 3;
        for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar12 = *(int *)pcVar9;
          pcVar9 = pcVar9 + (uint)bVar14 * -8 + 4;
          piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
        }
        iVar2 = iVar2 + 1;
        pCVar5 = (CNetGame *)(pCVar4->players[0].field5_0x38 + 0x20);
        pCVar4 = pCVar5;
        piVar8 = piVar8 + 0xb;
      } while (iVar2 < this_ptr->player_count);
      iVar1 = 0;
    }
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800
              (iVar2,pCVar5,this_ptr,iVar1,this_ptr,dest);
    iVar1 = 0;
    if (0 < this_ptr->player_count) {
      pSVar15 = this_ptr->players;
      do {
        if (iVar1 != this_ptr->local_player_index) {
          iVar2 = *(int *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 0x10) -
                  *(int *)(pSVar15->field5_0x38 + 0x10);
          if (iVar2 < 1) {
            g_CurrentFilename = "..\\core\\netgame.cpp";
            g_CurrentLineNumber = 0x93b;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          iVar7 = *(int *)(pSVar15->field5_0x38 + 0x10);
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar6 = 0;
            if (0 < g_SimFrameCount) {
              iVar3 = 0;
              do {
                if (iVar7 == *(int *)((int)&g_SimFrameHistory + iVar3)) goto LAB_005434de;
                iVar3 = iVar3 + 100;
                iVar6 = iVar6 + 1;
              } while (iVar3 < g_SimFrameCount * 100);
            }
            iVar6 = -1;
LAB_005434de:
            if (iVar6 < 0) {
              g_CurrentFilename = "..\\core\\netgame.cpp";
              g_CurrentLineNumber = 0x94d;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            puVar11 = &g_SimFrameHistory + iVar6 * 0x19;
            iVar6 = 0;
            if (0 < this_ptr->player_count) {
              do {
                puVar10 = puVar11 + 3;
                puVar13 = auStack_6b + iVar6 * 0xb;
                for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar13 = *puVar10;
                  puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
                  puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar11 = puVar11 + 0xb;
              } while (iVar6 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_005411c0();
          }
        }
        pSVar15 = pSVar15 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->player_count);
    }
  }
  return;
}


// Assembly code:
// 00543150: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
// 00543151: PUSH ESI
// 00543152: PUSH EDI
// 00543153: PUSH EBP
// 00543154: SUB ESP,0x80
// 0054315a: MOV EBX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x4] (READ)
// 00543161: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00543166: MOV EDX,EAX
// 00543168: MOV ECX,0x12
// 0054316d: SAR EDX,0x1f
// 00543170: IDIV ECX
// 00543172: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00543178: MOV EDX,EAX
// 0054317a: SUB EAX,ECX
// 0054317c: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00543182: TEST EAX,EAX
// 00543184: JL 0x0054339a
//   XREF to: 0054339a (CONDITIONAL_JUMP)
// 0054318a: CMP EAX,0x20000
// 0054318f: JLE 0x00543196
//   XREF to: 00543196 (CONDITIONAL_JUMP)
// 00543191: MOV EAX,0x20000
// 00543196: MOV ESI,dword ptr [0x02f7c8b8]
//   Label: LAB_00543196
//   XREF to: 02f7c8b8 (READ)
// 0054319c: ADD ESI,EAX
// 0054319e: MOV EDI,dword ptr [EBX]
// 005431a0: MOV dword ptr [0x02f7c8b8],ESI
//   XREF to: 02f7c8b8 (WRITE)
// 005431a6: TEST EDI,EDI
// 005431a8: JZ 0x005433a1
//   XREF to: 005433a1 (CONDITIONAL_JUMP)
// 005431ae: CMP EDI,0x1
// 005431b1: JNZ 0x0054338f
//   XREF to: 0054338f (CONDITIONAL_JUMP)
// 005431b7: CMP dword ptr [EBX + 0x4],0x3
// 005431bb: JNZ 0x0054338f
//   XREF to: 0054338f (CONDITIONAL_JUMP)
// 005431c1: CMP dword ptr [EBX + 0x114],0x0
// 005431c8: JL 0x005433c0
//   XREF to: 005433c0 (CONDITIONAL_JUMP)
// 005431ce: MOV EDI,dword ptr [EBX + 0x114]
//   Label: LAB_005431ce
// 005431d4: CMP EDI,dword ptr [EBX + 0x110]
// 005431da: JZ 0x005431fe
//   XREF to: 005431fe (CONDITIONAL_JUMP)
// 005431dc: MOV EBP,0x63ddf1
//   XREF to: 0063ddf1 (DATA)
// 005431e1: MOV EAX,0x8f7
// 005431e6: PUSH 0x63de05
//   XREF to: 0063de05 (DATA)
// 005431eb: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005431f1: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005431f6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005431fb: ADD ESP,0x4
// 005431fe: MOV EDX,dword ptr [EBX + 0x1c]
//   Label: LAB_005431fe
// 00543201: XOR ESI,ESI
// 00543203: TEST EDX,EDX
// 00543205: JLE 0x00543220
//   XREF to: 00543220 (CONDITIONAL_JUMP)
// 00543207: PUSH 0x41200000
//   Label: LAB_00543207
// 0054320c: PUSH ESI
// 0054320d: PUSH EBX
// 0054320e: CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
//   XREF to: 00541c80 (UNCONDITIONAL_CALL)
// 00543213: INC ESI
// 00543214: MOV EDI,dword ptr [EBX + 0x1c]
// 00543217: ADD ESP,0xc
// 0054321a: CMP ESI,EDI
// 0054321c: JL 0x00543207
//   XREF to: 00543207 (CONDITIONAL_JUMP)
// 0054321e: MOV EAX,EAX
// 00543220: PUSH EBX
//   Label: LAB_00543220
// 00543221: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 00543226: MOV EDX,0x7fffffff
// 0054322b: ADD ESP,0x4
// 0054322e: MOV EBP,dword ptr [EBX + 0x1c]
// 00543231: XOR EAX,EAX
// 00543233: TEST EBP,EBP
// 00543235: JLE 0x0054324d
//   XREF to: 0054324d (CONDITIONAL_JUMP)
// 00543237: MOV ESI,EBX
// 00543239: MOV EBP,dword ptr [ESI + 0x68]
//   Label: LAB_00543239
// 0054323c: CMP EDX,EBP
// 0054323e: JLE 0x00543242
//   XREF to: 00543242 (CONDITIONAL_JUMP)
// 00543240: MOV EDX,EBP
// 00543242: INC EAX
//   Label: LAB_00543242
// 00543243: MOV ECX,dword ptr [EBX + 0x1c]
// 00543246: ADD ESI,0x78
// 00543249: CMP EAX,ECX
// 0054324b: JL 0x00543239
//   XREF to: 00543239 (CONDITIONAL_JUMP)
// 0054324d: MOV EDI,dword ptr [0x02f9c0c0]
//   Label: LAB_0054324d
//   XREF to: 02f9c0c0 (READ)
// 00543253: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00543257: XOR ESI,ESI
// 00543259: TEST EDI,EDI
// 0054325b: JLE 0x005432a1
//   XREF to: 005432a1 (CONDITIONAL_JUMP)
// 0054325d: MOV EDI,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 00543262: XOR EBP,EBP
// 00543264: ADD EDI,0x64
// 00543267: MOV ECX,dword ptr [ESP + 0x78]
//   Label: LAB_00543267
//   XREF to: Stack[-0x18] (READ)
// 0054326b: CMP ECX,dword ptr [EBP + 0x2f9c0c4]
//   XREF to: 02f9c0c4 (READ)
// 00543271: JLE 0x005433e8
//   XREF to: 005433e8 (CONDITIONAL_JUMP)
// 00543277: MOV EAX,[0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 0054327c: DEC EAX
// 0054327d: MOV [0x02f9c0c0],EAX
//   XREF to: 02f9c0c0 (WRITE)
// 00543282: SUB EAX,ESI
// 00543284: IMUL EAX,EAX,0x64
// 00543287: PUSH EAX
// 00543288: MOV EAX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 0054328d: PUSH EDI
//   XREF to: 02f9c128 (DATA)
// 0054328e: ADD EAX,EBP
// 00543290: PUSH EAX
//   XREF to: 02f9c0c4 (DATA)
// 00543291: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00543296: ADD ESP,0xc
// 00543299: CMP ESI,dword ptr [0x02f9c0c0]
//   Label: LAB_00543299
//   XREF to: 02f9c0c0 (READ)
// 0054329f: JL 0x00543267
//   XREF to: 00543267 (CONDITIONAL_JUMP)
// 005432a1: MOV EAX,dword ptr [EBX + 0x114]
//   Label: LAB_005432a1
// 005432a7: SHL EAX,0x3
// 005432aa: MOV EDX,EAX
// 005432ac: SHL EAX,0x4
// 005432af: SUB EAX,EDX
// 005432b1: LEA ESI,[EBX + EAX*0x1]
// 005432b4: XOR EDI,EDI
// 005432b6: MOV ESI,dword ptr [ESI + 0x68]
// 005432b9: MOV EDX,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 005432bf: MOV EBP,ESI
// 005432c1: TEST EDX,EDX
// 005432c3: JLE 0x00543400
//   XREF to: 00543400 (CONDITIONAL_JUMP)
// 005432c9: MOV ECX,EDX
// 005432cb: SHL EDX,0x2
// 005432ce: SUB EDX,ECX
// 005432d0: SHL EDX,0x3
// 005432d3: ADD EDX,ECX
// 005432d5: XOR EAX,EAX
// 005432d7: SHL EDX,0x2
// 005432da: CMP EBP,dword ptr [EAX + 0x2f9c0c4]
//   Label: LAB_005432da
//   XREF to: 02f9c0c4 (READ)
//   XREF to: 02f9c128 (READ)
// 005432e0: JNZ 0x005433f4
//   XREF to: 005433f4 (CONDITIONAL_JUMP)
// 005432e6: TEST EDI,EDI
// 005432e8: JL 0x00543400
//   XREF to: 00543400 (CONDITIONAL_JUMP)
// 005432ee: MOV EBP,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 005432f3: ADD EBP,EAX
// 005432f5: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_005432f5
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005432fa: MOV dword ptr [EBP + 0x4],EAX
//   XREF to: 02f9c0c8 (WRITE)
// 005432fd: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00543302: MOV dword ptr [ESP + 0x74],EBP
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 02f9c0c4 (DATA)
// 00543306: MOV EDX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0054330c: MOV dword ptr [EBP + 0x8],EDX
//   XREF to: 02f9c0cc (WRITE)
// 0054330f: MOV ECX,dword ptr [EBX + 0x1c]
// 00543312: XOR EAX,EAX
// 00543314: TEST ECX,ECX
// 00543316: JLE 0x00543340
//   XREF to: 00543340 (CONDITIONAL_JUMP)
// 00543318: MOV EDX,EBX
// 0054331a: MOV ECX,0xb
//   Label: LAB_0054331a
// 0054331f: LEA EDI,[EBP + 0xc]
//   XREF to: 02f9c0d0 (DATA)
// 00543322: LEA ESI,[EDX + 0x6c]
// 00543325: ADD EBP,0x2c
// 00543328: MOVSD.REP ES:EDI,ESI
//   XREF to: 02f9c0d0 (WRITE)
//   XREF to: 02f9c0d4 (WRITE)
//   XREF to: 02f9c0fc (WRITE)
// 0054332a: INC EAX
// 0054332b: MOV ESI,dword ptr [EBX + 0x1c]
// 0054332e: ADD EDX,0x78
// 00543331: CMP EAX,ESI
// 00543333: JL 0x0054331a
//   XREF to: 0054331a (CONDITIONAL_JUMP)
// 00543335: LEA EAX,[EAX]
// 0054333b: LEA EDX,[EDX]
// 0054333e: MOV EBX,EBX
// 00543340: MOV EDI,dword ptr [ESP + 0x74]
//   Label: LAB_00543340
//   XREF to: Stack[-0x1c] (READ)
// 00543344: PUSH EDI
//   XREF to: 02f9c0c4 (DATA)
// 00543345: PUSH EBX
// 00543346: XOR EBP,EBP
// 00543348: CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
//   XREF to: 00543800 (UNCONDITIONAL_CALL)
// 0054334d: ADD ESP,0x8
// 00543350: MOV EAX,dword ptr [EBX + 0x1c]
// 00543353: MOV dword ptr [ESP + 0x6c],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00543357: TEST EAX,EAX
// 00543359: JLE 0x0054338f
//   XREF to: 0054338f (CONDITIONAL_JUMP)
// 0054335b: LEA EAX,[EBX + 0x20]
// 0054335e: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00543362: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_00543362
//   XREF to: Stack[-0x24] (READ)
// 00543366: MOV EDI,dword ptr [EBX + 0x114]
// 0054336c: CMP EAX,EDI
// 0054336e: JNZ 0x00543468
//   XREF to: 00543468 (CONDITIONAL_JUMP)
// 00543374: MOV EDX,dword ptr [ESP + 0x7c]
//   Label: LAB_00543374
//   XREF to: Stack[-0x14] (READ)
// 00543378: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x24] (READ)
// 0054337c: MOV ESI,dword ptr [EBX + 0x1c]
// 0054337f: ADD EDX,0x78
// 00543382: INC ECX
// 00543383: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00543387: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0054338b: CMP ECX,ESI
// 0054338d: JL 0x00543362
//   XREF to: 00543362 (CONDITIONAL_JUMP)
// 0054338f: ADD ESP,0x80
//   Label: LAB_0054338f
// 00543395: POP EBP
// 00543396: POP EDI
// 00543397: POP ESI
// 00543398: POP EBX
// 00543399: RET
// 0054339a: XOR EAX,EAX
//   Label: LAB_0054339a
// 0054339c: JMP 0x00543196
//   XREF to: 00543196 (UNCONDITIONAL_JUMP)
// 005433a1: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_005433a1
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005433a6: PUSH EAX
// 005433a7: MOV dword ptr [EBX + 0x16c],EAX
// 005433ad: CALL core_actor.cpp_setRandomSeed_FUN_0040cb90
//   XREF to: 0040cb90 (UNCONDITIONAL_CALL)
// 005433b2: ADD ESP,0x4
// 005433b5: ADD ESP,0x80
// 005433bb: POP EBP
// 005433bc: POP EDI
// 005433bd: POP ESI
// 005433be: POP EBX
// 005433bf: RET
// 005433c0: MOV ECX,0x63dda6
//   Label: LAB_005433c0
//   XREF to: 0063dda6 (PARAM)
// 005433c5: MOV ESI,0x8f6
// 005433ca: PUSH 0x63ddba
//   XREF to: 0063ddba (DATA)
// 005433cf: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005433d5: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005433db: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005433e0: ADD ESP,0x4
// 005433e3: JMP 0x005431ce
//   XREF to: 005431ce (UNCONDITIONAL_JUMP)
// 005433e8: ADD EDI,0x64
//   Label: LAB_005433e8
// 005433eb: INC ESI
// 005433ec: ADD EBP,0x64
// 005433ef: JMP 0x00543299
//   XREF to: 00543299 (UNCONDITIONAL_JUMP)
// 005433f4: ADD EAX,0x64
//   Label: LAB_005433f4
// 005433f7: INC EDI
// 005433f8: CMP EAX,EDX
// 005433fa: JL 0x005432da
//   XREF to: 005432da (CONDITIONAL_JUMP)
// 00543400: CMP dword ptr [0x02f9c0c0],0x200
//   Label: LAB_00543400
//   XREF to: 02f9c0c0 (READ)
// 0054340a: JL 0x0054342e
//   XREF to: 0054342e (CONDITIONAL_JUMP)
// 0054340c: MOV EBP,0x63d277
//   XREF to: 0063d277 (DATA)
// 00543411: MOV EAX,0x12b
// 00543416: PUSH 0x63d28b
//   XREF to: 0063d28b (DATA)
// 0054341b: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00543421: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00543426: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054342b: ADD ESP,0x4
// 0054342e: MOV EDX,dword ptr [0x02f9c0c0]
//   Label: LAB_0054342e
//   XREF to: 02f9c0c0 (READ)
// 00543434: LEA EAX,[EDX*0x4 + 0x0]
// 0054343b: SUB EAX,EDX
// 0054343d: SHL EAX,0x3
// 00543440: MOV EBP,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 00543445: ADD EAX,EDX
// 00543447: PUSH 0x64
// 00543449: SHL EAX,0x2
// 0054344c: PUSH 0x0
// 0054344e: ADD EBP,EAX
// 00543450: INC EDX
// 00543451: PUSH EBP
// 00543452: MOV dword ptr [0x02f9c0c0],EDX
//   XREF to: 02f9c0c0 (WRITE)
// 00543458: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0054345d: ADD ESP,0xc
// 00543460: MOV dword ptr [EBP],ESI
//   XREF to: 02f9c0c4 (DATA)
// 00543463: JMP 0x005432f5
//   XREF to: 005432f5 (UNCONDITIONAL_JUMP)
// 00543468: IMUL EBP,EDI,0x78
//   Label: LAB_00543468
// 0054346b: MOV ESI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x14] (READ)
// 0054346f: MOV EDX,dword ptr [ESI + 0x48]
// 00543472: MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68]
// 00543476: SUB EBP,EDX
// 00543478: CMP EBP,0x1
// 0054347b: JGE 0x005434a0
//   XREF to: 005434a0 (CONDITIONAL_JUMP)
// 0054347d: MOV ECX,0x63de4b
//   XREF to: 0063de4b (PARAM)
// 00543482: MOV EDI,0x93b
// 00543487: PUSH 0x63de5f
//   XREF to: 0063de5f (DATA)
// 0054348c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00543492: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00543498: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054349d: ADD ESP,0x4
// 005434a0: CMP EBP,0x5
//   Label: LAB_005434a0
// 005434a3: JLE 0x005434aa
//   XREF to: 005434aa (CONDITIONAL_JUMP)
// 005434a5: MOV EBP,0x5
// 005434aa: MOV EAX,dword ptr [ESI + 0x48]
//   Label: LAB_005434aa
// 005434ad: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005434b1: TEST EBP,EBP
//   Label: LAB_005434b1
// 005434b3: JLE 0x00543374
//   XREF to: 00543374 (CONDITIONAL_JUMP)
// 005434b9: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 005434bd: MOV ESI,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 005434c3: XOR EDX,EDX
// 005434c5: TEST ESI,ESI
// 005434c7: JLE 0x00543564
//   XREF to: 00543564 (CONDITIONAL_JUMP)
// 005434cd: XOR EAX,EAX
// 005434cf: IMUL ESI,ESI,0x64
// 005434d2: CMP ECX,dword ptr [EAX + 0x2f9c0c4]
//   Label: LAB_005434d2
//   XREF to: 02f9c0c4 (READ)
//   XREF to: 02f9c128 (READ)
// 005434d8: JNZ 0x00543558
//   XREF to: 00543558 (CONDITIONAL_JUMP)
// 005434de: MOV ESI,EDX
//   Label: LAB_005434de
// 005434e0: TEST EDX,EDX
// 005434e2: JL 0x0054356e
//   XREF to: 0054356e (CONDITIONAL_JUMP)
// 005434e8: IMUL EDX,ESI,0x64
//   Label: LAB_005434e8
// 005434eb: MOV ECX,0x69
// 005434f0: MOV AH,0xf
// 005434f2: ADD EDX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 005434f8: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x90] (DATA)
// 005434fb: MOV byte ptr [ESP + 0x4],AH
//   XREF to: Stack[-0x8c] (WRITE)
// 005434ff: MOV EAX,dword ptr [EDX]
//   XREF to: 02f9c060 (READ)
//   XREF to: 02f9c0c4 (READ)
//   XREF to: 02f9c128 (READ)
// 00543501: MOV dword ptr [ESP + 0x5],EAX
//   XREF to: Stack[-0x8b] (WRITE)
// 00543505: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02f9c064 (READ)
//   XREF to: 02f9c0c8 (READ)
//   XREF to: 02f9c12c (READ)
// 00543508: MOV dword ptr [ESP + 0x9],EAX
//   XREF to: Stack[-0x87] (WRITE)
// 0054350c: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02f9c068 (READ)
//   XREF to: 02f9c0cc (READ)
//   XREF to: 02f9c130 (READ)
// 0054350f: MOV dword ptr [ESP + 0xd],EAX
//   XREF to: Stack[-0x83] (WRITE)
// 00543513: MOV ESI,dword ptr [EBX + 0x1c]
// 00543516: XOR EAX,EAX
// 00543518: TEST ESI,ESI
// 0054351a: JLE 0x00543538
//   XREF to: 00543538 (CONDITIONAL_JUMP)
// 0054351c: IMUL ESI,EAX,0x2c
//   Label: LAB_0054351c
// 0054351f: MOV ECX,0xb
// 00543524: LEA EDI,[ESP + ESI*0x1 + 0x11]
//   XREF to: Stack[-0x7f] (DATA)
// 00543528: LEA ESI,[EDX + 0xc]
//   XREF to: 02f9c0d0 (DATA)
// 0054352b: MOVSD.REP ES:EDI,ESI
//   XREF to: 02f9c0d0 (READ)
//   XREF to: 02f9c0d4 (READ)
//   XREF to: 02f9c0fc (READ)
// 0054352d: INC EAX
// 0054352e: MOV EDI,dword ptr [EBX + 0x1c]
// 00543531: ADD EDX,0x2c
//   XREF to: 02f9c0f0 (PARAM)
// 00543534: CMP EAX,EDI
// 00543536: JL 0x0054351c
//   XREF to: 0054351c (CONDITIONAL_JUMP)
// 00543538: MOV EAX,ESP
//   Label: LAB_00543538
// 0054353a: PUSH EAX
// 0054353b: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x24] (READ)
// 0054353f: PUSH EAX
// 00543540: PUSH EBX
// 00543541: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 00543546: ADD ESP,0xc
// 00543549: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 0054354d: INC EDX
// 0054354e: DEC EBP
// 0054354f: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00543553: JMP 0x005434b1
//   XREF to: 005434b1 (UNCONDITIONAL_JUMP)
// 00543558: ADD EAX,0x64
//   Label: LAB_00543558
// 0054355b: INC EDX
// 0054355c: CMP EAX,ESI
// 0054355e: JL 0x005434d2
//   XREF to: 005434d2 (CONDITIONAL_JUMP)
// 00543564: MOV EDX,0xffffffff
//   Label: LAB_00543564
// 00543569: JMP 0x005434de
//   XREF to: 005434de (UNCONDITIONAL_JUMP)
// 0054356e: MOV EAX,0x63dea0
//   Label: LAB_0054356e
//   XREF to: 0063dea0 (PARAM)
// 00543573: MOV EDX,0x94d
// 00543578: PUSH 0x63deb4
//   XREF to: 0063deb4 (DATA)
// 0054357d: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00543582: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00543588: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054358d: ADD ESP,0x4
// 00543590: JMP 0x005434e8
//   XREF to: 005434e8 (UNCONDITIONAL_JUMP)
