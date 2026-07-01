// Name: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
// Address: 00541ff0
// MANUAL RECONSTRUCTION
// Address Range: [[00541ff0, 0054236f]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(CNetGame *this_ptr)

{
  bool bVar2;
  int iVar3;
  int iVar4;
  float local_158;
  float local_154;
  float local_150;
  SNetPacket_Simple local_14c;
  char local_143 [259];
  SChatOutMessage *local_3c;
  int local_38;
  int local_28;
  
  iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar3 / 0x12;
  iVar4 = iVar3 - g_LastPingTime;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x20000 < iVar4) {
    iVar4 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar4;
  local_38 = 0;
  g_LastPingTime = iVar3;
  if (0 < g_ChatOutCount) {
    local_3c = g_ChatOutMessages;
    do {
      local_154 = (float)(int)(g_CurrentGameTime - local_3c->timestamp) * (float)1.52587890625e-05;
      bVar2 = true;
      if (local_154 < 0.0) {
        local_154 = 0.0;
      }
      if ((float)30 < local_154) {
        local_154 = 30.0;
      }
      if ((local_154 < (float)20) && (local_28 = 0, 0 < this_ptr->player_count)) {
        do {
          if (local_3c->ack_flags.bytes[local_28] == '\0') {
            local_150 = this_ptr->players[local_28].ping_quality * (float)4;
            bVar2 = false;
            if (local_150 < (float)2) {
              local_150 = 2.0;
            }
            if ((float)5 < local_150) {
              local_150 = 5.0;
            }
            local_158 = (float)(int)(g_CurrentGameTime - local_3c->player_timestamps[local_28]) *
                        (float)1.52587890625e-05;
            if (local_158 < 0.0) {
              local_158 = 0.0;
            }
            if ((float)30 < local_158) {
              local_158 = 30.0;
            }
            if (local_150 < local_158) {
              local_14c.header.size = 0x109;
              local_14c.header.type = PACKET_CHAT_MESSAGE;
              local_14c.value = local_3c->sequence_number;
              strcpy(local_143, local_3c->message);
              core_netgame_cpp_CNetGame_sendPacket_FUN_00541230
                        (this_ptr,&this_ptr->players[local_28].addr,&local_14c.header);
              local_3c->player_timestamps[local_28] = g_CurrentGameTime;
            }
          }
          local_28 = local_28 + 1;
        } while (local_28 < this_ptr->player_count);
      }
      if (bVar2) {
        if ((local_38 < 0) || (g_ChatOutCount <= local_38)) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 263;
          core_main_c_displayErrorAndQuit_FUN_00506f10("removeChatOut - invalid index");
        }
        g_ChatOutCount = g_ChatOutCount + -1;
        memmove
                  (g_ChatOutMessages + local_38,g_ChatOutMessages + local_38 + 1,
                   (g_ChatOutCount - local_38) * 0x114);
      }
      else {
        local_38 = local_38 + 1;
        local_3c = local_3c + 1;
      }
    } while (local_38 < g_ChatOutCount);
  }
  return;
}
