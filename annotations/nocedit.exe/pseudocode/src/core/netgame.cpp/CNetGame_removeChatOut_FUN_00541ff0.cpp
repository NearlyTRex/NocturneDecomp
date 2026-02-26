// Name: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
// Address: 00541ff0
// Address Range: [[00541ff0, 0054236f]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SChatOutMessage *pSVar4;
  char *pcVar5;
  char *pcVar6;
  float local_158;
  float local_154;
  float local_150;
  SNetPacketHeader local_14c;
  uint local_147;
  char local_143 [259];
  SNetPlayer *local_40;
  SChatOutMessage *local_3c;
  int local_38;
  char *local_34;
  int local_30;
  SChatOutMessage *local_2c;
  int local_28;
  CNetGame *local_24;
  SChatOutMessage *local_20;
  SNetworkAddr *local_1c;
  int local_18;
  
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar2 / 0x12;
  iVar3 = iVar2 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  local_38 = 0;
  g_LastPingTime = iVar2;
  if (0 < g_ChatOutCount) {
    local_40 = this_ptr->players;
    local_3c = g_ChatOutMessages;
    do {
      local_2c = local_3c;
      local_18 = g_CurrentGameTime - local_3c->timestamp;
      local_154 = (float)local_18 * (float)1.52587890625e-05;
      local_30 = 1;
      if (local_154 < 0.0) {
        local_154 = 0.0;
      }
      if ((float)30 < local_154) {
        local_154 = 30.0;
      }
      if ((local_154 < (float)20) && (local_28 = 0, 0 < this_ptr->player_count)) {
        local_34 = local_3c->message;
        local_20 = local_3c;
        local_24 = this_ptr;
        local_1c = &local_40->addr;
        pSVar4 = local_3c;
        do {
          if ((local_20->ack_flags).bytes[0] == '\0') {
            local_150 = local_24->players[0].ping_quality * (float)4;
            local_30 = 0;
            if (local_150 < (float)2) {
              local_150 = 2.0;
            }
            if ((float)5 < local_150) {
              local_150 = 5.0;
            }
            local_18 = g_CurrentGameTime - pSVar4->player_timestamps[0];
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
              local_147 = local_2c->sequence_number;
              pcVar5 = local_34;
              do {
                cVar1 = *pcVar5;
                *pcVar6 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar5[1];
                pcVar5 = pcVar5 + 2;
                pcVar6[1] = cVar1;
                pcVar6 = pcVar6 + 2;
              } while (cVar1 != '\0');
              core_netgame_cpp_CNetGame_sendPacket_FUN_00541230(this_ptr,local_1c,&local_14c);
              pSVar4->player_timestamps[0] = g_CurrentGameTime;
            }
          }
          pSVar4 = (SChatOutMessage *)&pSVar4->sequence_number;
          local_20 = (SChatOutMessage *)((int)&local_20->timestamp + 1);
          local_24 = (CNetGame *)(local_24->players[0].controls.action_states + 3);
          local_1c = local_1c + 0xf;
          local_28 = local_28 + 1;
        } while (local_28 < this_ptr->player_count);
      }
      iVar2 = local_38;
      if (local_30 == 0) {
        local_38 = local_38 + 1;
        local_3c = local_3c + 1;
      }
      else {
        if ((local_38 < 0) || (g_ChatOutCount <= local_38)) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x107;
          core_main_c_displayErrorAndQuit_FUN_00506f10("removeChatOut - invalid index");
        }
        g_ChatOutCount = g_ChatOutCount + -1;
        memmove
                  (g_ChatOutMessages + iVar2,g_ChatOutMessages + iVar2 + 1,
                   (g_ChatOutCount - iVar2) * 0x114);
      }
    } while (local_38 < g_ChatOutCount);
  }
  return;
}
