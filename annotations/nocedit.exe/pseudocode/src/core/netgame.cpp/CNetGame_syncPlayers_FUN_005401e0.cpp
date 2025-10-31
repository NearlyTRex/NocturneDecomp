// Name: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
// Address: 005401e0
// Address Range: [[005401e0, 0054054a]]
// Convention: __cdecl
// Signature: int core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame * this_ptr, int sync_stage)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db2d1 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541959 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063d54d
//   TerminatedCString s_CNetGame_syncPlayers_don_0063d561
//   TerminatedCString s_Syncing_stage_d_0063d599
//   TerminatedCString s_Waiting_on_0063d5ab
//   TerminatedCString s_d_0063d5b7
//   TerminatedCString s_Waiting_on_sync_code_d_f_0063d5f8
//   TerminatedCString s_core_netgame_cpp_0063d61f
//   TerminatedCString s_CNetGame_syncPlayers_inv_0063d633
//   double g_TimeoutScale = 0.0000152587890625
//   double g_MaxTimeout = 30
//   double g_SyncTimeout = 0.100000000000000
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   int g_RemoteSyncStage
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   core_netgame.cpp_CNetGame_send_FUN_005411c0
//   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage)

{
  bool bVar1;
  CNetGame *this_ptr_00;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  CNetGame *pCVar4;
  BADSPACEBASE *in_ESP;
  float fStack_174;
  char acStack_84 [4];
  char acStack_80 [104];
  int local_18;
  SNetPlayer *local_14;
  
  this_ptr_00 = this_ptr;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  if (sync_stage < 1) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x337;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::syncPlayers - don't use 0!");
  }
  if (this_ptr->connection_type == 0) {
    return 1;
  }
  this_ptr->network_mode = 2;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  g_LastPingTime = iVar2 / 0x12;
  *(int *)(this_ptr->players[this_ptr->local_player_index].field5_0x38 + 4) = sync_stage;
  if (this_ptr->connection_type == 1) {
    local_18 = g_CurrentGameTime - 0x1e0000;
    local_14 = this_ptr->players;
    while( true ) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe7c,"Syncing stage %d.",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe80,0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Waiting on:",0,0x16);
      bVar1 = true;
      this_ptr = (CNetGame *)0x21;
      iVar2 = 0;
      pCVar4 = this_ptr_00;
      if (0 < this_ptr_00->player_count) {
        do {
          if (*(int *)(pCVar4->players[0].field5_0x38 + 4) < sync_stage) {
            bVar1 = false;
            engine_2d_c_drawText_FUN_00401fd0((char *)(iVar2 * 0x78 + unaff_EBX),0,(int)this_ptr);
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (&stack0xfffffe80,"%d",
                       *(undefined4 *)(pCVar4->players[0].field5_0x38 + 4));
            engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe84,200,0);
            this_ptr = (CNetGame *)(this_ptr->network_data + 3);
          }
          iVar2 = iVar2 + 1;
          pCVar4 = (CNetGame *)(pCVar4->players[0].field5_0x38 + 0x20);
        } while (iVar2 < this_ptr_00->player_count);
      }
      if (bVar1) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr_00);
      fStack_174 = (float)(int)g_CurrentGameTime * (float)g_TimeoutScale;
      if (fStack_174 < 0.0) {
        fStack_174 = 0.0;
      }
      if ((float)g_MaxTimeout < fStack_174) {
        fStack_174 = 30.0;
      }
      if ((float)g_SyncTimeout < fStack_174) {
        unaff_EBX = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)((uint)sync_stage >> 0x18));
        iVar2 = 0;
        pCVar4 = this_ptr_00;
        if (0 < this_ptr_00->player_count) {
          do {
            if (*(int *)(pCVar4->players[0].field5_0x38 + 4) < sync_stage) {
              core_netgame_cpp_CNetGame_send_FUN_005411c0();
            }
            else {
              core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr_00,iVar2,2.0);
            }
            iVar2 = iVar2 + 1;
            pCVar4 = (CNetGame *)(pCVar4->players[0].field5_0x38 + 0x20);
          } while (iVar2 < this_ptr_00->player_count);
        }
      }
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
      if (iVar2 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        return 0;
      }
    }
  }
  else if (this_ptr->connection_type == 2) {
    if (3 < sync_stage) {
      return 1;
    }
    while (g_RemoteSyncStage < sync_stage) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_84,"Waiting on sync code %d from server...",sync_stage);
      engine_2d_c_drawText_FUN_00401fd0(acStack_80,0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
      if (iVar2 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        return 0;
      }
    }
  }
  else {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x3c0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::syncPlayers - invalid mode");
  }
  return 1;
}


// Assembly code:
// 005401e0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
// 005401e1: PUSH ESI
// 005401e2: PUSH EDI
// 005401e3: PUSH EBP
// 005401e4: MOV EBP,ESP
// 005401e6: SUB ESP,0x188
// 005401ec: AND ESP,0xfffffff8
// 005401ef: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005401f2: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005401f7: CMP dword ptr [EBP + 0x18],0x1
//   XREF to: Stack[0x8] (READ)
// 005401fb: JL 0x00540453
//   XREF to: 00540453 (CONDITIONAL_JUMP)
// 00540201: CMP dword ptr [ESI],0x0
//   Label: LAB_00540201
// 00540204: JZ 0x0054047b
//   XREF to: 0054047b (CONDITIONAL_JUMP)
// 0054020a: MOV dword ptr [ESI + 0x4],0x2
// 00540211: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00540216: MOV EDX,EAX
// 00540218: MOV EBX,0x12
// 0054021d: SAR EDX,0x1f
// 00540220: IDIV EBX
// 00540222: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00540228: MOV EDX,EAX
// 0054022a: SUB EAX,ECX
// 0054022c: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00540232: TEST EAX,EAX
// 00540234: JL 0x00540487
//   XREF to: 00540487 (CONDITIONAL_JUMP)
// 0054023a: CMP EAX,0x20000
// 0054023f: JLE 0x00540246
//   XREF to: 00540246 (CONDITIONAL_JUMP)
// 00540241: MOV EAX,0x20000
// 00540246: MOV EBX,dword ptr [0x02f7c8b8]
//   Label: LAB_00540246
//   XREF to: 02f7c8b8 (READ)
// 0054024c: ADD EBX,EAX
// 0054024e: MOV EAX,dword ptr [ESI + 0x114]
// 00540254: SHL EAX,0x3
// 00540257: MOV EDX,EAX
// 00540259: SHL EAX,0x4
// 0054025c: SUB EAX,EDX
// 0054025e: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540261: MOV dword ptr [ESI + EAX*0x1 + 0x5c],EDX
// 00540265: MOV EDI,dword ptr [ESI]
// 00540267: MOV dword ptr [0x02f7c8b8],EBX
//   XREF to: 02f7c8b8 (WRITE)
// 0054026d: CMP EDI,0x1
// 00540270: JNZ 0x0054049c
//   XREF to: 0054049c (CONDITIONAL_JUMP)
// 00540276: LEA EAX,[EBX + 0xffe20000]
// 0054027c: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00540283: LEA EAX,[ESI + 0x20]
// 00540286: MOV dword ptr [ESP + 0x178],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0054028d: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0054028d
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00540292: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00540295: PUSH EBX
// 00540296: PUSH 0x63d599
//   XREF to: 0063d599 (DATA)
// 0054029b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x194] (DATA)
// 0054029f: PUSH EAX
// 005402a0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005402a5: ADD ESP,0xc
// 005402a8: PUSH 0xb
// 005402aa: PUSH 0x0
// 005402ac: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x194] (DATA)
// 005402b0: PUSH EAX
// 005402b1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005402b6: ADD ESP,0xc
// 005402b9: PUSH 0x16
// 005402bb: PUSH 0x0
// 005402bd: PUSH 0x63d5ab
//   XREF to: 0063d5ab (DATA)
// 005402c2: MOV EDI,0x1
// 005402c7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005402cc: MOV EAX,0x21
// 005402d1: ADD ESP,0xc
// 005402d4: MOV EDX,dword ptr [ESI + 0x1c]
// 005402d7: MOV dword ptr [ESP + 0x17c],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005402de: MOV dword ptr [ESP + 0x180],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005402e5: XOR EDI,EDI
// 005402e7: TEST EDX,EDX
// 005402e9: JLE 0x0054035d
//   XREF to: 0054035d (CONDITIONAL_JUMP)
// 005402eb: MOV EBX,ESI
// 005402ed: IMUL EAX,EDI,0x78
//   Label: LAB_005402ed
// 005402f0: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005402f3: CMP ECX,dword ptr [EBX + 0x5c]
// 005402f6: JLE 0x00540352
//   XREF to: 00540352 (CONDITIONAL_JUMP)
// 005402f8: MOV ECX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x18] (READ)
// 005402ff: XOR EDX,EDX
// 00540301: PUSH ECX
// 00540302: MOV dword ptr [ESP + 0x180],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00540309: PUSH EDX
// 0054030a: ADD EAX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x20] (READ)
// 00540311: PUSH EAX
// 00540312: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00540317: ADD ESP,0xc
// 0054031a: MOV ECX,dword ptr [EBX + 0x5c]
// 0054031d: PUSH ECX
// 0054031e: PUSH 0x63d5b7
//   XREF to: 0063d5b7 (DATA)
// 00540323: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x194] (DATA)
// 00540327: PUSH EAX
// 00540328: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054032d: ADD ESP,0xc
// 00540330: MOV EAX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x18] (READ)
// 00540337: PUSH EAX
// 00540338: PUSH 0xc8
// 0054033d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x194] (DATA)
// 00540341: PUSH EAX
// 00540342: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00540347: ADD ESP,0xc
// 0054034a: ADD dword ptr [ESP + 0x180],0xb
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00540352: INC EDI
//   Label: LAB_00540352
// 00540353: MOV ECX,dword ptr [ESI + 0x1c]
// 00540356: ADD EBX,0x78
// 00540359: CMP EDI,ECX
// 0054035b: JL 0x005402ed
//   XREF to: 005402ed (CONDITIONAL_JUMP)
// 0054035d: MOV EBX,dword ptr [ESP + 0x17c]
//   Label: LAB_0054035d
//   XREF to: Stack[-0x1c] (READ)
// 00540364: TEST EBX,EBX
// 00540366: JNZ 0x0054053f
//   XREF to: 0054053f (CONDITIONAL_JUMP)
// 0054036c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00540371: PUSH ESI
// 00540372: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 00540377: ADD ESP,0x4
// 0054037a: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 0054037f: MOV EDI,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x24] (READ)
// 00540386: SUB EAX,EDI
// 00540388: MOV dword ptr [ESP + 0x184],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054038f: FILD dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x14] (READ)
// 00540396: FMUL double ptr [0x0063d65d]
//   XREF to: 0063d65d (READ)
// 0054039c: FST float ptr [ESP]
//   XREF to: Stack[-0x198] (DATA)
// 0054039f: FLDZ
// 005403a1: FCOMPP
// 005403a3: FNSTSW AX
// 005403a5: SAHF
// 005403a6: JBE 0x005403ab
//   XREF to: 005403ab (CONDITIONAL_JUMP)
// 005403a8: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x198] (DATA)
// 005403ab: FLD float ptr [ESP]
//   Label: LAB_005403ab
//   XREF to: Stack[-0x198] (DATA)
// 005403ae: FCOMP double ptr [0x0063d665]
//   XREF to: 0063d665 (READ)
// 005403b4: FNSTSW AX
// 005403b6: SAHF
// 005403b7: JBE 0x005403c0
//   XREF to: 005403c0 (CONDITIONAL_JUMP)
// 005403b9: MOV dword ptr [ESP],0x41f00000
//   XREF to: Stack[-0x198] (DATA)
// 005403c0: FLD float ptr [ESP]
//   Label: LAB_005403c0
//   XREF to: Stack[-0x198] (DATA)
// 005403c3: FCOMP double ptr [0x0063d66d]
//   XREF to: 0063d66d (READ)
// 005403c9: FNSTSW AX
// 005403cb: SAHF
// 005403cc: JBE 0x0054042d
//   XREF to: 0054042d (CONDITIONAL_JUMP)
// 005403ce: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 005403d3: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005403da: MOV AH,0x8
// 005403dc: MOV ECX,0x9
// 005403e1: MOV byte ptr [ESP + 0x16c],AH
//   XREF to: Stack[-0x2c] (WRITE)
// 005403e8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005403eb: MOV dword ptr [ESP + 0x168],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005403f2: MOV dword ptr [ESP + 0x16d],EAX
//   XREF to: Stack[-0x2b] (WRITE)
// 005403f9: MOV EDI,dword ptr [ESI + 0x1c]
// 005403fc: XOR EBX,EBX
// 005403fe: TEST EDI,EDI
// 00540400: JLE 0x0054042d
//   XREF to: 0054042d (CONDITIONAL_JUMP)
// 00540402: MOV EDI,ESI
// 00540404: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_00540404
//   XREF to: Stack[0x8] (READ)
// 00540407: CMP EDX,dword ptr [EDI + 0x5c]
// 0054040a: JLE 0x0054048e
//   XREF to: 0054048e (CONDITIONAL_JUMP)
// 00540410: LEA EAX,[ESP + 0x168]
//   XREF to: Stack[-0x30] (DATA)
// 00540417: PUSH EAX
// 00540418: PUSH EBX
// 00540419: PUSH ESI
// 0054041a: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 0054041f: ADD ESP,0xc
//   Label: LAB_0054041f
// 00540422: INC EBX
// 00540423: MOV ECX,dword ptr [ESI + 0x1c]
// 00540426: ADD EDI,0x78
// 00540429: CMP EBX,ECX
// 0054042b: JL 0x00540404
//   XREF to: 00540404 (CONDITIONAL_JUMP)
// 0054042d: PUSH 0x1
//   Label: LAB_0054042d
// 0054042f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00540434: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00540435: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00540437: CALL dword ptr [EBX + 0x4]
// 0054043a: ADD ESP,0x8
// 0054043d: TEST EAX,EAX
// 0054043f: JZ 0x0054028d
//   XREF to: 0054028d (CONDITIONAL_JUMP)
// 00540445: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0054044a: XOR EAX,EAX
// 0054044c: MOV ESP,EBP
//   Label: caseD_e
// 0054044e: POP EBP
// 0054044f: POP EDI
// 00540450: POP ESI
// 00540451: POP EBX
// 00540452: RET
// 00540453: MOV ECX,0x63d54d
//   Label: LAB_00540453
//   XREF to: 0063d54d (PARAM)
// 00540458: MOV EBX,0x337
// 0054045d: PUSH 0x63d561
//   XREF to: 0063d561 (DATA)
// 00540462: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00540468: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0054046e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00540473: ADD ESP,0x4
// 00540476: JMP 0x00540201
//   XREF to: 00540201 (UNCONDITIONAL_JUMP)
// 0054047b: MOV EAX,0x1
//   Label: LAB_0054047b
// 00540480: MOV ESP,EBP
// 00540482: POP EBP
// 00540483: POP EDI
// 00540484: POP ESI
// 00540485: POP EBX
// 00540486: RET
// 00540487: XOR EAX,EAX
//   Label: LAB_00540487
// 00540489: JMP 0x00540246
//   XREF to: 00540246 (UNCONDITIONAL_JUMP)
// 0054048e: PUSH 0x40000000
//   Label: LAB_0054048e
// 00540493: PUSH EBX
// 00540494: PUSH ESI
// 00540495: CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
//   XREF to: 00541c80 (UNCONDITIONAL_CALL)
// 0054049a: JMP 0x0054041f
//   XREF to: 0054041f (UNCONDITIONAL_JUMP)
// 0054049c: CMP EDI,0x2
//   Label: LAB_0054049c
// 0054049f: JNZ 0x0054051c
//   XREF to: 0054051c (CONDITIONAL_JUMP)
// 005404a5: CMP EDX,0x4
// 005404a8: JGE 0x0054047b
//   XREF to: 0054047b (CONDITIONAL_JUMP)
// 005404aa: XOR EDI,EDI
// 005404ac: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_005404ac
//   XREF to: Stack[0x8] (READ)
// 005404af: CMP EDX,dword ptr [0x02f7c8c0]
//   XREF to: 02f7c8c0 (READ)
// 005404b5: JLE 0x0054053f
//   XREF to: 0054053f (CONDITIONAL_JUMP)
// 005404bb: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005404c0: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005404c3: PUSH ECX
// 005404c4: PUSH 0x63d5f8
//   XREF to: 0063d5f8 (DATA)
// 005404c9: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x94] (DATA)
// 005404d0: PUSH EAX
// 005404d1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005404d6: ADD ESP,0xc
// 005404d9: PUSH 0xb
// 005404db: PUSH EDI
// 005404dc: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x94] (DATA)
// 005404e3: PUSH EAX
// 005404e4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005404e9: ADD ESP,0xc
// 005404ec: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005404f1: PUSH ESI
// 005404f2: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 005404f7: ADD ESP,0x4
// 005404fa: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005404ff: PUSH 0x1
// 00540501: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00540503: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00540504: CALL dword ptr [EBX + 0x4]
// 00540507: ADD ESP,0x8
// 0054050a: TEST EAX,EAX
// 0054050c: JZ 0x005404ac
//   XREF to: 005404ac (CONDITIONAL_JUMP)
// 0054050e: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00540513: XOR EAX,EAX
// 00540515: MOV ESP,EBP
// 00540517: POP EBP
// 00540518: POP EDI
// 00540519: POP ESI
// 0054051a: POP EBX
// 0054051b: RET
// 0054051c: MOV EDX,0x63d61f
//   Label: LAB_0054051c
//   XREF to: 0063d61f (PARAM)
// 00540521: MOV ECX,0x3c0
// 00540526: PUSH 0x63d633
//   XREF to: 0063d633 (DATA)
// 0054052b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00540531: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00540537: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054053c: ADD ESP,0x4
// 0054053f: MOV EAX,0x1
//   Label: LAB_0054053f
// 00540544: MOV ESP,EBP
// 00540546: POP EBP
// 00540547: POP EDI
// 00540548: POP ESI
// 00540549: POP EBX
// 0054054a: RET
