// Name: FUN_004ee8e0
// Address: 004ee8e0
// Address Range: [[004ee8e0, 004ee959]]
// Convention: unknown
// Signature: void FUN_004ee8e0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ee8e0(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x25 < _DAT_01d086f0) {
    _DAT_01d046a0 = "..\\core\\menu.cpp";
    _DAT_01d046a4 = 0x907;
    FUN_004e4500("Too many custom keys!");
  }
  iVar2 = _DAT_01d086f0;
  *(uint *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = param_1;
  pcVar3 = (char *)(iVar2 * 0x28 + 0x1d08790);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01d086f0 = _DAT_01d086f0 + 1;
  return;
}
