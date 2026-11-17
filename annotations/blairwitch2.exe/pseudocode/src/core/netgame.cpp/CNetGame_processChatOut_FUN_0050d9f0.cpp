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
  uint *puVar4;
  uint *puVar5;
  
  if (0x31 < g_INT_01d51050) {
    g_CHAR_PTR_01d046a0 = "..\\core\\netgame.cpp";
    g_INT_01d046a4 = 0x76c;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar1 = g_INT_01d51050 * 0x114;
  puVar5 = (uint *)(&DAT_01d51054 + iVar1);
  g_INT_01d51050 = g_INT_01d51050 + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar3 = iVar2 / 0x12 - g_INT_01d34e34;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01d34e38 = g_UINT_01d34e38 + iVar3;
  g_INT_01d5463c = g_INT_01d5463c + 1;
  g_INT_01d34e34 = iVar2 / 0x12;
  *(int *)(&DAT_01d51058 + iVar1) = g_INT_01d5463c;
  *puVar5 = g_UINT_01d34e38;
  memset(&DAT_01d5105c + iVar1,1,2);
  if (target_player < 0) {
    iVar2 = 0;
    puVar4 = puVar5;
    if (0 < this_ptr->player_count) {
      do {
        *(byte *)(puVar5 + 2) = 0;
        puVar4[3] = g_UINT_01d34e38 - 0x3c0000;
        iVar2 = iVar2 + 1;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar4 = puVar4 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)puVar5 + target_player + 8) = 0;
    *(uint *)(iVar1 + 0x1d51060 + target_player * 4) = g_UINT_01d34e38 - 0x3c0000;
  }
  dest = &DAT_01d51068 + iVar1;
  (&DAT_01d5105c)[this_ptr->local_player_index + iVar1] = 1;
  memset(dest,0,0x100);
  _strncpy(dest,message,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_0050df20
            (this_ptr,&this_ptr->players[this_ptr->local_player_index].addr,
             *(int *)(&DAT_01d51058 + iVar1),this_ptr->player_name,dest);
  return;
}
