// Name: core_netgame.cpp_CNetGame_removeChatOut_FUN_0050db90
// Address: 0050db90
// Address Range: [[0050db90, 0050df15]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_0050db90(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_0050db90(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  float local_158;
  float local_154;
  float local_150;
  uint local_14c;
  byte local_148;
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
  
  iVar2 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar2 = iVar2 / 0x12;
  _DAT_01d34e34 = iVar2 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
  local_38 = 0;
  _DAT_01d34e34 = iVar2;
  if (0 < _DAT_01d51050) {
    local_40 = this_ptr->players;
    local_3c = (int *)&DAT_01d51054;
    do {
      local_2c = local_3c;
      local_18 = _DAT_01d34e38 - *local_3c;
      local_154 = (float)local_18 * (float)_DAT_005e0c75;
      local_30 = 1;
      if (local_154 < 0.0) {
        local_154 = 0.0;
      }
      if ((float)_DAT_005e0c85 < local_154) {
        local_154 = 30.0;
      }
      if ((local_154 < (float)_DAT_005e0c8d) && (local_28 = 0, 0 < this_ptr->player_count)) {
        local_34 = local_3c + 5;
        local_20 = local_3c;
        local_24 = this_ptr;
        local_1c = (SNetworkAddr *)&local_40->field_0x1c;
        piVar3 = local_3c;
        do {
          if ((char)local_20[2] == '\0') {
            local_150 = *(float *)&local_24->players[0].field_0x28 * (float)_DAT_005e0c7d;
            local_30 = 0;
            if (local_150 < (float)_DAT_005e0c95) {
              local_150 = 2.0;
            }
            if ((float)_DAT_005e0c9d < local_150) {
              local_150 = 5.0;
            }
            local_18 = _DAT_01d34e38 - piVar3[3];
            local_158 = (float)local_18 * (float)_DAT_005e0c75;
            if (local_158 < 0.0) {
              local_158 = 0.0;
            }
            if ((float)_DAT_005e0c85 < local_158) {
              local_158 = 30.0;
            }
            if (local_150 < local_158) {
              local_14c = 0x109;
              local_148 = 6;
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
              core_netgame_cpp_CNetGame_sendPacket_FUN_0050cdf0
                        (this_ptr,local_1c,(SNetPacketHeader *)&local_14c);
              piVar3[3] = _DAT_01d34e38;
            }
          }
          piVar3 = piVar3 + 1;
          local_20 = (int *)((int)local_20 + 1);
          local_24 = (CNetGame *)&local_24->players[0].field_0x60;
          local_1c = local_1c + 0x80;
          local_28 = local_28 + 1;
        } while (local_28 < this_ptr->player_count);
      }
      iVar2 = local_38;
      if (local_30 == 0) {
        local_38 = local_38 + 1;
        local_3c = local_3c + 0x45;
      }
      else {
        if ((local_38 < 0) || (_DAT_01d51050 <= local_38)) {
          _DAT_01d046a0 = "..\\core\\netgame.cpp";
          _DAT_01d046a4 = 0x107;
          core_main_c_FUN_004e4500("removeChatOut - invalid index");
        }
        _DAT_01d51050 = _DAT_01d51050 + -1;
        memmove
                  (&DAT_01d51054 + iVar2 * 0x114,&DAT_01d51054 + (iVar2 + 1) * 0x114,
                   (_DAT_01d51050 - iVar2) * 0x114);
      }
    } while (local_38 < _DAT_01d51050);
  }
  return;
}
