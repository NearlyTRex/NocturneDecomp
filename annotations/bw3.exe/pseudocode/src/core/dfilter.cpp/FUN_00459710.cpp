// Name: core_dfilter.cpp_FUN_00459710
// Address: 00459710
// Address Range: [[00459710, 00459848]]
// Convention: unknown
// Signature: int core_dfilter_cpp_FUN_00459710(int *param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_dfilter_cpp_FUN_00459710(int *param_1,char *param_2,int param_3)

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
    _DAT_01d71de0 = "..\\core\\dfilter.cpp";
    _DAT_01d71de4 = 0x55;
    core_main_c_FUN_004e4330("CFilterCache::getFilter - Too many filters");
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
  this_ptr = (CDemonFilter *)debugAllocTracked1(0x4c);
  pCVar3 = (CDemonFilter *)0x0;
  if (this_ptr != (CDemonFilter *)0x0) {
    pCVar3 = core_dfilter_cpp_CDemonFilter_ctor_FUN_004598a0(this_ptr);
  }
  param_1[iVar4 + 0x281] = (int)pCVar3;
  if (pCVar3 == (CDemonFilter *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfilter.cpp";
    _DAT_01d71de4 = 0x59;
    core_main_c_FUN_004e4330("CFilterCache::getFilter - Out of memory");
  }
  core_dfilter_cpp_CDemonFilter_load_FUN_00459980((CDemonFilter *)param_1[iVar4 + 0x281],param_2);
  if (param_3 != 0) {
    core_dfilter_cpp_CDemonFilter_init_FUN_00459b80((CDemonFilter *)param_1[iVar4 + 0x281],1.333,1);
  }
  return param_1[iVar4 + 0x281];
}
