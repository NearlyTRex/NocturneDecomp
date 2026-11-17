// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_0050e6c0
// Address: 0050e6c0
// Address Range: [[0050e6c0, 0050e885]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_0050e6c0(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_0050e6c0(CNetGame *this_ptr,int player_index)

{
  int iVar1;
  void *src;
  uint *src_00;
  void *dest;
  int iVar2;
  uint *local_14;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CHAR_PTR_01d046a0 = "..\\core\\netgame.cpp";
    g_INT_01d046a4 = 0x862;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::removePlayer - invalid player index");
  }
  if (player_index == this_ptr->local_player_index) {
    g_CHAR_PTR_01d046a0 = "..\\core\\netgame.cpp";
    g_INT_01d046a4 = 0x869;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::removePlayer - tried to remove myself!");
  }
  if (player_index == this_ptr->server_player_index) {
    this_ptr->server_player_index = -1;
  }
  if (player_index == this_ptr->local_player_index) {
    this_ptr->local_player_index = -1;
  }
  iVar1 = this_ptr->player_count + -1;
  this_ptr->player_count = iVar1;
  iVar2 = 0;
  memmove
            (this_ptr->players + player_index,this_ptr->players + player_index + 1,
             (iVar1 - player_index) * 0x80);
  if (0 < g_INT_01d51050) {
    dest = (void *)((int)g_SChatOutMessage_ARRAY_01d51054[0].player_timestamps + player_index + -4);
    src = (void *)((int)g_SChatOutMessage_ARRAY_01d51054[0].player_timestamps + player_index + -3);
    local_14 = g_SChatOutMessage_ARRAY_01d51054[0].player_timestamps + player_index;
    src_00 = g_SChatOutMessage_ARRAY_01d51054[0].player_timestamps + player_index + 1;
    do {
      memmove(dest,src,this_ptr->player_count - player_index);
      iVar2 = iVar2 + 1;
      src = (void *)((int)src + 0x114);
      memmove(local_14,src_00,(this_ptr->player_count - player_index) * 4)
      ;
      dest = (void *)((int)dest + 0x114);
      src_00 = src_00 + 0x45;
      local_14 = local_14 + 0x45;
    } while (iVar2 < g_INT_01d51050);
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
