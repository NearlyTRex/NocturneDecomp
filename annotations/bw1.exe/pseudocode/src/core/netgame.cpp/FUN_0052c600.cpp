// Name: core_netgame.cpp_FUN_0052c600
// Address: 0052c600
// Address Range: [[0052c600, 0052c6a2]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_FUN_0052c600(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_netgame_cpp_FUN_0052c600(void)

{
  CGame *pCVar1;
  SNetworkAddr *addr;
  int iVar2;
  CNetGame *in_stack_00000004;
  char *name;
  EHeroType hero_number;
  EAimMode aim_mode;
  SNetworkAddr SStack_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(in_stack_00000004,0);
  pCVar1 = g_CGamePtr;
  in_stack_00000004->player_count = 0;
  aim_mode = pCVar1->aim_mode;
  hero_number = pCVar1->hero_number;
  name = in_stack_00000004->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_0059c740(&SStack_14,_DAT_02c8ae4c,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                    (in_stack_00000004,addr,name,hero_number,aim_mode);
  in_stack_00000004->local_player_index = iVar2;
  in_stack_00000004->server_player_index = iVar2;
  iVar2 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0052c970(in_stack_00000004);
  if (iVar2 == 0) {
    return 0;
  }
  in_stack_00000004->network_mode = NET_MODE_LOBBY;
  in_stack_00000004->connection_type = CONNECTION_HOST;
  return 1;
}
