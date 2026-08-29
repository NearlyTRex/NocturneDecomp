// Name: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_0053f860
// Address: 0053f860
// MANUAL RECONSTRUCTION
// Address Range: [[0053f860, 0053f8fd]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(CNetGame *this_ptr)

{
  uint16_t net_port;
  int iVar2;
  int iVar1;
  SNetworkAddr local_10;
  EAimMode aim_mode;
  EHeroType hero_number;
  CGame *pCVar1;
  char *name;

  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
#if NOCTURNE_NETPLAY_INI
  nocturne_net_reload();
  if (nocturne_net_player_name()[0] != '\0') {
    strcpy(this_ptr->player_name,nocturne_net_player_name());
  }
  net_port = (uint16_t)nocturne_net_port(0x1ddf);
#else
  net_port = 0x1ddf;
#endif
  pCVar1 = g_CGamePtr;
  this_ptr->player_count = 0;
  aim_mode = pCVar1->aim_mode;
  hero_number = pCVar1->hero_number;
  name = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_10,(uint32_t *)g_AnyAddressIP,net_port);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0
                    (this_ptr,&local_10,name,hero_number,aim_mode);
  this_ptr->local_player_index = iVar2;
  this_ptr->server_player_index = iVar2;
  iVar1 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  this_ptr->network_mode = NET_MODE_LOBBY;
  this_ptr->connection_type = CONNECTION_HOST;
  return 1;
}
