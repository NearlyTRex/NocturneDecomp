// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
// MANUAL RECONSTRUCTION
// Address Range: [[00542470, 00542af1] [006049a4, 006049c6] [03fc5b0b, 03fc5b23]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr,UNetPacket *packet)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr,UNetPacket *packet)

{
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar13;
  char *str2;
  uint uVar2;
  SNetPacket_GameSettings localPkt;
  SNetPlayer tmpPlayer;
  int local_44 [6];
  int local_1c;
  int local_14;

  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2022;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  localPkt = packet->game_settings;
  iVar6 = -1;
  this_ptr->random_seed = localPkt.random_seed;
  local_44[5] = -1;
  iVar13 = 0;
  if (0 < localPkt.player_count) {
    do {
      if ((localPkt.players[iVar13].addr.port ==
           this_ptr->players[this_ptr->local_player_index].addr.port) &&
         (localPkt.players[iVar13].addr.ip_address ==
          this_ptr->players[this_ptr->local_player_index].addr.ip_address)) {
        iVar6 = iVar13;
      }
      if ((localPkt.players[iVar13].addr.port ==
           this_ptr->players[this_ptr->server_player_index].addr.port) &&
         (localPkt.players[iVar13].addr.ip_address ==
          this_ptr->players[this_ptr->server_player_index].addr.ip_address)) {
        local_44[5] = iVar13;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < localPkt.player_count);
  }
  if ((local_44[5] < 0) || (iVar6 < 0)) {
    return 0;
  }
  strcpy(this_ptr->mission_name, localPkt.mission_name);
  local_44[3] = 0;
  if (0 < this_ptr->player_count) {
    do {
      iVar6 = 0;
      if (0 < localPkt.player_count) {
        do {
          if ((localPkt.players[iVar6].addr.port == this_ptr->players[local_44[3]].addr.port) &&
             (localPkt.players[iVar6].addr.ip_address ==
              this_ptr->players[local_44[3]].addr.ip_address)) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < localPkt.player_count);
      }
      if (iVar6 == localPkt.player_count) {
        if (local_44[3] == this_ptr->local_player_index) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 2065;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(this_ptr,local_44[3]);
      }
      else {
        local_44[local_44[3]] = iVar6;
        str2 = localPkt.players[iVar6].name;
        if (local_44[3] == this_ptr->local_player_index) {
          INT_00680a04 = local_44[3] ^ this_ptr->local_player_index;
          iVar3 = _strcmp(this_ptr->players[local_44[3]].name,str2);
          if (iVar3 != 0) {
            INT_00680a04 = 1;
          }
          if (this_ptr->players[local_44[3]].ready_flag == localPkt.players[iVar6].ready_flag) {
            if (INT_00680a04 == 0) goto LAB_005429ed;
          }
          else {
            INT_00680a04 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(this_ptr);
        }
        else {
          strcpy(this_ptr->players[local_44[3]].name, str2);
          this_ptr->players[local_44[3]].ready_flag = localPkt.players[iVar6].ready_flag;
          this_ptr->players[local_44[3]].hero_number = localPkt.players[iVar6].hero_number;
          this_ptr->players[local_44[3]].aim_mode = localPkt.players[iVar6].aim_mode;
        }
LAB_005429ed:
        localPkt.players[iVar6].name[0] = '\0';
        local_44[3] = local_44[3] + 1;
      }
    } while (local_44[3] < this_ptr->player_count);
  }
  iVar6 = 0;
  if (0 < localPkt.player_count) {
    do {
      if (localPkt.players[iVar6].name[0] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0
                        (this_ptr,&localPkt.players[iVar6].addr,localPkt.players[iVar6].name,
                         localPkt.players[iVar6].hero_number,localPkt.players[iVar6].aim_mode);
      this_ptr->players[iVar4].ready_flag = localPkt.players[iVar6].ready_flag;
      local_44[iVar4] = iVar6;
      iVar6 = iVar6 + 1;
    } while (iVar6 < localPkt.player_count);
  }
  this_ptr->server_player_index = local_44[this_ptr->server_player_index];
  this_ptr->local_player_index = local_44[this_ptr->local_player_index];
  local_1c = this_ptr->player_count + -1;
  if (-1 < local_1c) {
    do {
      local_14 = 0;
      if (0 < local_1c) {
        do {
          if (local_44[local_14 + 1] < local_44[local_14]) {
            uVar2 = local_44[local_14];
            local_44[local_14] = local_44[local_14 + 1];
            local_44[local_14 + 1] = uVar2;
            tmpPlayer = this_ptr->players[local_14];
            this_ptr->players[local_14] = this_ptr->players[local_14 + 1];
            this_ptr->players[local_14 + 1] = tmpPlayer;
          }
          local_14 = local_14 + 1;
        } while (local_14 < local_1c);
      }
      local_1c = local_1c + -1;
    } while (-1 < local_1c);
  }
  return 1;
}
