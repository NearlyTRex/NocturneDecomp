// Name: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_0052fa80
// Address: 0052fa80
// Address Range: [[0052fa80, 0052fb5b]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CNetGame *pCVar4;
  
  if (*(int *)this_ptr != 1) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x88c;
    core_main_c_FUN_005030e0("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  _DAT_01d51dac = _DAT_01d51dac + 1;
  iVar1 = wincore_winrun_cpp_FUN_005b2420();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - _DAT_01d51d9c;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  pCVar4 = this_ptr;
  _DAT_01d51d9c = iVar1;
  if (0 < *(int *)&this_ptr->field_0x1c) {
    do {
      if (iVar3 == *(int *)&this_ptr->field_0x11c) {
        *(int *)&pCVar4->field_0x54 = _DAT_01d51dac;
      }
      else {
        *(int *)&pCVar4->field_0x58 = _DAT_01d51da0 + iVar2 + -0x1e0000;
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CNetGame *)&pCVar4->field_0x7c;
    } while (iVar3 < *(int *)&this_ptr->field_0x1c);
  }
  _DAT_01d51da0 = _DAT_01d51da0 + iVar2;
  return;
}
