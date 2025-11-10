// Name: core_netgame.cpp_CNetGame_FUN_0053fd00
// Address: 0053fd00
// Address Range: [[0053fd00, 005401d2]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db42c [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e2f10 (004e2f10) at 004e2f8a [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e2fc0 (004e2fc0) at 004e3057 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053f780 (0053f780) at 0053f806 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053f830 (0053f830) at 0053f837 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540f43 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 005416dc [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToHost_FUN_0053f860 (0053f860) at 0053f880 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053f912 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Disconnecting_from_serve_0063d4a7
//   TerminatedCString s_Couldn_t_contact_server__0063d4c4
//   TerminatedCString s_Disconnecting_0063d4eb
//   TerminatedCString s_Couldn_t_connect_to_all__0063d4fc
//   double DOUBLE_0063d52d = 0.0000152587890625
//   float FLOAT_0063d535 = 1000
//   double DOUBLE_0063d53d = 30
//   double DOUBLE_0063d545 = 0.100000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   int g_RemoteSyncStage
//   undefined4 DAT_02f7c8c4
//   int g_ChatHistoryCount
//   undefined4 DAT_02f98ad0
// Function calls:
//   core_netgame.cpp_CNetGame_FUN_00543930
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame* param_1, undefined4
   param_2) */

void __cdecl core_netgame_cpp_CNetGame_FUN_0053fd00(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000008;
  float fVar5;
  float local_14;
  
  if (in_stack_00000008 != 0) {
    if (this_ptr->connection_type == 2) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Disconnecting from server...");
      iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      iVar1 = iVar1 / 0x12;
      iVar2 = iVar1 - g_LastPingTime;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x20000 < iVar2) {
        iVar2 = 0x20000;
      }
      uVar3 = g_CurrentGameTime + iVar2;
      uVar4 = uVar3 - 0x1e0000;
      g_LastPingTime = iVar1;
      g_CurrentGameTime = uVar3;
      if (*(int *)this_ptr->padding < 0) {
LAB_0053fe74:
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      else {
        do {
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
          fVar5 = (float)(int)(g_CurrentGameTime - uVar3) * (float)DOUBLE_0063d52d;
          if (fVar5 < 0.0) {
            fVar5 = 0.0;
          }
          g_LastPingTime = iVar1;
          if (((float)DOUBLE_0063d53d < fVar5) || (0x40400000 < (int)fVar5)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Couldn't contact server to disconnect.");
            goto LAB_0053fe74;
          }
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,fVar5 * FLOAT_0063d535,3000.0);
          while( true ) {
            fVar5 = (float)(int)(g_CurrentGameTime - uVar4) * (float)DOUBLE_0063d52d;
            if (fVar5 < 0.0) {
              fVar5 = 0.0;
            }
            if ((float)DOUBLE_0063d53d < fVar5) {
              fVar5 = 30.0;
            }
            if ((float)DOUBLE_0063d545 <= fVar5) break;
            iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
            iVar2 = iVar1 / 0x12 - g_LastPingTime;
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            else if (0x20000 < iVar2) {
              iVar2 = 0x20000;
            }
            g_CurrentGameTime = g_CurrentGameTime + iVar2;
            g_LastPingTime = iVar1 / 0x12;
          }
          core_netgame_cpp_CNetGame_FUN_00543930();
          uVar4 = g_CurrentGameTime;
          core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
        } while (-1 < *(int *)this_ptr->padding);
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
    }
    if (this_ptr->connection_type == 1) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Disconnecting...");
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
      uVar4 = g_CurrentGameTime - 0x1e0000;
      g_LastPingTime = iVar1;
      if (this_ptr->player_count < 2) {
LAB_00540097:
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      else {
        do {
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
          fVar5 = (float)(int)(g_CurrentGameTime - (int)this_ptr->players) * (float)DOUBLE_0063d52d;
          if (fVar5 < 0.0) {
            fVar5 = 0.0;
          }
          g_LastPingTime = iVar1;
          if (((float)DOUBLE_0063d53d < fVar5) || (0x40a00000 < (int)fVar5)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Couldn't connect to all clients to disconnect.");
            goto LAB_00540097;
          }
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,fVar5 * FLOAT_0063d535,5000.0);
          while( true ) {
            local_14 = (float)(int)(g_CurrentGameTime - uVar4) * (float)DOUBLE_0063d52d;
            if (local_14 < 0.0) {
              local_14 = 0.0;
            }
            if ((float)DOUBLE_0063d53d < local_14) {
              local_14 = 30.0;
            }
            if ((float)DOUBLE_0063d545 <= local_14) break;
            iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
            iVar1 = iVar2 / 0x12 - g_LastPingTime;
            if (iVar1 < 0) {
              iVar1 = 0;
            }
            else if (0x20000 < iVar1) {
              iVar1 = 0x20000;
            }
            g_CurrentGameTime = g_CurrentGameTime + iVar1;
            g_LastPingTime = iVar2 / 0x12;
          }
          iVar1 = 0;
          if (0 < this_ptr->player_count) {
            do {
              if (iVar1 != this_ptr->local_player_index) {
                core_netgame_cpp_CNetGame_FUN_00543930();
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < this_ptr->player_count);
          }
          uVar4 = g_CurrentGameTime;
          core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
        } while (1 < this_ptr->player_count);
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
    }
  }
  this_ptr->network_mode = 0;
  this_ptr->local_player_index = -1;
  this_ptr->padding[0] = -1;
  this_ptr->padding[1] = -1;
  this_ptr->padding[2] = -1;
  this_ptr->padding[3] = -1;
  this_ptr->field7_0x118[0] = '\0';
  this_ptr->connection_type = 0;
  g_ChatHistoryCount = 0;
  DAT_02f98ad0 = 0;
  g_RemoteSyncStage = 0;
  this_ptr->player_count = 0;
  DAT_02f7c8c4 = 0;
  this_ptr->field7_0x118[0x50] = '\0';
  this_ptr->field7_0x118[0x51] = '\0';
  this_ptr->field7_0x118[0x52] = '\0';
  this_ptr->field7_0x118[0x53] = '\0';
  return;
}


// Assembly code:
// 0053fd00: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_FUN_0053fd00
// 0053fd01: PUSH ESI
// 0053fd02: PUSH EDI
// 0053fd03: PUSH EBP
// 0053fd04: MOV EBP,ESP
// 0053fd06: SUB ESP,0x20
// 0053fd09: AND ESP,0xfffffff8
// 0053fd0c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053fd0f: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 0053fd13: JZ 0x0053fd23
//   XREF to: 0053fd23 (CONDITIONAL_JUMP)
// 0053fd15: CMP dword ptr [ESI],0x2
// 0053fd18: JZ 0x0053fd75
//   XREF to: 0053fd75 (CONDITIONAL_JUMP)
// 0053fd1a: CMP dword ptr [ESI],0x1
//   Label: LAB_0053fd1a
// 0053fd1d: JZ 0x0053ff94
//   XREF to: 0053ff94 (CONDITIONAL_JUMP)
// 0053fd23: MOV dword ptr [ESI + 0x4],0x0
//   Label: LAB_0053fd23
// 0053fd2a: MOV dword ptr [ESI + 0x114],0xffffffff
// 0053fd34: MOV dword ptr [ESI + 0x110],0xffffffff
// 0053fd3e: MOV byte ptr [ESI + 0x118],0x0
// 0053fd45: XOR EDX,EDX
// 0053fd47: MOV dword ptr [ESI],0x0
// 0053fd4d: MOV dword ptr [0x02f7c8cc],EDX
//   XREF to: 02f7c8cc (WRITE)
// 0053fd53: MOV dword ptr [0x02f98ad0],EDX
//   XREF to: 02f98ad0 (WRITE)
// 0053fd59: MOV dword ptr [0x02f7c8c0],EDX
//   XREF to: 02f7c8c0 (WRITE)
// 0053fd5f: MOV dword ptr [ESI + 0x1c],EDX
// 0053fd62: MOV dword ptr [0x02f7c8c4],EDX
//   XREF to: 02f7c8c4 (WRITE)
// 0053fd68: MOV dword ptr [ESI + 0x168],EDX
// 0053fd6e: MOV ESP,EBP
// 0053fd70: POP EBP
// 0053fd71: POP EDI
// 0053fd72: POP ESI
// 0053fd73: POP EBX
// 0053fd74: RET
// 0053fd75: PUSH 0x63d4a7
//   Label: LAB_0053fd75
//   XREF to: 0063d4a7 (DATA)
// 0053fd7a: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053fd80: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0053fd81: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 0053fd86: ADD ESP,0x8
// 0053fd89: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0053fd8e: MOV EDX,EAX
// 0053fd90: MOV EBX,0x12
// 0053fd95: SAR EDX,0x1f
// 0053fd98: IDIV EBX
// 0053fd9a: MOV EDI,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 0053fda0: MOV EDX,EAX
// 0053fda2: SUB EAX,EDI
// 0053fda4: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 0053fdaa: TEST EAX,EAX
// 0053fdac: JL 0x0053fe88
//   XREF to: 0053fe88 (CONDITIONAL_JUMP)
// 0053fdb2: CMP EAX,0x20000
// 0053fdb7: JLE 0x0053fdbe
//   XREF to: 0053fdbe (CONDITIONAL_JUMP)
// 0053fdb9: MOV EAX,0x20000
// 0053fdbe: MOV EDX,dword ptr [0x02f7c8b8]
//   Label: LAB_0053fdbe
//   XREF to: 02f7c8b8 (READ)
// 0053fdc4: ADD EDX,EAX
// 0053fdc6: MOV ECX,dword ptr [ESI + 0x110]
// 0053fdcc: MOV EDI,EDX
// 0053fdce: MOV dword ptr [0x02f7c8b8],EDX
//   XREF to: 02f7c8b8 (WRITE)
// 0053fdd4: LEA EBX,[EDX + 0xffe20000]
// 0053fdda: TEST ECX,ECX
// 0053fddc: JL 0x0053fe74
//   XREF to: 0053fe74 (CONDITIONAL_JUMP)
// 0053fde2: LEA EAX,[ESI + 0x20]
// 0053fde5: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0053fde9: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_0053fde9
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0053fdee: MOV EDX,EAX
// 0053fdf0: MOV ECX,0x12
// 0053fdf5: SAR EDX,0x1f
// 0053fdf8: IDIV ECX
// 0053fdfa: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 0053fe00: MOV EDX,EAX
// 0053fe02: SUB EAX,ECX
// 0053fe04: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 0053fe0a: TEST EAX,EAX
// 0053fe0c: JL 0x0053fe8f
//   XREF to: 0053fe8f (CONDITIONAL_JUMP)
// 0053fe12: CMP EAX,0x20000
// 0053fe17: JLE 0x0053fe1e
//   XREF to: 0053fe1e (CONDITIONAL_JUMP)
// 0053fe19: MOV EAX,0x20000
// 0053fe1e: MOV EDX,dword ptr [0x02f7c8b8]
//   Label: LAB_0053fe1e
//   XREF to: 02f7c8b8 (READ)
// 0053fe24: ADD EDX,EAX
// 0053fe26: MOV EAX,EDX
// 0053fe28: SUB EAX,EDI
// 0053fe2a: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053fe2e: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0053fe32: FMUL double ptr [0x0063d52d]
//   XREF to: 0063d52d (READ)
// 0053fe38: MOV dword ptr [0x02f7c8b8],EDX
//   XREF to: 02f7c8b8 (WRITE)
// 0053fe3e: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 0053fe42: FLDZ
// 0053fe44: FCOMPP
// 0053fe46: FNSTSW AX
// 0053fe48: SAHF
// 0053fe49: JBE 0x0053fe51
//   XREF to: 0053fe51 (CONDITIONAL_JUMP)
// 0053fe4b: XOR ECX,ECX
// 0053fe4d: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0053fe51: FLD float ptr [ESP + 0xc]
//   Label: LAB_0053fe51
//   XREF to: Stack[-0x24] (READ)
// 0053fe55: FCOMP double ptr [0x0063d53d]
//   XREF to: 0063d53d (READ)
// 0053fe5b: FNSTSW AX
// 0053fe5d: SAHF
// 0053fe5e: JBE 0x0053fe93
//   XREF to: 0053fe93 (CONDITIONAL_JUMP)
// 0053fe60: PUSH 0x63d4c4
//   Label: LAB_0053fe60
//   XREF to: 0063d4c4 (DATA)
// 0053fe65: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053fe6b: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0053fe6c: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053fe71: ADD ESP,0x8
// 0053fe74: MOV EDI,dword ptr [0x00678a60]
//   Label: LAB_0053fe74
//   XREF to: 00678a60 (READ)
// 0053fe7a: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053fe7b: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0053fe80: ADD ESP,0x4
// 0053fe83: JMP 0x0053fd1a
//   XREF to: 0053fd1a (UNCONDITIONAL_JUMP)
// 0053fe88: XOR EAX,EAX
//   Label: LAB_0053fe88
// 0053fe8a: JMP 0x0053fdbe
//   XREF to: 0053fdbe (UNCONDITIONAL_JUMP)
// 0053fe8f: XOR EAX,EAX
//   Label: LAB_0053fe8f
// 0053fe91: JMP 0x0053fe1e
//   XREF to: 0053fe1e (UNCONDITIONAL_JUMP)
// 0053fe93: CMP dword ptr [ESP + 0xc],0x40400000
//   Label: LAB_0053fe93
//   XREF to: Stack[-0x24] (READ)
// 0053fe9b: JG 0x0053fe60
//   XREF to: 0053fe60 (CONDITIONAL_JUMP)
// 0053fe9d: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0053fea1: FMUL float ptr [0x0063d535]
//   XREF to: 0063d535 (READ)
// 0053fea7: PUSH 0x453b8000
// 0053feac: SUB ESP,0x4
// 0053feaf: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053feb5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0053feb8: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053feb9: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 0053febe: ADD ESP,0xc
// 0053fec1: MOV EAX,[0x02f7c8b8]
//   Label: LAB_0053fec1
//   XREF to: 02f7c8b8 (READ)
// 0053fec6: SUB EAX,EBX
// 0053fec8: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053fecc: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0053fed0: FMUL double ptr [0x0063d52d]
//   XREF to: 0063d52d (READ)
// 0053fed6: FST float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0053fed9: FLDZ
// 0053fedb: FCOMPP
// 0053fedd: FNSTSW AX
// 0053fedf: SAHF
// 0053fee0: JBE 0x0053fee7
//   XREF to: 0053fee7 (CONDITIONAL_JUMP)
// 0053fee2: XOR EAX,EAX
// 0053fee4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 0053fee7: FLD float ptr [ESP]
//   Label: LAB_0053fee7
//   XREF to: Stack[-0x30] (DATA)
// 0053feea: FCOMP double ptr [0x0063d53d]
//   XREF to: 0063d53d (READ)
// 0053fef0: FNSTSW AX
// 0053fef2: SAHF
// 0053fef3: JBE 0x0053fefc
//   XREF to: 0053fefc (CONDITIONAL_JUMP)
// 0053fef5: MOV dword ptr [ESP],0x41f00000
//   XREF to: Stack[-0x30] (DATA)
// 0053fefc: FLD float ptr [ESP]
//   Label: LAB_0053fefc
//   XREF to: Stack[-0x30] (DATA)
// 0053feff: FCOMP double ptr [0x0063d545]
//   XREF to: 0063d545 (READ)
// 0053ff05: FNSTSW AX
// 0053ff07: SAHF
// 0053ff08: JNC 0x0053ff49
//   XREF to: 0053ff49 (CONDITIONAL_JUMP)
// 0053ff0a: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0053ff0f: MOV EDX,EAX
// 0053ff11: MOV ECX,0x12
// 0053ff16: SAR EDX,0x1f
// 0053ff19: IDIV ECX
// 0053ff1b: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 0053ff21: MOV EDX,EAX
// 0053ff23: SUB EAX,ECX
// 0053ff25: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 0053ff2b: TEST EAX,EAX
// 0053ff2d: JL 0x0053ff3e
//   XREF to: 0053ff3e (CONDITIONAL_JUMP)
// 0053ff2f: CMP EAX,0x20000
// 0053ff34: JG 0x0053ff42
//   XREF to: 0053ff42 (CONDITIONAL_JUMP)
// 0053ff36: ADD dword ptr [0x02f7c8b8],EAX
//   Label: LAB_0053ff36
//   XREF to: 02f7c8b8 (READ_WRITE)
// 0053ff3c: JMP 0x0053fec1
//   XREF to: 0053fec1 (UNCONDITIONAL_JUMP)
// 0053ff3e: XOR EAX,EAX
//   Label: LAB_0053ff3e
// 0053ff40: JMP 0x0053ff36
//   XREF to: 0053ff36 (UNCONDITIONAL_JUMP)
// 0053ff42: MOV EAX,0x20000
//   Label: LAB_0053ff42
// 0053ff47: JMP 0x0053ff36
//   XREF to: 0053ff36 (UNCONDITIONAL_JUMP)
// 0053ff49: IMUL EAX,dword ptr [ESI + 0x110],0x78
//   Label: LAB_0053ff49
// 0053ff50: ADD EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0053ff54: PUSH 0x1
// 0053ff56: ADD EAX,0x1c
// 0053ff59: PUSH EAX
// 0053ff5a: PUSH ESI
// 0053ff5b: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 0053ff60: ADD ESP,0xc
// 0053ff63: PUSH ESI
// 0053ff64: MOV EBX,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 0053ff6a: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 0053ff6f: MOV ECX,dword ptr [ESI + 0x110]
// 0053ff75: ADD ESP,0x4
// 0053ff78: TEST ECX,ECX
// 0053ff7a: JGE 0x0053fde9
//   XREF to: 0053fde9 (CONDITIONAL_JUMP)
// 0053ff80: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053ff86: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053ff87: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0053ff8c: ADD ESP,0x4
// 0053ff8f: JMP 0x0053fd1a
//   XREF to: 0053fd1a (UNCONDITIONAL_JUMP)
// 0053ff94: PUSH 0x63d4eb
//   Label: LAB_0053ff94
//   XREF to: 0063d4eb (DATA)
// 0053ff99: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ff9f: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0053ffa0: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 0053ffa5: ADD ESP,0x8
// 0053ffa8: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0053ffad: MOV EDX,EAX
// 0053ffaf: MOV EBX,0x12
// 0053ffb4: SAR EDX,0x1f
// 0053ffb7: IDIV EBX
// 0053ffb9: MOV EDI,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 0053ffbf: MOV EDX,EAX
// 0053ffc1: SUB EAX,EDI
// 0053ffc3: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 0053ffc9: TEST EAX,EAX
// 0053ffcb: JL 0x005400ab
//   XREF to: 005400ab (CONDITIONAL_JUMP)
// 0053ffd1: CMP EAX,0x20000
// 0053ffd6: JLE 0x0053ffdd
//   XREF to: 0053ffdd (CONDITIONAL_JUMP)
// 0053ffd8: MOV EAX,0x20000
// 0053ffdd: MOV EDX,dword ptr [0x02f7c8b8]
//   Label: LAB_0053ffdd
//   XREF to: 02f7c8b8 (READ)
// 0053ffe3: ADD EDX,EAX
// 0053ffe5: MOV ECX,dword ptr [ESI + 0x1c]
// 0053ffe8: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0053ffec: MOV dword ptr [0x02f7c8b8],EDX
//   XREF to: 02f7c8b8 (WRITE)
// 0053fff2: LEA EBX,[EDX + 0xffe20000]
// 0053fff8: CMP ECX,0x1
// 0053fffb: JLE 0x00540097
//   XREF to: 00540097 (CONDITIONAL_JUMP)
// 00540001: LEA EAX,[ESI + 0x20]
// 00540004: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00540008: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_00540008
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0054000d: MOV EDX,EAX
// 0054000f: MOV ECX,0x12
// 00540014: SAR EDX,0x1f
// 00540017: IDIV ECX
// 00540019: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 0054001f: MOV EDX,EAX
// 00540021: SUB EAX,ECX
// 00540023: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00540029: TEST EAX,EAX
// 0054002b: JL 0x005400b2
//   XREF to: 005400b2 (CONDITIONAL_JUMP)
// 00540031: CMP EAX,0x20000
// 00540036: JLE 0x0054003d
//   XREF to: 0054003d (CONDITIONAL_JUMP)
// 00540038: MOV EAX,0x20000
// 0054003d: MOV EDI,dword ptr [0x02f7c8b8]
//   Label: LAB_0054003d
//   XREF to: 02f7c8b8 (READ)
// 00540043: ADD EDI,EAX
// 00540045: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00540049: MOV EAX,EDI
// 0054004b: SUB EAX,EDX
// 0054004d: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00540051: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00540055: FMUL double ptr [0x0063d52d]
//   XREF to: 0063d52d (READ)
// 0054005b: MOV dword ptr [0x02f7c8b8],EDI
//   XREF to: 02f7c8b8 (WRITE)
// 00540061: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 00540065: FLDZ
// 00540067: FCOMPP
// 00540069: FNSTSW AX
// 0054006b: SAHF
// 0054006c: JBE 0x00540074
//   XREF to: 00540074 (CONDITIONAL_JUMP)
// 0054006e: XOR ECX,ECX
// 00540070: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00540074: FLD float ptr [ESP + 0x4]
//   Label: LAB_00540074
//   XREF to: Stack[-0x2c] (READ)
// 00540078: FCOMP double ptr [0x0063d53d]
//   XREF to: 0063d53d (READ)
// 0054007e: FNSTSW AX
// 00540080: SAHF
// 00540081: JBE 0x005400b6
//   XREF to: 005400b6 (CONDITIONAL_JUMP)
// 00540083: PUSH 0x63d4fc
//   Label: LAB_00540083
//   XREF to: 0063d4fc (DATA)
// 00540088: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0054008e: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0054008f: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00540094: ADD ESP,0x8
// 00540097: MOV ECX,dword ptr [0x00678a60]
//   Label: LAB_00540097
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0054009d: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0054009e: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 005400a3: ADD ESP,0x4
// 005400a6: JMP 0x0053fd23
//   XREF to: 0053fd23 (UNCONDITIONAL_JUMP)
// 005400ab: XOR EAX,EAX
//   Label: LAB_005400ab
// 005400ad: JMP 0x0053ffdd
//   XREF to: 0053ffdd (UNCONDITIONAL_JUMP)
// 005400b2: XOR EAX,EAX
//   Label: LAB_005400b2
// 005400b4: JMP 0x0054003d
//   XREF to: 0054003d (UNCONDITIONAL_JUMP)
// 005400b6: CMP dword ptr [ESP + 0x4],0x40a00000
//   Label: LAB_005400b6
//   XREF to: Stack[-0x2c] (READ)
// 005400be: JG 0x00540083
//   XREF to: 00540083 (CONDITIONAL_JUMP)
// 005400c0: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005400c4: FMUL float ptr [0x0063d535]
//   XREF to: 0063d535 (READ)
// 005400ca: PUSH 0x459c4000
// 005400cf: SUB ESP,0x4
// 005400d2: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005400d7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 005400da: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005400db: MOV EDI,0x20000
// 005400e0: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 005400e5: ADD ESP,0xc
// 005400e8: MOV EAX,[0x02f7c8b8]
//   Label: LAB_005400e8
//   XREF to: 02f7c8b8 (READ)
// 005400ed: SUB EAX,EBX
// 005400ef: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005400f3: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005400f7: FMUL double ptr [0x0063d52d]
//   XREF to: 0063d52d (READ)
// 005400fd: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 00540101: FLDZ
// 00540103: FCOMPP
// 00540105: FNSTSW AX
// 00540107: SAHF
// 00540108: JBE 0x00540110
//   XREF to: 00540110 (CONDITIONAL_JUMP)
// 0054010a: XOR EAX,EAX
// 0054010c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00540110: FLD float ptr [ESP + 0x8]
//   Label: LAB_00540110
//   XREF to: Stack[-0x28] (READ)
// 00540114: FCOMP double ptr [0x0063d53d]
//   XREF to: 0063d53d (READ)
// 0054011a: FNSTSW AX
// 0054011c: SAHF
// 0054011d: JBE 0x00540127
//   XREF to: 00540127 (CONDITIONAL_JUMP)
// 0054011f: MOV dword ptr [ESP + 0x8],0x41f00000
//   XREF to: Stack[-0x28] (WRITE)
// 00540127: FLD float ptr [ESP + 0x8]
//   Label: LAB_00540127
//   XREF to: Stack[-0x28] (READ)
// 0054012b: FCOMP double ptr [0x0063d545]
//   XREF to: 0063d545 (READ)
// 00540131: FNSTSW AX
// 00540133: SAHF
// 00540134: JNC 0x00540175
//   XREF to: 00540175 (CONDITIONAL_JUMP)
// 00540136: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0054013b: MOV EDX,EAX
// 0054013d: MOV ECX,0x12
// 00540142: SAR EDX,0x1f
// 00540145: IDIV ECX
// 00540147: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 0054014d: MOV EDX,EAX
// 0054014f: SUB EAX,ECX
// 00540151: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00540157: TEST EAX,EAX
// 00540159: JL 0x0054016d
//   XREF to: 0054016d (CONDITIONAL_JUMP)
// 0054015b: CMP EAX,0x20000
// 00540160: JG 0x00540171
//   XREF to: 00540171 (CONDITIONAL_JUMP)
// 00540162: ADD dword ptr [0x02f7c8b8],EAX
//   Label: LAB_00540162
//   XREF to: 02f7c8b8 (READ_WRITE)
// 00540168: JMP 0x005400e8
//   XREF to: 005400e8 (UNCONDITIONAL_JUMP)
// 0054016d: XOR EAX,EAX
//   Label: LAB_0054016d
// 0054016f: JMP 0x00540162
//   XREF to: 00540162 (UNCONDITIONAL_JUMP)
// 00540171: MOV EAX,EDI
//   Label: LAB_00540171
// 00540173: JMP 0x00540162
//   XREF to: 00540162 (UNCONDITIONAL_JUMP)
// 00540175: MOV ECX,dword ptr [ESI + 0x1c]
//   Label: LAB_00540175
// 00540178: XOR EBX,EBX
// 0054017a: TEST ECX,ECX
// 0054017c: JLE 0x005401a4
//   XREF to: 005401a4 (CONDITIONAL_JUMP)
// 0054017e: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00540182: ADD EDI,0x1c
// 00540185: CMP EBX,dword ptr [ESI + 0x114]
//   Label: LAB_00540185
// 0054018b: JZ 0x00540199
//   XREF to: 00540199 (CONDITIONAL_JUMP)
// 0054018d: PUSH 0x1
// 0054018f: PUSH EDI
// 00540190: PUSH ESI
// 00540191: CALL core_netgame.cpp_CNetGame_FUN_00543930
//   XREF to: 00543930 (UNCONDITIONAL_CALL)
// 00540196: ADD ESP,0xc
// 00540199: INC EBX
//   Label: LAB_00540199
// 0054019a: MOV ECX,dword ptr [ESI + 0x1c]
// 0054019d: ADD EDI,0x78
// 005401a0: CMP EBX,ECX
// 005401a2: JL 0x00540185
//   XREF to: 00540185 (CONDITIONAL_JUMP)
// 005401a4: PUSH ESI
//   Label: LAB_005401a4
// 005401a5: MOV EBX,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 005401ab: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 005401b0: MOV EDI,dword ptr [ESI + 0x1c]
// 005401b3: ADD ESP,0x4
// 005401b6: CMP EDI,0x1
// 005401b9: JG 0x00540008
//   XREF to: 00540008 (CONDITIONAL_JUMP)
// 005401bf: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005401c5: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005401c6: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 005401cb: ADD ESP,0x4
// 005401ce: JMP 0x0053fd23
//   XREF to: 0053fd23 (UNCONDITIONAL_JUMP)
