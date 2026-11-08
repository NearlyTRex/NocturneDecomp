// Name: FUN_00480eb0
// Address: 00480eb0
// Address Range: [[00480eb0, 00480f9c]]
// Convention: unknown
// Signature: void FUN_00480eb0(int *param_1,int param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480eb0(int *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if ((param_2 < 0) || (*param_1 < param_2)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xbb2;
    FUN_004e4500("CStrList::insert - invalid index");
  }
  iVar2 = *param_1;
  iVar5 = iVar2 + 1;
  *param_1 = iVar5;
  if (param_1[1] < iVar5) {
    FUN_00480fa0(param_1,iVar2 + 0x15);
  }
  iVar2 = param_2 * 4;
  FUN_005ba1f0(param_1[2] + iVar2 + 4,param_1[2] + iVar2,(*param_1 - param_2) * 4 + -4);
  uVar4 = 0xffffffff;
  pcVar6 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_005b8580(~uVar4);
  *(uint *)(param_1[2] + iVar2) = uVar3;
  if (*(int *)(iVar2 + param_1[2]) == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xbc0;
    FUN_004e4500("CStrList::insert - out of memory");
  }
  pcVar6 = *(char **)(param_1[2] + param_2 * 4);
  do {
    cVar1 = *param_3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return;
}
