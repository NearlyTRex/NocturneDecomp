// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
// Address: 00542b00
// Address Range: [[00542b00, 00542ce5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame *this_ptr,int player_index)

{
  int iVar1;
  void *src;
  uint *dest;
  void *dest_00;
  uint *local_14;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x862;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::removePlayer - invalid player index");
  }
  if (player_index == this_ptr->local_player_index) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x869;
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
  iVar1 = 0;
  if (0 < g_ChatOutCount) {
    dest_00 = (void *)((int)g_ChatOutMessages[0].player_timestamps + player_index + -4);
    src = (void *)((int)g_ChatOutMessages[0].player_timestamps + player_index + -3);
    local_14 = g_ChatOutMessages[0].player_timestamps + player_index + 1;
    dest = g_ChatOutMessages[0].player_timestamps + player_index;
    do {
      memmove(dest_00,src,this_ptr->player_count - player_index);
      iVar1 = iVar1 + 1;
      src = (void *)((int)src + 0x114);
      memmove(dest,local_14,(this_ptr->player_count - player_index) * 4);
      dest_00 = (void *)((int)dest_00 + 0x114);
      local_14 = local_14 + 0x45;
      dest = dest + 0x45;
    } while (iVar1 < g_ChatOutCount);
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
