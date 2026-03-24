// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// Address: 00542dd0
// Address Range: [[00542dd0, 00542fe3] [0060c4ea, 0060c501]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(CNetGame *this_ptr,int player_index)

{
  char cVar2;
  EHeroType EVar3;
  int iVar5;
  CNetGame *pCVar2;
  int iVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar5;
  SNetPlayer *pSVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar8;
  SNetPacketHeader local_c8;
  int local_c3;
  uint local_bf;
  char local_bb [80];
  int local_6b;
  char local_67 [20];
  EHeroType local_53 [15];
  SNetPlayer *local_14;
  char cVar1;
  
  if ((this_ptr->connection_type != CONNECTION_HOST) || (this_ptr->network_mode != NET_MODE_LOBBY))
  {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8a8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((player_index < 0) || (this_ptr->player_count <= player_index)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8ae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::send - invalid player index");
  }
  local_c8.type = PACKET_GAME_SETTINGS;
  local_c8.size = 0xb1;
  __arrinit(local_67,2,&g_SPlayerTypeInfo);
  pcVar7 = local_bb;
  pcVar5 = this_ptr->mission_name;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  iVar4 = 0;
  if (0 < this_ptr->player_count) {
    pSVar6 = this_ptr->players;
    pcVar8 = local_67;
    local_14 = pSVar6;
    pcVar6 = pcVar8;
    pCVar2 = this_ptr;
LAB_00542ef5:
    do {
      cVar2 = pSVar6->name[0];
      *pcVar8 = cVar2;
      if (cVar2 != '\0') {
        cVar2 = pSVar6->name[1];
        pSVar6 = (SNetPlayer *)(pSVar6->name + 2);
        pcVar8[1] = cVar2;
        pcVar8 = pcVar8 + 2;
        if (cVar2 != '\0') goto LAB_00542ef5;
      }
      local_53[iVar4 * 10] = pCVar2->players[0].addr.ip_address;
      EVar3 = *(EHeroType *)&pCVar2->players[0].addr.port;
      local_53[iVar4 * 10 + 1] = EVar3;
      *(int *)((int)local_53 + EVar3 + 0x10) = pCVar2->players[0].ready_flag;
      *(EHeroType *)((int)local_53 + EVar3 + HERO_TYPE_MOLOCH) = pCVar2->players[0].hero_number;
      pcVar8 = pcVar6 + 0x28;
      *(int *)((int)local_53 + EVar3 + (HERO_TYPE_MOLOCH|HERO_TYPE_BARON)) =
           pCVar2->players[0].aim_mode;
      iVar4 = iVar4 + 1;
      pSVar6 = local_14 + 1;
      local_14 = pSVar6;
      pcVar6 = pcVar8;
      pCVar2 = (CNetGame *)(pCVar2->players[0].controls.action_states + 3);
    } while (iVar4 < this_ptr->player_count);
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,player_index,&local_c8);
  iVar5 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar5 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  g_LastPingTime = iVar5 / 0x12;
  this_ptr->players[player_index].last_update_time = g_CurrentGameTime;
  return;
}
