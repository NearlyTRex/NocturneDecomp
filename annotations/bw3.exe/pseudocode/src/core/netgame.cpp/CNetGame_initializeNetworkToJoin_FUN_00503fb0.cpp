// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0
// Address: 00503fb0
// Address Range: [[00503fb0, 0050426d]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0(CNetGame *this_ptr,uint32_t *server_ip)

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
  int iStack_33;
  byte auStack_2c [16];
  int iStack_1c;
  char *pcStack_18;
  int iStack_14;
  
  bVar7 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
  pCVar2 = g_CGamePtr;
  this_ptr->player_count = 0;
  aim_mode = pCVar2->aim_mode;
  hero_number = pCVar2->hero_number;
  pcVar6 = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_0056f730
            ((SNetworkAddr *)(auStack_2c + 4),(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_00505950
                    (this_ptr,addr,pcVar6,hero_number,aim_mode);
  this_ptr->local_player_index = iVar3;
  iVar3 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_00504270(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_0056f730
            ((SNetworkAddr *)auStack_2c,(uint32_t *)*server_ip,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_00505950
                    (this_ptr,(SNetworkAddr *)auStack_2c,"TheServer",0,0);
  this_ptr->connection_type = CONNECTION_CLIENT;
  this_ptr->network_mode = NET_MODE_LOBBY;
  uVar5 = g_UINT_01da6478;
  this_ptr->server_player_index = iVar3;
  g_ConnectionStatus = 0;
  uVar5 = uVar5 - 0x50000;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,"Contacting server.  Press ESC to give up...");
  iStack_1c = g_ForceMessagePump;
  g_ForceMessagePump = 0;
  if (-1 < this_ptr->server_player_index) {
    pcStack_18 = this_ptr->player_name;
    do {
      iStack_14 = g_UINT_01da6478 - uVar5;
      fStack_5c = (float)(int)(g_UINT_01da6478 - uVar5) * (float)1.52587890625e-05;
      if (fStack_5c < 0.0) {
        fStack_5c = 0.0;
      }
      if ((float)30 < fStack_5c) {
        fStack_5c = 30.0;
      }
      if ((float)0.20000000000000001 < fStack_5c) {
        SStack_58.size = 0x29;
        SStack_58.type = PACKET_PLAYER_ANNOUNCE;
        uStack_53 = auStack_2c._0_4_;
        (&uStack_4f)[(uint)bVar7 * -2] = *(uint *)(auStack_2c + (uint)bVar7 * -8 + 4);
        EStack_37 = this_ptr->players[this_ptr->local_player_index].hero_number;
        iStack_33 = this_ptr->players[this_ptr->local_player_index].aim_mode;
        pcVar6 = acStack_4b;
        pcVar4 = pcStack_18;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_00505870
                  (this_ptr,this_ptr->server_player_index,&SStack_58);
        uVar5 = g_UINT_01da6478;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
      if (g_ConnectionStatus == 1) {
        g_ForceMessagePump = iStack_1c;
        return 1;
      }
      if ((uint)g_ConnectionStatus < 3) {
        if (g_ConnectionStatus == 2) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                    (g_CEditorToolsPtr,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
          return 0;
        }
      }
      else {
        if ((uint)g_ConnectionStatus < 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                    (g_CEditorToolsPtr,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
          return 0;
        }
        if (g_ConnectionStatus == 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                    (g_CEditorToolsPtr,"Connection refused - already in the game");
          goto LAB_00504239;
        }
      }
      iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
      if (iVar3 != 0) {
LAB_00504239:
        core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
        return 0;
      }
    } while (-1 < this_ptr->server_player_index);
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,1);
  return 0;
}
