// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// Address: 00542dd0
// Address Range: [[00542dd0, 00542fe3] [0060c4ea, 0060c501]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(CNetGame *this_ptr,int player_index)

{
  char cVar1;
  EHeroType EVar2;
  CNetGame *pCVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  SNetPlayer *pSVar7;
  char *pcVar8;
  SNetPacket_Simple local_c8;
  uint local_bf;
  char local_bb [80];
  int local_6b;
  char local_67 [20];
  EHeroType local_53 [15];
  SNetPlayer *local_14;
  
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
  local_c8.header.type = PACKET_GAME_SETTINGS;
  local_c8.header.size = 0xb1;
  __arrinit(local_67,2,&g_SPlayerTypeInfo);
  local_c8.value = INT_02f7c8c4;
  pcVar8 = local_bb;
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
  iVar5 = 0;
  if (0 < this_ptr->player_count) {
    pSVar7 = this_ptr->players;
    pcVar8 = local_67;
    local_14 = pSVar7;
    pcVar6 = pcVar8;
    pCVar3 = this_ptr;
LAB_00542ef5:
    do {
      cVar1 = pSVar7->name[0];
      *pcVar8 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pSVar7->name[1];
        pSVar7 = (SNetPlayer *)(pSVar7->name + 2);
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
        if (cVar1 != '\0') goto LAB_00542ef5;
      }
      local_53[iVar5 * 10] = pCVar3->players[0].addr.ip_address;
      EVar2 = *(EHeroType *)&pCVar3->players[0].addr.port;
      local_53[iVar5 * 10 + 1] = EVar2;
      *(int *)((int)local_53 + EVar2 + 0x10) = pCVar3->players[0].ready_flag;
      *(EHeroType *)((int)local_53 + EVar2 + HERO_TYPE_MOLOCH) = pCVar3->players[0].hero_number;
      pcVar8 = pcVar6 + 0x28;
      *(int *)((int)local_53 + EVar2 + (HERO_TYPE_MOLOCH|HERO_TYPE_BARON)) =
           pCVar3->players[0].aim_mode;
      iVar5 = iVar5 + 1;
      pSVar7 = local_14 + 1;
      local_14 = pSVar7;
      pcVar6 = pcVar8;
      pCVar3 = (CNetGame *)&pCVar3->players[0].controls.action_bindings.fire_key;
    } while (iVar5 < this_ptr->player_count);
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,player_index,&local_c8.header);
  iVar5 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar4 = iVar5 / 0x12 - g_LastPingTime;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x20000 < iVar4) {
    iVar4 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar4;
  g_LastPingTime = iVar5 / 0x12;
  this_ptr->players[player_index].last_update_time = g_CurrentGameTime;
  return;
}
