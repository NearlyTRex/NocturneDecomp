// Name: FUN_0049a7b0
// Address: 0049a7b0
// Address Range: [[0049a7b0, 0049a81b]]
// Convention: unknown
// Signature: void FUN_0049a7b0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a7b0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 == (char *)0x0) {
    *(byte *)(param_1 + 0x5c) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (99 < ~uVar2 - 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xeb5;
    FUN_005030e0("CPickList::setOkButtonText - too long!");
  }
  pcVar3 = (char *)(param_1 + 0x5c);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}
