// Name: core_netgame.cpp_CNetGame_removeChatOut_FUN_0052ed80
// Address: 0052ed80
// Address Range: [[0052ed80, 0052f0ff]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_0052ed80(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_0052ed80(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
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
  
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar2 = iVar2 / 0x12;
  iVar3 = iVar2 - g_INT_01d51d9c;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01d51da0 = g_UINT_01d51da0 + iVar3;
  local_38 = 0;
  g_INT_01d51d9c = iVar2;
  if (0 < g_INT_01d6dfb8) {
    local_40 = this_ptr->players;
    local_3c = (int *)&DAT_01d6dfbc;
    do {
      local_2c = local_3c;
      local_18 = g_UINT_01d51da0 - *local_3c;
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
        piVar4 = local_3c;
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
            local_18 = g_UINT_01d51da0 - piVar4[3];
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
              pcVar6 = local_143;
              local_147 = local_2c[1];
              piVar5 = local_34;
              do {
                iVar2 = *piVar5;
                *pcVar6 = (char)iVar2;
                if ((char)iVar2 == '\0') break;
                cVar1 = *(char *)((int)piVar5 + 1);
                piVar5 = (int *)((int)piVar5 + 2);
                pcVar6[1] = cVar1;
                pcVar6 = pcVar6 + 2;
              } while (cVar1 != '\0');
              core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0(this_ptr,local_1c,&local_14c);
              piVar4[3] = g_UINT_01d51da0;
            }
          }
          piVar4 = piVar4 + 1;
          local_20 = (int *)((int)local_20 + 1);
          local_24 = (CNetGame *)&local_24->players[0].player_input.action_state.use_item;
          local_1c = (SNetworkAddr *)&local_1c[0xf].port;
          local_28 = local_28 + 1;
        } while (local_28 < this_ptr->player_count);
      }
      iVar2 = local_38;
      if (local_30 == 0) {
        local_38 = local_38 + 1;
        local_3c = local_3c + 0x45;
      }
      else {
        if ((local_38 < 0) || (g_INT_01d6dfb8 <= local_38)) {
          g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
          g_INT_01d1d404 = 0x107;
          core_main_c_displayErrorAndQuit_FUN_005030e0("removeChatOut - invalid index");
        }
        g_INT_01d6dfb8 = g_INT_01d6dfb8 + -1;
        memmove
                  (&DAT_01d6dfbc + iVar2 * 0x114,&DAT_01d6dfbc + (iVar2 + 1) * 0x114,
                   (g_INT_01d6dfb8 - iVar2) * 0x114);
      }
    } while (local_38 < g_INT_01d6dfb8);
  }
  return;
}
