// Name: core_netgame.cpp_FUN_0050b41c
// Address: 0050b41c
// Address Range: [[0050b41c, 0050b41f]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_FUN_0050b41c(CNetGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_netgame_cpp_FUN_0050b41c(CNetGame *param_1)

{
  CGame *pCVar1;
  SNetworkAddr *addr;
  int iVar2;
  char *name;
  int hero_number;
  byte auStack_14 [8];
  
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(param_1,0);
  pCVar1 = g_CGamePtr;
  param_1->player_count = 0;
  iVar2 = *(int *)&pCVar1->field_0xd8;
  hero_number = *(int *)&pCVar1->field_0xd4;
  name = param_1->player_name;
  addr = (SNetworkAddr *)
         support_trisock_cpp_createNetworkAddr_FUN_00578e60(auStack_14,_DAT_02653630,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70(param_1,addr,name,hero_number,iVar2);
  param_1->local_player_index = iVar2;
  param_1->server_player_index = iVar2;
  iVar2 = core_netgame_cpp_FUN_0050b790(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  param_1->network_mode = NET_MODE_LOBBY;
  param_1->connection_type = CONNECTION_HOST;
  return 1;
}
