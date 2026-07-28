// Name: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0
// Address: 004e99f0
// Address Range: [[004e99f0, 004e9a8d]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0(CNetGame *param_1)

#include "nocturne.h"

uint core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0(CNetGame *param_1)

{
  SNetworkAddr *addr;
  int iVar1;
  char *name;
  int iVar2;
  SNetworkAddr local_10;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (0x01BCD074,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,0);
  iVar2 = 0x01C775EC;
  param_1->player_count = 0;
  iVar1 = *(int *)(iVar2 + 0xc4);
  iVar2 = *(int *)(iVar2 + 0xc0);
  name = param_1->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_00548d30(&local_10,(uint32_t *)&DAT_02dd10c4,0x1ddf);
  iVar1 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(param_1,addr,name,iVar2,iVar1);
  param_1->local_player_index = iVar1;
  param_1->server_player_index = iVar1;
  iVar1 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  param_1->network_mode = NET_MODE_LOBBY;
  param_1->connection_type = CONNECTION_HOST;
  return 1;
}
