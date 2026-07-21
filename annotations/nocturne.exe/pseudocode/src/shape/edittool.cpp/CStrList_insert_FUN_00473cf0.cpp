// Name: shape_edittool.cpp_CStrList_insert_FUN_00473cf0
// Address: 00473cf0
// Address Range: [[00473cf0, 00473ddc]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insert_FUN_00473cf0(int *param_1,int param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_insert_FUN_00473cf0(int *param_1,int param_2,char *param_3)

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
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x9ba;
    FUN_004c8440("CStrList::insert - invalid index");
  }
  iVar2 = *param_1;
  iVar5 = iVar2 + 1;
  *param_1 = iVar5;
  if (param_1[1] < iVar5) {
    shape_edittool_cpp_CStrList_allocate_FUN_00473de0(param_1,iVar2 + 0x15);
  }
  iVar2 = param_2 * 4;
  memmove
            (param_1[2] + iVar2 + 4,param_1[2] + iVar2,(*param_1 - param_2) * 4 + -4);
  uVar4 = 0xffffffff;
  pcVar6 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  uVar3 = malloc(~uVar4);
  *(uint *)(param_1[2] + iVar2) = uVar3;
  if (*(int *)(iVar2 + param_1[2]) == 0) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x9c8;
    FUN_004c8440("CStrList::insert - out of memory");
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
