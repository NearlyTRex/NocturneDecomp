// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
// Address: 00542b00
// MANUAL RECONSTRUCTION
// Address Range: [[00542b00, 00542ce5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame *this_ptr,int player_index)

{
  int iVar1;
  int iVar2;

  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2146;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::removePlayer - invalid player index");
  }
  if (player_index == this_ptr->local_player_index) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2153;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::removePlayer - tried to remove myself!");
  }
  if (player_index == this_ptr->server_player_index) {
    this_ptr->server_player_index = -1;
  }
  if (player_index == this_ptr->local_player_index) {
    this_ptr->local_player_index = -1;
  }
  iVar1 = this_ptr->player_count + -1;
  this_ptr->player_count = iVar1;
  memmove
            (this_ptr->players + player_index,this_ptr->players + player_index + 1,
             (iVar1 - player_index) * 0x78);
  iVar2 = 0;
  if (0 < g_ChatOutCount) {
    do {
      memmove(&g_ChatOutMessages[iVar2].ack_flags.bytes[player_index],
              &g_ChatOutMessages[iVar2].ack_flags.bytes[player_index + 1],
              this_ptr->player_count - player_index);
      memmove(&g_ChatOutMessages[iVar2].player_timestamps[player_index],
              &g_ChatOutMessages[iVar2].player_timestamps[player_index + 1],
              (this_ptr->player_count - player_index) * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_ChatOutCount);
  }
  if (player_index < this_ptr->server_player_index) {
    this_ptr->server_player_index = this_ptr->server_player_index + -1;
  }
  if (player_index < this_ptr->local_player_index) {
    this_ptr->local_player_index = this_ptr->local_player_index + -1;
    return;
  }
  return;
}
