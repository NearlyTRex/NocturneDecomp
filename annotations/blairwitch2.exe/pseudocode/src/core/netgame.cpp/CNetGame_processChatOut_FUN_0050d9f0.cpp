// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_0050d9f0
// Address: 0050d9f0
// Address Range: [[0050d9f0, 0050db89]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_0050d9f0(CNetGame *this_ptr,char *message,int target_player)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_0050d9f0(CNetGame *this_ptr,char *message,int target_player)

{
  char *dest;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SChatOutMessage *pSVar5;
  SChatOutMessage *pSVar6;
  
  if (0x31 < g_ChatOutCount) {
    g_CHAR_PTR_01d046a0 = "..\\core\\netgame.cpp";
    g_INT_01d046a4 = 0x76c;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar2 = g_ChatOutCount;
  iVar1 = g_ChatOutCount * 0x114;
  pSVar5 = g_ChatOutMessages + g_ChatOutCount;
  g_ChatOutCount = g_ChatOutCount + 1;
  iVar3 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar4 = iVar3 / 0x12 - g_LastPingTime;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x20000 < iVar4) {
    iVar4 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar4;
  g_ChatOutSequence = g_ChatOutSequence + 1;
  g_LastPingTime = iVar3 / 0x12;
  g_ChatOutMessages[iVar2].sequence_number = g_ChatOutSequence;
  pSVar5->timestamp = g_CurrentGameTime;
  memset(&g_ChatOutMessages[iVar2].ack_flags,1,2);
  if (target_player < 0) {
    iVar3 = 0;
    pSVar6 = pSVar5;
    if (0 < this_ptr->player_count) {
      do {
        (pSVar5->ack_flags).bytes[0] = '\0';
        pSVar6->player_timestamps[0] = g_CurrentGameTime - 0x3c0000;
        iVar3 = iVar3 + 1;
        pSVar5 = (SChatOutMessage *)((int)&pSVar5->timestamp + 1);
        pSVar6 = (SChatOutMessage *)&pSVar6->sequence_number;
      } while (iVar3 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)pSVar5->player_timestamps + target_player + -4) = 0;
    *(uint *)(iVar1 + 0x1d51060 + target_player * 4) = g_CurrentGameTime - 0x3c0000;
  }
  dest = g_ChatOutMessages[iVar2].message;
  *(byte *)(iVar1 + 0x1d5105c + this_ptr->local_player_index) = 1;
  memset(dest,0,0x100);
  _strncpy(dest,message,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_0050df20
            (this_ptr,&this_ptr->players[this_ptr->local_player_index].addr,
             g_ChatOutMessages[iVar2].sequence_number,this_ptr->player_name,dest);
  return;
}
