// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0
// Address: 0052c6b0
// Address Range: [[0052c6b0, 0052c969]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0(CNetGame *this_ptr,uint32_t *server_ip)

{
  char cVar1;
  CGame *pCVar2;
  SNetworkAddr *addr;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  EHeroType hero_number;
  EAimMode aim_mode;
  float fStack_5c;
  SNetPacketHeader SStack_58;
  uint uStack_53;
  uint uStack_4f;
  char acStack_4b [20];
  EHeroType EStack_37;
  byte auStack_33 [15];
  SNetworkAddr SStack_24;
  int iStack_1c;
  int iStack_18;
  char *pcStack_14;
  
  bVar7 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
  pCVar2 = g_CGamePtr;
  this_ptr->player_count = 0;
  aim_mode = pCVar2->aim_mode;
  hero_number = pCVar2->hero_number;
  pcVar6 = this_ptr->player_name;
  addr = support_trisock_cpp_createNetworkAddr_FUN_0059c740
                   ((SNetworkAddr *)(auStack_33 + 3),(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                    (this_ptr,addr,pcVar6,hero_number,aim_mode);
  this_ptr->local_player_index = iVar3;
  iVar3 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0052c970(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_0059c740(&SStack_24,(uint32_t *)*server_ip,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                    (this_ptr,&SStack_24,"TheServer",0,0);
  this_ptr->connection_type = CONNECTION_CLIENT;
  this_ptr->network_mode = NET_MODE_LOBBY;
  uVar5 = g_UINT_01d51da0;
  this_ptr->server_player_index = iVar3;
  g_ConnectionStatus = 0;
  uVar5 = uVar5 - 0x50000;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,"Contacting server.  Press ESC to give up...");
  iStack_18 = g_ForceMessagePump;
  g_ForceMessagePump = 0;
  if (-1 < this_ptr->server_player_index) {
    pcStack_14 = this_ptr->player_name;
    do {
      iStack_1c = g_UINT_01d51da0 - uVar5;
      fStack_5c = (float)(int)(g_UINT_01d51da0 - uVar5) * (float)1.52587890625e-05;
      if (fStack_5c < 0.0) {
        fStack_5c = 0.0;
      }
      if ((float)30 < fStack_5c) {
        fStack_5c = 30.0;
      }
      if ((float)0.20000000000000001 < fStack_5c) {
        SStack_58.size = 0x29;
        SStack_58.type = PACKET_PLAYER_ANNOUNCE;
        uStack_53 = SStack_24.ip_address;
        (&uStack_4f)[(uint)bVar7 * -2] = *(uint *)&(&SStack_24)[-(uint)bVar7].port;
        EStack_37 = this_ptr->players[this_ptr->local_player_index].hero_number;
        auStack_33._0_4_ = this_ptr->players[this_ptr->local_player_index].aim_mode;
        pcVar6 = acStack_4b;
        pcVar4 = pcStack_14;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_0052df50
                  (this_ptr,this_ptr->server_player_index,&SStack_58);
        uVar5 = g_UINT_01d51da0;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
      if (g_ConnectionStatus == 1) {
        g_ForceMessagePump = iStack_18;
        return 1;
      }
      if ((uint)g_ConnectionStatus < 3) {
        if (g_ConnectionStatus == 2) {
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                    (g_CEditorToolsPtr,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
          return 0;
        }
      }
      else {
        if ((uint)g_ConnectionStatus < 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                    (g_CEditorToolsPtr,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
          return 0;
        }
        if (g_ConnectionStatus == 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                    (g_CEditorToolsPtr,"Connection refused - already in the game");
          goto LAB_0052c938;
        }
      }
      iVar3 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_ESCAPE);
      if (iVar3 != 0) {
LAB_0052c938:
        core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
        return 0;
      }
    } while (-1 < this_ptr->server_player_index);
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,1);
  return 0;
}
