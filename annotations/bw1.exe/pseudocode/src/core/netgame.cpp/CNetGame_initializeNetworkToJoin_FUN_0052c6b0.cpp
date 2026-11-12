// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0
// Address: 0052c6b0
// Address Range: [[0052c6b0, 0052c969]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0(CNetGame *this_ptr,uint32_t *server_ip)

{
  char cVar1;
  CGame *pCVar2;
  SNetworkAddr *addr;
  int iVar3;
  int iVar4;
  char *pcVar5;
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
  uint uStack_18;
  char *pcStack_14;
  
  bVar7 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
  pCVar2 = g_CGamePtr;
  this_ptr->player_count = 0;
  aim_mode = pCVar2->aim_mode;
  hero_number = pCVar2->hero_number;
  pcVar6 = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_0059c740
            ((SNetworkAddr *)(auStack_33 + 3),_DAT_02c8ae4c,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                    (this_ptr,addr,pcVar6,hero_number,aim_mode);
  this_ptr->local_player_index = iVar3;
  iVar3 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0052c970(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_0059c740(&SStack_24,(uint32_t *)*server_ip,0x1ddf);
  iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040
                    (this_ptr,&SStack_24,"TheServer",0,0);
  this_ptr->connection_type = CONNECTION_CLIENT;
  this_ptr->network_mode = NET_MODE_LOBBY;
  iVar3 = _DAT_01d51da0;
  this_ptr->server_player_index = iVar4;
  _DAT_01d51da4 = 0;
  iVar3 = iVar3 + -0x50000;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,"Contacting server.  Press ESC to give up...");
  uStack_18 = DAT_006260e8;
  DAT_006260e8 = 0;
  if (-1 < this_ptr->server_player_index) {
    pcStack_14 = this_ptr->player_name;
    do {
      iStack_1c = _DAT_01d51da0 - iVar3;
      fStack_5c = (float)(_DAT_01d51da0 - iVar3) * (float)_DAT_005eb790;
      if (fStack_5c < 0.0) {
        fStack_5c = 0.0;
      }
      if ((float)_DAT_005eb798 < fStack_5c) {
        fStack_5c = 30.0;
      }
      if ((float)_DAT_005eb7a0 < fStack_5c) {
        SStack_58.size = 0x29;
        SStack_58.type = PACKET_PLAYER_ANNOUNCE;
        uStack_53 = SStack_24.ip_address;
        (&uStack_4f)[(uint)bVar7 * -2] = *(uint *)&(&SStack_24)[-(uint)bVar7].port;
        EStack_37 = this_ptr->players[this_ptr->local_player_index].hero_number;
        auStack_33._0_4_ = this_ptr->players[this_ptr->local_player_index].aim_mode;
        pcVar6 = acStack_4b;
        pcVar5 = pcStack_14;
        do {
          cVar1 = *pcVar5;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_0052df50
                  (this_ptr,this_ptr->server_player_index,&SStack_58);
        iVar3 = _DAT_01d51da0;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
      if (_DAT_01d51da4 == 1) {
        DAT_006260e8 = uStack_18;
        return 1;
      }
      if (_DAT_01d51da4 < 3) {
        if (_DAT_01d51da4 == 2) {
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                    (g_CEditorToolsPtr,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
          return 0;
        }
      }
      else {
        if (_DAT_01d51da4 < 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                    (g_CEditorToolsPtr,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
          return 0;
        }
        if (_DAT_01d51da4 == 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                    (g_CEditorToolsPtr,"Connection refused - already in the game");
          goto LAB_0052c938;
        }
      }
      iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar4 != 0) {
LAB_0052c938:
        core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
        return 0;
      }
    } while (-1 < this_ptr->server_player_index);
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,1);
  return 0;
}
