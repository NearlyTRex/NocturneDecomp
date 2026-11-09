// Name: core_netgame.cpp_FUN_0050e970
// Address: 0050e970
// Address Range: [[0050e970, 0050eb7e]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_FUN_0050e970(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_FUN_0050e970(CNetGame *this_ptr,int player_index)

{
  char cVar1;
  CNetGame *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  uint uStack_c8;
  byte uStack_c4;
  uint uStack_c3;
  uint uStack_bf;
  char acStack_bb [80];
  uint uStack_6b;
  char acStack_67 [20];
  uint auStack_53 [15];
  char *pcStack_14;
  
  bVar7 = 0;
  if ((*(int *)this_ptr != 1) || (*(int *)&this_ptr->field_0x4 != 1)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x8a8;
    core_main_c_FUN_004e4500("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((player_index < 0) || (*(int *)&this_ptr->field_0x1c <= player_index)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x8ae;
    core_main_c_FUN_004e4500("CNetGame::send - invalid player index");
  }
  uStack_c4 = 0xb;
  uStack_c8 = 0xb1;
  __arrinit(acStack_67,2,&g_SPlayerTypeInfo);
  uStack_bf = *(uint *)&this_ptr->field_0x17c;
  uStack_c3 = _DAT_01d34e44;
  pcVar6 = acStack_bb;
  uStack_6b = *(uint *)&this_ptr->field_0x1c;
  pcVar5 = &this_ptr->field_0x128;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x1c) {
    pcVar6 = &this_ptr->field_0x20;
    pcVar5 = acStack_67;
    pcStack_14 = pcVar5;
    pcVar4 = pcVar6;
    pCVar2 = this_ptr;
LAB_0050ea90:
    do {
      cVar1 = *pcVar6;
      *pcVar5 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
        if (cVar1 != '\0') goto LAB_0050ea90;
      }
      auStack_53[iVar3 * 10] = *(uint *)&pCVar2->field_0x3c;
      auStack_53[iVar3 * 10 + (uint)bVar7 * -2 + 1] =
           *(uint *)((int)pCVar2 + (uint)bVar7 * -8 + 0x40);
      auStack_53[iVar3 * 10 + 4] = *(uint *)&pCVar2->field_0x64;
      auStack_53[iVar3 * 10 + 2] = *(uint *)&pCVar2->field_0x34;
      pcVar6 = pcVar4 + 0x80;
      auStack_53[iVar3 * 10 + 3] = *(uint *)&pCVar2->field_0x38;
      iVar3 = iVar3 + 1;
      pcVar5 = pcStack_14 + 0x28;
      pcStack_14 = pcVar5;
      pcVar4 = pcVar6;
      pCVar2 = (CNetGame *)&pCVar2->field_0x80;
    } while (iVar3 < *(int *)&this_ptr->field_0x1c);
  }
  core_netgame_cpp_CNetGame_send_FUN_0050cd90(this_ptr,player_index,(SNetPacketHeader *)&uStack_c8);
  iVar3 = wincore_winrun_cpp_FUN_0058e9e0();
  _DAT_01d34e34 = iVar3 / 0x12 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
  _DAT_01d34e34 = iVar3 / 0x12;
  *(int *)(&this_ptr->field_0x58 + player_index * 0x80) = _DAT_01d34e38;
  return;
}
