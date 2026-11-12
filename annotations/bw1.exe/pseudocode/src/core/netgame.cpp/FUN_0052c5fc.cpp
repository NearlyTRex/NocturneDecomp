// Name: core_netgame.cpp_FUN_0052c5fc
// Address: 0052c5fc
// Address Range: [[0052c5fc, 0052c6a2]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_FUN_0052c5fc(CNetGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_netgame_cpp_FUN_0052c5fc(CNetGame *param_1)

{
  CGame *pCVar1;
  SNetworkAddr *addr;
  int iVar2;
  char *name;
  EHeroType hero_number;
  EAimMode aim_mode;
  SNetworkAddr SStack_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(param_1,0);
  pCVar1 = g_CGamePtr;
  param_1->player_count = 0;
  aim_mode = pCVar1->aim_mode;
  hero_number = pCVar1->hero_number;
  name = param_1->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_0059c740(&SStack_14,_DAT_02c8ae4c,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040(param_1,addr,name,hero_number,aim_mode);
  param_1->local_player_index = iVar2;
  param_1->server_player_index = iVar2;
  iVar2 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0052c970(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  param_1->network_mode = NET_MODE_LOBBY;
  param_1->connection_type = CONNECTION_HOST;
  return 1;
}
