// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0
// Address: 004ebfd0
// Address Range: [[004ebfd0, 004ec172]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_004ebfd0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_004ebfd0(int param_1,uint param_2,int param_3)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x31 < _DAT_01d06610) {
    PTR_01cc4800 = "..\\core\\netgame.cpp";
    INT_01cc4804 = 0x76c;
    core_main_c_FUN_004c8440("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar2 = _DAT_01d06610 * 0x114;
  piVar6 = (int *)(&DAT_01d06614 + iVar2);
  _DAT_01d06610 = _DAT_01d06610 + 1;
  iVar3 = wincore_winrun_cpp_getTime_FUN_00558a30();
  _DAT_01cea3f4 = iVar3 / 0x12 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  _DAT_01d09bfc = _DAT_01d09bfc + 1;
  _DAT_01cea3f4 = iVar3 / 0x12;
  *(int *)(&DAT_01d06618 + iVar2) = _DAT_01d09bfc;
  *piVar6 = _DAT_01cea3f8;
  memset(&DAT_01d0661c + iVar2,1,2);
  if (param_3 < 0) {
    iVar3 = 0;
    piVar4 = piVar6;
    piVar5 = piVar6;
    if (0 < *(int *)(param_1 + 0x1c)) {
      do {
        *(byte *)(piVar5 + 2) = 0;
        piVar4[3] = _DAT_01cea3f8 + -0x3c0000;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (iVar3 < *(int *)(param_1 + 0x1c));
    }
  }
  else {
    *(byte *)((int)piVar6 + param_3 + 8) = 0;
    *(int *)(iVar2 + 0x1d06620 + param_3 * 4) = _DAT_01cea3f8 + -0x3c0000;
  }
  puVar1 = &DAT_01d06628 + iVar2;
  *(byte *)(*(int *)(param_1 + 0x114) + 8 + (int)piVar6) = 1;
  memset(puVar1,0,0x100);
  _strncpy(puVar1,param_2,0xff);
  core_netgame_cpp_CNetGame_addChatHistory_FUN_004ec500
            (param_1,param_1 + *(int *)(param_1 + 0x114) * 0x78 + 0x3c,
             *(uint *)(&DAT_01d06618 + iVar2),param_1 + 8,puVar1);
  return;
}
