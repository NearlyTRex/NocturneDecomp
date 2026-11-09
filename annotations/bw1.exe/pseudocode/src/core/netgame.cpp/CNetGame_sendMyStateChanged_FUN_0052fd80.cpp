// Name: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0052fd80
// Address: 0052fd80
// Address Range: [[0052fd80, 0052fed4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint local_3c;
  byte local_38;
  int local_37;
  char local_33 [20];
  uint local_1f;
  uint local_1b;
  uint local_17;
  
  if ((*(int *)this_ptr != 2) || (*(int *)&this_ptr->field_0x4 != 1)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x8d0;
    core_main_c_FUN_005030e0("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar2 = wincore_winrun_cpp_FUN_005b2420();
  _DAT_01d51d9c = iVar2 / 0x12 - _DAT_01d51d9c;
  if (_DAT_01d51d9c < 0) {
    _DAT_01d51d9c = 0;
  }
  else if (0x20000 < _DAT_01d51d9c) {
    _DAT_01d51d9c = 0x20000;
  }
  _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
  local_3c = 0x29;
  local_38 = 10;
  local_1f = *(uint *)(&this_ptr->field_0x64 + *(int *)&this_ptr->field_0x11c * 0x7c);
  local_1b = *(uint *)(&this_ptr->field_0x34 + *(int *)&this_ptr->field_0x11c * 0x7c);
  local_17 = *(uint *)(&this_ptr->field_0x38 + *(int *)&this_ptr->field_0x11c * 0x7c);
  pcVar4 = local_33;
  pcVar3 = &this_ptr->field_0x20 + *(int *)&this_ptr->field_0x11c * 0x7c;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  _DAT_01d51d9c = iVar2 / 0x12;
  local_37 = _DAT_01d51da0;
  core_netgame_cpp_CNetGame_send_FUN_0052df50
            (this_ptr,*(int *)&this_ptr->field_0x118,(SNetPacketHeader *)&local_3c);
  DAT_00622584 = 1;
  *(int *)(&this_ptr->field_0x60 + *(int *)&this_ptr->field_0x11c * 0x7c) = _DAT_01d51da0;
  return;
}
