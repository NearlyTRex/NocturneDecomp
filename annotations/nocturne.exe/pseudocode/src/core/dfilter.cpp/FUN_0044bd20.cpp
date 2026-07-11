// Name: FUN_0044bd20
// Address: 0044bd20
// Address Range: [[0044bd20, 0044be58]]
// Convention: unknown
// Signature: int FUN_0044bd20(int *param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044bd20(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  iVar4 = 0;
  if (0 < *param_1) {
    piVar6 = param_1 + 1;
    do {
      iVar2 = FUN_005649c0(piVar6,param_2);
      if (iVar2 == 0) {
        return param_1[iVar4 + 0x281];
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 10;
    } while (iVar4 < *param_1);
  }
  if (0x3f < *param_1) {
    _DAT_01cc4800 = "..\\core\\dfilter.cpp";
    _DAT_01cc4804 = 0x55;
    FUN_004c8440("CFilterCache::getFilter - Too many filters");
  }
  piVar6 = param_1 + iVar4 * 10 + 1;
  *param_1 = *param_1 + 1;
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    *(char *)piVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    *(char *)((int)piVar6 + 1) = cVar1;
    piVar6 = (int *)((int)piVar6 + 2);
  } while (cVar1 != '\0');
  iVar3 = FUN_0056497c(0x4c);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = FUN_0044beb0(iVar3);
  }
  param_1[iVar4 + 0x281] = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfilter.cpp";
    _DAT_01cc4804 = 0x59;
    FUN_004c8440("CFilterCache::getFilter - Out of memory");
  }
  FUN_0044bf90(param_1[iVar4 + 0x281],param_2);
  if (param_3 != 0) {
    FUN_0044c190(param_1[iVar4 + 0x281],0x3faa9fbe,1);
  }
  return param_1[iVar4 + 0x281];
}
