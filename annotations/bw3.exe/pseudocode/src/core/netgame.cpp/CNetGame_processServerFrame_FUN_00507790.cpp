// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_00507790
// Address: 00507790
// Address Range: [[00507790, 00507bff]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00507790(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00507790(CNetGame *this_ptr)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  CNetGame *pCVar4;
  uint seed_value;
  SSimFrame *pSVar5;
  uint *puVar6;
  int iVar7;
  SSimFrame *sim_frame;
  uint *puVar8;
  byte *src;
  SSimFrame *pSVar9;
  uint *puVar10;
  byte bVar11;
  uint local_a0;
  byte local_9c;
  uint local_9b;
  uint local_97;
  uint local_93;
  uint local_8f [26];
  SSimFrame *local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  iVar2 = wincore_winrun_cpp_FUN_005806a0();
  iVar2 = iVar2 / 0x12;
  _DAT_01da6474 = iVar2 - _DAT_01da6474;
  if (_DAT_01da6474 < 0) {
    _DAT_01da6474 = 0;
  }
  else if (0x20000 < _DAT_01da6474) {
    _DAT_01da6474 = 0x20000;
  }
  _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
  _DAT_01da6474 = iVar2;
  if (*(int *)this_ptr == 0) {
    seed_value = rand();
    *(uint *)&this_ptr->field_0x17c = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040cdc0(seed_value);
    return;
  }
  if ((*(int *)this_ptr == 1) && (*(int *)&this_ptr->field_0x4 == 3)) {
    if (*(int *)&this_ptr->field_0x124 < 0) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 0x8f6;
      core_main_c_FUN_004e4330("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (*(int *)&this_ptr->field_0x124 != *(int *)&this_ptr->field_0x120) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 0x8f7;
      core_main_c_FUN_004e4330("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar2 = 0;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_00506320(this_ptr,iVar2,10.0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)&this_ptr->field_0x1c);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
    local_20 = 0x7fffffff;
    iVar2 = 0;
    pCVar4 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      do {
        if (*(int *)&pCVar4->field_0x68 < local_20) {
          local_20 = *(int *)&pCVar4->field_0x68;
        }
        iVar2 = iVar2 + 1;
        pCVar4 = (CNetGame *)&pCVar4->field_0x80;
      } while (iVar2 < *(int *)&this_ptr->field_0x1c);
    }
    iVar2 = 0;
    if (0 < _DAT_01dc5c80) {
      iVar7 = 0;
      src = &DAT_01dc5cf8;
      do {
        if (*(int *)(iVar7 + 0x1dc5c84) < local_20) {
          _DAT_01dc5c80 = _DAT_01dc5c80 + -1;
          memmove
                    ((void *)(iVar7 + 0x1dc5c84),src,(_DAT_01dc5c80 - iVar2) * 0x74);
        }
        else {
          src = src + 0x74;
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x74;
        }
      } while (iVar2 < _DAT_01dc5c80);
    }
    iVar2 = *(int *)(&this_ptr->field_0x68 + *(int *)&this_ptr->field_0x124 * 0x80);
    iVar7 = 0;
    if (0 < _DAT_01dc5c80) {
      iVar3 = 0;
      do {
        if (iVar2 == *(int *)(iVar3 + 0x1dc5c84)) {
          if (-1 < iVar7) {
            sim_frame = (SSimFrame *)(iVar3 + 0x1dc5c84);
            goto LAB_00507935;
          }
          break;
        }
        iVar3 = iVar3 + 0x74;
        iVar7 = iVar7 + 1;
      } while (iVar3 < _DAT_01dc5c80 * 0x74);
    }
    if (0x1ff < _DAT_01dc5c80) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 299;
      core_main_c_FUN_004e4330("allocSimFrame - sim history list full");
    }
    sim_frame = (SSimFrame *)(_DAT_01dc5c80 * 0x74 + 0x1dc5c84);
    _DAT_01dc5c80 = _DAT_01dc5c80 + 1;
    memset(sim_frame,0,0x74);
    *(int *)sim_frame = iVar2;
LAB_00507935:
    iVar2 = rand();
    *(int *)(sim_frame + 4) = iVar2;
    *(uint *)(sim_frame + 8) = *(uint *)&g_CGamePtr->field_0x314;
    iVar2 = 0;
    pCVar4 = this_ptr;
    pSVar5 = sim_frame;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      do {
        puVar6 = (uint *)&pCVar4->field_0x6c;
        pSVar9 = pSVar5 + 0xc;
        for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(uint *)pSVar9 = *puVar6;
          puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
          pSVar9 = pSVar9 + (uint)bVar11 * -8 + 4;
        }
        iVar2 = iVar2 + 1;
        pCVar4 = (CNetGame *)&pCVar4->field_0x80;
        pSVar5 = pSVar5 + 0x34;
      } while (iVar2 < *(int *)&this_ptr->field_0x1c);
    }
    local_24 = sim_frame;
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00507e50(this_ptr,sim_frame);
    local_18 = 0;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      local_1c = &this_ptr->field_0x20;
      do {
        puVar1 = local_1c;
        if (local_18 != *(int *)&this_ptr->field_0x124) {
          iVar2 = *(int *)(&this_ptr->field_0x68 + *(int *)&this_ptr->field_0x124 * 0x80) -
                  *(int *)(local_1c + 0x48);
          if (iVar2 < 1) {
            _DAT_01d71de0 = "..\\core\\netgame.cpp";
            _DAT_01d71de4 = 0x93b;
            core_main_c_FUN_004e4330("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          local_14 = *(int *)(puVar1 + 0x48);
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar7 = 0;
            if (0 < _DAT_01dc5c80) {
              iVar3 = 0;
              do {
                if (local_14 == *(int *)(iVar3 + 0x1dc5c84)) goto LAB_00507b40;
                iVar3 = iVar3 + 0x74;
                iVar7 = iVar7 + 1;
              } while (iVar3 < _DAT_01dc5c80 * 0x74);
            }
            iVar7 = -1;
LAB_00507b40:
            if (iVar7 < 0) {
              _DAT_01d71de0 = "..\\core\\netgame.cpp";
              _DAT_01d71de4 = 0x94d;
              core_main_c_FUN_004e4330("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            iVar7 = iVar7 * 0x74;
            puVar6 = (uint *)(iVar7 + 0x1dc5c84);
            local_a0 = 0x79;
            local_9c = 0xf;
            local_9b = *puVar6;
            local_97 = *(uint *)(iVar7 + 0x1dc5c88);
            local_93 = *(uint *)(iVar7 + 0x1dc5c8c);
            iVar7 = 0;
            if (0 < *(int *)&this_ptr->field_0x1c) {
              do {
                puVar8 = puVar6 + 3;
                puVar10 = local_8f + iVar7 * 0xd;
                for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar10 = *puVar8;
                  puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
                  puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar7 = iVar7 + 1;
                puVar6 = puVar6 + 0xd;
              } while (iVar7 < *(int *)&this_ptr->field_0x1c);
            }
            core_netgame_cpp_CNetGame_send_FUN_00505870
                      (this_ptr,local_18,(SNetPacketHeader *)&local_a0);
            local_14 = local_14 + 1;
          }
        }
        local_1c = local_1c + 0x80;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)&this_ptr->field_0x1c);
    }
  }
  return;
}
