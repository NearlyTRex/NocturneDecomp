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
  int hero_number;
  byte auStack_14 [8];
  
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,0);
  pCVar1 = g_CGamePtr;
  this_ptr->player_count = 0;
  iVar2 = *(int *)&pCVar1->field_0xd8;
  hero_number = *(int *)&pCVar1->field_0xd4;
  name = this_ptr->player_name;
  addr = (SNetworkAddr *)
         support_trisock_cpp_createNetworkAddr_FUN_00578e60(auStack_14,_DAT_02653630,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70(this_ptr,addr,name,hero_number,iVar2);
  this_ptr->local_player_index = iVar2;
  this_ptr->server_player_index = iVar2;
  iVar2 = core_netgame_cpp_FUN_0050b790(this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  this_ptr->network_mode = NET_MODE_LOBBY;
  this_ptr->connection_type = CONNECTION_HOST;
  return 1;
}
