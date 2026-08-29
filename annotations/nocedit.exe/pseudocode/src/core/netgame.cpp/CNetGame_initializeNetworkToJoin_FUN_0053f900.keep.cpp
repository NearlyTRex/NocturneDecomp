// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900
// Address: 0053f900
// MANUAL RECONSTRUCTION
// Address Range: [[0053f900, 0053fbb5] [0060c4ce, 0060c4e9]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame *this_ptr,uint32_t *server_ip)

{
  uint16_t net_port;
  CEditorTools *this_ptr_00;
  CGame *pCVar2;
  int iVar3;
  int iVar4;
  uint uVar6;
  char *pcVar7;
  EHeroType hero_number;
  EAimMode aim_mode;
  float local_60;
  SNetPacket_PlayerAnnounce local_5c;
  SNetworkAddr local_30;
  SNetworkAddr local_28;

  core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
#if NOCTURNE_NETPLAY_INI
  if (nocturne_net_player_name()[0] != '\0') {
    strcpy(this_ptr->player_name,nocturne_net_player_name());
  }
  net_port = (uint16_t)nocturne_net_port(0x1ddf);
#else
  net_port = 0x1ddf;
#endif
  pCVar2 = g_CGamePtr;
  this_ptr->player_count = 0;
  aim_mode = pCVar2->aim_mode;
  hero_number = pCVar2->hero_number;
  pcVar7 = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_30,(uint32_t *)g_AnyAddressIP,net_port);
  iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0
                    (this_ptr,&local_30,pcVar7,hero_number,aim_mode);
  this_ptr->local_player_index = iVar4;
  iVar4 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(this_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_28,server_ip,net_port);
  iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0
                    (this_ptr,&local_28,"TheServer",0,0);
  uVar6 = g_CurrentGameTime;
  this_ptr->connection_type = CONNECTION_CLIENT;
  this_ptr_00 = g_CEditorToolsPtr;
  this_ptr->network_mode = NET_MODE_LOBBY;
  this_ptr->server_player_index = iVar4;
  uVar6 = uVar6 - 0x50000;
  g_ConnectionStatus = CONNECTION_STATUS_WAITING;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (this_ptr_00,"Contacting server.  Press ESC to give up...");
  iVar3 = g_ForceMessagePump;
  iVar4 = this_ptr->server_player_index;
  g_ForceMessagePump = 0;
  do {
    if (iVar4 < 0) {
      core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,1);
      return 0;
    }
    local_60 = (float)(int)(g_CurrentGameTime - uVar6) * (float)1.52587890625e-05;
    if (local_60 < 0.0) {
      local_60 = 0.0;
    }
    if ((float)30 < local_60) {
      local_60 = 30.0;
    }
    if ((float)0.20000000000000001 < local_60) {
      local_5c.header.size = sizeof(SNetPacket_PlayerAnnounce);
      local_5c.header.type = PACKET_PLAYER_ANNOUNCE;
      local_5c.addr = local_30;
      strcpy(local_5c.name,this_ptr->player_name);
      local_5c.hero_number = this_ptr->players[this_ptr->local_player_index].hero_number;
      local_5c.aim_mode = this_ptr->players[this_ptr->local_player_index].aim_mode;
      core_netgame_cpp_CNetGame_send_FUN_005411c0
                (this_ptr,this_ptr->server_player_index,&local_5c.header);
      uVar6 = g_CurrentGameTime;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
    if (g_ConnectionStatus == CONNECTION_STATUS_ACCEPTED_BY_SERVER) {
      g_ForceMessagePump = iVar3;
      return 1;
    }
    if (g_ConnectionStatus < CONNECTION_STATUS_REJECTED_GAME_FULL) {
      if (g_ConnectionStatus == CONNECTION_STATUS_REJECTED_NOT_SERVER) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Connection refused - computer is not a server");
        core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
        return 0;
      }
    }
    else {
      if (g_ConnectionStatus < CONNECTION_STATUS_REJECTED_ALREADY_IN_GAME) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Connection refused - game is full");
        core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
        return 0;
      }
      if (g_ConnectionStatus == CONNECTION_STATUS_REJECTED_ALREADY_IN_GAME) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Connection refused - already in the game");
        goto LAB_0053fb81;
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar4 != 0) {
LAB_0053fb81:
      core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
      return 0;
    }
    iVar4 = this_ptr->server_player_index;
  } while( true );
}
