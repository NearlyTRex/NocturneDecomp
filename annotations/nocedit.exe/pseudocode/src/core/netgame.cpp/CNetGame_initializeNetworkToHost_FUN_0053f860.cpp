// Name: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_0053f860
// Address: 0053f860
// Address Range: [[0053f860, 0053f8fd]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(CNetGame *this_ptr)

{
  int iVar1;
  SNetworkAddr local_10;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
  this_ptr->player_count = 0;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_10,(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar1 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(this_ptr);
  this_ptr->local_player_index = iVar1;
  this_ptr->server_player_index = iVar1;
  iVar1 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  this_ptr->network_mode = 1;
  this_ptr->connection_type = 1;
  return 1;
}
