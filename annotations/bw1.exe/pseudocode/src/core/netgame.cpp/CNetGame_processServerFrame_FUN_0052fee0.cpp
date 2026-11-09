// Name: core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0
// Address: 0052fee0
// Address Range: [[0052fee0, 00530338]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(CNetGame *this_ptr)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  uint seed_value;
  CNetGame *pCVar4;
  uint *puVar5;
  int iVar6;
  SSimFrame *sim_frame;
  SSimFrame *pSVar7;
  uint *puVar8;
  byte *src;
  SSimFrame *pSVar9;
  uint *puVar10;
  byte bVar11;
  uint local_98;
  byte local_94;
  uint local_93;
  uint local_8f;
  uint local_8b;
  uint local_87 [24];
  int local_24;
  int local_20;
  SSimFrame *local_1c;
  int local_18;
  byte *local_14;
  
  bVar11 = 0;
  iVar2 = wincore_winrun_cpp_FUN_005b2420();
  iVar2 = iVar2 / 0x12;
  _DAT_01d51d9c = iVar2 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d51d9c = iVar2;
  if (*(int *)this_ptr == 0) {
    seed_value = rand();
    *(uint *)&this_ptr->field_0x174 = seed_value;
    core_actor_cpp_setRandomSeed_FUN_0040cb80(seed_value);
    return;
  }
  if ((*(int *)this_ptr == 1) && (*(int *)&this_ptr->field_0x4 == 3)) {
    if (*(int *)&this_ptr->field_0x11c < 0) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 0x8f6;
      core_main_c_FUN_005030e0("CNetGame::processServerFrame - I'm not in player list!");
    }
    if (*(int *)&this_ptr->field_0x11c != *(int *)&this_ptr->field_0x118) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 0x8f7;
      core_main_c_FUN_005030e0("CNetGame::processServerFrame - I'm not the server in the player list!");
    }
    iVar2 = 0;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      do {
        core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(this_ptr,iVar2,10.0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)&this_ptr->field_0x1c);
    }
    core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
    local_18 = 0x7fffffff;
    iVar2 = 0;
    pCVar4 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      do {
        if (*(int *)&pCVar4->field_0x68 < local_18) {
          local_18 = *(int *)&pCVar4->field_0x68;
        }
        iVar2 = iVar2 + 1;
        pCVar4 = (CNetGame *)&pCVar4->field_0x7c;
      } while (iVar2 < *(int *)&this_ptr->field_0x1c);
    }
    iVar2 = 0;
    if (0 < _DAT_01d715a8) {
      iVar6 = 0;
      src = &DAT_01d71618;
      do {
        if (*(int *)(iVar6 + 0x1d715ac) < local_18) {
          _DAT_01d715a8 = _DAT_01d715a8 + -1;
          memmove
                    ((void *)(iVar6 + 0x1d715ac),src,(_DAT_01d715a8 - iVar2) * 0x6c);
        }
        else {
          src = src + 0x6c;
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 0x6c;
        }
      } while (iVar2 < _DAT_01d715a8);
    }
    iVar6 = 0;
    iVar2 = *(int *)(&this_ptr->field_0x68 + *(int *)&this_ptr->field_0x11c * 0x7c);
    if (0 < _DAT_01d715a8) {
      iVar3 = 0;
      do {
        if (iVar2 == *(int *)(iVar3 + 0x1d715ac)) {
          if (-1 < iVar6) {
            sim_frame = (SSimFrame *)(iVar3 + 0x1d715ac);
            goto LAB_0053008d;
          }
          break;
        }
        iVar3 = iVar3 + 0x6c;
        iVar6 = iVar6 + 1;
      } while (iVar3 < _DAT_01d715a8 * 0x6c);
    }
    if (0x1ff < _DAT_01d715a8) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 299;
      core_main_c_FUN_005030e0("allocSimFrame - sim history list full");
    }
    sim_frame = (SSimFrame *)(_DAT_01d715a8 * 0x6c + 0x1d715ac);
    _DAT_01d715a8 = _DAT_01d715a8 + 1;
    memset(sim_frame,0,0x6c);
    *(int *)sim_frame = iVar2;
LAB_0053008d:
    iVar2 = rand();
    *(int *)(sim_frame + 4) = iVar2;
    *(uint *)(sim_frame + 8) = *(uint *)&g_CGamePtr->field_0x294;
    iVar2 = 0;
    pCVar4 = this_ptr;
    pSVar7 = sim_frame;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      do {
        puVar5 = (uint *)&pCVar4->field_0x6c;
        pSVar9 = pSVar7 + 0xc;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(uint *)pSVar9 = *puVar5;
          puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
          pSVar9 = pSVar9 + (uint)bVar11 * -8 + 4;
        }
        iVar2 = iVar2 + 1;
        pCVar4 = (CNetGame *)&pCVar4->field_0x7c;
        pSVar7 = pSVar7 + 0x30;
      } while (iVar2 < *(int *)&this_ptr->field_0x1c);
    }
    local_1c = sim_frame;
    core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_005305a0(this_ptr,sim_frame);
    local_24 = 0;
    if (0 < *(int *)&this_ptr->field_0x1c) {
      local_14 = &this_ptr->field_0x20;
      do {
        puVar1 = local_14;
        if (local_24 != *(int *)&this_ptr->field_0x11c) {
          iVar2 = *(int *)(&this_ptr->field_0x68 + *(int *)&this_ptr->field_0x11c * 0x7c) -
                  *(int *)(local_14 + 0x48);
          if (iVar2 < 1) {
            _DAT_01d1d400 = "..\\core\\netgame.cpp";
            _DAT_01d1d404 = 0x93b;
            core_main_c_FUN_005030e0("CNetGame::processServerFrame - player is ahead of the server!?!!");
          }
          if (5 < iVar2) {
            iVar2 = 5;
          }
          local_20 = *(int *)(puVar1 + 0x48);
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar6 = 0;
            if (0 < _DAT_01d715a8) {
              iVar3 = 0;
              do {
                if (local_20 == *(int *)(iVar3 + 0x1d715ac)) goto LAB_00530282;
                iVar3 = iVar3 + 0x6c;
                iVar6 = iVar6 + 1;
              } while (iVar3 < _DAT_01d715a8 * 0x6c);
            }
            iVar6 = -1;
LAB_00530282:
            if (iVar6 < 0) {
              _DAT_01d1d400 = "..\\core\\netgame.cpp";
              _DAT_01d1d404 = 0x94d;
              core_main_c_FUN_005030e0("CNetGame::processServerFrame - client needs frame, but we don't have it in history!");
            }
            iVar6 = iVar6 * 0x6c;
            puVar5 = (uint *)(iVar6 + 0x1d715ac);
            local_98 = 0x71;
            local_94 = 0xf;
            local_93 = *puVar5;
            local_8f = *(uint *)(iVar6 + 0x1d715b0);
            local_8b = *(uint *)(iVar6 + 0x1d715b4);
            iVar6 = 0;
            if (0 < *(int *)&this_ptr->field_0x1c) {
              do {
                puVar8 = puVar5 + 3;
                puVar10 = local_87 + iVar6 * 0xc;
                for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar10 = *puVar8;
                  puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
                  puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 0xc;
              } while (iVar6 < *(int *)&this_ptr->field_0x1c);
            }
            core_netgame_cpp_CNetGame_send_FUN_0052df50
                      (this_ptr,local_24,(SNetPacketHeader *)&local_98);
            local_20 = local_20 + 1;
          }
        }
        local_14 = local_14 + 0x7c;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)&this_ptr->field_0x1c);
    }
  }
  return;
}
