// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50
// Address: 004ecf50
// Address Range: [[004ecf50, 004ed163]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_004ecf50(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_004ecf50(CNetGame *this_ptr,int player_index)

{
  char cVar1;
  CNetGame *pCVar2;
  int iVar3;
  char *pcVar4;
  SNetPlayer *pSVar5;
  char *pcVar6;
  byte bVar7;
  SNetPacketHeader SStack_c8;
  uint uStack_c3;
  uint uStack_bf;
  char acStack_bb [80];
  int iStack_6b;
  char acStack_67 [20];
  EHeroType aEStack_53 [15];
  SNetPlayer *pSStack_14;
  
  bVar7 = 0;
  if ((this_ptr->connection_type != CONNECTION_HOST) || (this_ptr->network_mode != NET_MODE_LOBBY))
  {
    PTR_01cc4800 = "..\\core\\netgame.cpp";
    INT_01cc4804 = 0x8a8;
    core_main_c_FUN_004c8440("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    PTR_01cc4800 = "..\\core\\netgame.cpp";
    INT_01cc4804 = 0x8ae;
    core_main_c_FUN_004c8440("CNetGame::send - invalid player index");
  }
  SStack_c8.type = PACKET_GAME_SETTINGS;
  SStack_c8.size = 0xb1;
  __arrinit(acStack_67,2,&g_SPlayerTypeInfo_005a0e00);
  uStack_bf = this_ptr->random_seed;
  uStack_c3 = _DAT_01cea404;
  pcVar6 = acStack_bb;
  iStack_6b = this_ptr->player_count;
  pcVar4 = this_ptr->mission_name;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar3 = 0;
  if (0 < this_ptr->player_count) {
    pSVar5 = this_ptr->players;
    pcVar6 = acStack_67;
    pSStack_14 = pSVar5;
    pcVar4 = pcVar6;
    pCVar2 = this_ptr;
LAB_004ed075:
    do {
      cVar1 = pSVar5->name[0];
      *pcVar6 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pSVar5->name[1];
        pSVar5 = (SNetPlayer *)(pSVar5->name + 2);
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
        if (cVar1 != '\0') goto LAB_004ed075;
      }
      aEStack_53[iVar3 * 10] = pCVar2->players[0].addr.ip_address;
      aEStack_53[iVar3 * 10 + (uint)bVar7 * -2 + 1] =
           *(EHeroType *)((int)pCVar2 + (uint)bVar7 * -8 + 0x40);
      aEStack_53[iVar3 * 10 + 4] = pCVar2->players[0].ready_flag;
      aEStack_53[iVar3 * 10 + 2] = pCVar2->players[0].hero_number;
      pcVar6 = pcVar4 + 0x28;
      aEStack_53[iVar3 * 10 + 3] = pCVar2->players[0].aim_mode;
      iVar3 = iVar3 + 1;
      pSVar5 = pSStack_14 + 1;
      pSStack_14 = pSVar5;
      pcVar4 = pcVar6;
      pCVar2 = (CNetGame *)&pCVar2->players[0].player_input.action_state.fire;
    } while (iVar3 < this_ptr->player_count);
  }
  core_netgame_cpp_CNetGame_send_FUN_004eb350(this_ptr,player_index,&SStack_c8);
  iVar3 = wincore_winrun_cpp_getTime_FUN_00558a30();
  _DAT_01cea3f4 = iVar3 / 0x12 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01cea3f4 = iVar3 / 0x12;
  this_ptr->players[player_index].last_update_time = _DAT_01cea3f8;
  return;
}
