// Name: core_netgame.cpp_CNetGame_removeChatOut_FUN_004ec180
// Address: 004ec180
// Address Range: [[004ec180, 004ec4ff]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_004ec180(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_004ec180(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  float local_158;
  float local_154;
  float local_150;
  SNetPacketHeader local_14c;
  int local_147;
  char local_143 [259];
  SNetPlayer *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  CNetGame *local_24;
  int *local_20;
  SNetworkAddr *local_1c;
  int local_18;
  
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
  local_38 = 0;
  _DAT_01cea3f4 = iVar2;
  if (0 < _DAT_01d06610) {
    local_40 = this_ptr->players;
    local_3c = (int *)&DAT_01d06614;
    do {
      local_2c = local_3c;
      local_18 = _DAT_01cea3f8 - *local_3c;
      local_154 = (float)local_18 * (float)1.52587890625e-05;
      local_30 = 1;
      if (local_154 < 0.0) {
        local_154 = 0.0;
      }
      if ((float)30 < local_154) {
        local_154 = 30.0;
      }
      if ((local_154 < (float)20) && (local_28 = 0, 0 < this_ptr->player_count)) {
        local_34 = local_3c + 5;
        local_20 = local_3c;
        local_24 = this_ptr;
        local_1c = &local_40->addr;
        piVar3 = local_3c;
        do {
          if ((char)local_20[2] == '\0') {
            local_150 = local_24->players[0].ping_quality * (float)4;
            local_30 = 0;
            if (local_150 < (float)2) {
              local_150 = 2.0;
            }
            if ((float)5 < local_150) {
              local_150 = 5.0;
            }
            local_18 = _DAT_01cea3f8 - piVar3[3];
            local_158 = (float)local_18 * (float)1.52587890625e-05;
            if (local_158 < 0.0) {
              local_158 = 0.0;
            }
            if ((float)30 < local_158) {
              local_158 = 30.0;
            }
            if (local_150 < local_158) {
              local_14c.size = 0x109;
              local_14c.type = PACKET_CHAT_MESSAGE;
              pcVar5 = local_143;
              local_147 = local_2c[1];
              piVar4 = local_34;
              do {
                iVar2 = *piVar4;
                *pcVar5 = (char)iVar2;
                if ((char)iVar2 == '\0') break;
                cVar1 = *(char *)((int)piVar4 + 1);
                piVar4 = (int *)((int)piVar4 + 2);
                pcVar5[1] = cVar1;
                pcVar5 = pcVar5 + 2;
              } while (cVar1 != '\0');
              core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0(this_ptr,local_1c,&local_14c);
              piVar3[3] = _DAT_01cea3f8;
            }
          }
          piVar3 = piVar3 + 1;
          local_20 = (int *)((int)local_20 + 1);
          local_24 = (CNetGame *)&local_24->players[0].player_input.action_state.fire;
          local_1c = local_1c + 0xf;
          local_28 = local_28 + 1;
        } while (local_28 < this_ptr->player_count);
      }
      iVar2 = local_38;
      if (local_30 == 0) {
        local_38 = local_38 + 1;
        local_3c = local_3c + 0x45;
      }
      else {
        if ((local_38 < 0) || (_DAT_01d06610 <= local_38)) {
          g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
          g_INT_01cc4804 = 0x107;
          core_main_c_FUN_004c8440("removeChatOut - invalid index");
        }
        _DAT_01d06610 = _DAT_01d06610 + -1;
        memmove
                  (&DAT_01d06614 + iVar2 * 0x114,&DAT_01d06614 + (iVar2 + 1) * 0x114,
                   (_DAT_01d06610 - iVar2) * 0x114);
      }
    } while (local_38 < _DAT_01d06610);
  }
  return;
}
