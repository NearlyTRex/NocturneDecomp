// Name: shape_edittool.cpp_CStrList_setStringAt_FUN_004813f0
// Address: 004813f0
// Address Range: [[004813f0, 004814b3]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004813f0(CStrList *this_ptr,int index,char *new_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004813f0(CStrList *this_ptr,int index,char *new_string)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if ((index < 0) || (*(int *)this_ptr <= index)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xc93;
    core_main_c_FUN_004e4500("CStrList::set - invalid index");
  }
  if (new_string == (char *)0x0) {
    new_string = &DAT_005d2760;
  }
  uVar3 = 0xffffffff;
  pcVar4 = new_string;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  pvVar2 = realloc
                     (*(void **)(*(int *)&this_ptr->field_0x8 + index * 4),~uVar3);
  *(void **)(*(int *)&this_ptr->field_0x8 + index * 4) = pvVar2;
  if (*(int *)(*(int *)&this_ptr->field_0x8 + index * 4) == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xc9c;
    core_main_c_FUN_004e4500("CStrList::set - out of memory!");
  }
  pcVar4 = *(char **)(*(int *)&this_ptr->field_0x8 + index * 4);
  do {
    cVar1 = *new_string;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = new_string[1];
    new_string = new_string + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
