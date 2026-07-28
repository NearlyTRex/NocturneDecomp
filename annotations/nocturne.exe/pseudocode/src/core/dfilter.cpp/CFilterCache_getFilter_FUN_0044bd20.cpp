// Name: core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20
// Address: 0044bd20
// Address Range: [[0044bd20, 0044be58]]
// Convention: unknown
// Signature: int core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20(int *param_1,char *param_2,int param_3)

#include "nocturne.h"

int core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CDemonFilter *this_ptr;
  CDemonFilter *pCVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  iVar4 = 0;
  if (0 < *param_1) {
    piVar6 = param_1 + 1;
    do {
      iVar2 = _strcmp((char *)piVar6,param_2);
      if (iVar2 == 0) {
        return param_1[iVar4 + 0x281];
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 10;
    } while (iVar4 < *param_1);
  }
  if (0x3f < *param_1) {
    PTR_01cc4800 = "..\\core\\dfilter.cpp";
    INT_01cc4804 = 0x55;
    core_main_c_FUN_004c8440("CFilterCache::getFilter - Too many filters");
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
  this_ptr = (CDemonFilter *)FUN_0056497c(0x4c);
  pCVar3 = (CDemonFilter *)0x0;
  if (this_ptr != (CDemonFilter *)0x0) {
    pCVar3 = core_dfilter_cpp_CDemonFilter_ctor_FUN_0044beb0(this_ptr);
  }
  param_1[iVar4 + 0x281] = (int)pCVar3;
  if (pCVar3 == (CDemonFilter *)0x0) {
    PTR_01cc4800 = "..\\core\\dfilter.cpp";
    INT_01cc4804 = 0x59;
    core_main_c_FUN_004c8440("CFilterCache::getFilter - Out of memory");
  }
  core_dfilter_cpp_CDemonFilter_load_FUN_0044bf90((CDemonFilter *)param_1[iVar4 + 0x281],param_2);
  if (param_3 != 0) {
    core_dfilter_cpp_CDemonFilter_init_FUN_0044c190((CDemonFilter *)param_1[iVar4 + 0x281],1.333,1);
  }
  return param_1[iVar4 + 0x281];
}
