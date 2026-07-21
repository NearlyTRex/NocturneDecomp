// Name: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170
// Address: 004ed170
// Address Range: [[004ed170, 004ed2c4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint local_3c;
  byte local_38;
  int local_37;
  char local_33 [20];
  int local_1f;
  int local_1b;
  int local_17;
  
  if ((*param_1 != 2) || (param_1[1] != 1)) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 0x8d0;
    FUN_004c8440("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar3 = wincore_winrun_cpp_getTime_FUN_00558a30();
  _DAT_01cea3f4 = iVar3 / 0x12 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  local_3c = 0x29;
  local_38 = 10;
  local_1f = param_1[param_1[0x45] * 0x1e + 0x19];
  local_1b = param_1[param_1[0x45] * 0x1e + 0xd];
  local_17 = param_1[param_1[0x45] * 0x1e + 0xe];
  pcVar5 = local_33;
  piVar4 = param_1 + param_1[0x45] * 0x1e + 8;
  do {
    iVar2 = *piVar4;
    *pcVar5 = (char)iVar2;
    if ((char)iVar2 == '\0') break;
    cVar1 = *(char *)((int)piVar4 + 1);
    piVar4 = (int *)((int)piVar4 + 2);
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  _DAT_01cea3f4 = iVar3 / 0x12;
  local_37 = _DAT_01cea3f8;
  core_netgame_cpp_CNetGame_send_FUN_004eb350(param_1,param_1[0x44],&local_3c);
  DAT_005bdee4 = 1;
  param_1[param_1[0x45] * 0x1e + 0x18] = _DAT_01cea3f8;
  return;
}
