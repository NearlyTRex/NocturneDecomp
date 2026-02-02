// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
// Address: 00543970
// Address Range: [[00543970, 00543aa8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(CNetGame *this_ptr)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  byte bVar4;
  uint local_3f [11];
  
  bVar4 = 0;
  if (this_ptr->connection_type != 2) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa29;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (this_ptr->network_mode != 3) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (*(int *)this_ptr->padding < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (this_ptr->local_player_index < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  pcVar2 = this_ptr->players[this_ptr->local_player_index].unk1 + 0x14;
  puVar3 = local_3f;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + ((uint)bVar4 * -2 + 1) * 4;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,*(int *)this_ptr->padding);
  DAT_02f7c8c8 = g_CurrentGameTime;
  return;
}
