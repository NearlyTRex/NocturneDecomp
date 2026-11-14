// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_005064d0
// Address: 005064d0
// Address Range: [[005064d0, 00506669]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_005064d0(CNetGame *this_ptr,char *message,int target_player)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_005064d0(CNetGame *this_ptr,char *message,int target_player)

{
  char *dest;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (0x31 < _DAT_01dc2690) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x76c;
    core_main_c_FUN_004e4330("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar1 = _DAT_01dc2690 * 0x114;
  piVar4 = (int *)(&DAT_01dc2694 + iVar1);
  _DAT_01dc2690 = _DAT_01dc2690 + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005806a0();
  _DAT_01da6474 = iVar2 / 0x12 - _DAT_01da6474;
  if (_DAT_01da6474 < 0) {
    _DAT_01da6474 = 0;
  }
  else if (0x20000 < _DAT_01da6474) {
    _DAT_01da6474 = 0x20000;
  }
  _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
  _DAT_01dc5c7c = _DAT_01dc5c7c + 1;
  _DAT_01da6474 = iVar2 / 0x12;
  *(int *)(&DAT_01dc2698 + iVar1) = _DAT_01dc5c7c;
  *piVar4 = _DAT_01da6478;
  memset(&DAT_01dc269c + iVar1,1,2);
  if (target_player < 0) {
    iVar2 = 0;
    piVar3 = piVar4;
    if (0 < this_ptr->player_count) {
      do {
        *(byte *)(piVar4 + 2) = 0;
        piVar3[3] = _DAT_01da6478 + -0x3c0000;
        iVar2 = iVar2 + 1;
        piVar4 = (int *)((int)piVar4 + 1);
        piVar3 = piVar3 + 1;
      } while (iVar2 < this_ptr->player_count);
    }
  }
  else {
    *(byte *)((int)piVar4 + target_player + 8) = 0;
    *(int *)(iVar1 + 0x1dc26a0 + target_player * 4) = _DAT_01da6478 + -0x3c0000;
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
