// Name: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00507370
// Address: 00507370
// Address Range: [[00507370, 0050744e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CNetGame *pCVar4;
  
  if (*(int *)this_ptr != 1) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x88c;
    core_main_c_FUN_004e4330("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  _DAT_01da6484 = _DAT_01da6484 + 1;
  iVar1 = wincore_winrun_cpp_FUN_005806a0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - _DAT_01da6474;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  pCVar4 = this_ptr;
  _DAT_01da6474 = iVar1;
  if (0 < *(int *)&this_ptr->field_0x1c) {
    do {
      if (iVar3 == *(int *)&this_ptr->field_0x124) {
        *(int *)&pCVar4->field_0x54 = _DAT_01da6484;
      }
      else {
        *(int *)&pCVar4->field_0x58 = _DAT_01da6478 + iVar2 + -0x1e0000;
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CNetGame *)&pCVar4->field_0x80;
    } while (iVar3 < *(int *)&this_ptr->field_0x1c);
  }
  _DAT_01da6478 = _DAT_01da6478 + iVar2;
  return;
}
