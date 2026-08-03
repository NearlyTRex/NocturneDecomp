// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0
// Address: 004ed2d0
// Address Range: [[004ed2d0, 004ed714]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(CNetGame *this_ptr)

{
  SNetPlayer *pSVar1;
  int iVar2;
  int iVar3;
  uint seed_value;
  CNetGame *pCVar4;
  uint *puVar5;
  int iVar6;
  SSimFrame *sim_frame;
  SSimFrame *pSVar7;
  SPlayerInput *pSVar8;
  uint *puVar9;
  byte *src;
  SPlayerInput *pSVar10;
  uint *puVar11;
  byte bVar12;
  SNetPacketHeader local_90;
  uint local_8b;
  uint local_87;
  uint local_83;
  uint local_7f [22];
  int local_24;
  int local_20;
  SSimFrame *local_1c;
  int local_18;
  SNetPlayer *local_14;
  
  bVar12 = 0;
  iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar2 = iVar2 / 0x12;
  _DAT_01cea3f4 = iVar2 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01cea3f4 = iVar2;
  if (this_ptr->connection_type == CONNECTION_NONE) {
    seed_value = rand();
    this_ptr->random_seed = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040dd20(seed_value);
    return;
  }
  if ((this_ptr->connection_type == CONNECTION_HOST) && (this_ptr->network_mode == NET_MODE_PLAYING)
     ) {
    if (this_ptr->local_player_index < 0) {
      g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
      g_INT_01cc4804 = 0x8f6;
      core_main_c_FUN_004c8440("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (this_ptr->local_player_index != this_ptr->server_player_index) {
      g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
      g_INT_01cc4804 = 0x8f7;
      core_main_c_FUN_004c8440("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar2 = 0;
    if (0 < this_ptr->player_count) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(this_ptr,iVar2,10.0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
    local_18 = 0x7fffffff;
    iVar2 = 0;
    pCVar4 = this_ptr;
    if (0 < this_ptr->player_count) {
      do {
        iVar6 = pCVar4->players[0].sim_frame_index;
        if (iVar6 < local_18) {
          local_18 = iVar6;
        }
        iVar2 = iVar2 + 1;
        pCVar4 = (CNetGame *)&pCVar4->players[0].player_input.action_state.fire;
      } while (iVar2 < this_ptr->player_count);
    }
    iVar2 = 0;
    if (0 < _DAT_01d09c00) {
      iVar6 = 0;
      src = &DAT_01d09c68;
      do {
        if (*(int *)(iVar6 + 0x1d09c04) < local_18) {
          _DAT_01d09c00 = _DAT_01d09c00 + -1;
          memmove
                    ((void *)(iVar6 + 0x1d09c04),src,(_DAT_01d09c00 - iVar2) * 100);
        }
        else {
          src = src + 100;
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 100;
        }
      } while (iVar2 < _DAT_01d09c00);
    }
    iVar6 = 0;
    iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
    if (0 < _DAT_01d09c00) {
      iVar3 = 0;
      do {
        if (iVar2 == *(int *)(iVar3 + 0x1d09c04)) {
          if (-1 < iVar6) {
            sim_frame = (SSimFrame *)(iVar3 + 0x1d09c04);
            goto LAB_004ed475;
          }
          break;
        }
        iVar3 = iVar3 + 100;
        iVar6 = iVar6 + 1;
      } while (iVar3 < _DAT_01d09c00 * 100);
    }
    if (0x1ff < _DAT_01d09c00) {
      g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
      g_INT_01cc4804 = 299;
      core_main_c_FUN_004c8440("allocSimFrame - sim history list full");
    }
    sim_frame = (SSimFrame *)(_DAT_01d09c00 * 100 + 0x1d09c04);
    _DAT_01d09c00 = _DAT_01d09c00 + 1;
    memset(sim_frame,0,100);
    sim_frame->sequence_number = iVar2;
LAB_004ed475:
    iVar2 = rand();
    sim_frame->random_seed = iVar2;
    sim_frame->delta_time = g_CGame_PTR_005b9354->delta_time_float;
    iVar2 = 0;
    pCVar4 = this_ptr;
    pSVar7 = sim_frame;
    if (0 < this_ptr->player_count) {
      do {
        pSVar8 = &pCVar4->players[0].player_input;
        pSVar10 = pSVar7->player_input;
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          (pSVar10->action_state).walk = (pSVar8->action_state).walk;
          pSVar8 = (SPlayerInput *)((int)pSVar8 + (uint)bVar12 * -8 + 4);
          pSVar10 = (SPlayerInput *)((int)pSVar10 + (uint)bVar12 * -8 + 4);
        }
        iVar2 = iVar2 + 1;
        pCVar4 = (CNetGame *)&pCVar4->players[0].player_input.action_state.fire;
        pSVar7 = (SSimFrame *)&pSVar7->player_input[0].strafe_speed;
      } while (iVar2 < this_ptr->player_count);
    }
    local_1c = sim_frame;
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980(this_ptr,sim_frame);
    local_24 = 0;
    if (0 < this_ptr->player_count) {
      local_14 = this_ptr->players;
      do {
        pSVar1 = local_14;
        if (local_24 != this_ptr->local_player_index) {
          iVar2 = this_ptr->players[this_ptr->local_player_index].sim_frame_index -
                  local_14->sim_frame_index;
          if (iVar2 < 1) {
            g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
            g_INT_01cc4804 = 0x93b;
            core_main_c_FUN_004c8440("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          local_20 = pSVar1->sim_frame_index;
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar6 = 0;
            if (0 < _DAT_01d09c00) {
              iVar3 = 0;
              do {
                if (local_20 == *(int *)(iVar3 + 0x1d09c04)) goto LAB_004ed65e;
                iVar3 = iVar3 + 100;
                iVar6 = iVar6 + 1;
              } while (iVar3 < _DAT_01d09c00 * 100);
            }
            iVar6 = -1;
LAB_004ed65e:
            if (iVar6 < 0) {
              g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
              g_INT_01cc4804 = 0x94d;
              core_main_c_FUN_004c8440("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            iVar6 = iVar6 * 100;
            puVar5 = (uint *)(iVar6 + 0x1d09c04);
            local_90.size = 0x69;
            local_90.type = PACKET_SIM_FRAME;
            local_8b = *puVar5;
            local_87 = *(uint *)(iVar6 + 0x1d09c08);
            local_83 = *(uint *)(iVar6 + 0x1d09c0c);
            iVar6 = 0;
            if (0 < this_ptr->player_count) {
              do {
                puVar9 = puVar5 + 3;
                puVar11 = local_7f + iVar6 * 0xb;
                for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar11 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
                  puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 0xb;
              } while (iVar6 < this_ptr->player_count);
            }
            core_netgame_cpp_CNetGame_send_FUN_004eb350(this_ptr,local_24,&local_90);
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
