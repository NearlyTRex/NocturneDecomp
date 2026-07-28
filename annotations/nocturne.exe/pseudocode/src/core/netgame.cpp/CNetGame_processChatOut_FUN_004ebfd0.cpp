// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0
// Address: 004ebfd0
// Address Range: [[004ebfd0, 004ec172]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_004ebfd0(CNetGame *this_ptr,char *message,int target_player)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_004ebfd0(CNetGame *this_ptr,char *message,int target_player)

{
  char *dest;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x31 < _DAT_01d06610) {
    PTR_01cc4800 = "..\\core\\netgame.cpp";
    INT_01cc4804 = 0x76c;
    core_main_c_FUN_004c8440("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar1 = _DAT_01d06610 * 0x114;
  piVar5 = (int *)(&DAT_01d06614 + iVar1);
  _DAT_01d06610 = _DAT_01d06610 + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
  _DAT_01cea3f4 = iVar2 / 0x12 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01d09bfc = _DAT_01d09bfc + 1;
  _DAT_01cea3f4 = iVar2 / 0x12;
  *(int *)(&DAT_01d06618 + iVar1) = _DAT_01d09bfc;
  *piVar5 = _DAT_01cea3f8;
  memset(&DAT_01d0661c + iVar1,1,2);
  if (target_player < 0) {
    iVar2 = 0;
    piVar3 = piVar5;
    piVar4 = piVar5;
    if (0 < this_ptr->player_count) {
      do {
        *(byte *)(piVar4 + 2) = 0;
        piVar3[3] = _DAT_01cea3f8 + -0x3c0000;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (iVar2 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)piVar5 + target_player + 8) = 0;
    *(int *)(iVar1 + 0x1d06620 + target_player * 4) = _DAT_01cea3f8 + -0x3c0000;
  }
  dest = &DAT_01d06628 + iVar1;
  *(byte *)(this_ptr->local_player_index + 8 + (int)piVar5) = 1;
  memset(dest,0,0x100);
  _strncpy(dest,message,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_004ec500
            (this_ptr,&this_ptr->players[this_ptr->local_player_index].addr,
             *(int *)(&DAT_01d06618 + iVar1),this_ptr->player_name,dest);
  return;
}
