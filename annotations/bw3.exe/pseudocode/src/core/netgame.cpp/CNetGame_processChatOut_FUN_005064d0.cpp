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
  uint *puVar4;
  uint *puVar5;
  
  if (0x31 < g_INT_01dc2690) {
    g_CHAR_PTR_01d71de0 = "..\\core\\netgame.cpp";
    g_INT_01d71de4 = 0x76c;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar1 = g_INT_01dc2690 * 0x114;
  puVar5 = (uint *)(&DAT_01dc2694 + iVar1);
  g_INT_01dc2690 = g_INT_01dc2690 + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar3 = iVar2 / 0x12 - g_INT_01da6474;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01da6478 = g_UINT_01da6478 + iVar3;
  g_INT_01dc5c7c = g_INT_01dc5c7c + 1;
  g_INT_01da6474 = iVar2 / 0x12;
  *(int *)(&DAT_01dc2698 + iVar1) = g_INT_01dc5c7c;
  *puVar5 = g_UINT_01da6478;
  memset(&DAT_01dc269c + iVar1,1,2);
  if (target_player < 0) {
    iVar2 = 0;
    puVar4 = puVar5;
    if (0 < this_ptr->player_count) {
      do {
        *(byte *)(puVar5 + 2) = 0;
        puVar4[3] = g_UINT_01da6478 - 0x3c0000;
        iVar2 = iVar2 + 1;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar4 = puVar4 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)puVar5 + target_player + 8) = 0;
    *(uint *)(iVar1 + 0x1dc26a0 + target_player * 4) = g_UINT_01da6478 - 0x3c0000;
  }
  dest = &DAT_01dc26a8 + iVar1;
  (&DAT_01dc269c)[this_ptr->local_player_index + iVar1] = 1;
  memset(dest,0,0x100);
  _strncpy(dest,message,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00
            (this_ptr,&this_ptr->players[this_ptr->local_player_index].addr,
             *(int *)(&DAT_01dc2698 + iVar1),this_ptr->player_name,dest);
  return;
}
