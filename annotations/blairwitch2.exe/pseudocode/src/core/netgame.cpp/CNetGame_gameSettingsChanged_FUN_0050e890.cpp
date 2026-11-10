// Name: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0050e890
// Address: 0050e890
// Address Range: [[0050e890, 0050e96e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0050e890(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0050e890(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CNetGame *pCVar4;
  
  if (this_ptr->connection_type != CONNECTION_HOST) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x88c;
    core_main_c_FUN_004e4500("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  _DAT_01d34e44 = _DAT_01d34e44 + 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - _DAT_01d34e34;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  pCVar4 = this_ptr;
  _DAT_01d34e34 = iVar1;
  if (0 < this_ptr->player_count) {
    do {
      if (iVar3 == this_ptr->local_player_index) {
        *(int *)&pCVar4->players[0].field_0x34 = _DAT_01d34e44;
      }
      else {
        *(int *)&pCVar4->players[0].field_0x38 = _DAT_01d34e38 + iVar2 + -0x1e0000;
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CNetGame *)&pCVar4->players[0].field_0x60;
    } while (iVar3 < this_ptr->player_count);
  }
  _DAT_01d34e38 = _DAT_01d34e38 + iVar2;
  return;
}
