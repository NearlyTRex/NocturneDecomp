// Name: shape_edittool.cpp_CStrList_setStringAt_FUN_00474230
// Address: 00474230
// Address Range: [[00474230, 004742f3]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CStrList_setStringAt_FUN_00474230(int *param_1,int param_2,char *param_3)

#include "nocturne.h"

void shape_edittool_cpp_CStrList_setStringAt_FUN_00474230(int *param_1,int param_2,char *param_3)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0xa9b;
    core_main_c_FUN_004c8440("CStrList::set - invalid index");
  }
  if (param_3 == (char *)0x0) {
    param_3 = &DAT_0057ed1b;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  pvVar2 = realloc(*(void **)(param_1[2] + param_2 * 4),~uVar3);
  *(void **)(param_1[2] + param_2 * 4) = pvVar2;
  if (*(int *)(param_1[2] + param_2 * 4) == 0) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0xaa4;
    core_main_c_FUN_004c8440("CStrList::set - out of memory!");
  }
  pcVar4 = *(char **)(param_1[2] + param_2 * 4);
  do {
    cVar1 = *param_3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
