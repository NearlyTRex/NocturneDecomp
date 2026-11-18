// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00507450
// Address: 00507450
// Address Range: [[00507450, 0050765e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00507450(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00507450(CNetGame *this_ptr,int player_index)

{
  char cVar1;
  CNetGame *pCVar2;
  int iVar3;
  int iVar4;
  SNetPlayer *pSVar5;
  char *pcVar6;
  SNetPlayer *pSVar7;
  char *pcVar8;
  byte bVar9;
  SNetPacketHeader SStack_c8;
  int iStack_c3;
  uint uStack_bf;
  char acStack_bb [80];
  int iStack_6b;
  char acStack_67 [20];
  EHeroType aEStack_53 [15];
  char *pcStack_14;
  
  bVar9 = 0;
  if ((this_ptr->connection_type != CONNECTION_HOST) || (this_ptr->network_mode != NET_MODE_LOBBY))
  {
    g_CHAR_PTR_01d71de0 = "..\\core\\netgame.cpp";
    g_INT_01d71de4 = 0x8a8;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CHAR_PTR_01d71de0 = "..\\core\\netgame.cpp";
    g_INT_01d71de4 = 0x8ae;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CNetGame::send - invalid player index");
  }
  SStack_c8.type = PACKET_GAME_SETTINGS;
  SStack_c8.size = 0xb1;
  __arrinit(acStack_67,2,&g_SPlayerTypeInfo);
  uStack_bf = this_ptr->random_seed;
  iStack_c3 = g_NetNextPlayerId;
  pcVar8 = acStack_bb;
  iStack_6b = this_ptr->player_count;
  pcVar6 = this_ptr->mission_name;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < this_ptr->player_count) {
    pSVar7 = this_ptr->players;
    pcVar8 = acStack_67;
    pcStack_14 = pcVar8;
    pSVar5 = pSVar7;
    pCVar2 = this_ptr;
LAB_00507570:
    do {
      cVar1 = pSVar7->name[0];
      *pcVar8 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pSVar7->name[1];
        pSVar7 = (SNetPlayer *)(pSVar7->name + 2);
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
        if (cVar1 != '\0') goto LAB_00507570;
      }
      aEStack_53[iVar4 * 10] = pCVar2->players[0].addr.ip_address;
      aEStack_53[iVar4 * 10 + (uint)bVar9 * -2 + 1] =
           *(EHeroType *)((int)pCVar2 + (uint)bVar9 * -8 + 0x40);
      aEStack_53[iVar4 * 10 + 4] = pCVar2->players[0].ready_flag;
      aEStack_53[iVar4 * 10 + 2] = pCVar2->players[0].hero_number;
      pSVar7 = pSVar5 + 1;
      aEStack_53[iVar4 * 10 + 3] = pCVar2->players[0].aim_mode;
      iVar4 = iVar4 + 1;
      pcVar8 = pcStack_14 + 0x28;
      pcStack_14 = pcVar8;
      pSVar5 = pSVar7;
      pCVar2 = (CNetGame *)&pCVar2->players[0].player_input.action_state.use_item;
    } while (iVar4 < this_ptr->player_count);
  }
  core_netgame_cpp_CNetGame_send_FUN_00505870(this_ptr,player_index,&SStack_c8);
  iVar4 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar3 = iVar4 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01da6478 = g_UINT_01da6478 + iVar3;
  g_LastPingTime = iVar4 / 0x12;
  this_ptr->players[player_index].last_update_time = g_UINT_01da6478;
  return;
}
