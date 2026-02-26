// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900
// Address: 0053f900
// Address Range: [[0053f900, 0053fbb5]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame *this_ptr,uint32_t *server_ip)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  CGame *pCVar2;
  SNetworkAddr *addr;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  int hero_number;
  float local_60;
  uint uStack_53;
  char local_4f [20];
  int local_3b;
  int local_37;
  SNetworkAddr local_30;
  SNetworkAddr local_28;
  int local_20;
  int local_1c;
  char *local_18;
  
  bVar7 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
  pCVar2 = g_CGamePtr;
  this_ptr->player_count = 0;
  iVar3 = pCVar2->aim_mode;
  hero_number = pCVar2->hero_number;
  pcVar6 = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_30,(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(this_ptr,addr,pcVar6,hero_number,iVar3);
  this_ptr->local_player_index = iVar3;
  iVar3 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_28,server_ip,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0
                    (this_ptr,&local_28,"TheServer",0,0);
  uVar5 = g_CurrentGameTime;
  this_ptr->connection_type = CONNECTION_CLIENT;
  this_ptr_00 = g_CEditorToolsPtr;
  this_ptr->network_mode = NET_MODE_LOBBY;
  this_ptr->server_player_index = iVar3;
  uVar5 = uVar5 - 0x50000;
  g_ConnectionStatus = CONNECTION_STATUS_WAITING;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (this_ptr_00,"Contacting server.  Press ESC to give up...");
  local_1c = g_ForceMessagePump;
  g_ForceMessagePump = 0;
  if (-1 < this_ptr->server_player_index) {
    local_18 = this_ptr->player_name;
    do {
      local_20 = g_CurrentGameTime - uVar5;
      local_60 = (float)(int)(g_CurrentGameTime - uVar5) * (float)1.52587890625e-05;
      if (local_60 < 0.0) {
        local_60 = 0.0;
      }
      if ((float)30 < local_60) {
        local_60 = 30.0;
      }
      if ((float)0.20000000000000001 < local_60) {
        (&uStack_53)[(uint)bVar7 * -2] = *(uint *)&(&local_28)[-(uint)bVar7].port;
        local_3b = this_ptr->players[this_ptr->local_player_index].hero_number;
        local_37 = this_ptr->players[this_ptr->local_player_index].aim_mode;
        pcVar6 = local_4f;
        pcVar4 = local_18;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,this_ptr->server_player_index);
        uVar5 = g_CurrentGameTime;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      if (g_ConnectionStatus == CONNECTION_STATUS_ACCEPTED_BY_SERVER) {
        g_ForceMessagePump = local_1c;
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
      iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
      if (iVar3 != 0) {
LAB_0053fb81:
        core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,0);
        return 0;
      }
    } while (-1 < this_ptr->server_player_index);
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(this_ptr,1);
  return 0;
}
