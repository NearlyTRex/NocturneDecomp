// Name: FUN_004d7730
// Address: 004d7730
// Address Range: [[004d7730, 004d77ca]]
// Convention: unknown
// Signature: void FUN_004d7730(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7730(int param_1,char *param_2,uint param_3,uint param_4,uint param_5)

{
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x8e8) != '\0') {
    _DAT_01d1d400 = "..\\core\\game.cpp";
    _DAT_01d1d404 = 0x11f4;
    FUN_005030e0("CGame::displayBitmap - tried to queue %s, but %s already queued!",param_2,param_1 + 0x8e8);
  }
  pcVar2 = (char *)(param_1 + 0x8e8);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x9e8) = param_3;
  *(uint *)(param_1 + 0x9ec) = param_4;
  *(uint *)(param_1 + 0x3b8) = param_5;
  _DAT_01cd0b3c = (uint)((param_5 & 0x7fffffff) == 0);
  return;
}
