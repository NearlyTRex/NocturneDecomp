// Name: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_00503f00
// Address: 00503f00
// Address Range: [[00503f00, 00503fa2]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_00503f00(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_00503f00(CNetGame *this_ptr)

{
  CGame *pCVar1;
  SNetworkAddr *addr;
  int iVar2;
  char *name;
  EHeroType hero_number;
  EAimMode aim_mode;
  SNetworkAddr SStack_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
  pCVar1 = g_CGamePtr;
  this_ptr->player_count = 0;
  aim_mode = pCVar1->aim_mode;
  hero_number = pCVar1->hero_number;
  name = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_0056f730(&SStack_14,_DAT_02cfd89c,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_00505950(this_ptr,addr,name,hero_number,aim_mode);
  this_ptr->local_player_index = iVar2;
  this_ptr->server_player_index = iVar2;
  iVar2 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_00504270(this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  this_ptr->network_mode = NET_MODE_LOBBY;
  this_ptr->connection_type = CONNECTION_HOST;
  return 1;
}
