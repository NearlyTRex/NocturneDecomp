// Name: core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
// Address: 00541c80
// Address Range: [[00541c80, 00541e34]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_updatePing_FUN_00541c80(CNetGame * this_ptr, int player_index, float max_ping)
// Cross-references:
//   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 (005435a0) at 005435e9 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 0054320e [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 00540495 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541b1d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063da65
//   TerminatedCString s_CNetGame_updatePing_inva_0063da79
//   double g_TimeToSeconds = 0.0000152587890625
//   double g_MaxPingTime = 30
//   double g_PingCheckThreshold = 0.400000000000000
//   double g_BadConnectionTime = 5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LastPingTime
//   uint g_CurrentGameTime
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_send_FUN_005411c0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl
core_netgame_cpp_CNetGame_updatePing_FUN_00541c80
          (CNetGame *this_ptr,int player_index,float max_ping)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float local_24;
  float local_20;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x735;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::updatePing - invalid player index");
  }
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
  g_LastPingTime = iVar1;
  g_CurrentGameTime = uVar3;
  if (player_index != this_ptr->local_player_index) {
    local_20 = (float)(int)(uVar3 - this_ptr->players[player_index].last_ping_sent) *
               (float)g_TimeToSeconds;
    if (local_20 < 0.0) {
      local_20 = 0.0;
    }
    if ((float)g_MaxPingTime < local_20) {
      local_20 = 30.0;
    }
    if ((float)g_PingCheckThreshold <= local_20) {
      local_24 = (float)(int)(uVar3 - this_ptr->players[player_index].last_ping_response) *
                 (float)g_TimeToSeconds;
      if (local_24 < 0.0) {
        local_24 = 0.0;
      }
      if ((float)g_MaxPingTime < local_24) {
        local_24 = 30.0;
      }
      if ((this_ptr->players[player_index].ping_quality < 0.0) || (max_ping <= local_24)) {
        if ((float)g_BadConnectionTime < local_24) {
          this_ptr->players[player_index].ping_quality = -1.0;
        }
        this_ptr->players[player_index].last_ping_sent = g_CurrentGameTime;
        core_netgame_cpp_CNetGame_send_FUN_005411c0();
      }
    }
    return;
  }
  this_ptr->players[player_index].ping_quality = 0.0;
  this_ptr->players[player_index].last_ping_sent = uVar3;
  this_ptr->players[player_index].last_ping_response = uVar3;
  return;
}


// Assembly code:
// 00541c80: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
// 00541c81: PUSH ESI
// 00541c82: PUSH EDI
// 00541c83: PUSH EBP
// 00541c84: MOV EBP,ESP
// 00541c86: SUB ESP,0x1c
// 00541c89: AND ESP,0xfffffff8
// 00541c8c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541c8f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00541c92: TEST EBX,EBX
// 00541c94: JL 0x00541c9b
//   XREF to: 00541c9b (CONDITIONAL_JUMP)
// 00541c96: CMP EBX,dword ptr [ESI + 0x1c]
// 00541c99: JL 0x00541cbe
//   XREF to: 00541cbe (CONDITIONAL_JUMP)
// 00541c9b: MOV ECX,0x63da65
//   Label: LAB_00541c9b
//   XREF to: 0063da65 (PARAM)
// 00541ca0: MOV EDI,0x735
// 00541ca5: PUSH 0x63da79
//   XREF to: 0063da79 (DATA)
// 00541caa: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00541cb0: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00541cb6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00541cbb: ADD ESP,0x4
// 00541cbe: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_00541cbe
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00541cc3: MOV EDX,EAX
// 00541cc5: MOV ECX,0x12
// 00541cca: SAR EDX,0x1f
// 00541ccd: IDIV ECX
// 00541ccf: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00541cd5: MOV EDX,EAX
// 00541cd7: SUB EAX,ECX
// 00541cd9: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00541cdf: TEST EAX,EAX
// 00541ce1: JL 0x00541e1a
//   XREF to: 00541e1a (CONDITIONAL_JUMP)
// 00541ce7: CMP EAX,0x20000
// 00541cec: JLE 0x00541cf3
//   XREF to: 00541cf3 (CONDITIONAL_JUMP)
// 00541cee: MOV EAX,0x20000
// 00541cf3: MOV EDI,dword ptr [0x02f7c8b8]
//   Label: LAB_00541cf3
//   XREF to: 02f7c8b8 (READ)
// 00541cf9: ADD EDI,EAX
// 00541cfb: LEA EAX,[EBX*0x8 + 0x0]
// 00541d02: MOV EDX,EAX
// 00541d04: SHL EAX,0x4
// 00541d07: SUB EAX,EDX
// 00541d09: LEA EDX,[ESI + 0x20]
// 00541d0c: ADD EDX,EAX
// 00541d0e: MOV EAX,dword ptr [ESI + 0x114]
// 00541d14: MOV dword ptr [0x02f7c8b8],EDI
//   XREF to: 02f7c8b8 (WRITE)
// 00541d1a: CMP EBX,EAX
// 00541d1c: JZ 0x00541e21
//   XREF to: 00541e21 (CONDITIONAL_JUMP)
// 00541d22: MOV ECX,EDI
// 00541d24: MOV EAX,dword ptr [EDX + 0x2c]
// 00541d27: SUB ECX,EAX
// 00541d29: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00541d2d: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00541d31: FMUL double ptr [0x0063daa5]
//   XREF to: 0063daa5 (READ)
// 00541d37: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 00541d3b: FLDZ
// 00541d3d: FCOMPP
// 00541d3f: FNSTSW AX
// 00541d41: SAHF
// 00541d42: JBE 0x00541d4a
//   XREF to: 00541d4a (CONDITIONAL_JUMP)
// 00541d44: XOR ECX,ECX
// 00541d46: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00541d4a: FLD float ptr [ESP + 0x8]
//   Label: LAB_00541d4a
//   XREF to: Stack[-0x28] (READ)
// 00541d4e: FCOMP double ptr [0x0063daad]
//   XREF to: 0063daad (READ)
// 00541d54: FNSTSW AX
// 00541d56: SAHF
// 00541d57: JBE 0x00541d61
//   XREF to: 00541d61 (CONDITIONAL_JUMP)
// 00541d59: MOV dword ptr [ESP + 0x8],0x41f00000
//   XREF to: Stack[-0x28] (WRITE)
// 00541d61: FLD float ptr [ESP + 0x8]
//   Label: LAB_00541d61
//   XREF to: Stack[-0x28] (READ)
// 00541d65: FCOMP double ptr [0x0063dab5]
//   XREF to: 0063dab5 (READ)
// 00541d6b: FNSTSW AX
// 00541d6d: SAHF
// 00541d6e: JC 0x00541e13
//   XREF to: 00541e13 (CONDITIONAL_JUMP)
// 00541d74: MOV ECX,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00541d7a: MOV EAX,dword ptr [EDX + 0x30]
// 00541d7d: SUB ECX,EAX
// 00541d7f: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00541d83: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00541d87: FMUL double ptr [0x0063daa5]
//   XREF to: 0063daa5 (READ)
// 00541d8d: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 00541d91: FLDZ
// 00541d93: FCOMPP
// 00541d95: FNSTSW AX
// 00541d97: SAHF
// 00541d98: JBE 0x00541da0
//   XREF to: 00541da0 (CONDITIONAL_JUMP)
// 00541d9a: XOR EAX,EAX
// 00541d9c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00541da0: FLD float ptr [ESP + 0x4]
//   Label: LAB_00541da0
//   XREF to: Stack[-0x2c] (READ)
// 00541da4: FCOMP double ptr [0x0063daad]
//   XREF to: 0063daad (READ)
// 00541daa: FNSTSW AX
// 00541dac: SAHF
// 00541dad: JBE 0x00541db7
//   XREF to: 00541db7 (CONDITIONAL_JUMP)
// 00541daf: MOV dword ptr [ESP + 0x4],0x41f00000
//   XREF to: Stack[-0x2c] (WRITE)
// 00541db7: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00541db7
//   XREF to: Stack[-0x2c] (READ)
// 00541dbb: FLDZ
// 00541dbd: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 00541dc0: FCOMP float ptr [EDX + 0x28]
// 00541dc3: FNSTSW AX
// 00541dc5: SAHF
// 00541dc6: JA 0x00541dd4
//   XREF to: 00541dd4 (CONDITIONAL_JUMP)
// 00541dc8: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00541dcc: FCOMP float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00541dcf: FNSTSW AX
// 00541dd1: SAHF
// 00541dd2: JC 0x00541e13
//   XREF to: 00541e13 (CONDITIONAL_JUMP)
// 00541dd4: FLD float ptr [ESP]
//   Label: LAB_00541dd4
//   XREF to: Stack[-0x30] (DATA)
// 00541dd7: FCOMP double ptr [0x0063dabd]
//   XREF to: 0063dabd (READ)
// 00541ddd: FNSTSW AX
// 00541ddf: SAHF
// 00541de0: JBE 0x00541de9
//   XREF to: 00541de9 (CONDITIONAL_JUMP)
// 00541de2: MOV dword ptr [EDX + 0x28],0xbf800000
// 00541de9: MOV AH,0x4
//   Label: LAB_00541de9
// 00541deb: MOV EDI,0x9
// 00541df0: MOV byte ptr [ESP + 0x10],AH
//   XREF to: Stack[-0x20] (WRITE)
// 00541df4: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00541df9: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00541dfd: MOV dword ptr [ESP + 0x11],EAX
//   XREF to: Stack[-0x1f] (WRITE)
// 00541e01: MOV dword ptr [EDX + 0x2c],EAX
// 00541e04: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 00541e08: PUSH EAX
// 00541e09: PUSH EBX
// 00541e0a: PUSH ESI
// 00541e0b: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 00541e10: ADD ESP,0xc
// 00541e13: MOV ESP,EBP
//   Label: LAB_00541e13
// 00541e15: POP EBP
// 00541e16: POP EDI
// 00541e17: POP ESI
// 00541e18: POP EBX
// 00541e19: RET
// 00541e1a: XOR EAX,EAX
//   Label: LAB_00541e1a
// 00541e1c: JMP 0x00541cf3
//   XREF to: 00541cf3 (UNCONDITIONAL_JUMP)
// 00541e21: MOV dword ptr [EDX + 0x28],0x0
//   Label: LAB_00541e21
// 00541e28: MOV dword ptr [EDX + 0x2c],EDI
// 00541e2b: MOV dword ptr [EDX + 0x30],EDI
// 00541e2e: MOV ESP,EBP
// 00541e30: POP EBP
// 00541e31: POP EDI
// 00541e32: POP ESI
// 00541e33: POP EBX
// 00541e34: RET
