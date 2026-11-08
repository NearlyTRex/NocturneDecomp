// Name: FUN_0045d7c0
// Address: 0045d7c0
// Address Range: [[0045d7c0, 0045d8f8]]
// Convention: unknown
// Signature: int FUN_0045d7c0(int *param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045d7c0(int *param_1,char *param_2,int param_3)

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
      iVar2 = FUN_005c0f80(piVar6,param_2);
      if (iVar2 == 0) {
        return param_1[iVar4 + 0x281];
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 10;
    } while (iVar4 < *param_1);
  }
  if (0x3f < *param_1) {
    _DAT_01d1d400 = "..\\core\\dfilter.cpp";
    _DAT_01d1d404 = 0x55;
    FUN_005030e0("CFilterCache::getFilter - Too many filters");
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
  iVar3 = FUN_005c0f32(0x4c);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = FUN_0045d950(iVar3);
  }
  param_1[iVar4 + 0x281] = iVar2;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dfilter.cpp";
    _DAT_01d1d404 = 0x59;
    FUN_005030e0("CFilterCache::getFilter - Out of memory");
  }
  FUN_0045da30(param_1[iVar4 + 0x281],param_2);
  if (param_3 != 0) {
    FUN_0045dc30(param_1[iVar4 + 0x281],0x3faa9fbe,1);
  }
  return param_1[iVar4 + 0x281];
}
