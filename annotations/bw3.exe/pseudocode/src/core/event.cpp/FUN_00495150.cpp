// Name: FUN_00495150
// Address: 00495150
// Address Range: [[00495150, 0049522d]]
// Convention: unknown
// Signature: void FUN_00495150(int param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00495150(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  FUN_00495280(param_1);
  iVar2 = FUN_00495230(param_1,param_2);
  if (iVar2 < 0) {
    if (0x13 < *(int *)(param_1 + 0x3ac8)) {
      _DAT_01d71de0 = "..\\core\\event.cpp";
      _DAT_01d71de4 = 0xfaf;
      FUN_004e4330("CEventList::setSfxHandle - too many sfx!");
    }
    iVar2 = *(int *)(param_1 + 0x3ac8);
    *(int *)(param_1 + 0x3ac8) = iVar2 + 1;
  }
  puVar4 = (uint *)(param_1 + 0x3acc + iVar2 * 0x120);
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x13 < ~uVar3 - 1) {
    _DAT_01d71de0 = "..\\core\\event.cpp";
    _DAT_01d71de4 = 0xfb7;
    FUN_004e4330("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters",param_2,0x13);
  }
  pcVar5 = (char *)(puVar4 + 1);
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *puVar4 = param_3;
  FUN_00495280(param_1);
  return;
}
