// Name: core_event.cpp_FUN_0049235e
// Address: 0049235e
// Address Range: [[0049235e, 0049249a]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_0049235e(int *param_1,int param_2,char *param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_event_cpp_FUN_0049235e(int *param_1,int param_2,char *param_3,char *param_4)

{
  char cVar1;
  int *src;
  int *src_00;
  
  if ((param_2 < 0) || (*param_1 < param_2)) {
    _DAT_01d046a0 = "..\\core\\event.cpp";
    _DAT_01d046a4 = 0xfeb;
    core_main_c_FUN_004e4500("CRuleList::insert - invalid index");
  }
  if (4 < *param_1) {
    _DAT_01d046a0 = "..\\core\\event.cpp";
    _DAT_01d046a4 = 0xfec;
    core_main_c_FUN_004e4500("CRuleList::insert - list full");
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
