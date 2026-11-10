// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0
// Address: 00503fb0
// Address Range: [[00503fb0, 0050426d]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0(CNetGame *this_ptr,uint32_t *server_ip)

{
  char cVar1;
  CGame *pCVar2;
  SNetworkAddr *addr;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float fStack_5c;
  uint uStack_58;
  byte uStack_54;
  uint uStack_53;
  uint uStack_4f;
  char acStack_4b [20];
  uint uStack_37;
  uint uStack_33;
  uint uStack_2c;
  uint auStack_28 [4];
  char *pcStack_18;
  int iStack_14;
  
  bVar7 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
  pCVar2 = g_CGamePtr;
  this_ptr->player_count = 0;
  iVar3 = *(int *)&pCVar2->field_0xdc;
  iVar4 = *(int *)&pCVar2->field_0xd8;
  pcVar6 = this_ptr->player_name;
  addr = (SNetworkAddr *)
         support_trisock_cpp_createNetworkAddr_FUN_0056f730(auStack_28,_DAT_02cfd89c,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_00505950(this_ptr,addr,pcVar6,iVar4,iVar3);
  this_ptr->local_player_index = iVar3;
  iVar3 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_00504270(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_0056f730(&uStack_2c,*server_ip,0x1ddf);
  iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_00505950
                    (this_ptr,(SNetworkAddr *)&uStack_2c,"TheServer",0,0);
  this_ptr->connection_type = CONNECTION_CLIENT;
  this_ptr->network_mode = NET_MODE_LOBBY;
  iVar3 = _DAT_01da6478;
  this_ptr->server_player_index = iVar4;
  _DAT_01da647c = 0;
  iVar3 = iVar3 + -0x50000;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,"Contacting server.  Press ESC to give up...");
  auStack_28[3] = DAT_0060728c;
  DAT_0060728c = 0;
  if (-1 < this_ptr->server_player_index) {
    pcStack_18 = this_ptr->player_name;
    do {
      iStack_14 = _DAT_01da6478 - iVar3;
      fStack_5c = (float)(_DAT_01da6478 - iVar3) * (float)_DAT_005ca5a1;
      if (fStack_5c < 0.0) {
        fStack_5c = 0.0;
      }
      if ((float)_DAT_005ca5a9 < fStack_5c) {
        fStack_5c = 30.0;
      }
      if ((float)_DAT_005ca5b1 < fStack_5c) {
        uStack_58 = 0x29;
        uStack_54 = 1;
        uStack_53 = uStack_2c;
        (&uStack_4f)[(uint)bVar7 * -2] = auStack_28[(uint)bVar7 * -2];
        uStack_37 = *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x14;
        uStack_33 = *(uint *)&this_ptr->players[this_ptr->local_player_index].field_0x18;
        pcVar6 = acStack_4b;
        pcVar5 = pcStack_18;
        do {
          cVar1 = *pcVar5;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_00505870
                  (this_ptr,this_ptr->server_player_index,(SNetPacketHeader *)&uStack_58);
        iVar3 = _DAT_01da6478;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
      if (_DAT_01da647c == 1) {
        DAT_0060728c = auStack_28[3];
        return 1;
      }
      if (_DAT_01da647c < 3) {
        if (_DAT_01da647c == 2) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                    (g_CEditorToolsPtr,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
          return 0;
        }
      }
      else {
        if (_DAT_01da647c < 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                    (g_CEditorToolsPtr,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
          return 0;
        }
        if (_DAT_01da647c == 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                    (g_CEditorToolsPtr,"Connection refused - already in the game");
          goto LAB_00504239;
        }
      }
      iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar4 != 0) {
LAB_00504239:
        core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
        return 0;
      }
    } while (-1 < this_ptr->server_player_index);
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,1);
  return 0;
}
