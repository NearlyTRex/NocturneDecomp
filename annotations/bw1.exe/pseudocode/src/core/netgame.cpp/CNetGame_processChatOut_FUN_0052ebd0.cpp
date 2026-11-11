// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_0052ebd0
// Address: 0052ebd0
// Address Range: [[0052ebd0, 0052ed72]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_0052ebd0(CNetGame *this_ptr,char *message,int target_player)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_0052ebd0(CNetGame *this_ptr,char *message,int target_player)

{
  char *dest;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x31 < _DAT_01d6dfb8) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x76c;
    core_main_c_FUN_005030e0("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar1 = _DAT_01d6dfb8 * 0x114;
  piVar5 = (int *)(&DAT_01d6dfbc + iVar1);
  _DAT_01d6dfb8 = _DAT_01d6dfb8 + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  _DAT_01d51d9c = iVar2 / 0x12 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  _DAT_01d715a4 = _DAT_01d715a4 + 1;
  _DAT_01d51d9c = iVar2 / 0x12;
  *(int *)(&DAT_01d6dfc0 + iVar1) = _DAT_01d715a4;
  *piVar5 = _DAT_01d51da0;
  memset(&DAT_01d6dfc4 + iVar1,1,2);
  if (target_player < 0) {
    iVar2 = 0;
    piVar3 = piVar5;
    piVar4 = piVar5;
    if (0 < this_ptr->player_count) {
      do {
        *(byte *)(piVar4 + 2) = 0;
        piVar3[3] = _DAT_01d51da0 + -0x3c0000;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (iVar2 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)piVar5 + target_player + 8) = 0;
    *(int *)(iVar1 + 0x1d6dfc8 + target_player * 4) = _DAT_01d51da0 + -0x3c0000;
  }
  dest = &DAT_01d6dfd0 + iVar1;
  *(byte *)(this_ptr->local_player_index + 8 + (int)piVar5) = 1;
  memset(dest,0,0x100);
  _strncpy(dest,message,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100
            (this_ptr,&this_ptr->players[this_ptr->local_player_index].addr,
             *(int *)(&DAT_01d6dfc0 + iVar1),this_ptr->player_name,dest);
  return;
}
