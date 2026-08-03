// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90
// Address: 004e9a90
// Address Range: [[004e9a90, 004e9d45]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90(CNetGame *this_ptr,uint32_t *server_ip)

{
  char cVar1;
  CEditorTools *pCVar2;
  CGame *pCVar3;
  SNetworkAddr *addr;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
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
  
  bVar8 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,0);
  pCVar3 = g_CGame_PTR_005b9354;
  this_ptr->player_count = 0;
  aim_mode = pCVar3->aim_mode;
  hero_number = pCVar3->hero_number;
  pcVar7 = this_ptr->player_name;
  support_trisock_cpp_createNetworkAddr_FUN_00548d30
            ((SNetworkAddr *)(auStack_33 + 3),(uint32_t *)&DAT_02dd10c4,0x1ddf);
  iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440
                    (this_ptr,addr,pcVar7,hero_number,aim_mode);
  this_ptr->local_player_index = iVar4;
  iVar4 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(this_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_00548d30(&SStack_24,server_ip,0x1ddf);
  iVar5 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440
                    (this_ptr,&SStack_24,"TheServer",0,0);
  iVar4 = _DAT_01cea3f8;
  this_ptr->connection_type = CONNECTION_CLIENT;
  pCVar2 = g_CEditorTools_PTR_005b6d50;
  this_ptr->network_mode = NET_MODE_LOBBY;
  this_ptr->server_player_index = iVar5;
  iVar4 = iVar4 + -0x50000;
  _DAT_01cea3fc = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (pCVar2,"Contacting server.  Press ESC to give up...");
  uStack_18 = DAT_005c1664;
  DAT_005c1664 = 0;
  if (-1 < this_ptr->server_player_index) {
    pcStack_14 = this_ptr->player_name;
    do {
      iStack_1c = _DAT_01cea3f8 - iVar4;
      fStack_5c = (float)(_DAT_01cea3f8 - iVar4) * (float)1.52587890625e-05;
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
        (&uStack_4f)[(uint)bVar8 * -2] = *(uint *)&(&SStack_24)[-(uint)bVar8].port;
        EStack_37 = this_ptr->players[this_ptr->local_player_index].hero_number;
        auStack_33._0_4_ = this_ptr->players[this_ptr->local_player_index].aim_mode;
        pcVar7 = acStack_4b;
        pcVar6 = pcStack_14;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_004eb350
                  (this_ptr,this_ptr->server_player_index,&SStack_58);
        iVar4 = _DAT_01cea3f8;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
      if (_DAT_01cea3fc == 1) {
        DAT_005c1664 = uStack_18;
        return 1;
      }
      if (_DAT_01cea3fc < 3) {
        if (_DAT_01cea3fc == 2) {
          shape_edittool_cpp_FUN_0046fcd0
                    (g_CEditorTools_PTR_005b6d50,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,0);
          return 0;
        }
      }
      else {
        if (_DAT_01cea3fc < 4) {
          shape_edittool_cpp_FUN_0046fcd0
                    (g_CEditorTools_PTR_005b6d50,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,0);
          return 0;
        }
        if (_DAT_01cea3fc == 4) {
          shape_edittool_cpp_FUN_0046fcd0
                    (g_CEditorTools_PTR_005b6d50,"Connection refused - already in the game");
          goto LAB_004e9d11;
        }
      }
      iVar5 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
      if (iVar5 != 0) {
LAB_004e9d11:
        core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,0);
        return 0;
      }
    } while (-1 < this_ptr->server_player_index);
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,1);
  return 0;
}
