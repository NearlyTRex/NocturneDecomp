// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_005064d0
// Address: 005064d0
// Address Range: [[005064d0, 00506669]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_005064d0(CNetGame *this_ptr,char *message,int target_player)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_005064d0(CNetGame *this_ptr,char *message,int target_player)

{
  char *dest;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SChatOutMessage *pSVar5;
  SChatOutMessage *pSVar6;
  
  if (0x31 < g_INT_01dc2690) {
    g_CHAR_PTR_01d71de0 = "..\\core\\netgame.cpp";
    g_INT_01d71de4 = 0x76c;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar2 = g_INT_01dc2690;
  iVar1 = g_INT_01dc2690 * 0x114;
  pSVar5 = g_SChatOutMessage_ARRAY_01dc2694 + g_INT_01dc2690;
  g_INT_01dc2690 = g_INT_01dc2690 + 1;
  iVar3 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar4 = iVar3 / 0x12 - g_INT_01da6474;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x20000 < iVar4) {
    iVar4 = 0x20000;
  }
  g_UINT_01da6478 = g_UINT_01da6478 + iVar4;
  g_INT_01dc5c7c = g_INT_01dc5c7c + 1;
  g_INT_01da6474 = iVar3 / 0x12;
  g_SChatOutMessage_ARRAY_01dc2694[iVar2].sequence_number = g_INT_01dc5c7c;
  pSVar5->timestamp = g_UINT_01da6478;
  memset(&g_SChatOutMessage_ARRAY_01dc2694[iVar2].ack_flags,1,2);
  if (target_player < 0) {
    iVar3 = 0;
    pSVar6 = pSVar5;
    if (0 < this_ptr->player_count) {
      do {
        (pSVar5->ack_flags).bytes[0] = '\0';
        pSVar6->player_timestamps[0] = g_UINT_01da6478 - 0x3c0000;
        iVar3 = iVar3 + 1;
        pSVar5 = (SChatOutMessage *)((int)&pSVar5->timestamp + 1);
        pSVar6 = (SChatOutMessage *)&pSVar6->sequence_number;
      } while (iVar3 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)pSVar5->player_timestamps + target_player + -4) = 0;
    *(uint *)(iVar1 + 0x1dc26a0 + target_player * 4) = g_UINT_01da6478 - 0x3c0000;
  }
  dest = g_SChatOutMessage_ARRAY_01dc2694[iVar2].message;
  *(byte *)(iVar1 + 0x1dc269c + this_ptr->local_player_index) = 1;
  memset(dest,0,0x100);
  _strncpy(dest,message,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00
            (this_ptr,&this_ptr->players[this_ptr->local_player_index].addr,
             g_SChatOutMessage_ARRAY_01dc2694[iVar2].sequence_number,this_ptr->player_name,dest);
  return;
}
