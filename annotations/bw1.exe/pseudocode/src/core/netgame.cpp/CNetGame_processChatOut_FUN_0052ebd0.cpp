// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_0052ebd0
// Address: 0052ebd0
// Address Range: [[0052ebd0, 0052ed72]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_0052ebd0(CNetGame *this_ptr,char *message,int target_player)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_0052ebd0(CNetGame *this_ptr,char *message,int target_player)

{
  char *dest;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SChatOutMessage *pSVar5;
  SChatOutMessage *pSVar6;
  SChatOutMessage *pSVar7;
  
  if (0x31 < g_ChatOutCount) {
    g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
    g_INT_01d1d404 = 0x76c;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar1 = g_ChatOutCount;
  iVar4 = g_ChatOutCount * 0x114;
  pSVar7 = g_ChatOutMessages + g_ChatOutCount;
  g_ChatOutCount = g_ChatOutCount + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01d51da0 = g_UINT_01d51da0 + iVar3;
  g_ChatOutSequence = g_ChatOutSequence + 1;
  g_LastPingTime = iVar2 / 0x12;
  g_ChatOutMessages[iVar1].sequence_number = g_ChatOutSequence;
  pSVar7->timestamp = g_UINT_01d51da0;
  memset(&g_ChatOutMessages[iVar1].ack_flags,1,2);
  if (target_player < 0) {
    iVar4 = 0;
    pSVar5 = pSVar7;
    pSVar6 = pSVar7;
    if (0 < this_ptr->player_count) {
      do {
        (pSVar6->ack_flags).bytes[0] = '\0';
        pSVar5->player_timestamps[0] = g_UINT_01d51da0 - 0x3c0000;
        iVar4 = iVar4 + 1;
        pSVar5 = (SChatOutMessage *)&pSVar5->sequence_number;
        pSVar6 = (SChatOutMessage *)((int)&pSVar6->timestamp + 1);
      } while (iVar4 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)pSVar7->player_timestamps + target_player + -4) = 0;
    *(uint *)(iVar4 + 0x1d6dfc8 + target_player * 4) = g_UINT_01d51da0 - 0x3c0000;
  }
  dest = g_ChatOutMessages[iVar1].message;
  *(byte *)((int)pSVar7->player_timestamps + this_ptr->local_player_index + -4) = 1;
  memset(dest,0,0x100);
  _strncpy(dest,message,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
            (this_ptr,&this_ptr->players[this_ptr->local_player_index].addr,
             g_ChatOutMessages[iVar1].sequence_number,this_ptr->player_name,dest);
  return;
}
