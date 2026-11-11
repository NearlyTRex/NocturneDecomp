// Name: core_netgame.cpp_FUN_0050b4d0
// Address: 0050b4d0
// Address Range: [[0050b4d0, 0050b78d]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_0050b4d0(CNetGame *this_ptr,uint32_t *server_ip)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_FUN_0050b4d0(CNetGame *this_ptr,uint32_t *server_ip)

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
  int iStack_33;
  SNetworkAddr aSStack_2c [2];
  uint uStack_1c;
  char *pcStack_18;
  int iStack_14;
  
  bVar7 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,0);
  pCVar2 = g_CGamePtr;
  this_ptr->player_count = 0;
  aim_mode = pCVar2->aim_mode;
  hero_number = pCVar2->hero_number;
  pcVar6 = this_ptr->player_name;
  addr = (SNetworkAddr *)
         support_trisock_cpp_createNetworkAddr_FUN_00578e60
                   (&aSStack_2c[0].port,_DAT_02653630,0x1ddf);
  iVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70
                    (this_ptr,addr,pcVar6,hero_number,aim_mode);
  this_ptr->local_player_index = iVar3;
  iVar3 = core_netgame_cpp_FUN_0050b790(this_ptr);
  if (iVar3 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_00578e60(aSStack_2c,*server_ip,0x1ddf);
  iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70
                    (this_ptr,aSStack_2c,"TheServer",0,0);
  this_ptr->connection_type = CONNECTION_CLIENT;
  this_ptr->network_mode = NET_MODE_LOBBY;
  iVar3 = _DAT_01d34e38;
  this_ptr->server_player_index = iVar4;
  _DAT_01d34e3c = 0;
  iVar3 = iVar3 + -0x50000;
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Contacting server.  Press ESC to give up...");
  uStack_1c = DAT_0061e990;
  DAT_0061e990 = 0;
  if (-1 < this_ptr->server_player_index) {
    pcStack_18 = this_ptr->player_name;
    do {
      iStack_14 = _DAT_01d34e38 - iVar3;
      fStack_5c = (float)(_DAT_01d34e38 - iVar3) * (float)_DAT_005e0535;
      if (fStack_5c < 0.0) {
        fStack_5c = 0.0;
      }
      if ((float)_DAT_005e053d < fStack_5c) {
        fStack_5c = 30.0;
      }
      if ((float)_DAT_005e0545 < fStack_5c) {
        SStack_58.size = 0x29;
        SStack_58.type = PACKET_PLAYER_ANNOUNCE;
        uStack_53 = aSStack_2c[0].ip_address;
        (&uStack_4f)[(uint)bVar7 * -2] = *(uint *)&aSStack_2c[-(uint)bVar7].port;
        EStack_37 = this_ptr->players[this_ptr->local_player_index].hero_number;
        iStack_33 = this_ptr->players[this_ptr->local_player_index].aim_mode;
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
        core_netgame_cpp_CNetGame_send_FUN_0050cd90
                  (this_ptr,this_ptr->server_player_index,&SStack_58);
        iVar3 = _DAT_01d34e38;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
      if (_DAT_01d34e3c == 1) {
        DAT_0061e990 = uStack_1c;
        return 1;
      }
      if (_DAT_01d34e3c < 3) {
        if (_DAT_01d34e3c == 2) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                    (g_CEditorToolsPtr,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,0);
          return 0;
        }
      }
      else {
        if (_DAT_01d34e3c < 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                    (g_CEditorToolsPtr,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,0);
          return 0;
        }
        if (_DAT_01d34e3c == 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                    (g_CEditorToolsPtr,"Connection refused - already in the game");
          goto LAB_0050b759;
        }
      }
      iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
      if (iVar4 != 0) {
LAB_0050b759:
        core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,0);
        return 0;
      }
    } while (-1 < this_ptr->server_player_index);
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,1);
  return 0;
}
