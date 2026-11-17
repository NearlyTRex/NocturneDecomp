// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50
// Address: 004ecf50
// Address Range: [[004ecf50, 004ed163]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_004ecf50(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_004ecf50(CNetGame *this_ptr,int player_index)

{
  char cVar1;
  CNetGame *pCVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  SNetPlayer *pSVar6;
  char *pcVar7;
  byte bVar8;
  SNetPacketHeader SStack_c8;
  int iStack_c3;
  uint uStack_bf;
  char acStack_bb [80];
  int iStack_6b;
  char acStack_67 [20];
  EHeroType aEStack_53 [15];
  SNetPlayer *pSStack_14;
  
  bVar8 = 0;
  if ((this_ptr->connection_type != CONNECTION_HOST) || (this_ptr->network_mode != NET_MODE_LOBBY))
  {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2216;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2222;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::send - invalid player index");
  }
  SStack_c8.type = PACKET_GAME_SETTINGS;
  SStack_c8.size = 0xb1;
  __arrinit(acStack_67,2,&g_SPlayerTypeInfo_005a0e00);
  uStack_bf = this_ptr->random_seed;
  iStack_c3 = g_INT_01cea404;
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
  iVar4 = 0;
  if (0 < this_ptr->player_count) {
    pSVar6 = this_ptr->players;
    pcVar7 = acStack_67;
    pSStack_14 = pSVar6;
    pcVar5 = pcVar7;
    pCVar2 = this_ptr;
LAB_004ed075:
    do {
      cVar1 = pSVar6->name[0];
      *pcVar7 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pSVar6->name[1];
        pSVar6 = (SNetPlayer *)(pSVar6->name + 2);
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
        if (cVar1 != '\0') goto LAB_004ed075;
      }
      aEStack_53[iVar4 * 10] = pCVar2->players[0].addr.ip_address;
      aEStack_53[iVar4 * 10 + (uint)bVar8 * -2 + 1] =
           *(EHeroType *)((int)pCVar2 + (uint)bVar8 * -8 + 0x40);
      aEStack_53[iVar4 * 10 + 4] = pCVar2->players[0].ready_flag;
      aEStack_53[iVar4 * 10 + 2] = pCVar2->players[0].hero_number;
      pcVar7 = pcVar5 + 0x28;
      aEStack_53[iVar4 * 10 + 3] = pCVar2->players[0].aim_mode;
      iVar4 = iVar4 + 1;
      pSVar6 = pSStack_14 + 1;
      pSStack_14 = pSVar6;
      pcVar5 = pcVar7;
      pCVar2 = (CNetGame *)&pCVar2->players[0].player_input.action_state.fire;
    } while (iVar4 < this_ptr->player_count);
  }
  core_netgame_cpp_CNetGame_send_FUN_004eb350(this_ptr,player_index,&SStack_c8);
  iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar3 = iVar4 / 0x12 - g_INT_01cea3f4;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01cea3f8 = g_UINT_01cea3f8 + iVar3;
  g_INT_01cea3f4 = iVar4 / 0x12;
  this_ptr->players[player_index].last_update_time = g_UINT_01cea3f8;
  return;
}
