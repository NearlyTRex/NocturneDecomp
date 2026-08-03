// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80
// Address: 004ecc80
// Address Range: [[004ecc80, 004ece65]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_004ecc80(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_004ecc80(CNetGame *this_ptr,int player_index)

{
  int iVar1;
  byte *src;
  void *dest;
  byte *dest_00;
  byte *local_14;
  
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
    g_INT_01cc4804 = 0x862;
    core_main_c_FUN_004c8440("CNetGame::removePlayer - invalid player index");
  }
  if (player_index == this_ptr->local_player_index) {
    g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
    g_INT_01cc4804 = 0x869;
    core_main_c_FUN_004c8440("CNetGame::removePlayer - tried to remove myself!");
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
  if (0 < _DAT_01d06610) {
    dest_00 = &DAT_01d0661c + player_index;
    src = &DAT_01d0661d + player_index;
    local_14 = &DAT_01d06624 + player_index * 4;
    dest = (void *)(player_index * 4 + 0x1d06620);
    do {
      memmove(dest_00,src,this_ptr->player_count - player_index);
      iVar1 = iVar1 + 1;
      src = src + 0x114;
      memmove(dest,local_14,(this_ptr->player_count - player_index) * 4);
      dest_00 = dest_00 + 0x114;
      local_14 = local_14 + 0x114;
      dest = (void *)((int)dest + 0x114);
    } while (iVar1 < _DAT_01d06610);
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
