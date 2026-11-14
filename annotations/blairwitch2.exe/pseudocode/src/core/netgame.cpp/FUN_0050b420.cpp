// Name: core_netgame.cpp_FUN_0050b420
// Address: 0050b420
// Address Range: [[0050b420, 0050b4c2]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_0050b420(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_FUN_0050b420(CNetGame *this_ptr)

{
  CGame *pCVar1;
  SNetworkAddr *addr;
  int iVar2;
  char *name;
  EHeroType hero_number;
  EAimMode aim_mode;
  SNetworkAddr SStack_14;
  
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,0);
  pCVar1 = g_CGamePtr;
  this_ptr->player_count = 0;
  aim_mode = pCVar1->aim_mode;
  hero_number = pCVar1->hero_number;
  name = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_00578e60(&SStack_14,_DAT_02653630,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70(this_ptr,addr,name,hero_number,aim_mode);
  this_ptr->local_player_index = iVar2;
  this_ptr->server_player_index = iVar2;
  iVar2 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0050b790(this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  this_ptr->network_mode = NET_MODE_LOBBY;
  this_ptr->connection_type = CONNECTION_HOST;
  return 1;
}
