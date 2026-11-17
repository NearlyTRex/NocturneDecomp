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
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (0x31 < g_INT_01d6dfb8) {
    g_CHAR_PTR_01d1d400 = "..\\core\\netgame.cpp";
    g_INT_01d1d404 = 0x76c;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar1 = g_INT_01d6dfb8 * 0x114;
  puVar6 = (uint *)(&DAT_01d6dfbc + iVar1);
  g_INT_01d6dfb8 = g_INT_01d6dfb8 + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar3 = iVar2 / 0x12 - g_INT_01d51d9c;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01d51da0 = g_UINT_01d51da0 + iVar3;
  g_INT_01d715a4 = g_INT_01d715a4 + 1;
  g_INT_01d51d9c = iVar2 / 0x12;
  *(int *)(&DAT_01d6dfc0 + iVar1) = g_INT_01d715a4;
  *puVar6 = g_UINT_01d51da0;
  memset(&DAT_01d6dfc4 + iVar1,1,2);
  if (target_player < 0) {
    iVar2 = 0;
    puVar4 = puVar6;
    puVar5 = puVar6;
    if (0 < this_ptr->player_count) {
      do {
        *(byte *)(puVar5 + 2) = 0;
        puVar4[3] = g_UINT_01d51da0 - 0x3c0000;
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
        puVar5 = (uint *)((int)puVar5 + 1);
      } while (iVar2 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)puVar6 + target_player + 8) = 0;
    *(uint *)(iVar1 + 0x1d6dfc8 + target_player * 4) = g_UINT_01d51da0 - 0x3c0000;
  }
  dest = &DAT_01d6dfd0 + iVar1;
  *(byte *)(this_ptr->local_player_index + 8 + (int)puVar6) = 1;
  memset(dest,0,0x100);
  _strncpy(dest,message,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
            (this_ptr,&this_ptr->players[this_ptr->local_player_index].addr,
             *(int *)(&DAT_01d6dfc0 + iVar1),this_ptr->player_name,dest);
  return;
}
