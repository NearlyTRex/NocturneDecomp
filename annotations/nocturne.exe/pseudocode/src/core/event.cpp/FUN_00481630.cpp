// Name: core_event.cpp_FUN_00481630
// Address: 00481630
// Address Range: [[00481630, 0048176a]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_00481630(int *param_1,int param_2,char *param_3,char *param_4)

#include "nocturne.h"

void core_event_cpp_FUN_00481630(int *param_1,int param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  
  if ((param_2 < 0) || (*param_1 < param_2)) {
    PTR_01cc4800 = "..\\core\\event.cpp";
    INT_01cc4804 = 0xcd9;
    core_main_c_FUN_004c8440("CRuleList::insert - invalid index");
  }
  if (4 < *param_1) {
    PTR_01cc4800 = "..\\core\\event.cpp";
    INT_01cc4804 = 0xcda;
    core_main_c_FUN_004c8440("CRuleList::insert - list full");
  }
  iVar2 = param_2 * 100;
  piVar5 = param_1 + param_2 * 0x19 + 1;
  iVar3 = (param_2 + 1) * 100;
  memmove
            (param_1 + (param_2 + 1) * 0x19 + 1,piVar5,(*param_1 - param_2) * 100,iVar2,iVar3);
  pcVar4 = (char *)((int)param_1 + iVar2 + 0x1f8);
  memmove((int)param_1 + iVar3 + 0x1f8,pcVar4,(*param_1 - param_2) * 100);
  *param_1 = *param_1 + 1;
  do {
    cVar1 = *param_3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  do {
    cVar1 = *param_4;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
