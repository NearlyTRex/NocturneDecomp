// Name: core_event.cpp_CRuleList_insert_FUN_00481630
// Address: 00481630
// Address Range: [[00481630, 0048176a]]
// Convention: unknown
// Signature: void core_event_cpp_CRuleList_insert_FUN_00481630(int *param_1,int param_2,char *param_3,char *param_4)

#include "nocturne.h"

void core_event_cpp_CRuleList_insert_FUN_00481630(int *param_1,int param_2,char *param_3,char *param_4)

{
  char cVar1;
  int *src;
  int *src_00;
  
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
  src = param_1 + param_2 * 0x19 + 1;
  memmove
            (param_1 + (param_2 + 1) * 0x19 + 1,src,(*param_1 - param_2) * 100);
  src_00 = param_1 + param_2 * 0x19 + 0x7e;
  memmove
            (param_1 + (param_2 + 1) * 0x19 + 0x7e,src_00,(*param_1 - param_2) * 100);
  *param_1 = *param_1 + 1;
  do {
    cVar1 = *param_3;
    *(char *)src = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    *(char *)((int)src + 1) = cVar1;
    src = (int *)((int)src + 2);
  } while (cVar1 != '\0');
  do {
    cVar1 = *param_4;
    *(char *)src_00 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
    *(char *)((int)src_00 + 1) = cVar1;
    src_00 = (int *)((int)src_00 + 2);
  } while (cVar1 != '\0');
  return;
}
