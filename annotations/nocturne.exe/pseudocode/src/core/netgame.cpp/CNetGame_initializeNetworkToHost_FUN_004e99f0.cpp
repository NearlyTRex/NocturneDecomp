// Name: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0
// Address: 004e99f0
// Address Range: [[004e99f0, 004e9a8d]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0(CNetGame *this_ptr)

{
  CGame *pCVar1;
  SNetworkAddr *addr;
  int iVar2;
  char *name;
  EHeroType hero_number;
  EAimMode aim_mode;
  SNetworkAddr local_10;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (g_CEditorTools_PTR_005b6d50,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,0);
  pCVar1 = g_CGame_PTR_005b9354;
  this_ptr->player_count = 0;
  aim_mode = pCVar1->aim_mode;
  hero_number = pCVar1->hero_number;
  name = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_00548d30(&local_10,(uint32_t *)&DAT_02dd10c4,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(this_ptr,addr,name,hero_number,aim_mode);
  this_ptr->local_player_index = iVar2;
  this_ptr->server_player_index = iVar2;
  iVar2 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  this_ptr->network_mode = NET_MODE_LOBBY;
  this_ptr->connection_type = CONNECTION_HOST;
  return 1;
}
