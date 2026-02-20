// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
// Address: 00542b00
// Address Range: [[00542b00, 00542ce5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame *this_ptr,int player_index)

{
  int iVar1;
  byte *src;
  byte *dest;
  byte *dest_00;
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
  if (0 < DAT_02f98ad0) {
    dest_00 = &DAT_02f98adc + player_index;
    src = &DAT_02f98add + player_index;
    local_14 = &DAT_02f98ae4 + player_index;
    dest = &DAT_02f98ae0 + player_index * 4;
    do {
      memmove(dest_00,src,this_ptr->player_count - player_index);
      iVar1 = iVar1 + 1;
      src = src + 0x114;
      memmove(dest,local_14,(this_ptr->player_count - player_index) * 4);
      dest_00 = dest_00 + 0x114;
      local_14 = local_14 + 0x45;
      dest = dest + 0x114;
    } while (iVar1 < DAT_02f98ad0);
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
