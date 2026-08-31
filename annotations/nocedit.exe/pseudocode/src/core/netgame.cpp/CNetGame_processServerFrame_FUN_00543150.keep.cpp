// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
// Address: 00543150
// MANUAL RECONSTRUCTION
// Address Range: [[00543150, 00543594] [03fc5169, 03fc521c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)

#include "nocturne.h"
#include "debug_log.h"

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  uint seed_value;
  SSimFrame *pSVar4;
  int iVar5;
  SNetPacket_SimFrame local_90;
  int local_24;
  int local_20;
  SNetPlayer *local_14;

  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  g_LastPingTime = iVar1;
  if (this_ptr->connection_type == CONNECTION_NONE) {
#if NOCTURNE_AUTHENTIC_RNG
    seed_value = rand();
#else
    seed_value = nocturne_rng_seed();
#endif
    this_ptr->random_seed = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040cb90(seed_value);
    return;
  }
  if ((this_ptr->connection_type == CONNECTION_HOST) && (this_ptr->network_mode == NET_MODE_PLAYING)
     ) {
    if (this_ptr->local_player_index < 0) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 2294;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (this_ptr->local_player_index != this_ptr->server_player_index) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 2295;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar1 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(this_ptr,iVar1,10.0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
#if !NOCTURNE_AUTHENTIC_NETPLAY
    for (iVar2 = this_ptr->player_count + -1; 0 < iVar2; iVar2 = iVar2 + -1) {
      if (((this_ptr->local_player_index < iVar2) && (this_ptr->server_player_index < iVar2)) &&
         (NOCTURNE_NETPLAY_TIMEOUT_TICKS <
          (uint)(g_CurrentGameTime - this_ptr->players[iVar2].last_arrival_time))) {
        if ((iVar2 < 4) && (g_HeroActors[iVar2] != (CHero *)0x0)) {
          memset(&g_HeroActors[iVar2]->player_input,0,sizeof(g_HeroActors[iVar2]->player_input));
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(this_ptr,iVar2);
      }
    }
#endif
    iVar1 = 0x7fffffff;
    iVar2 = 0;
    if (0 < this_ptr->player_count) {
      do {
        iVar5 = this_ptr->players[iVar2].sim_frame_index;
        if (iVar5 < iVar1) {
          iVar1 = iVar5;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
    iVar2 = 0;
    if (0 < g_SimFrameCount) {
      do {
        if (g_SimFrameHistory[iVar2].sequence_number < iVar1) {
          g_SimFrameCount = g_SimFrameCount + -1;
          memmove(&g_SimFrameHistory[iVar2],&g_SimFrameHistory[iVar2 + 1],
                  (g_SimFrameCount - iVar2) * sizeof(*g_SimFrameHistory));
        }
        else {
          iVar2 = iVar2 + 1;
        }
      } while (iVar2 < g_SimFrameCount);
    }
    iVar2 = 0;
    iVar1 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
    if (0 < g_SimFrameCount) {
      do {
        if (iVar1 == g_SimFrameHistory[iVar2].sequence_number) {
          if (-1 < iVar2) {
            pSVar4 = &g_SimFrameHistory[iVar2];
            goto LAB_005432f5;
          }
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < g_SimFrameCount);
    }
    if (0x1ff < g_SimFrameCount) {
      g_CurrentFilename = "..\\core\\netgame.cpp";
      g_CurrentLineNumber = 299;
      core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
    }
    pSVar4 = g_SimFrameHistory + g_SimFrameCount;
    g_SimFrameCount = g_SimFrameCount + 1;
    memset(pSVar4,0,sizeof(*pSVar4));
    pSVar4->sequence_number = iVar1;
LAB_005432f5:
#if NOCTURNE_AUTHENTIC_RNG
    iVar1 = rand();
#else
    iVar1 = (int)nocturne_rng_seed();
#endif
    pSVar4->random_seed = iVar1;
    pSVar4->delta_time = g_CGamePtr->delta_time_float;
    iVar1 = 0;
    if (0 < this_ptr->player_count) {
      do {
        pSVar4->player_input[iVar1] = this_ptr->players[iVar1].player_input;
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(this_ptr,pSVar4);
    local_24 = 0;
    if (0 < this_ptr->player_count) {
      local_14 = this_ptr->players;
      do {
        if (local_24 != this_ptr->local_player_index) {
          iVar1 = this_ptr->players[this_ptr->local_player_index].sim_frame_index -
                  local_14->sim_frame_index;
          if (iVar1 < 1) {
#if !NOCTURNE_AUTHENTIC_NETPLAY
            DLOG_EX("netplay",
                    "AHEAD player=%d server_idx=%d player_idx=%d diff=%d "
                    "history=%d dt=%g",
                    local_24,
                    this_ptr->players[this_ptr->local_player_index].sim_frame_index,
                    local_14->sim_frame_index, iVar1, g_SimFrameCount,
                    (double)g_CGamePtr->delta_time_float);
#endif
            g_CurrentFilename = "..\\core\\netgame.cpp";
            g_CurrentLineNumber = 2363;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar1) {
            iVar1 = 5;
          }
          local_20 = local_14->sim_frame_index;
          for (; 0 < iVar1; iVar1 = iVar1 + -1) {
            iVar2 = 0;
            if (0 < g_SimFrameCount) {
              do {
                if (local_20 == g_SimFrameHistory[iVar2].sequence_number) goto LAB_005434de;
                iVar2 = iVar2 + 1;
              } while (iVar2 < g_SimFrameCount);
            }
            iVar2 = -1;
LAB_005434de:
            if (iVar2 < 0) {
              g_CurrentFilename = "..\\core\\netgame.cpp";
              g_CurrentLineNumber = 2381;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            pSVar4 = g_SimFrameHistory + iVar2;
            local_90.header.size = sizeof(SNetPacket_SimFrame);
            local_90.header.type = PACKET_SIM_FRAME;
            local_90.frame.sequence_number = pSVar4->sequence_number;
            local_90.frame.random_seed = g_SimFrameHistory[iVar2].random_seed;
            local_90.frame.delta_time = g_SimFrameHistory[iVar2].delta_time;
            iVar2 = 0;
            if (0 < this_ptr->player_count) {
              do {
                local_90.frame.player_input[iVar2] = pSVar4->player_input[iVar2];
                iVar2 = iVar2 + 1;
              } while (iVar2 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,local_24,&local_90.header);
            local_20 = local_20 + 1;
          }
        }
        local_14 = local_14 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->player_count);
    }
  }
  return;
}
