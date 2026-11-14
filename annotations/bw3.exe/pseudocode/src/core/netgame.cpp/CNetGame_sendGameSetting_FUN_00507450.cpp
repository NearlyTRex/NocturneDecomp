// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00507450
// Address: 00507450
// Address Range: [[00507450, 0050765e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00507450(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00507450(CNetGame *this_ptr,int player_index)

{
  char cVar1;
  CNetGame *pCVar2;
  int iVar3;
  SNetPlayer *pSVar4;
  char *pcVar5;
  SNetPlayer *pSVar6;
  char *pcVar7;
  byte bVar8;
  SNetPacketHeader SStack_c8;
  uint uStack_c3;
  uint uStack_bf;
  char acStack_bb [80];
  int iStack_6b;
  char acStack_67 [20];
  EHeroType aEStack_53 [15];
  char *pcStack_14;
  
  bVar8 = 0;
  if ((this_ptr->connection_type != CONNECTION_HOST) || (this_ptr->network_mode != NET_MODE_LOBBY))
  {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x8a8;
    core_main_c_FUN_004e4330("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x8ae;
    core_main_c_FUN_004e4330("CNetGame::send - invalid player index");
  }
  SStack_c8.type = PACKET_GAME_SETTINGS;
  SStack_c8.size = 0xb1;
  __arrinit(acStack_67,2,&g_SPlayerTypeInfo);
  uStack_bf = this_ptr->random_seed;
  uStack_c3 = _DAT_01da6484;
  pcVar7 = acStack_bb;
  iStack_6b = this_ptr->player_count;
  pcVar5 = this_ptr->mission_name;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar3 = 0;
  if (0 < this_ptr->player_count) {
    pSVar6 = this_ptr->players;
    pcVar7 = acStack_67;
    pcStack_14 = pcVar7;
    pSVar4 = pSVar6;
    pCVar2 = this_ptr;
LAB_00507570:
    do {
      cVar1 = pSVar6->name[0];
      *pcVar7 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pSVar6->name[1];
        pSVar6 = (SNetPlayer *)(pSVar6->name + 2);
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
        if (cVar1 != '\0') goto LAB_00507570;
      }
      aEStack_53[iVar3 * 10] = pCVar2->players[0].addr.ip_address;
      aEStack_53[iVar3 * 10 + (uint)bVar8 * -2 + 1] =
           *(EHeroType *)((int)pCVar2 + (uint)bVar8 * -8 + 0x40);
      aEStack_53[iVar3 * 10 + 4] = pCVar2->players[0].ready_flag;
      aEStack_53[iVar3 * 10 + 2] = pCVar2->players[0].hero_number;
      pSVar6 = pSVar4 + 1;
      aEStack_53[iVar3 * 10 + 3] = pCVar2->players[0].aim_mode;
      iVar3 = iVar3 + 1;
      pcVar7 = pcStack_14 + 0x28;
      pcStack_14 = pcVar7;
      pSVar4 = pSVar6;
      pCVar2 = (CNetGame *)&pCVar2->players[0].player_input.action_state.use_item;
    } while (iVar3 < this_ptr->player_count);
  }
  core_netgame_cpp_CNetGame_send_FUN_00505870(this_ptr,player_index,&SStack_c8);
  iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
  _DAT_01da6474 = iVar3 / 0x12 - _DAT_01da6474;
  if (_DAT_01da6474 < 0) {
    _DAT_01da6474 = 0;
  }
  else if (0x20000 < _DAT_01da6474) {
    _DAT_01da6474 = 0x20000;
  }
  _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
  _DAT_01da6474 = iVar3 / 0x12;
  this_ptr->players[player_index].last_update_time = _DAT_01da6478;
  return;
}
